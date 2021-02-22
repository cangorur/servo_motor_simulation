cmake_minimum_required(VERSION 2.8.3)
project(dobot)

## Add support for C++11, supported in ROS Kinetic and newer
# add_definitions(-std=c++11)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  message_generation
  genmsg
  geometry_msgs
)

set(BOOST_COMPONENTS system coroutine context thread)
find_package(Boost COMPONENTS ${BOOST_COMPONENTS} REQUIRED)
include_directories(SYSTEM ${Boost_INCLUDE_DIR})

find_package(OpenSSL REQUIRED)
include_directories(${OPENSSL_INCLUDE_DIR})

find_package(Threads REQUIRED)

add_definitions(
    -DMODEL=dobot -DNUMST=2 -DNCSTATES=0 -DHAVESTDIO -DTERMFCN=1 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=0 -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DUSE_RTMODEL -DERT -DTID01EQ=1 -DROS_PROJECT -DMW_SCHED_OTHER -DSTACK_SIZE=64 -D__MW_TARGET_USE_HARDWARE_RESOURCES_H__ -DRT=RT )


## System dependencies are found with CMake's conventions
# find_package(Boost REQUIRED COMPONENTS system)


## Uncomment this if the package has a setup.py. This macro ensures
## modules and global scripts declared therein get installed
## See http://ros.org/doc/api/catkin/html/user_guide/setup_dot_py.html
# catkin_python_setup()

################################################
## Declare ROS messages, services and actions ##
################################################

## To declare and build messages, services or actions from within this
## package, follow these steps:
## * Let MSG_DEP_SET be the set of packages whose message types you use in
##   your messages/services/actions (e.g. std_msgs, actionlib_msgs, ...).
## * In the file package.xml:
##   * add a build_depend tag for "message_generation"
##   * add a build_depend and a run_depend tag for each package in MSG_DEP_SET
##   * If MSG_DEP_SET isn't empty the following dependency has been pulled in
##     but can be declared for certainty nonetheless:
##     * add a run_depend tag for "message_runtime"
## * In this file (CMakeLists.txt):
##   * add "message_generation" and every package in MSG_DEP_SET to
##     find_package(catkin REQUIRED COMPONENTS ...)
##   * add "message_runtime" and every package in MSG_DEP_SET to
##     catkin_package(CATKIN_DEPENDS ...)
##   * uncomment the add_*_files sections below as needed
##     and list every .msg/.srv/.action file to be processed
##   * uncomment the generate_messages entry below
##   * add every package in MSG_DEP_SET to generate_messages(DEPENDENCIES ...)

include_directories(.)

## Generate messages in the 'msg' folder
add_message_files(
  FILES
  motor_data.msg
  motor_raw_data.msg
)

## Generate services in the 'srv' folder
add_service_files(
  FILES

  InitConveyorBeltAgent.srv
  InitMotorControlApp.srv

  ContMotorControl.srv
  OneTimeMotorControl.srv

  SetMotorSpeed.srv
  GenerateAbnormalTorque.srv
  GenerateNormalTorque.srv
)

## Generate actions in the 'action' folder
# add_action_files(
#   FILES
#   Action1.action
#   Action2.action
# )

## Generate added messages and services with any dependencies listed here
generate_messages(
  DEPENDENCIES
  geometry_msgs
  std_msgs
)


################################################
## Declare ROS dynamic reconfigure parameters ##
################################################

## To declare and build dynamic reconfigure parameters within this
## package, follow these steps:
## * In the file package.xml:
##   * add a build_depend and a run_depend tag for "dynamic_reconfigure"
## * In this file (CMakeLists.txt):
##   * add "dynamic_reconfigure" to
##     find_package(catkin REQUIRED COMPONENTS ...)
##   * uncomment the "generate_dynamic_reconfigure_options" section below
##     and list every .cfg file to be processed

