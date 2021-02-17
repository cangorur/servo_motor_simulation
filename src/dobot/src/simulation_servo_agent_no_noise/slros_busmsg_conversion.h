#ifndef _SLROS_BUSMSG_CONVERSION_H_
#define _SLROS_BUSMSG_CONVERSION_H_

#include <ros/ros.h>
#include <dobot/motor_raw_data.h>
#include <std_msgs/Float32.h>
#include "simulation_servo_agent_types.h"
#include "slros_msgconvert_utils.h"


void convertFromBus(dobot::motor_raw_data* msgPtr, SL_Bus_simulation_servo_agent_dobot_motor_raw_data const* busPtr);
void convertToBus(SL_Bus_simulation_servo_agent_dobot_motor_raw_data* busPtr, dobot::motor_raw_data const* msgPtr);

void convertFromBus(std_msgs::Float32* msgPtr, SL_Bus_simulation_servo_agent_std_msgs_Float32 const* busPtr);
void convertToBus(SL_Bus_simulation_servo_agent_std_msgs_Float32* busPtr, std_msgs::Float32 const* msgPtr);


#endif
