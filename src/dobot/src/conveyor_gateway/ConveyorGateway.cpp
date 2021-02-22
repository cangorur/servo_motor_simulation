/*
 * ConveyorGateway.cpp
 *
 *  Created on: 21.11.2018
 *      Author: Orhan Can Görür
 *      Email: orhan-can.goeruer@dai-labor.de
 */

#include <ros/ros.h>
// include <package_name/service_type_name.h>
#include <std_srvs/Trigger.h>

#include <stdlib.h> 				// for rand() and RAND_MAX
#include <string.h>
#include <iostream>

#include "simple_web_socket/server_ws.hpp"
#include "simple_web_socket/client_ws.hpp"

typedef SimpleWeb::SocketServer<SimpleWeb::WS> WsServer;
typedef SimpleWeb::SocketClient<SimpleWeb::WS> WsClient;

#include <conveyor_gateway/ConveyorGateway.h>


using namespace std;

ConveyorGateway::ConveyorGateway(std::string agent_id, int port_id) {
	ros::NodeHandle pn("~");
	gatewayAgentID = agent_id;
	gatewayPortID = port_id;
	initialize();
}

ConveyorGateway::~ConveyorGateway() {
}

void ConveyorGateway::initialize() {
	ros::NodeHandle n;
	ros::NodeHandle pn("~");

	if (gatewayAgentID == "0") { // real conveyor motor
			infraredSensorSub = pn.subscribe(string("/conveyor_belt_agent_") + gatewayAgentID + "/infrared_app", 1000, &ConveyorGateway::infraredCallback, this);
			setMotorSpeedClient = pn.serviceClient<dobot::SetMotorSpeed>(string("/conveyor_belt_agent_") + gatewayAgentID + "/setMotorSpeedRealMid");
	}
	else if (gatewayAgentID != ""){	// simulated conveyor motors
			setMotorSpeedClient = pn.serviceClient<dobot::SetMotorSpeed>(string("/conveyor_belt_agent_") + gatewayAgentID + "/setMotorSpeedSimMid");
			genConveyorLoadClient = pn.serviceClient<dobot::GenerateNormalTorque>(string("/conveyor_belt_agent_") + gatewayAgentID + "/generateNormalTorqueSimMid");
			genAbnConveyorLoadClient = pn.serviceClient<dobot::GenerateAbnormalTorque>(string("/conveyor_belt_agent_") + gatewayAgentID + "/generateAbnormalTorqueSimMid");
	}

	motorDataSub = pn.subscribe(string("/conveyor_belt_agent_") + gatewayAgentID + "/motor_data_operated", 1000, &ConveyorGateway::motorDataCallback, this);

	ROS_INFO("[CONVEYORGATEWAY-%s] is initialized !", gatewayAgentID.c_str());
}

/*
 * SETTING WEB SOCKET SERVER
 */
