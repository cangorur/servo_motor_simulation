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


def handle_update_velocity(req) :
    global goal_vel
    isEnabled = int(req.isEnabled)
    goal_vel  = req.speed
    tr = False
    vr = False
    try:
        if line_availability == 1 :
        #    raise Exception("Line is occupied")
            tr = cm.torqueEnableDisable(1,isEnabled)
            vr = cm.setGoalVelocity(1,goal_vel)
        #if (vr and tr)  == False:
        #    raise Exception("Update Speed Failed")
        #return cm.setGoalVelocity(1,goal_vel)
        #return (tr and vr)
        return vr and tr
    except Exception as e:
        print(str(e))
        return False

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

def handle_writeReg_service(req) : # [255, 255, 255, 255] means line was not ava$
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

def refresh_motor_readings() :
    global line_availability, current, old_velocity, velocity, old_temperature, temperature, old_pwm, pwm, old_supply_voltage, supply_voltage
    global proc

    old_velocity = velocity
    old_temperature = temperature
    old_pwm = pwm
    old_supply_voltage = supply_voltage
    current = (adc.read_adc(1,gain=1)/8.0-2520.0)/400.0 # 185 mV per$
    #current = float(proc.stdout.readline())
    line_availability = 0 # Now services cant send instruction
    try:
        velocity = cm.getVelocity(0x01) # Gets velocity of the motor with id 0x01 in RPM
    except:
        velocity = old_velocity
        pass
    try:
        temperature = cm.getTemperature(0x01) # Gets temperature of the motor with id 0x01 in RPM
    except:
        temperature = old_temperature
        pass
    try:
        pwm = cm.getPwm(0x01) # Gets present pwm applied to motor
    except:
        pwm = old_pwm
        pass
    try:
        supply_voltage = cm.getVoltage(0x01) # Gets the battery voltage
    except:
        supply_voltage = old_supply_voltage
        pass
    line_availability = 1 # Now services can send instruction

def shutdown_routine():
    cm.torqueEnableDisable(1,0)
    print ("Ctrl-C captured, motor torque is going to be disabled")

if __name__ == '__main__':
    #global goal_vel

    # Create an ADS1115 ADC (16-bit) instance.
    adc = Adafruit_ADS1x15.ADS1115()
    # Create a Dynamixel XL430 instance
    cm = xl430()
    # Node related
    rospy.init_node('dynamixel_servo_agent', anonymous=True)
    rate = rospy.Rate(_rate)
    rospy.on_shutdown(shutdown_routine)

    # Publishers
    #temp_publisher = rospy.Publisher('dynamixel_servo_agent/temperature',Float64, queue_size=10)
    #velocity_publisher = rospy.Publisher('dynamixel_servo_agent/velocity',Float64, queue_size=10)
    #current_publisher = rospy.Publisher('dynamixel_servo_agent/current', Float64, queue_size=10)
    #pwm_publisher = rospy.Publisher('dynamixel_servo_agent/pwm',Float64, queue_size=10)
    #voltage_publisher = rospy.Publisher('dynamixel_servo_agent/supply_voltage', Float64, queue_size = 10)
    motor_data_publisher = rospy.Publisher('dynamixel_servo_agent/motor_raw_data',motor_raw_data,queue_size = 10)
    # Subscribers

    # Services
    uv_service = rospy.Service('dynamixel_servo_agent/update_velocity',SetDynamixelSpeed, handle_update_velocity)
    rr_service = rospy.Service('dynamixel_servo_agent/read_reg',ReadReg,handle_readReg_service)
    wr_service = rospy.Service('dynamixel_servo_agent/write_reg',WriteReg,handle_writeReg_service)
    # Timers
    # Setting motor to operate in desired mode
    cm.torqueEnableDisable(1,0) # Torque is disabled to be able to change eeprom registers
    cm.setStatusReturnLevel(1,2) # Dynamixel will send a status package for every instruction
    cm.setModeVelocity(0x01) # Change operating Mode to velocity control
    cm.torqueEnableDisable(1,1) # So that motor turns
    cm.setGoalVelocity(0x01,0) # Update initial Goal Velocity in rpm
    #readings = [0]*500
    #for i in range(500):
    #    readings[i]=adc.read_adc(1,gain=1)
    #acs_offset = np.mean(readings)
    #print "Offset is ", acs_offset/8
    initial_time = rospy.get_time()
    while not rospy.is_shutdown():
        refresh_motor_readings()
        now = rospy.get_time() - initial_time
        data.raw_timestamp = round(now,2)
        data.raw_requested_velocity = goal_vel
        data.raw_velocity = round(velocity,2)
        data.raw_current = current
        data.raw_temperature = temperature
        data.raw_supply_voltage = supply_voltage
        data.raw_pwm = pwm / 100.0
        data.raw_torque = current * 0.00337612 # Todo: confirm this calculation is right
        data.raw_acceleration = 0.0
        motor_data_publisher.publish(data)

        #velocity_publisher.publish(velocity)
        #current_publisher.publish(current)
        #temp_publisher.publish(temperature)
        #pwm_publisher.publish(pwm/100.0)
        #voltage_publisher.publish(supply_voltage)
        rate.sleep()
