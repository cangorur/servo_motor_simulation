/*
 * ConveyorGatewayNode.cpp
 *
 *  Created on: 25.08.2017
 *      Author: Orhan Can Görür
 */

#include <ros/ros.h>
#include <conveyor_gateway/ConveyorGateway.h>

int main(int argc, char **argv) {

	if (argc != 3) {
    		ROS_INFO("usage: Gateway agent_id or port_id is missing");
    		return 1;
  }
	std::string agent_id = std::string(argv[1]);
	int port_id = std::stoi(std::string(argv[2]));

	ros::init(argc, argv, "conveyor_gateway_" + agent_id);
	ros::NodeHandle nh;

	ConveyorGateway conveyorGateway(agent_id, port_id);
	ROS_INFO("[CONVEYORGATEWAY-%s] is ready on Port: %d", agent_id.c_str(), port_id);
	conveyorGateway.SetWebSocketServer();
	// Ros::Spin() carried out into WareHouseGateway class, SetWebSocket function under its on_message() thread. So that whenever a message arrives ros spins and gets uptodate rostopic callbacks
}
