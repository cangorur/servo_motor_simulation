/*
 * ConveyorBeltAgent.cpp
 *
 *  Created on: 05.05.2018
 *      Author: Orhan Can Görür
 *      Email: orhan-can.goeruer@dai-labor.de
 */

#include <conveyor_belt_agent/ConveyorBeltAgent.h>
#include <math.h>

#define PI 3.141592653
using namespace std;

ConveyorBeltAgent::ConveyorBeltAgent(){
    ros::NodeHandle pn("~");

    nodeName = ros::this_node::getName();
    found = nodeName.find_first_of("0123456789");
    if (found!=std::string::npos){
        if (nodeName.substr(found) != "0")
            simAgentName = string("/simulation_servo_agent_") + nodeName.substr(found);
    }else
        ROS_ERROR("Invalid node name!");
    this->initServer = pn.advertiseService(string("/") + nodeName + string("/init"), &ConveyorBeltAgent::init, this);

    // todo: this should later be integrated into the master initializtion node.
    dobot::InitConveyorBeltAgent::Request req;
    dobot::InitConveyorBeltAgent::Response res;
    this->init(req,res);
}

ConveyorBeltAgent::~ConveyorBeltAgent(){
}

bool ConveyorBeltAgent::init(dobot::InitConveyorBeltAgent::Request &req, dobot::InitConveyorBeltAgent::Response &res) {
    if (!initialized) {
        initialized = initialize();
        if (initialized)
            ROS_INFO("ConveyorBeltAgent succesfully initialized!");
        else
            ROS_ERROR("ConveyorBeltAgent initialization failed!");
    } else
        ROS_WARN("ConveyorBeltAgent has already been initialized!");
    res.success = initialized;

    return true;
}
bool ConveyorBeltAgent::initialize()
{
    ros::NodeHandle pn("~");

    if (nodeName.substr(found) == "0")
    {
        motor_raw_data_subscriber = pn.subscribe("/dynamixel_servo_agent/motor_raw_data", 1000, &ConveyorBeltAgent::motorRawDataCallback,this);
        receiver = pn.subscribe("/dobot_server_agent/infrared", 1000, &ConveyorBeltAgent::infraredCallback, this);
        chatterInfraredApp = pn.advertise<std_msgs::UInt8>(string("/") + nodeName + string("/infrared_app"), 1000);
    }
    else
    {
        motor_raw_data_subscriber = pn.subscribe(simAgentName + "/motor_raw_data", 1000, &ConveyorBeltAgent::motorRawDataCallback,this);
        extra_torque_publisher = pn.advertise<std_msgs::Float32>(string("/") + nodeName + string("/abnormal_torque"), 1000);
    }
    motor_data_operated_publisher = pn.advertise<dobot::motor_data>(string("/") + nodeName + string("/")+ string("motor_data_operated"), 1000);

    initConveyorBeltServices();

    return true;
}

void ConveyorBeltAgent::initConveyorBeltServices()
{
    ros::NodeHandle pn("~");

    if (nodeName.substr(found) == "0")
    {
        conveyorBeltServer = n.advertiseService("/conveyor_belt_agent_0/setMotorSpeedRealMid", &ConveyorBeltAgent::setMotorSpeedRealServiceMid, this);
        serverVec.push_back(conveyorBeltServer);
        conveyorBeltServer = n.advertiseService("/conveyor_belt_agent_0/setInfraredSensorMid", &ConveyorBeltAgent::setInfraredSensorServiceMid, this);
        serverVec.push_back(conveyorBeltServer);
    }
    else
    {
        conveyorBeltServer = n.advertiseService(string("/") + nodeName + string("/setMotorSpeedSimMid"), &ConveyorBeltAgent::setMotorSpeedSimServiceMid, this);
        serverVec.push_back(conveyorBeltServer);
        conveyorBeltServer = n.advertiseService(string("/") + nodeName + string("/generateAbnormalTorqueSimMid"), &ConveyorBeltAgent::generateAbnormalTorqueSimServiceMid, this);
        serverVec.push_back(conveyorBeltServer);
        conveyorBeltServer = n.advertiseService(string("/") + nodeName + string("/generateNormalTorqueSimMid"), &ConveyorBeltAgent::generateNormalTorqueSimServiceMid, this);
        serverVec.push_back(conveyorBeltServer);
    }
}

void ConveyorBeltAgent::infraredCallback(const std_msgs::UInt8::ConstPtr& msg)
{
    tempInfrared = msg->data;
}
void ConveyorBeltAgent::motorRawDataCallback(const dobot::motor_raw_data::ConstPtr& msg)
{
    raw_timestamp = msg->raw_timestamp;
    raw_current = msg->raw_current;
    raw_requested_velocity = msg->raw_requested_velocity;
    raw_velocity = msg->raw_velocity;
    raw_temperature = msg->raw_temperature;
    raw_pwm = msg->raw_pwm;
    raw_supply_voltage = msg->raw_supply_voltage;
    raw_torque = msg->raw_torque;
    raw_acceleration = msg->raw_acceleration;
}

