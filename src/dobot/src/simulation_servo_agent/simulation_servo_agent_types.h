//
//  simulation_servo_agent_types.h
//
//  Code generation for model "simulation_servo_agent".
//
//  Model version              : 1.801
//  Simulink Coder version : 8.13 (R2017b) 24-Jul-2017
//  C++ source code generated on : Wed Mar 20 15:49:16 2019
//
//  Target selection: ert.tlc
//  Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
//  Code generation objectives: Unspecified
//  Validation result: Not run


#ifndef RTW_HEADER_simulation_servo_agent_types_h_
#define RTW_HEADER_simulation_servo_agent_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_simulation_servo_agent_dobot_motor_raw_data_
#define DEFINED_TYPEDEF_FOR_SL_Bus_simulation_servo_agent_dobot_motor_raw_data_

typedef struct {
  real_T RawTimestamp;
  real_T RawRequestedVelocity;
  real_T RawVelocity;
  real_T RawCurrent;
  real_T RawTemperature;
  real_T RawSupplyVoltage;
  real_T RawPwm;
  real_T RawTorque;
  real_T RawAcceleration;
} SL_Bus_simulation_servo_agent_dobot_motor_raw_data;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_simulation_servo_agent_std_msgs_Float32_
#define DEFINED_TYPEDEF_FOR_SL_Bus_simulation_servo_agent_std_msgs_Float32_

typedef struct {
  real32_T Data;
} SL_Bus_simulation_servo_agent_std_msgs_Float32;

#endif

#ifndef typedef_dsp_private_SlidingWindowAver_T
#define typedef_dsp_private_SlidingWindowAver_T

typedef struct {
  int32_T isInitialized;
  real_T pCumSum;
  real_T pCumSumRev[999];
  real_T pCumRevIndex;
} dsp_private_SlidingWindowAver_T;

#endif                                 //typedef_dsp_private_SlidingWindowAver_T

#ifndef typedef_dsp_private_SlidingWindowAv_l_T
#define typedef_dsp_private_SlidingWindowAv_l_T

typedef struct {
  int32_T isInitialized;
  real_T pCumSum;
  real_T pCumSumRev[299];
  real_T pCumRevIndex;
} dsp_private_SlidingWindowAv_l_T;

#endif                                 //typedef_dsp_private_SlidingWindowAv_l_T

#ifndef typedef_robotics_slros_internal_block_T
#define typedef_robotics_slros_internal_block_T

typedef struct {
  int32_T isInitialized;
} robotics_slros_internal_block_T;

#endif                                 //typedef_robotics_slros_internal_block_T

#ifndef typedef_robotics_slros_internal_blo_l_T
#define typedef_robotics_slros_internal_blo_l_T

typedef struct {
  int32_T isInitialized;
  real_T SampleTime;
} robotics_slros_internal_blo_l_T;

#endif                                 //typedef_robotics_slros_internal_blo_l_T

#ifndef typedef_robotics_slros_internal_bl_lh_T
#define typedef_robotics_slros_internal_bl_lh_T

typedef struct {
  int32_T isInitialized;
} robotics_slros_internal_bl_lh_T;

#endif                                 //typedef_robotics_slros_internal_bl_lh_T

#ifndef typedef_robotics_slros_internal_b_lhv_T
#define typedef_robotics_slros_internal_b_lhv_T

typedef struct {
  int32_T isInitialized;
} robotics_slros_internal_b_lhv_T;

#endif                                 //typedef_robotics_slros_internal_b_lhv_T

#ifndef typedef_cell_wrap_simulation_servo_ag_T
#define typedef_cell_wrap_simulation_servo_ag_T

typedef struct {
  uint32_T f1[8];
} cell_wrap_simulation_servo_ag_T;

#endif                                 //typedef_cell_wrap_simulation_servo_ag_T

#ifndef typedef_dsp_MovingAverage_simulation__T
#define typedef_dsp_MovingAverage_simulation__T

typedef struct {
  int32_T isInitialized;
  boolean_T TunablePropsChanged;
  cell_wrap_simulation_servo_ag_T inputVarSize;
  dsp_private_SlidingWindowAver_T *pStatistic;
  int32_T NumChannels;
} dsp_MovingAverage_simulation__T;

#endif                                 //typedef_dsp_MovingAverage_simulation__T

#ifndef typedef_dsp_MovingAverage_simulatio_l_T
#define typedef_dsp_MovingAverage_simulatio_l_T

typedef struct {
  int32_T isInitialized;
  boolean_T TunablePropsChanged;
  cell_wrap_simulation_servo_ag_T inputVarSize;
  dsp_private_SlidingWindowAv_l_T *pStatistic;
  int32_T NumChannels;
} dsp_MovingAverage_simulatio_l_T;

#endif                                 //typedef_dsp_MovingAverage_simulatio_l_T

// Parameters (auto storage)
typedef struct P_simulation_servo_agent_T_ P_simulation_servo_agent_T;

// Forward declaration for rtModel
typedef struct tag_RTM_simulation_servo_agent_T
  RT_MODEL_simulation_servo_agent_T;

#endif                                 // RTW_HEADER_simulation_servo_agent_types_h_ 
