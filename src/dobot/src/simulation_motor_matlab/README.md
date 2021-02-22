Matlab Simulation for the Motor
============
Simulation Version 3.0 - 20th Mar 2019
\
Document Version 0.1 - 7th Apr 2019
\
by Xin Yu (marvelous.islander@gmail.com) and Orhan Can Görür (cangorur88@gmail.com)

Below are some basic introduction of the Matlab simulation models for # DYNAMIXEL XL430-W250-T.
The process of generating the Matlab simulation model are:
1. Build the motor models.
2. Collecting data from the real motor.
3. Trying to configure the parameters J, L, K, R, F and C (mainly K, R, F and C) to match the behaviours of the simulation to the real motor.
4. If the current - speed graph and voltage - speed graph of the simulation motor and the real motor match, we consider two motors have simulation behaviours.
5. Using the configured motor model to generate data.

---

## Prerequisites
- Matlab >= R2017b
- Matlab Robotics System Toolbox
- Matlab Robotics System Toolbox Interface for ROS Custom Messages (provided message files are under /dobot/msg)

## Introduction
### This directory contains the following files:
- **simulation_servo_agent.slx**: the simulation model for the real motor. Noises are added to simulate the real conditions. This model must run with a ROS master.
- **simulation_servo_agent_no_noise.slx**: the ideal simulation model. Runs only with a ROS master.
- **simulation_servo_agent_1219.slx**: the counterpart of noise added simulation model, but does not need to run with a ROS master. Additionally, it has a short simulation time. Used for generating training data and parameter tuning.
- **parameter_twiddle_fast.m**, calc_err.m: used for parameter tuning for C and F.
- **parameter_twiddle_fast_kr.m**, calc_err_kr.m: used for parameter tuning for K and R.
- **multi_speed_simulation.m**: for training data generation (speed range: 0-38, no extra torque)
- **V_P_T_simulation.m**: for V-P-T data generation (speed range: 0-38, torque range: 0-0.3)
- **max_torque_at_given_speed_test.m**: calculates the maximum torque that the motor can withstand without slowing down.
- **best_params.mat**, best_params.txt: stores the best parameter combination that we are using
- **simulation_servo_agent_noise.tgz**, simulation_servo_agent_no_noise.tgz: the generated ROS agent that can be deployed to the ROS environment directly.

## Installation:

### Custom messages
To customize messages, please follow the instructions in [https://de.mathworks.com/help/robotics/ug/ros-custom-message-support.html](https://de.mathworks.com/help/robotics/ug/ros-custom-message-support.html).

## Running
### General
- Open Matlab R2017b Simulink
- Double click on the simulation file (.slx) or Matlab script (.m)

### For different files
- For .m files, first open **simulation_servo_agent_1219.slx** and the .m file. Then run the .m file.
- To be able to run **simulation_servo_agent.slx** or **simulation_servo_agent_no_noise.slx**, one should first type "rosinit" in the Matlab command window to initialize a ROS master. Then run the simulation (.slx file). Note that the simulation time has been set to infinite (inf).
- For **simulation_servo_agent_1219.slx**, rosinit is not necessary.

### Generating C/C++ Code for ROS and Launching
- In Simulink, under the Code menu, select C/C++ code, then select "deploy to hardware".
- This process may take a while and will create the corresponding .tgz file (in our case **simulation_servo_agent_noise.tgz**). The compressed file includes all necessary source code to run it as a ROS agent (see **simulation_servo_agent.cpp** file under it).
- We can then run the agent under main project: src/dobot/launch/sim.launch
