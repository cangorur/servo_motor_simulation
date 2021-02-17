#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "simulation_servo_agent";

// For Block simulation_servo_agent/ROS_Speed_Request/Subscribe
SimulinkSubscriber<std_msgs::Float32, SL_Bus_simulation_servo_agent_std_msgs_Float32> Sub_simulation_servo_agent_3760;

// For Block simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/ROS/Publish2
SimulinkPublisher<dobot::motor_raw_data, SL_Bus_simulation_servo_agent_dobot_motor_raw_data> Pub_simulation_servo_agent_3424;

// For Block simulation_servo_agent/ROS_Speed_Request/Get Parameter
SimulinkParameterGetter<real64_T, double> ParamGet_simulation_servo_agent_3318;

// For Block simulation_servo_agent/ROS_Speed_Request/Get Parameter1
SimulinkParameterGetter<boolean_T, bool> ParamGet_simulation_servo_agent_3398;

// For Block simulation_servo_agent/ROS_Speed_Request/Get Parameter2
SimulinkParameterGetter<real64_T, double> ParamGet_simulation_servo_agent_3752;

// For Block simulation_servo_agent/ROS_Speed_Request/If Action Subsystem/Set Parameter
SimulinkParameterSetter<real64_T, double> ParamSet_simulation_servo_agent_3446;

// For Block simulation_servo_agent/ROS_Speed_Request/If Action Subsystem/Set Parameter1
SimulinkParameterSetter<real64_T, double> ParamSet_simulation_servo_agent_3447;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

