#!/usr/bin/env python
import rospy
import numpy

from std_msgs.msg import UInt8
from time import sleep
import pigpio

from dobot.srv import *

# global variables
pi = pigpio.pi()
DIR = 20     # Direction GPIO Pin
STEP = 16    # Step GPIO Pin
SLEEP = 12   # Sleep GPIO Pin

def setMotorSpeedService(req):    
    # Connect to pigpiod daemon
    global pi
    global DIR
    global STEP
    global SLEEP

    sleep = req.isEnabled
    freq = req.speed if req.speed >=0 else 0

    if freq == 0:
        duty = 0
    else:
        duty = req.isEnabled * 128

    # Set sleep pin, duty cycle and frequency
    pi.write(SLEEP, sleep)
    pi.set_PWM_dutycycle(STEP, duty)  # PWM 1/2 On 1/2 Off
    pi.set_PWM_frequency(STEP, freq)  # 800 pulses per second

    res  = SetEMotorResponse()
    res.result = 0
    res.queuedCmdIndex = 0
    return res

def initSetMotorSpeedService():
    global pi
    global DIR
    global STEP
    global SLEEP

   # Set up pins as an output
    pi.set_mode(DIR, pigpio.OUTPUT)
    pi.set_mode(STEP, pigpio.OUTPUT)
    
    MODE = (14, 15, 18)   # Microstep Resolution GPIO Pins
    RESOLUTION = {'Full': (0, 0, 0),
                  'Half': (1, 0, 0),
                  '1/4': (0, 1, 0),
                  '1/8': (1, 1, 0),
                  '1/16': (0, 0, 1),
                  '1/32': (1, 0, 1)}
    for i in range(3):
        pi.write(MODE[i], RESOLUTION['Full'][i])

    pi.write(DIR, 1)  # Set direction
    pi.write(SLEEP, 0)  # Set sleep pin

    s = rospy.Service('conveyor_server_agent/setMotorSpeed', SetEMotor, setMotorSpeedService)
    rospy.spin()

def shutDown():
    pi.set_PWM_dutycycle(STEP, 0)
    pi.write(SLEEP, 0)

if __name__ == "__main__":
    rospy.init_node('conveyor_server_agent')
    print "ConveyorServerAgent succesfully initialized!"
    print "Conveyor server services running..."
    initSetMotorSpeedService()
    rospy.on_shutdown(shutDown)