## Generate dynamic reconfigure parameters in the 'cfg' folder
# generate_dynamic_reconfigure_options(
#   cfg/DynReconf1.cfg
#   cfg/DynReconf2.cfg
# )

###################################
## catkin specific configuration ##
###################################
## The catkin_package macro generates cmake config files for your package
## Declare things to be passed to dependent projects
## INCLUDE_DIRS: uncomment this if you package contains header files
## LIBRARIES: libraries you create in this project that dependent projects also need
## CATKIN_DEPENDS: catkin_packages dependent projects also need
## DEPENDS: system dependencies of this project that dependent projects also need
catkin_package(
   INCLUDE_DIRS include
#  LIBRARIES dobot
CATKIN_DEPENDS roscpp rospy std_msgs message_runtime geometry_msgs
#  DEPENDS system_lib
)

###########
## Build ##
###########

## Specify additional locations of header files
## Your package locations should be listed before other locations
# include_directories(include)


find_library(QT_CORE QtCore)

#set(QT_LIB "/usr/include/qt4/")
set(QT_PATH "/usr/include/qt4/")
#find_path(QT_PATH
    # NAMES QtCore/
#)

# find_path(QT_PATH QtCore/qglobal.h)


set(SIM_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src/simulation_servo_agent/")
message(${SIM_SOURCE_DIR})
include_directories(${SIM_SOURCE_DIR})

set(SIM_NO_NOISE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src/simulation_servo_agent_no_noise/")
message(${SIM_NO_NOISE_DIR})
include_directories(${SIM_NO_NOISE_DIR})


message(${QT_CORE})
message(${QT_PATH})

include_directories(
  include
  ${Boost_INCLUDE_DIR}
  ${catkin_INCLUDE_DIRS}
  ${QT_PATH}
)

add_executable(conveyor_belt_agent src/conveyor_belt_agent/ConveyorBeltAgentNode.cpp src/conveyor_belt_agent/ConveyorBeltAgent.cpp)
target_link_libraries(conveyor_belt_agent ${catkin_LIBRARIES} "${QT_CORE}")
add_dependencies(conveyor_belt_agent dobot_gencpp ${PROJECT_NAME}_EXPORTED_TARGETS ${PROJECT_NAME}_generate_messages_cpp)

add_executable(conveyor_gateway src/conveyor_gateway/ConveyorGateway.cpp src/conveyor_gateway/ConveyorGatewayNode.cpp)
set_target_properties(conveyor_gateway PROPERTIES OUTPUT_NAME conveyor_gateway PREFIX "")
target_link_libraries(conveyor_gateway ${catkin_LIBRARIES} ${Boost_LIBRARIES} ${OPENSSL_CRYPTO_LIBRARY} ${CMAKE_THREAD_LIBS_INIT})
add_dependencies(conveyor_gateway ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS} dobot_gencpp)

file(GLOB simulation_servo_agent_C_SOURCES ${SIM_SOURCE_DIR}/*.c)
file(GLOB simulation_servo_agent_no_noise_C_SOURCES ${SIM_NO_NOISE_DIR}/*.c)

## Declare executable for generated ROS agent from MATLAB Simulink motor model
add_executable(simulation_servo_agent
   ${SIM_SOURCE_DIR}/simulation_servo_agent_9c2ac8b8_1_ds.c
   ${SIM_SOURCE_DIR}/simulation_servo_agent_9c2ac8b8_1_ds_f.c
   ${SIM_SOURCE_DIR}/simulation_servo_agent_9c2ac8b8_1_ds_log.c
   ${SIM_SOURCE_DIR}/simulation_servo_agent_9c2ac8b8_1_ds_obs_exp.c
   ${SIM_SOURCE_DIR}/simulation_servo_agent_9c2ac8b8_1_ds_obs_act.c
   ${SIM_SOURCE_DIR}/simulation_servo_agent_9c2ac8b8_1_ds_obs_all.c
   ${SIM_SOURCE_DIR}/simulation_servo_agent_9c2ac8b8_1.c
   ${SIM_SOURCE_DIR}/simulation_servo_agent_9c2ac8b8_1_gateway.c
   ${SIM_SOURCE_DIR}/pm_printf.c
   ${SIM_SOURCE_DIR}/rt_matrx.c
   ${SIM_SOURCE_DIR}/rt_printf.c
   ${SIM_SOURCE_DIR}/ert_main.cpp
   ${SIM_SOURCE_DIR}/rt_backsubrr_dbl.c
   ${SIM_SOURCE_DIR}/rt_forwardsubrr_dbl.c
   ${SIM_SOURCE_DIR}/rt_lu_real.c
   ${SIM_SOURCE_DIR}/rt_matrixlib_dbl.c
   ${SIM_SOURCE_DIR}/rtGetInf.cpp
   ${SIM_SOURCE_DIR}/rtGetNaN.cpp
   ${SIM_SOURCE_DIR}/rt_nonfinite.cpp
   ${SIM_SOURCE_DIR}/simulation_servo_agent.cpp
   ${SIM_SOURCE_DIR}/simulation_servo_agent_data.cpp
   ${SIM_SOURCE_DIR}/sfun_discreteVariableDelay.c
   ${SIM_SOURCE_DIR}/linuxinitialize.cpp
   ${SIM_SOURCE_DIR}/slros_busmsg_conversion.cpp
   ${SIM_SOURCE_DIR}/slros_initialize.cpp
   ${SIM_SOURCE_DIR}/slros_generic_param.cpp
   ${simulation_servo_agent_C_SOURCES}
)

add_executable(simulation_servo_agent_no_noise
   ${SIM_NO_NOISE_DIR}/simulation_servo_agent_9c2ac8b8_1_ds.c
   ${SIM_NO_NOISE_DIR}/simulation_servo_agent_9c2ac8b8_1_ds_log.c
   ${SIM_NO_NOISE_DIR}/simulation_servo_agent_9c2ac8b8_1_ds_obs_exp.c
   ${SIM_NO_NOISE_DIR}/simulation_servo_agent_9c2ac8b8_1_ds_obs_act.c
   ${SIM_NO_NOISE_DIR}/simulation_servo_agent_9c2ac8b8_1_ds_obs_all.c
   ${SIM_NO_NOISE_DIR}/simulation_servo_agent_9c2ac8b8_1.c
   ${SIM_NO_NOISE_DIR}/simulation_servo_agent_9c2ac8b8_1_gateway.c
   ${SIM_NO_NOISE_DIR}/pm_printf.c
   ${SIM_NO_NOISE_DIR}/rt_matrx.c
   ${SIM_NO_NOISE_DIR}/rt_printf.c
   ${SIM_NO_NOISE_DIR}/ert_main.cpp
   ${SIM_NO_NOISE_DIR}/rt_backsubrr_dbl.c
   ${SIM_NO_NOISE_DIR}/rt_forwardsubrr_dbl.c
   ${SIM_NO_NOISE_DIR}/rt_lu_real.c
   ${SIM_NO_NOISE_DIR}/rt_matrixlib_dbl.c
   ${SIM_NO_NOISE_DIR}/rtGetInf.cpp
   ${SIM_NO_NOISE_DIR}/rtGetNaN.cpp
   ${SIM_NO_NOISE_DIR}/rt_nonfinite.cpp
   ${SIM_NO_NOISE_DIR}/simulation_servo_agent.cpp
   ${SIM_NO_NOISE_DIR}/simulation_servo_agent_data.cpp
   ${SIM_NO_NOISE_DIR}/sfun_discreteVariableDelay.c
   ${SIM_NO_NOISE_DIR}/linuxinitialize.cpp
   ${SIM_NO_NOISE_DIR}/slros_busmsg_conversion.cpp
   ${SIM_NO_NOISE_DIR}/slros_initialize.cpp
   ${SIM_NO_NOISE_DIR}/slros_generic_param.cpp
   ${simulation_servo_agent_no_noise_C_SOURCES}
)

## Add cmake target dependencies of the executable/library
## as an example, message headers may need to be generated before nodes
add_dependencies(simulation_servo_agent ${simulation_servo_agent_EXPORTED_TARGETS} {catkin_EXPORTED_TARGETS} dobot_generate_messages_cpp)

## Specify libraries to link a library or executable target against
target_link_libraries(simulation_servo_agent
   ${catkin_LIBRARIES}
   ${Boost_LIBRARIES}
   rt
)
set_target_properties(simulation_servo_agent PROPERTIES COMPILE_FLAGS " ")

## for no noise simulation
add_dependencies(simulation_servo_agent_no_noise ${simulation_servo_agent_no_noise_EXPORTED_TARGETS} {catkin_EXPORTED_TARGETS} dobot_generate_messages_cpp)

## Specify libraries to link a library or executable target against
target_link_libraries(simulation_servo_agent_no_noise
   ${catkin_LIBRARIES}
   ${Boost_LIBRARIES}
   rt
)
set_target_properties(simulation_servo_agent_no_noise PROPERTIES COMPILE_FLAGS " ")

# add -fpic option, otherwise fail
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fpic")
SET( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fpermissive -std=c++11" )
SET( CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -include stdbool.h" )

## Declare a C++ library
# add_library(${PROJECT_NAME}
#   src/${PROJECT_NAME}/dobot.cpp
# )

## Add cmake target dependencies of the library
## as an example, code may need to be generated before libraries
## either from message generation or dynamic reconfigure
# add_dependencies(${PROJECT_NAME} ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})

## Declare a C++ executable
## With catkin_make all packages are built within a single CMake context
## The recommended prefix ensures that target names across packages don't collide
# add_executable(${PROJECT_NAME}_node src/dobot_node.cpp)

## Rename C++ executable without prefix
## The above recommended prefix causes long target names, the following renames the
## target back to the shorter version for ease of user use
## e.g. "rosrun someones_pkg node" instead of "rosrun someones_pkg someones_pkg_node"
# set_target_properties(${PROJECT_NAME}_node PROPERTIES OUTPUT_NAME node PREFIX "")

## Add cmake target dependencies of the executable
## same as for the library above
# add_dependencies(${PROJECT_NAME}_node ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})

## Specify libraries to link a library or executable target against
# target_link_libraries(${PROJECT_NAME}_node
#   ${catkin_LIBRARIES}
# )

#############
## Install ##
#############

# all install targets should use catkin DESTINATION variables
# See http://ros.org/doc/api/catkin/html/adv_user_guide/variables.html

## Mark executable scripts (Python etc.) for installation
## in contrast to setup.py, you can choose the destination
# install(PROGRAMS
#   scripts/my_python_script
#   DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
# )

## Mark executables and/or libraries for installation
# install(TARGETS ${PROJECT_NAME} ${PROJECT_NAME}_node
#   ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
#   LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
#   RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
# )

## Mark cpp header files for installation
# install(DIRECTORY include/${PROJECT_NAME}/
#   DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
#   FILES_MATCHING PATTERN "*.h"
#   PATTERN ".svn" EXCLUDE
# )

## Mark other files for installation (e.g. launch and bag files, etc.)
# install(FILES
#   # myfile1
#   # myfile2
#   DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
# )

#############
## Testing ##
#############

## Add gtest based cpp test target and link libraries
# catkin_add_gtest(${PROJECT_NAME}-test test/test_dobot.cpp)
# if(TARGET ${PROJECT_NAME}-test)
#   target_link_libraries(${PROJECT_NAME}-test ${PROJECT_NAME})
# endif()

## Add folders to be run by python nosetests
# catkin_add_nosetests(test)
