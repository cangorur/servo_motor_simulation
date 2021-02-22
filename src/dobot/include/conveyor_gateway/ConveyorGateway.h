/*
 * ConveyorGateway.h
 *
 *  Created on: 21.11.2018
 *      Author: Orhan Can Görür
 *      Email: orhan-can.goeruer@dai-labor.de
 */

#ifndef DOBOT_SRC_CONVEYORGATEWAY_H_
#define DOBOT_SRC_CONVEYORGATEWAY_H_

#include <ros/ros.h>
#include <memory>
#include <thread>
#include "std_msgs/Float32.h"
#include "std_msgs/UInt8.h"
#include <string.h>

#include "dobot/motor_data.h"

#include "dobot/GenerateNormalTorque.h"
#include "dobot/GenerateAbnormalTorque.h"

// TODO: SetMotorSpeed --> name to be changed
#include "dobot/SetMotorSpeed.h"

#include <boost/property_tree/json_parser.hpp>

/*
typedef SimpleWeb::SocketServer<SimpleWeb::WS> WsServer;
typedef SimpleWeb::SocketClient<SimpleWeb::WS> WsClient;
*/
//*/

/**
 * The gateway component forwards important data and allows access to ROS services
 * through a websocket communication. This is the gateway for this ROS project to the outside world.
 */

class ConveyorGateway {
public:
	ConveyorGateway(std::string agent_id, int port_id);
	virtual ~ConveyorGateway();

	/**
	 * Initialize web socket server
	 * @return True if initialization was successful
	 */
	void SetWebSocketServer();

	void webSocketClient(std::string message);


private:
	/**
	 * Initialize service handler.
	 * @param req Request object
	 * @param res Response object
	 * @return True if initialization was successful
	 */
	void initialize();

	/**
	 * Set/read the state of real (HW) conveyor belts (receives speed and direction). Takes a json ptree and returns it back with info below
	 * @return json_msg
	 */
	boost::property_tree::ptree RealConveyorBeltServices(boost::property_tree::ptree message_pt);

	/**
	 * Set/read the state of simulated conveyor belts (receives speed and direction). Takes a json ptree and returns it back with info below
	 * @return json_msg
	 */
	boost::property_tree::ptree SimuConveyorBeltServices(boost::property_tree::ptree message_pt);

	/**
	 * Get the state of infrared proximity sensor Takes a json ptree and returns it back with info below
	 * @return json_msg
	 */
	boost::property_tree::ptree InfraredSensorService(boost::property_tree::ptree message_pt);

	/**
	 * Get the readings of the current sensor for the real motor current. Takes a json ptree and returns it back with info below
	 * @return json_msg
	 */
	boost::property_tree::ptree CurrentSensorService(boost::property_tree::ptree message_pt);

	/**
	 * Callback function to read available motor data in the system
	 * Input: -
	 * sets the global variable <infraredDetected>
	 */
	void infraredCallback(const std_msgs::UInt8::ConstPtr& msg);

	/**
	 * Callback function to read available motor data in the system
	 * Input: -
	 * writes to the motor data variable <dobot::motor_data_operated>
	 */
	void motorDataCallback(const dobot::motor_data::ConstPtr& msg);


private:

	/// ID of the motor, and so the gateway agent for that motor
	std::string gatewayAgentID;

	/// ID of the port the gateway will operate
	int gatewayPortID;

	/// SetMotorSpeed client for each motor
  ros::ServiceClient setMotorSpeedClient;

	/// Motor test client for each motor (cont. changing speed requests)
  ros::ServiceClient setMotorTestClient;

	/// GenerateNormalBehavior client for each SIMULATED motor
	ros::ServiceClient genConveyorLoadClient;

	/// GenerateAbnormalBehavior client for each SIMULATED motor
	ros::ServiceClient genAbnConveyorLoadClient;

	/// Subscriber for real and simulated motor data readings. Motor with ID "0" is the real motor. The rest are simulations
	ros::Subscriber motorDataSub;

	/// Subscriber for infrared sensor. Motor with ID "0" is the real motor. Only the gateway with ID: 0 will subscribe to infra
	ros::Subscriber infraredSensorSub;

	/// Infrared sensor detect variable
	bool infraredDetected = false;

	/// Up-to-date motor data during the operation
	dobot::motor_data motorDataReadings;

	/// previous speed request
	std::string prevSpeedReqSimu;

	/// previous speed request
	std::string prevSpeedReqReal;

	/// Websocket server object

	// WsServer server;
	// WsClient client

};

#endif /* DOBOT_SRC_CONVEYORGATEWAY_H_ */
