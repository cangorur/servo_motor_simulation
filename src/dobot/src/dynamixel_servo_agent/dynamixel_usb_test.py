#!/usr/bin/env python
import rospy
import sys, os
file_path=os.path.dirname(os.path.abspath(__file__)) # to import xl430 library
include_path = os.path.join(file_path, '../../include')
sys.path.insert(0,include_path)
from xl430 import xl430

import numpy as np
import csv
# Import services and messages
from dobot.srv import SetDynamixelSpeed
from dobot.srv import ReadReg
from dobot.srv import WriteReg
from dobot.msg import motor_raw_data
from std_msgs.msg import UInt8,Float64,String

## RaspberryPi dependent libraries
# Import the ADS1x15 module.
import Adafruit_ADS1x15
# Import RPi GPIO
import RPi.GPIO as GPIO

# Global variables
velocity = 0.0
current = 0.0
temperature = 0.0
pwm = 0.0
supply_voltage = 0.0
# Reading backups to eliminate incoming CRC errors
old_velocity = 0.0
old_temperature = 0.0
old_pwm = 0.0
old_supply_voltage = 0.0


# Global parameters
data = motor_raw_data()
_rate = 5
velocity_array = np.linspace(0,57,248).tolist()
velocity_index = 0
initial_time = 0.0
line_availability = 1
goal_vel = 0.0


def handle_readReg_service(req) : # [255, 255, 255, 255] means line was not available
    id = req.id
    reg_addr = req.reg_address
    data_length = req.data_length
    if line_availability == 1:
        try:
            x = np.asarray(cm.readReg(id,reg_addr,data_length))
            return x
        except Exception as e:
            print(str(e))
            return np.asarray([255,255,255,255])
    else:
        return np.asarray([255,255,255,255])

def handle_writeReg_service(req) : # [255, 255, 255, 255] means line was not available
    id = req.id
    reg_addr = req.reg_address
    data = list(req.data)
    if line_availability == 1:
        try:
            return cm.writeReg(id,reg_addr,data)
        except Exception as e:
            print(str(e))
            return False
    else:
        return False

def shutdown_routine():
    cm.torqueEnableDisable(1,0)
    print ("Ctrl-C captured, motor torque is going to be disabled")

if __name__ == '__main__':
    global goal_vel

    # Create a Dynamixel XL430 instance
    cm = xl430()
    # Node related
    rospy.init_node('dynamixel_usb_test', anonymous=True)
    rospy.on_shutdown(shutdown_routine)

    # Services
    rr_service = rospy.Service('dynamixel_servo_agent/read_reg',ReadReg,handle_readReg_service)
    wr_service = rospy.Service('dynamixel_servo_agent/write_reg',WriteReg,handle_writeReg_service)
    # Timers
    # Setting motor to operate in desired mode
    # cm.torqueEnableDisable(1,0) # Torque is disabled to be able to change eeprom registers
    # cm.setStatusReturnLevel(1,2) # Dynamixel will send a status package for every instruction
    # cm.setModeVelocity(0x01) # Change operating Mode to velocity control
    # cm.torqueEnableDisable(1,1) # So that motor turns
