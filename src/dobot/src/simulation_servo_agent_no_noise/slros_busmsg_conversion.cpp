#include "slros_busmsg_conversion.h"


// Conversions between SL_Bus_simulation_servo_agent_dobot_motor_raw_data and dobot::motor_raw_data

void convertFromBus(dobot::motor_raw_data* msgPtr, SL_Bus_simulation_servo_agent_dobot_motor_raw_data const* busPtr)
{
  const std::string rosMessageType("dobot/motor_raw_data");

  msgPtr->raw_acceleration =  busPtr->RawAcceleration;
  msgPtr->raw_current =  busPtr->RawCurrent;
  msgPtr->raw_pwm =  busPtr->RawPwm;
  msgPtr->raw_requested_velocity =  busPtr->RawRequestedVelocity;
  msgPtr->raw_supply_voltage =  busPtr->RawSupplyVoltage;
  msgPtr->raw_temperature =  busPtr->RawTemperature;
  msgPtr->raw_timestamp =  busPtr->RawTimestamp;
  msgPtr->raw_torque =  busPtr->RawTorque;
  msgPtr->raw_velocity =  busPtr->RawVelocity;
}

void convertToBus(SL_Bus_simulation_servo_agent_dobot_motor_raw_data* busPtr, dobot::motor_raw_data const* msgPtr)
{
  const std::string rosMessageType("dobot/motor_raw_data");

  busPtr->RawAcceleration =  msgPtr->raw_acceleration;
  busPtr->RawCurrent =  msgPtr->raw_current;
  busPtr->RawPwm =  msgPtr->raw_pwm;
  busPtr->RawRequestedVelocity =  msgPtr->raw_requested_velocity;
  busPtr->RawSupplyVoltage =  msgPtr->raw_supply_voltage;
  busPtr->RawTemperature =  msgPtr->raw_temperature;
  busPtr->RawTimestamp =  msgPtr->raw_timestamp;
  busPtr->RawTorque =  msgPtr->raw_torque;
  busPtr->RawVelocity =  msgPtr->raw_velocity;
}


// Conversions between SL_Bus_simulation_servo_agent_std_msgs_Float32 and std_msgs::Float32

void convertFromBus(std_msgs::Float32* msgPtr, SL_Bus_simulation_servo_agent_std_msgs_Float32 const* busPtr)
{
  const std::string rosMessageType("std_msgs/Float32");

  msgPtr->data =  busPtr->Data;
}

void convertToBus(SL_Bus_simulation_servo_agent_std_msgs_Float32* busPtr, std_msgs::Float32 const* msgPtr)
{
  const std::string rosMessageType("std_msgs/Float32");

  busPtr->Data =  msgPtr->data;
}

