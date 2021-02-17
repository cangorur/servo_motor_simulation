#!/usr/bin/env python

## @file motor data subscribe ROS Node


import rospy
import csv
import os, sys

import numpy as np
import matplotlib.pyplot as plt

from dobot.msg import motor_raw_data
from dobot.srv import *

# global parameters
timestamp = 0
velocity = 0
current = 0
temperature = 0
supply_voltage = 0
pwm = 0

current_avg = 0
velocity_avg = 0
pwm_avg = 0
temperature_avg = 0

timestamp_list = []
current_list = []
current_avg_list = []
velocity_list = []
velocity_avg_list = []
pwm_list = []
pwm_avg_list = []
temperature_list = []
temperature_avg_list = []
speed_power_normal_list = []
speed_power_abnormal_list = []

res = 0.0

##Callback funtion for receiving and storing motor status data
def callback(data):
    # global counter
    # if counter == 1000 :
    #     counter = 1
    global timestamp, velocity, current, temperature, supply_voltage, pwm

    timestamp = data.raw_timestamp
    velocity = data.raw_velocity
    current = data.raw_current
    temperature = data.raw_temperature
    supply_voltage = data.raw_supply_voltage
    pwm = data.raw_pwm

    # else:
    #     counter += 1

def update():
    global timestamp, velocity, current, temperature, supply_voltage, pwm
    global current_avg, velocity_avg, pwm_avg, temperature_avg
    global timestamp_list, current_list, current_avg_list, velocity_list, velocity_avg_list
    global pwm_list, pwm_avg_list, temperature_list, temperature_avg_list
    global res
    
    plt.gcf().clear()
    rospy.loginfo("\n timestamp is %.3f\n velocity is %.3f\n current is %.3f\n temperature is %.3f\n supply_voltage is %.3f \n pwm is %.3f \n", timestamp, velocity, current, temperature, supply_voltage, pwm)
    with open(filepath,'a+') as csvfile:
            writer = csv.writer(csvfile)
            writer.writerow([timestamp, velocity, current, temperature, supply_voltage, pwm])
            csvfile.close()

    # calculate power_in
    power_in = supply_voltage*pwm/100.0*current/1000.0

    if len(speed_power_normal_list) == 50:
        speed_power_list.pop(0)

    if len(speed_power_abnormal_list) == 20:
        speed_power_list.pop(0)

    # real-time classification
    # rospy.wait_for_service('/predictive_maintenance_app/motor_maintenence_realtime_predict')
    try:
        realtime_predict = rospy.ServiceProxy('/predictive_maintenance_app/motor_maintenence_realtime_predict', MotorMaintenanceRealtimePredict)
        res = realtime_predict(algorithm='OCSVM',col1='Speed',col2='PowerIn',input1=velocity,input2=power_in)
    except rospy.ServiceException as e:
        print "Real-time predictive maintenance classification service call failed: %s"%e

    if res == 1.0:
        speed_power_normal_list.append([velocity, power_in])
    else:
         speed_power_abnormal_list.append([velocity, power_in])

    # calculate the last 20 elments' moving average
    if len(current_list) == 20:
        current_avg = np.mean(current_list)
        velocity_avg = np.mean(velocity_list)
        pwm_avg = np.mean(pwm_list)
        temperature_avg = np.mean(temperature_list)

        current_list.pop(0)
        velocity_list.pop(0)
        pwm_list.pop(0)
        temperature_list.pop(0)

    current_list.append(current)
    velocity_list.append(velocity)
    pwm_list.append(pwm)
    temperature_list.append(temperature)
    timestamp_list.append(timestamp)

    current_avg_list.append(current_avg)
    velocity_avg_list.append(velocity_avg)
    pwm_avg_list.append(pwm_avg)
    temperature_avg_list.append(temperature_avg)

    # handle the situation when the lists are full
    if len(timestamp_list) == 101:
        timestamp_list.pop(0)

    if len(current_avg_list) == 101:
        current_avg_list.pop(0)
        velocity_avg_list.pop(0)
        pwm_avg_list.pop(0)
        temperature_avg_list.pop(0)

    plt.subplot(221)
    plt.scatter(timestamp_list, current_avg_list)
    plt.plot(timestamp_list, current_avg_list)
    plt.ylim(min(current_avg_list)-100,max(current_avg_list)+100)
    plt.xlim(min(timestamp_list), max(timestamp_list))
    plt.xlabel('Time (s)')
    plt.ylabel('Current (mA)')
    plt.title('Current')

    plt.subplot(222)
    plt.scatter(timestamp_list, pwm_avg_list)
    plt.plot(timestamp_list, pwm_avg_list)
    plt.ylim(min(pwm_avg_list)-10,max(pwm_avg_list)+10)
    plt.xlim(min(timestamp_list), max(timestamp_list))
    plt.xlabel('Time (s)')
    plt.ylabel('PWM (%)')
    plt.title('PWM')    

    plt.subplot(223)
    plt.scatter(timestamp_list, velocity_avg_list)
    plt.plot(timestamp_list, velocity_avg_list)
    plt.ylim(min(velocity_avg_list)-5, max(velocity_avg_list)+5)
    plt.xlim(min(timestamp_list), max(timestamp_list))
    plt.xlabel('Time (s)')
    plt.ylabel('Velocity (r/min)')
    plt.title('Velocity')

    # plt.subplot(224)
    # plt.scatter(timestamp_list, temperature_avg_list)
    # plt.plot(timestamp_list, temperature_avg_list)
    # plt.ylim(min(temperature_avg_list)-5, max(temperature_avg_list)+5)
    # plt.xlim(min(timestamp_list), max(timestamp_list))
    # plt.xlabel('Time (s)')
    # plt.ylabel('Temperature (degC)')
    # plt.title('Temperature')
    speed_power_array = np.array(speed_power_list)

    plt.subplot(224)    
    plt.scatter(data_csv[:, 0], data_csv[:, 1])
    plt.scatter(speed_power_array[:,0], speed_power_array[:,1], c="g")
    plt.scatter(speed_power_array[:,0], speed_power_array[:,1], c="r")
    plt.xlabel('Speed (r/min)')
    plt.ylabel('Power (W)')
    plt.title('Speed-Power Graph')

    plt.pause(0.02)
        
##Keep on listening data in 'my_topic' channel
def listener():
    rospy.init_node('talk', anonymous=True)
    with open(filepath,'w') as csvfile:
        writer = csv.writer(csvfile)
        writer.writerow(["Timestamp", "Velocity", "Current", "Temperature", "Supply_voltage", "PWM"])
        csvfile.close()
    rospy.Subscriber("dynamixel_servo_agent/motor_raw_data", motor_raw_data, callback)

    # spin() simply keeps python from exiting until this node is stopped
    # rospy.spin()


if __name__ == '__main__':
    ##Define data source path
    path = sys.path[0]
    filepath = path + "/motor_data.csv"
    # counter = 1

    # # training
    # try:
    #     realtime_predict = rospy.ServiceProxy('/predictive_maintenance_app/motor_maintenence_realtime_predict', MotorMaintenanceRealtimePredict)
    #     res = realtime_predict(velocity, power_in)
    # except rospy.ServiceException as e:
    #     print "Real-time predictive maintenance classification service call failed: %s"%e

    # read data from csv file
    with open('output.csv', 'r') as f:
      reader = csv.reader(f)
      data_csv = list(reader)

    data_csv = np.array(data_csv[1:])
    data_csv = data_csv.astype(np.float)

    listener()
    rate = rospy.Rate(20)

    while not rospy.is_shutdown():
        update()
        rate.sleep()

    plt.show()

    rospy.spin()


