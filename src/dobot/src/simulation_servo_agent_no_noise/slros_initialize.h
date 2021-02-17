#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block simulation_servo_agent/ROS_Speed_Request/Subscribe
extern SimulinkSubscriber<std_msgs::Float32, SL_Bus_simulation_servo_agent_std_msgs_Float32> Sub_simulation_servo_agent_3760;

// For Block simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/ROS/Publish2
extern SimulinkPublisher<dobot::motor_raw_data, SL_Bus_simulation_servo_agent_dobot_motor_raw_data> Pub_simulation_servo_agent_3424;

// For Block simulation_servo_agent/ROS_Speed_Request/Get Parameter
extern SimulinkParameterGetter<real64_T, double> ParamGet_simulation_servo_agent_3318;

// For Block simulation_servo_agent/ROS_Speed_Request/Get Parameter1
extern SimulinkParameterGetter<boolean_T, bool> ParamGet_simulation_servo_agent_3398;

// For Block simulation_servo_agent/ROS_Speed_Request/Get Parameter2
extern SimulinkParameterGetter<real64_T, double> ParamGet_simulation_servo_agent_3752;

// For Block simulation_servo_agent/ROS_Speed_Request/If Action Subsystem/Set Parameter
extern SimulinkParameterSetter<real64_T, double> ParamSet_simulation_servo_agent_3446;

// For Block simulation_servo_agent/ROS_Speed_Request/If Action Subsystem/Set Parameter1
extern SimulinkParameterSetter<real64_T, double> ParamSet_simulation_servo_agent_3447;

void slros_node_init(int argc, char** argv);

#endif
