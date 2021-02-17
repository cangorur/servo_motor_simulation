# Install script for directory: /home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dobot/msg" TYPE FILE FILES
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/msg/motor_data.msg"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/msg/motor_raw_data.msg"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/msg/pid_control_data.msg"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dobot/srv" TYPE FILE FILES
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/SetCmdTimeout.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/GetDeviceSN.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/SetDeviceName.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/GetDeviceName.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/GetDeviceVersion.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/GetPose.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/GetAlarmsState.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/ClearAllAlarmsState.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/SetHOMEParams.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/GetHOMEParams.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/SetHOMECmd.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/SetEndEffectorParams.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/GetEndEffectorParams.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/SetEndEffectorLaser.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/GetEndEffectorLaser.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/SetEndEffectorSuctionCup.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/GetEndEffectorSuctionCup.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/SetEndEffectorGripper.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/GetEndEffectorGripper.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/SetJOGJointParams.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/GetJOGJointParams.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/SetJOGCoordinateParams.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/GetJOGCoordinateParams.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/SetJOGCommonParams.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/GetJOGCommonParams.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/SetJOGCmd.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/SetPTPJointParams.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/GetPTPJointParams.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/SetPTPCoordinateParams.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/GetPTPCoordinateParams.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/SetPTPJumpParams.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/GetPTPJumpParams.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/SetPTPCommonParams.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/GetPTPCommonParams.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/SetPTPCmd.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/SetCPParams.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/GetCPParams.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/SetCPCmd.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/SetARCParams.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/GetARCParams.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/SetARCCmd.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/SetWAITCmd.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/SetTRIGCmd.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/SetIOMultiplexing.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/GetIOMultiplexing.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/SetIODO.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/GetIODO.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/SetIOPWM.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/GetIOPWM.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/GetIODI.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/GetIOADC.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/SetEMotor.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/SetColorSensor.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/SetInfraredSensor.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/GetColorSensor.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/GetInfraredSensor.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/SetQueuedCmdStartExec.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/SetQueuedCmdStopExec.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/SetQueuedCmdForceStopExec.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/SetQueuedCmdClear.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/InitConveyorBeltAgent.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/InitMotorControlApp.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/ContMotorControl.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/OneTimeMotorControl.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/SetDynamixelSpeed.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/GenerateAbnormalTorque.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/GenerateNormalTorque.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/ReadReg.srv"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/srv/WriteReg.srv"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dobot/cmake" TYPE FILE FILES "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/build/dobot/catkin_generated/installspace/dobot-msg-paths.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/devel/include/dobot")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/devel/share/roseus/ros/dobot")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/devel/share/common-lisp/ros/dobot")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/devel/share/gennodejs/ros/dobot")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python2" -m compileall "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/devel/lib/python2.7/dist-packages/dobot")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/devel/lib/python2.7/dist-packages/dobot")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/build/dobot/catkin_generated/installspace/dobot.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dobot/cmake" TYPE FILE FILES "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/build/dobot/catkin_generated/installspace/dobot-msg-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dobot/cmake" TYPE FILE FILES
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/build/dobot/catkin_generated/installspace/dobotConfig.cmake"
    "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/build/dobot/catkin_generated/installspace/dobotConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dobot" TYPE FILE FILES "/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/package.xml")
endif()