bool ConveyorBeltAgent::update()
{
    std_msgs::UInt8 msg_app;
    std_msgs::Float32 extra_torque;
    dobot::motor_data operated_data;
    // Calculations here are examples and can be changed including msg type
    operated_data.timestamp = raw_timestamp;
    operated_data.requested_velocity = raw_requested_velocity;
    operated_data.velocity = raw_velocity;
    operated_data.torque = raw_torque;
    operated_data.current = raw_current;
    operated_data.temperature = raw_temperature;
    operated_data.effective_voltage = raw_supply_voltage*raw_pwm;
    operated_data.power_in = operated_data.effective_voltage*raw_current;
    operated_data.acceleration = raw_acceleration;
    // operated_data.power_out = operated_data.torque*raw_velocity*0.10472; //  2*pi/60
    msg_app.data = tempInfrared;


    if (nodeName.substr(found) != "0")
    {
        if (extraTorqueFlag == 1)
        {
            double secs = raw_timestamp - startingTime;
            double sign = (raw_requested_velocity > 0) - (raw_requested_velocity < 0);

            // if set, after a while, the extra torque will become constant
            if (extraTorqueHoldTime != 0 && secs >= extraTorqueHoldTime)
                extra_torque.data = extraTorqueOld;
            else
            {
                if (extraTorqueType == "log")
                    extra_torque.data = -sign*log(extraTorqueParam1*secs + extraTorqueParam2);
                else if (extraTorqueType == "exp")
                    extra_torque.data = -sign*(exp(extraTorqueParam1*secs) + extraTorqueParam2);
                else if (extraTorqueType == "lin")
                    extra_torque.data = -sign*(extraTorqueParam1*secs + extraTorqueParam2);
                else if (extraTorqueType == "sin")
                {
                    // amplitude
                    float A = extraTorqueParam1/2;
                    // w = 2*PI/period
                    float T = extraTorqueParam2;
                    float w = 2*PI/T;
                    // offset
                    float C = A;
                    // phase
                    float theta = 1.5*PI;
                    extra_torque.data = -sign*(C + A*sin(w*secs + theta));
                }
                else if (extraTorqueType == "sin_adap")
                {
                    // amplitude
                    float A = extraTorqueParam1/2;
                    // w = 2*PI/period
                    float T = extraTorqueParam2;
                    float w = 2*PI/T;
                    // offset
                    float C = A;
                    // phase
                    float theta = 1.5*PI;
                    extra_torque.data = -sign*(C + A*sin(w*secs + theta));
                }
                else if (extraTorqueType == "step")
                    extra_torque.data = -sign*extraTorqueParam1;
                else if (extraTorqueType == "ramp")
                    extra_torque.data = -sign*extraTorqueParam1*secs;
                else
                    ROS_INFO("Please input supported extra torque function type.");
            }

            // record the last torque
            extraTorqueOld = extra_torque.data;
        }
        else
        {
            extra_torque.data = 0.0;
        }

        extra_torque_publisher.publish(extra_torque);
    }
    else
        chatterInfraredApp.publish(msg_app);
    motor_data_operated_publisher.publish(operated_data);

    return true;
}

bool ConveyorBeltAgent::setInfraredSensorServiceMid(dobot::SetInfraredSensor::Request &req, dobot::SetInfraredSensor::Response &res)
{
    ros::NodeHandle nh;
    ros::ServiceClient client;
    client = nh.serviceClient<dobot::SetInfraredSensor>("/dobot_server_agent/SetInfraredSensor");
    dobot::SetInfraredSensor srv;

    srv.request.infraredPort = req.infraredPort;
    srv.request.enable = req.enable;

    client.call(srv);
    res.result = srv.response.result;

    return true;
}

bool ConveyorBeltAgent::setMotorSpeedRealServiceMid(dobot::SetDynamixelSpeed::Request &req, dobot::SetDynamixelSpeed::Response &res)
{
    ros::NodeHandle nh;
    ros::ServiceClient client;
    client = nh.serviceClient<dobot::SetDynamixelSpeed>("/dynamixel_servo_agent/update_velocity");

    // code for real motor starts:
    dobot::SetDynamixelSpeed srvm;

    srvm.request.speed = req.speed;
    srvm.request.isEnabled = req.isEnabled;
    bool success = false;
    do{
        client.call(srvm);
        success = srvm.response.success;
    }
    while(!success);

    res.success = srvm.response.success;
    return success;
    // code for real motor ends.
}

bool ConveyorBeltAgent::setMotorSpeedSimServiceMid(dobot::SetDynamixelSpeed::Request &req, dobot::SetDynamixelSpeed::Response &res)
{
    ros::NodeHandle nh;

    bool isEnabled;
    if (req.isEnabled == true)
        isEnabled = true;
    else
        isEnabled = false;

    // code for simulation starts:
    nh.setParam(simAgentName + "/update_velocity/isEnabled", isEnabled);
    nh.setParam(simAgentName + "/update_velocity/speed", req.speed);

    res.success = true;

    return true;
    // code for simulation ends.
}

bool ConveyorBeltAgent::generateNormalTorqueSimServiceMid(dobot::GenerateNormalTorque::Request &req, dobot::GenerateNormalTorque::Response &res)
{
    ros::NodeHandle nh;

    if (req.isEnabled == true)
        nh.setParam(simAgentName + "/add_torque/torque", -req.torque);
    else
        nh.setParam(simAgentName + "/add_torque/torque", -1e-5);

    res.success = true;

    return true;
}

bool ConveyorBeltAgent::generateAbnormalTorqueSimServiceMid(dobot::GenerateAbnormalTorque::Request &req, dobot::GenerateAbnormalTorque::Response &res)
{
    ros::NodeHandle nh;

    if (req.isEnabled == true)
    {
        extraTorqueFlag = 1;
        extraTorqueOld = 0.0;
        startingTime = raw_timestamp;
        extraTorqueType = req.type;
        extraTorqueHoldTime = req.holdTime;

        if (req.type == "log" || req.type == "exp" ||req.type == "lin" || req.type == "sin" || req.type == "sin_adap")
        {
            extraTorqueParam1 = req.param1;
            extraTorqueParam2 = req.param2;
        }
        else if (req.type == "step" || req.type == "ramp")
            extraTorqueParam1 = req.param1;
        else
            ROS_INFO("Please use supported function type.");

    }
    else
    {
        extraTorqueFlag = 0;
        startingTime = 0;
    }

    res.success = true;

    return true;
}