void ConveyorGateway::SetWebSocketServer(){

	srand (time(NULL));
	//WebSocket (WS)-server at port 9090 using 1 thread

	WsServer server;
	if (gatewayAgentID == "0")  // this is for real motor running on separate machine
		server.config.port = 8887;
	else  // from this on for simulated motors running on the same PC other than the real motor
		server.config.port = gatewayPortID;
		// server.config.port = 9999 + stoi(gatewayAgentID);

	auto& echo=server.endpoint["^/?$"];
	cout << "websocket server is being initialized" << endl;
	echo.on_open=[](shared_ptr<WsServer::Connection> connection) {
		cout << "Conveyor Gateway Server: Opened connection " << (size_t)connection.get() << endl;
	};

	echo.on_message=[&](shared_ptr<WsServer::Connection> connection, shared_ptr<WsServer::Message> message) {

		ros::spinOnce(); // TODO: this is placed for motor data reading topics. It will be removed once a service for that is implemented.

		cout << "Conveyor Server: Message received !"<< endl;
		auto message_str=message->string();
		stringstream message_ss;
		message_ss << message_str;
		boost::property_tree::ptree message_pt; // json ptree object
		cout << "JSON object received:" << message_str << endl;

		try {
			boost::property_tree::read_json(message_ss, message_pt);
		} catch(boost::property_tree::json_parser::json_parser_error &e) {
			ROS_FATAL("Cannot parse the message to Json. Error: %s", e.what());
			return;
		}

		// Calling the right function (rosservice) to respond to the request
		string sender_name;
		try {
			sender_name = message_pt.get<string>("payload.requestee.id");
		}catch(boost::property_tree::json_parser::json_parser_error &e) {
			ROS_FATAL("Cannot parse. No sender name: %s", e.what());
			sender_name = "";
		}
		ROS_INFO("[CONVEYORGATEWAY-%s]: Message received from %s", gatewayAgentID.c_str(), sender_name.c_str());

		std::size_t index = sender_name.find("-");
    string requestee = sender_name.substr(0, index);

		if (requestee == "conveyor"){
				std::size_t found = sender_name.find_first_of("0123456789");
				if (found != std::string::npos){ // each conveyor service needs to have an integer ID
						if (sender_name.substr(found) == "0" && sender_name.substr(found) == gatewayAgentID){
							message_pt = RealConveyorBeltServices(message_pt);
						}
						else if (sender_name.substr(found) != "0" && sender_name.substr(found) == gatewayAgentID){
							message_pt = SimuConveyorBeltServices(message_pt);
						}
						else {
							ROS_FATAL("[CONVEYORGATEWAY-%s]: Message received with wrong conveyor-belt-agent ID", gatewayAgentID.c_str());
						}
				}
		}
		// This part was for the real conveyor belt system. Ignore for this project!
		else if (requestee == "infrared"){
			 message_pt = InfraredSensorService(message_pt);
		}
		else if (requestee == "current"){
			 message_pt = CurrentSensorService(message_pt);
		}
		else{
			ROS_FATAL("[CONVEYORGATEWAY-%s]: Message received with wrong requestee:%s", gatewayAgentID.c_str(), requestee.c_str());
		}
		// Translating the responded json object into string to send via websocket
		auto send_stream = make_shared<WsServer::SendStream>();
		ostringstream buf_stream;
		boost::property_tree::write_json(buf_stream, message_pt, false);
		*send_stream << buf_stream.str();
		server.send(connection, send_stream, [](const SimpleWeb::error_code& ec){
			if(ec) {
				cout << "Server: Error sending message. " <<
					"Error: " << ec << ", error message: " << ec.message() << endl;
			}
		});
	};

	//See RFC 6455 7.4.1. for status codes
	echo.on_close=[](shared_ptr<WsServer::Connection> connection, int status, const string& /*reason*/) {
		cout << "Server: Closed connection " << (size_t)connection.get() << " with status code " << status << endl;
	};

	//See http://www.boost.org/doc/libs/1_55_0/doc/html/boost_asio/reference.html, Error Codes for error code meanings
	echo.on_error=[](shared_ptr<WsServer::Connection> connection, const SimpleWeb::error_code& ec) {
		cout << "Server: Error in connection " << (size_t)connection.get() << ". " <<
				"Error: " << ec << ", error message: " << ec.message() << endl;
	};

	server.start();

}

boost::property_tree::ptree ConveyorGateway::RealConveyorBeltServices(boost::property_tree::ptree message_pt){

	boost::property_tree::ptree conveyor_service;
	boost::property_tree::ptree response_node;
	boost::property_tree::ptree status;
	boost::property_tree::ptree motorData;
	boost::property_tree::ptree speed;
	boost::property_tree::ptree payload_node;

	string isEnabled;
	try{
		isEnabled = message_pt.get<string>("payload.request.switch");  						 // on or off
	} catch(boost::property_tree::json_parser::json_parser_error &e) {
		ROS_FATAL("No switch data is provided: %s", e.what());
		isEnabled = "off";
	}
	string speedReq;
	try{
		speedReq = message_pt.get<string>("payload.request.speed.oneTimeSpeedReq"); // (-45, +45)
	} catch(boost::property_tree::json_parser::json_parser_error &e){
		ROS_FATAL("No oneTimeSpeedReq: %s", e.what());
		speedReq = "";
	}

	dobot::SetMotorSpeed speed_srv;

	if(isEnabled == "on"){
		if(speedReq != "" && speedReq != prevSpeedReqReal){   // ignore speed req when it is ""
				float speed = stof(message_pt.get<string>("payload.request.speed.oneTimeSpeedReq"));
				speed_srv.request.speed = speed;
				speed_srv.request.isEnabled = true;
				if (setMotorSpeedClient.call(speed_srv)){
					conveyor_service.put("status", "on");
					ROS_INFO("[CONVEYORGATEWAY-%s]: Speed request of %f is applied", gatewayAgentID.c_str(), speed);
					prevSpeedReqReal = speedReq;
				}
		}
	}
	else{
		speed_srv.request.isEnabled = false;
		speed_srv.request.speed = 0.0;
		if (setMotorSpeedClient.call(speed_srv)){
			conveyor_service.put("status", "on");
			ROS_INFO("[CONVEYORGATEWAY-%s]: Motor is disabled", gatewayAgentID.c_str());
		}
	}

	conveyor_service.put("speed", to_string(motorDataReadings.velocity));
	// string ip = "130.149.232.237";
	motorData.put("sensor", gatewayAgentID);
	motorData.put("log_list_id", gatewayAgentID);
	motorData.put("timestamp", to_string(motorDataReadings.timestamp));
	motorData.put("acceleration", to_string(motorDataReadings.acceleration));
	motorData.put("speed", to_string(motorDataReadings.velocity));
	motorData.put("temperature", to_string(motorDataReadings.temperature));
	motorData.put("current", to_string(motorDataReadings.current));
	motorData.put("power_in", to_string(motorDataReadings.power_in));
	motorData.put("load_torque", to_string(motorDataReadings.torque));

	conveyor_service.push_back(make_pair("motorData", motorData));
	response_node.push_back(make_pair("conveyor-service-" + gatewayAgentID, conveyor_service));

	payload_node = message_pt.get_child("payload");
	payload_node.put_child("response", response_node);
	message_pt.put_child("payload", payload_node);

	return message_pt;
}

