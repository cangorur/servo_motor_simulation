#ifndef ConveyorBeltAgent_H
#define ConveyorBeltAgent_H

// #include "../config.h"
#include "ros/ros.h"
#include <string.h>
#include <std_msgs/UInt8.h>
#include <std_msgs/Float32.h>
#include "../DobotDll_rpi/DobotDll.h"

#include "dobot/SetDynamixelSpeed.h"
#include "dobot/SetInfraredSensor.h"
#include "dobot/InitConveyorBeltAgent.h"
#include "dobot/GenerateAbnormalTorque.h"
#include "dobot/GenerateNormalTorque.h"
#include "dobot/motor_raw_data.h"
#include "dobot/motor_data.h"
/**
 * The ConveyorBeltAgent component is a middleware class,
 * it manages pub/sub communication between physical layer and application layer,
 * and offers services to control the motor of the conveyor belt and the infrared sensor.
 */
class ConveyorBeltAgent{
public:
    /**
     * Default constructor.
     * Sets up the initialize service.
     */
    ConveyorBeltAgent();
    virtual ~ConveyorBeltAgent();
    /**
     * Receives infrared sensor readings from the lower physical layer (DobotServerAgent),
     * and publishs to the higher application layer (PickAndPlaceApp).
     */
    bool update();

protected:
    /**
     * Initialize service handler.
     * Service name: /conveyor_belt_agent/init
     * @todo implement master initialization node.
     * @param req Request object
     * @param res Response object
     * @return True if initialization was successful
     */
    bool init(dobot::InitConveyorBeltAgent::Request &req, dobot::InitConveyorBeltAgent::Response &res);
    /**
     * Initialize conveyor belt agent.
     * Assign subscription and publications,
     * and call service initializtion.
     */
    bool initialize();
    /**
     * Advertises conveyor belt related services.
     */
    void initConveyorBeltServices();
    /**
     * The service to set infrared sensor port.
     * Service name: /conveyor_belt_agent/setInfraredSensorMid
     * @param req Request object
     * @param res Response object
     * @return True always. Communication info in res.result.
     */
    bool setInfraredSensorServiceMid(dobot::SetInfraredSensor::Request &req, dobot::SetInfraredSensor::Response &res);
    /**
     * Receives infrared sensor readings.
     */
    void infraredCallback(const std_msgs::UInt8::ConstPtr& msg);
    /**
    *Receives motor raw data
    */
    void motorRawDataCallback(const dobot::motor_raw_data::ConstPtr& msg);
    /**
        * The MotorControl service in middleware layer. 
        * Includes functionalities: start/stop control and speed control for real servo motor.
        * Service name: /conveyor_belt_agent/setMotorSpeedRealMid
        * @param req Request object
        * @param res Response object
        * @return True always. Communication info in res.result.
        */
    bool setMotorSpeedRealServiceMid(dobot::SetDynamixelSpeed::Request &req, dobot::SetDynamixelSpeed::Response &res);
    /**
        * The MotorControl service in middleware layer. 
        * Includes functionalities: start/stop control and speed control for simulation.
        * Service name: /conveyor_belt_agent/setMotorSpeedSimMid
        * @param req Request object
        * @param res Response object
        * @return True always. Communication info in res.result.
        */
    bool setMotorSpeedSimServiceMid(dobot::SetDynamixelSpeed::Request &req, dobot::SetDynamixelSpeed::Response &res);
    /**
        * The service to generate abnormal torque behaviour generation for simulation.
        * Service name: /conveyor_belt_agent/generateAbnormalTorqueSimMid
        * @param req Request object
        * @param res Response object
        * @return True always. Communication info in res.result.
        */
    bool generateAbnormalTorqueSimServiceMid(dobot::GenerateAbnormalTorque::Request &req, dobot::GenerateAbnormalTorque::Response &res);
    /**
        * The service to generate normal torque behaviour for simulation.
        * Service name: /conveyor_belt_agent/generateNormalTorqueSimMid
        * @param req Request object
        * @param res Response object
        * @return True always. Communication info in res.result.
        */
    bool generateNormalTorqueSimServiceMid(dobot::GenerateNormalTorque::Request &req, dobot::GenerateNormalTorque::Response &res);
    
    /// Publisher for abnormal toque
    ros::Publisher extra_torque_publisher;
    
    /// Global variable for abnormal torque behaviour generation
    int extraTorqueFlag = 0;

    /// Global variable for abnormal torque behaviour generation
    std::string extraTorqueType = "";

    /// Global variable for abnormal torque behaviour generation
    double startingTime = 0, extraTorqueOld = 0, extraTorqueParam1 = 0, extraTorqueParam2 = 0, extraTorqueHoldTime = 0;

    /// Global variable for node name
    std::string nodeName = "conveyor_belt_agent";

    /// Global variable for simulation servo agent's name
    std::string simAgentName = "/simulation_servo_agent";

    /// ROS Nodehandle
    ros::NodeHandle n;

    /// Flag wheter conveyor belt agent has already been initialized
    bool initialized = false;

    /// Server for initialization
    ros::ServiceServer initServer; 

    /// Server for conveyor belt
    ros::ServiceServer conveyorBeltServer; 

    /// List of server
    std::vector<ros::ServiceServer> serverVec;

    /// Subscriber for infrared sensor readings from the lower physical layer (DobotArmAgent)
    ros::Subscriber receiver;

    /// Subcscriber for motor raw data reading from physical layer (dynamixel_servo_agent)
    ros::Subscriber motor_raw_data_subscriber;

    /// Publisher for infrared sensor readings to the upper application layer (PickAndPlaceApp)
    ros::Publisher chatterInfraredApp;

    /// Publisher for operated motor data
    ros::Publisher motor_data_operated_publisher;

    /// Temporal parameter for the infrared sensor
    int tempInfrared = 0;

    /// parameter to label the location where 
    std::size_t found = std::string::npos;

    /// Global variable to hold motor raw data
    double raw_timestamp=0 , raw_current=0, raw_velocity=0, raw_requested_velocity=0, raw_temperature=0, raw_pwm=0, raw_supply_voltage=0, raw_torque=0, raw_acceleration=0;

};

#endif


