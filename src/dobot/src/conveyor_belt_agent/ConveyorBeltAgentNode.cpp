/*
 * ConveyorBeltAgent.cpp
 *
 *  Created on: 05.05.2018
 *      Author: Orhan Can Görür
 *      Email: orhan-can.goeruer@dai-labor.de
 */

#include <conveyor_belt_agent/ConveyorBeltAgent.h>

int main(int argc, char **argv)
{
    ros::init(argc, argv, "conveyor_belt_agent");
    ros::NodeHandle n;
    ConveyorBeltAgent conveyor_belt_agent;
    ROS_INFO("Conveyor belt services running...");
    ros::Rate loop_rate(10);
    while (ros::ok())
    {
        conveyor_belt_agent.update();
        ros::spinOnce();

        loop_rate.sleep();
    }

    return 0;
}