boost::property_tree::ptree ConveyorGateway::InfraredSensorService(boost::property_tree::ptree message_pt){

	boost::property_tree::ptree infrared_service;
	boost::property_tree::ptree response_node;
	boost::property_tree::ptree payload_node;

	string flag_str;

	if (infraredDetected)
		flag_str = "true";
	else
		flag_str = "false";

	infrared_service.put("isDetected", flag_str);
	response_node.push_back(make_pair("infrared-sensor-service", infrared_service));

	payload_node = message_pt.get_child("payload");
	payload_node.put_child("response", response_node);
	message_pt.put_child("payload", payload_node);

	return message_pt;
}

boost::property_tree::ptree ConveyorGateway::CurrentSensorService(boost::property_tree::ptree message_pt){

	boost::property_tree::ptree current_service;
	boost::property_tree::ptree response_node;
	boost::property_tree::ptree payload_node;

	current_service.put("current", to_string(motorDataReadings.current));
	response_node.push_back(make_pair("current-sensor-service", current_service));

	payload_node = message_pt.get_child("payload");
	payload_node.put_child("response", response_node);
	message_pt.put_child("payload", payload_node);

	return message_pt;
}

boost::property_tree::ptree ConveyorGateway::SimuConveyorBeltServices(boost::property_tree::ptree message_pt){

	boost::property_tree::ptree conveyor_service;
	boost::property_tree::ptree response_node;
	boost::property_tree::ptree status;
	boost::property_tree::ptree motorData;
	boost::property_tree::ptree speed;
	boost::property_tree::ptree payload_node;

	string isEnabled;
	try{
		isEnabled = message_pt.get<string>("payload.request.switch");  						 // on or off
	} catch(boost::property_tree::json_parser::json_parser_error &e) {
		ROS_FATAL("No switch data is provided: %s", e.what());
		isEnabled = "off";
	}
	string speedReq;
	try{
		speedReq = message_pt.get<string>("payload.request.speed.oneTimeSpeedReq"); // (-45, +45)
	} catch(boost::property_tree::json_parser::json_parser_error &e){
		ROS_FATAL("No oneTimeSpeedReq: %s", e.what());
		speedReq = "";
	}
	string abnormalTorqueReq;
	try{
		abnormalTorqueReq = message_pt.get<string>("payload.request.torqueRequest.abnormal.type");
	} catch(boost::property_tree::json_parser::json_parser_error &e){
		ROS_FATAL("No abnormal torque request: %s", e.what());
		abnormalTorqueReq = "";
	}
	string normalTorqueReq;
	try{
		normalTorqueReq = message_pt.get<string>("payload.request.torqueRequest.normal");
	} catch(boost::property_tree::json_parser::json_parser_error &e){
		ROS_FATAL("No normal torque request: %s", e.what());
		normalTorqueReq = "";
	}

	dobot::SetMotorSpeed speed_srv;

	if(isEnabled == "on"){
		if(speedReq != "" && speedReq != prevSpeedReqSimu){   // ignore speed req when it is ""
				float speed = stof(message_pt.get<string>("payload.request.speed.oneTimeSpeedReq"));
				speed_srv.request.speed = speed;
				speed_srv.request.isEnabled = true;
				if (setMotorSpeedClient.call(speed_srv)){
					conveyor_service.put("status", "on");
					ROS_INFO("[CONVEYORGATEWAY-%s]: Speed request of %f is applied, with prevSpeed:%s", gatewayAgentID.c_str(), speed,prevSpeedReqSimu.c_str());
					prevSpeedReqSimu = speedReq;
				}
		}
	}
	else{
		speed_srv.request.isEnabled  = false;
		speed_srv.request.speed = 0.0;
		if (setMotorSpeedClient.call(speed_srv)){
			conveyor_service.put("status", "on");
			ROS_INFO("[CONVEYORGATEWAY-%s]: Motor is disabled", gatewayAgentID.c_str());
		}
	}

	if(abnormalTorqueReq != ""){
		dobot::GenerateAbnormalTorque abnTorque_srv;
		abnTorque_srv.request.isEnabled = true;
		abnTorque_srv.request.type = message_pt.get<string>("payload.request.torqueRequest.abnormal.type");
		abnTorque_srv.request.param1 = stof(message_pt.get<string>("payload.request.torqueRequest.abnormal.param1"));
		abnTorque_srv.request.param2 = stof(message_pt.get<string>("payload.request.torqueRequest.abnormal.param2"));
		abnTorque_srv.request.holdTime = stof(message_pt.get<string>("payload.request.torqueRequest.abnormal.holdTime"));

		if(genAbnConveyorLoadClient.call(abnTorque_srv))
			ROS_INFO("[CONVEYORGATEWAY-%s]: '%s' torque request is applied", gatewayAgentID.c_str(), abnTorque_srv.request.type.c_str());


	} else if (normalTorqueReq != ""){
		dobot::GenerateNormalTorque torque_srv;

		torque_srv.request.isEnabled = true;
		torque_srv.request.torque = stof(message_pt.get<string>("payload.request.torqueRequest.normal"));

		if(genConveyorLoadClient.call(torque_srv))
			ROS_INFO("[CONVEYORGATEWAY-%s]: Torque request: %f, is applied", gatewayAgentID.c_str(), torque_srv.request.torque);
	}

	conveyor_service.put("speed", to_string(motorDataReadings.velocity));
	// string ip = "130.149.232.237";
	motorData.put("sensor", gatewayAgentID);
	motorData.put("log_list_id", gatewayAgentID);
	motorData.put("timestamp", to_string(motorDataReadings.timestamp));
	motorData.put("acceleration", to_string(motorDataReadings.acceleration));
	motorData.put("speed", to_string(motorDataReadings.velocity));
	motorData.put("temperature", to_string(motorDataReadings.temperature));
	motorData.put("current", to_string(motorDataReadings.current));
	motorData.put("power_in", to_string(motorDataReadings.power_in));
	motorData.put("load_torque", to_string(motorDataReadings.torque));

	conveyor_service.push_back(make_pair("motorData", motorData));
	response_node.push_back(make_pair("conveyor-service-" + gatewayAgentID, conveyor_service));
	//message_pt.put_child("response", response_node);

	payload_node = message_pt.get_child("payload");
	payload_node.put_child("response", response_node);
	message_pt.put_child("payload", payload_node);

	return message_pt;
}
//==========================================================

