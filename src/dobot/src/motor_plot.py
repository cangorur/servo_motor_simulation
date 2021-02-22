#!/usr/bin/env python

## @file motor data subscribe ROS Node


import rospy
import csv
import os, sys, signal

import numpy as np
import matplotlib.pyplot as plt

from dobot.msg import motor_data
from dobot.srv import *

# global parameters
motor_id=1

timestamp = 0.0
velocity = 0.0
current = 0.0
temperature = 0.0
voltage = 0.0
torque = 0.0
power_in = 0.0

current_avg = 0.0
velocity_avg = 0.0
power_in_avg = 0.0
temperature_avg = 0.0

timestamp_list = []
current_list = []
current_avg_list = []
velocity_list = []
velocity_avg_list = []
power_in_list = []
power_in_avg_list = []
temperature_list = []
temperature_avg_list = []
speed_power_list = []

res = 0.0

##Callback funtion for receiving and storing motor status data
def callback(data):
    # global counter
    # if counter == 1000 :
    #     counter = 1
    global timestamp, velocity, current, temperature, torque, power_in, voltage

    timestamp = data.timestamp
    velocity = data.velocity
    current = data.current
    temperature = data.temperature
    voltage = data.effective_voltage
    power_in = data.power_in
    torque = data.torque

    # else:
    #     counter += 1

def update():
    global timestamp, velocity, current, temperature, torque, power_in, voltage
    global current_avg, velocity_avg, power_in_avg, temperature_avg
    global timestamp_list, current_list, current_avg_list, velocity_list, velocity_avg_list
    global power_in_list, power_in_avg_list, temperature_list, temperature_avg_list, speed_power_list
    global res

    plt.gcf().clear()
    rospy.loginfo("\n timestamp is %.3f\n velocity is %.3f\n current is %.3f\n temperature is %.3f\n supply_voltage is %.3f \n input power is %.3f \n", timestamp, velocity, current, temperature, voltage, power_in)
    with open(filepath,'a+') as csvfile:
        writer = csv.writer(csvfile)
        writer.writerow([timestamp, velocity, current, temperature, power_in, voltage])
        csvfile.close()

    if len(speed_power_list) == 50:
        speed_power_list.pop(0)

    speed_power_list.append([velocity, power_in])

    # calculate the last 1 elments' moving average
    # TODO: Update the value here for a moving averate demonstration
    if len(current_list) == 1:
        current_avg = np.mean(current_list)
        velocity_avg = np.mean(velocity_list)
        power_in_avg = np.mean(power_in_list)
        temperature_avg = np.mean(temperature_list)
        current_list.pop(0)
        velocity_list.pop(0)
        power_in_list.pop(0)
        temperature_list.pop(0)

    current_list.append(current)
    velocity_list.append(velocity)
    power_in_list.append(power_in)
    temperature_list.append(temperature)
    timestamp_list.append(timestamp)

    current_avg_list.append(current_avg)
    velocity_avg_list.append(velocity_avg)
    power_in_avg_list.append(power_in_avg)
    temperature_avg_list.append(temperature_avg)

    # remove when the lists are full
    if len(timestamp_list) == 50:
        timestamp_list.pop(0)

    if len(current_avg_list) == 50:
        current_avg_list.pop(0)
        velocity_avg_list.pop(0)
        power_in_avg_list.pop(0)
        temperature_avg_list.pop(0)

    plt.subplot(221)
    plt.scatter(timestamp_list, current_avg_list)
    plt.plot(timestamp_list, current_avg_list)
    plt.ylim(min(current_avg_list)-10,max(current_avg_list)+10)
    plt.xlim(min(timestamp_list), max(timestamp_list))
    plt.xlabel('Time (s)')
    plt.ylabel('Current (mA)')
    plt.title('Current')

    plt.subplot(222)
    plt.scatter(timestamp_list, power_in_avg_list)
    plt.plot(timestamp_list, power_in_avg_list)
    plt.ylim(min(power_in_avg_list)-10,max(power_in_avg_list)+10)
    plt.xlim(min(timestamp_list), max(timestamp_list))
    plt.xlabel('Time (s)')
    plt.ylabel('Power In (W)')
    plt.title('Input Power')

    plt.subplot(223)
    plt.scatter(timestamp_list, velocity_avg_list)
    plt.plot(timestamp_list, velocity_avg_list)
    plt.ylim(min(velocity_avg_list)-10, max(velocity_avg_list)+10)
    plt.xlim(min(timestamp_list), max(timestamp_list))
    plt.xlabel('Time (s)')
    plt.ylabel('Velocity (r/min)')
    plt.title('Velocity')

    speed_power_array = np.array(speed_power_list)

    plt.subplot(224)
    plt.scatter(speed_power_array[:,0], speed_power_array[:,1], c="g")
    plt.scatter(speed_power_array[:,0], speed_power_array[:,1], c="r")
    plt.xlabel('Speed (r/min)')
    plt.ylabel('Power In (W)')
    plt.title('Speed-Power Graph')

    plt.pause(0.02)

##Keep on listening data from the motor
def listener():
    rospy.init_node('talk', anonymous=True)
    with open(filepath,'w') as csvfile:
        writer = csv.writer(csvfile)
        writer.writerow(["Timestamp", "Velocity", "Current", "Temperature", "Input Power", "Input Voltage"])
        csvfile.close()
    rospy.Subscriber("/conveyor_belt_agent_"+str(motor_id)+"/motor_data_operated", motor_data, callback)

    # spin() simply keeps python from exiting until this node is stopped
    # rospy.spin()

def signal_handler(signal, frame):
    sys.exit(0)

if __name__ == '__main__':
    ##Define data source path

    if len(sys.argv) < 2:
        print "Missing arguments: ID of the motor as an integer. E.g., python motor_plot.py 2 # this will plot real-time data of motor_2"
        sys.exit(0)
    else:
        motor_id = sys.argv[1]

    path = sys.path[0]
    filepath = path + "/motor_data_"+str(motor_id)+".csv"
    # counter = 1

    signal.signal(signal.SIGINT, signal_handler)

    # # training
    # try:
    #     realtime_predict = rospy.ServiceProxy('/predictive_maintenance_app/motor_maintenence_realtime_predict', MotorMaintenanceRealtimePredict)
    #     res = realtime_predict(velocity, power_in)
    # except rospy.ServiceException as e:
    #     print "Real-time predictive maintenance classification service call failed: %s"%e

    listener()
    rate = rospy.Rate(50)

    while not rospy.is_shutdown():
        update()
        rate.sleep()

    plt.show()
    rospy.spin()