void ConveyorGateway::webSocketClient(string message) {

	WsClient client("localhost:8080");

	client.on_open=[&client]() {
	  string message="sending a message";
	  //*out_ << "Client: Opened connection" << endl;
	  cout << ">>> Warehouse Gateway Client: Sending message: \"" << message << "\"" << endl;

	  auto send_stream=make_shared<WsClient::SendStream>();
	  *send_stream << message;
	  client.send(send_stream);
	};

	client.on_message=[&client](shared_ptr<WsClient::Message> message) {
	  auto message_str=message->string();
	  cout << "Client: Message received: \"" << message_str << "\"" << endl;
	  //cout << "Client: Sending close connection" << endl;
	  client.send_close(1000);
	};

	client.on_close=[](int status, const string& /*reason*/) {
	  cout << "Client: Closed connection with status code " << status << endl;
	};

	//See http://www.boost.org/doc/libs/1_55_0/doc/html/boost_asio/reference.html, Error Codes for error code meanings
	client.on_error=[](const SimpleWeb::error_code& ec) {
	  cout << "Client: Error: " << ec << ", error message: " << ec.message() << endl;
	};

	client.start();
}

//==========================================================

//================rostopic callbacks========================
void ConveyorGateway::infraredCallback(const std_msgs::UInt8::ConstPtr& msg) {
    infraredDetected = msg->data;
}
void ConveyorGateway::motorDataCallback(const dobot::motor_data::ConstPtr& msg) {
		motorDataReadings.timestamp = msg->timestamp;
    motorDataReadings.current = msg->current;
    motorDataReadings.requested_velocity = msg->requested_velocity;
    motorDataReadings.velocity = msg->velocity;
    motorDataReadings.temperature = msg->temperature;
    motorDataReadings.effective_voltage = msg->effective_voltage;
    motorDataReadings.torque = msg->torque;
    motorDataReadings.acceleration = msg->acceleration;
		motorDataReadings.power_in = msg->power_in;
}

//==========================================================
