//
//  simulation_servo_agent.h
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


#ifndef RTW_HEADER_simulation_servo_agent_h_
#define RTW_HEADER_simulation_servo_agent_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#ifndef simulation_servo_agent_COMMON_INCLUDES_
# define simulation_servo_agent_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "slros_initialize.h"
#include "nesl_rtw.h"
#include "simulation_servo_agent_9c2ac8b8_1_gateway.h"
#endif                                 // simulation_servo_agent_COMMON_INCLUDES_ 

#include "simulation_servo_agent_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

// Block signals (auto storage)
typedef struct {
  real_T csumrev[999];
  real_T csumrev_m[299];
  real_T dv0[28];
  real_T dv1[28];
  real_T dv2[28];
  real_T dv3[16];
  real_T dv4[16];
  SL_Bus_simulation_servo_agent_dobot_motor_raw_data Constant;// '<S25>/Constant' 
  SL_Bus_simulation_servo_agent_dobot_motor_raw_data BusAssignment2;// '<S9>/Bus Assignment2' 
  // char_T cv0[50];
  // char_T cv1[46];
  std::string cv0;    
  std::string cv1;
  NeModelParameters modelParameters;
  NeModelParameters modelParameters_c;
  NeModelParameters modelParameters_k;
  NeModelParameters modelParameters_cx;
  // char_T cv2[42];
  // char_T cv3[39];
  // char_T cv4[34];
  std::string cv2;    
  std::string cv3;    
  std::string cv4;    
  NeParameterBundle expl_temp;
  int_T iv0[6];
  int_T iv1[6];
  int_T iv2[6];
  real_T OUTPUT_1_0[3];                // '<S35>/OUTPUT_1_0'
  int_T iv3[5];
  int_T iv4[5];
  real_T DataTypeConversion2;          // '<S2>/Data Type Conversion2'
  real_T DataTypeConversion;           // '<S2>/Data Type Conversion'
  real_T GetParameter;                 // '<S2>/Get Parameter'
  real_T GetParameter2;                // '<S2>/Get Parameter2'
  real_T Saturate;                     // '<S5>/Saturate'
  real_T INPUT_2_1_1[4];               // '<S35>/INPUT_2_1_1'
  real_T INPUT_1_1_1[4];               // '<S35>/INPUT_1_1_1'
  real_T INPUT_4_1_1[4];               // '<S35>/INPUT_4_1_1'
  real_T Switch;                       // '<S3>/Switch'
  real_T INPUT_3_1_1[4];               // '<S35>/INPUT_3_1_1'
  real_T STATE_1[12];                  // '<S35>/STATE_1'
  real_T Integ4;                       // '<S18>/Integ4'
  real_T K1;                           // '<S18>/K1'
  real_T SFunction;                    // '<S19>/S-Function'
  real_T DynamicAWGN;                  // '<S20>/Dynamic AWGN'
  real_T Constant3;                    // '<S9>/Constant3'
  real_T Constant6;                    // '<S9>/Constant6'
  real_T Divide2;                      // '<S9>/Divide2'
  real_T OUTPUT_1_2;                   // '<S35>/OUTPUT_1_2'
  real_T MovingAverage1;               // '<S3>/Moving Average1'
  real_T time;
  real_T time_b;
  real_T time_p;
  real_T time_c;
  real_T cumRevIndex;
  real_T csum;
  real_T z;
  real_T Sum3;                         // '<S3>/Sum3'
  real_T Abs;                          // '<S3>/Abs'
  real_T FilterCoefficient;            // '<S5>/Filter Coefficient'
  real_T OUTPUT_1_1;                   // '<S35>/OUTPUT_1_1'
  real_T IntegralGain;                 // '<S5>/Integral Gain'
  real_T r;
  real_T x;
  real_T s;
  real_T y;
  real_T d0;
  real_T time_f;
  real_T time_g;
  real_T time_g1;
  real_T time_m;
  real_T cumRevIndex_n;
  real_T csum_p;
  SL_Bus_simulation_servo_agent_std_msgs_Float32 In1;// '<S38>/In1'
  int32_T z_tmp;
  int32_T i;
  SL_Bus_simulation_servo_agent_std_msgs_Float32 b_varargout_2;
} B_simulation_servo_agent_T;

// Block states (auto storage) for system '<Root>'
typedef struct {
  dsp_private_SlidingWindowAver_T gobj_0;// '<S3>/Moving Average'
  dsp_private_SlidingWindowAver_T gobj_1;// '<S3>/Moving Average'
  dsp_private_SlidingWindowAv_l_T gobj_0_a;// '<S3>/Moving Average1'
  dsp_private_SlidingWindowAv_l_T gobj_1_p;// '<S3>/Moving Average1'
  dsp_MovingAverage_simulation__T obj; // '<S3>/Moving Average'
  dsp_MovingAverage_simulatio_l_T obj_i;// '<S3>/Moving Average1'
  robotics_slros_internal_blo_l_T obj_k;// '<S2>/Get Parameter'
  robotics_slros_internal_blo_l_T obj_c;// '<S2>/Get Parameter2'
  robotics_slros_internal_blo_l_T obj_cm;// '<S2>/Get Parameter1'
  real_T UnitDelay_DSTATE;             // '<S3>/Unit Delay'
  real_T Filter_DSTATE;                // '<S5>/Filter'
  real_T Integrator_DSTATE;            // '<S5>/Integrator'
  real_T INPUT_2_1_1_discrete[2];      // '<S35>/INPUT_2_1_1'
  real_T INPUT_1_1_1_discrete[2];      // '<S35>/INPUT_1_1_1'
  real_T INPUT_4_1_1_discrete[2];      // '<S35>/INPUT_4_1_1'
  real_T UnitDelay2_DSTATE;            // '<S3>/Unit Delay2'
  real_T INPUT_3_1_1_discrete[2];      // '<S35>/INPUT_3_1_1'
  real_T STATE_1_DiscStates[11];       // '<S35>/STATE_1'
  real_T Integ4_DSTATE;                // '<S18>/Integ4'
  real_T UnitDelay2_DSTATE_m;          // '<S7>/Unit Delay2'
  real_T TimeStampA;                   // '<S3>/Derivative'
  real_T LastUAtTimeA;                 // '<S3>/Derivative'
  real_T TimeStampB;                   // '<S3>/Derivative'
  real_T LastUAtTimeB;                 // '<S3>/Derivative'
  real_T STDDEV;                       // '<S20>/Dynamic AWGN'
  real_T SFunction_RWORK;              // '<S19>/S-Function'
  void* STATE_1_Simulator;             // '<S35>/STATE_1'
  void* STATE_1_SimulationData;        // '<S35>/STATE_1'
  void* STATE_1_DiagnosticManager;     // '<S35>/STATE_1'
  void* STATE_1_Logger;                // '<S35>/STATE_1'
  void* STATE_1_SampleTimeIdx;         // '<S35>/STATE_1'
  void* SINK_1_Simulator;              // '<S35>/SINK_1'
  void* SINK_1_SimulationData;         // '<S35>/SINK_1'
  void* SINK_1_DiagnosticManager;      // '<S35>/SINK_1'
  void* SINK_1_Logger;                 // '<S35>/SINK_1'
  void* SINK_1_SampleTimeIdx;          // '<S35>/SINK_1'
  void* OUTPUT_1_0_Simulator;          // '<S35>/OUTPUT_1_0'
  void* OUTPUT_1_0_SimulationData;     // '<S35>/OUTPUT_1_0'
  void* OUTPUT_1_0_DiagnosticManager;  // '<S35>/OUTPUT_1_0'
  void* OUTPUT_1_0_Logger;             // '<S35>/OUTPUT_1_0'
  void* OUTPUT_1_0_SampleTimeIdx;      // '<S35>/OUTPUT_1_0'
  void* OUTPUT_1_1_Simulator;          // '<S35>/OUTPUT_1_1'
  void* OUTPUT_1_1_SimulationData;     // '<S35>/OUTPUT_1_1'
  void* OUTPUT_1_1_DiagnosticManager;  // '<S35>/OUTPUT_1_1'
  void* OUTPUT_1_1_Logger;             // '<S35>/OUTPUT_1_1'
  void* OUTPUT_1_1_SampleTimeIdx;      // '<S35>/OUTPUT_1_1'
  void *SFunction_PWORK;               // '<S19>/S-Function'
  void* OUTPUT_1_2_Simulator;          // '<S35>/OUTPUT_1_2'
  void* OUTPUT_1_2_SimulationData;     // '<S35>/OUTPUT_1_2'
  void* OUTPUT_1_2_DiagnosticManager;  // '<S35>/OUTPUT_1_2'
  void* OUTPUT_1_2_Logger;             // '<S35>/OUTPUT_1_2'
  void* OUTPUT_1_2_SampleTimeIdx;      // '<S35>/OUTPUT_1_2'
  uint32_T RandomSource_SEED_DWORK;    // '<S20>/Random Source'
  uint32_T RandomSource_STATE_DWORK[2];// '<S20>/Random Source'
  robotics_slros_internal_block_T obj_h;// '<S26>/SinkBlock'
  robotics_slros_internal_bl_lh_T obj_j;// '<S36>/Set Parameter'
  robotics_slros_internal_bl_lh_T obj_f;// '<S36>/Set Parameter1'
  robotics_slros_internal_b_lhv_T obj_a;// '<S37>/SourceBlock'
  int_T STATE_1_Modes;                 // '<S35>/STATE_1'
  int_T SFunction_IWORK;               // '<S19>/S-Function'
  int8_T If_ActiveSubsystem;           // '<S2>/If'
  uint8_T Integ4_SYSTEM_ENABLE;        // '<S18>/Integ4'
  boolean_T objisempty;                // '<S37>/SourceBlock'
  boolean_T objisempty_a;              // '<S36>/Set Parameter'
  boolean_T objisempty_m;              // '<S36>/Set Parameter1'
  boolean_T objisempty_n;              // '<S2>/Get Parameter'
  boolean_T objisempty_l;              // '<S2>/Get Parameter2'
  boolean_T objisempty_d;              // '<S2>/Get Parameter1'
  boolean_T STATE_1_CallSimulatorOutput;// '<S35>/STATE_1'
  boolean_T SINK_1_CallSimulatorOutput;// '<S35>/SINK_1'
  boolean_T OUTPUT_1_0_CallSimulatorOutput;// '<S35>/OUTPUT_1_0'
  boolean_T OUTPUT_1_1_CallSimulatorOutput;// '<S35>/OUTPUT_1_1'
  boolean_T OUTPUT_1_2_CallSimulatorOutput;// '<S35>/OUTPUT_1_2'
  boolean_T objisempty_mz;             // '<S26>/SinkBlock'
  boolean_T objisempty_b;              // '<S3>/Moving Average1'
  boolean_T objisempty_o;              // '<S3>/Moving Average'
  boolean_T LoopSubsystem_MODE;        // '<Root>/Loop Subsystem'
} DW_simulation_servo_agent_T;

// Parameters (auto storage)
struct P_simulation_servo_agent_T_ {
  real_T DiscretePIDController_D;      // Mask Parameter: DiscretePIDController_D
                                       //  Referenced by: '<S5>/Derivative Gain'

  real_T DiscretePIDController_I;      // Mask Parameter: DiscretePIDController_I
                                       //  Referenced by: '<S5>/Integral Gain'

  real_T DiscretePIDController_LowerSatu;// Mask Parameter: DiscretePIDController_LowerSatu
                                         //  Referenced by: '<S5>/Saturate'

  real_T RandomSource_MeanVal;         // Mask Parameter: RandomSource_MeanVal
                                       //  Referenced by: '<S20>/Random Source'

  real_T DiscretePIDController_N;      // Mask Parameter: DiscretePIDController_N
                                       //  Referenced by: '<S5>/Filter Coefficient'

  real_T DiscretePIDController_P;      // Mask Parameter: DiscretePIDController_P
                                       //  Referenced by: '<S5>/Proportional Gain'

  real_T DiscretePIDController_UpperSatu;// Mask Parameter: DiscretePIDController_UpperSatu
                                         //  Referenced by: '<S5>/Saturate'

  uint32_T AWGNChannel_seed;           // Mask Parameter: AWGNChannel_seed
                                       //  Referenced by:
                                       //    '<S20>/Dynamic AWGN'
                                       //    '<S20>/Random Source'

  SL_Bus_simulation_servo_agent_dobot_motor_raw_data Constant_Value;// Computed Parameter: Constant_Value
                                                                    //  Referenced by: '<S25>/Constant'

  real_T SpeedLimitation_UpperSat;     // Expression: 57
                                       //  Referenced by: '<S3>/Speed Limitation'

  real_T SpeedLimitation_LowerSat;     // Expression: -57
                                       //  Referenced by: '<S3>/Speed Limitation'

  real_T UnitDelay_InitialCondition;   // Expression: 0
                                       //  Referenced by: '<S3>/Unit Delay'

  real_T Filter_gainval;               // Computed Parameter: Filter_gainval
                                       //  Referenced by: '<S5>/Filter'

  real_T Filter_IC;                    // Expression: InitialConditionForFilter
                                       //  Referenced by: '<S5>/Filter'

  real_T Integrator_gainval;           // Computed Parameter: Integrator_gainval
                                       //  Referenced by: '<S5>/Integrator'

  real_T Integrator_IC;                // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S5>/Integrator'

  real_T UnitDelay2_InitialCondition;  // Expression: 0
                                       //  Referenced by: '<S3>/Unit Delay2'

  real_T Switch_Threshold;             // Expression: 1
                                       //  Referenced by: '<S3>/Switch'

  real_T GAIN_Gain;                    // Expression: pm_unit('rad/s', 'rpm', 'linear')
                                       //  Referenced by: '<S29>/GAIN'

  real_T Constant3_Value;              // Expression: 0.229
                                       //  Referenced by: '<S10>/Constant3'

  real_T Constant4_Value;              // Expression: 0.229
                                       //  Referenced by: '<S10>/Constant4'

  real_T Integ4_gainval;               // Computed Parameter: Integ4_gainval
                                       //  Referenced by: '<S18>/Integ4'

  real_T Integ4_IC;                    // Expression: 0
                                       //  Referenced by: '<S18>/Integ4'

  real_T K1_Value;                     // Expression: sps.Delay
                                       //  Referenced by: '<S18>/K1'

  real_T SFunction_P1_Size[2];         // Computed Parameter: SFunction_P1_Size
                                       //  Referenced by: '<S19>/S-Function'

  real_T SFunction_P1;                 // Expression: MaxDelay
                                       //  Referenced by: '<S19>/S-Function'

  real_T SFunction_P2_Size[2];         // Computed Parameter: SFunction_P2_Size
                                       //  Referenced by: '<S19>/S-Function'

  real_T SFunction_P2;                 // Expression: Ts
                                       //  Referenced by: '<S19>/S-Function'

  real_T SFunction_P3_Size[2];         // Computed Parameter: SFunction_P3_Size
                                       //  Referenced by: '<S19>/S-Function'

  real_T SFunction_P3;                 // Expression: InitialValue
                                       //  Referenced by: '<S19>/S-Function'

  real_T SFunction_P4_Size[2];         // Computed Parameter: SFunction_P4_Size
                                       //  Referenced by: '<S19>/S-Function'

  real_T SFunction_P4;                 // Expression: DFT
                                       //  Referenced by: '<S19>/S-Function'

  real_T RandomSource_VarianceRTP;     // Computed Parameter: RandomSource_VarianceRTP
                                       //  Referenced by: '<S20>/Random Source'

  real_T UnitDelay2_InitialCondition_f;// Expression: 0
                                       //  Referenced by: '<S7>/Unit Delay2'

  real_T Constant3_Value_j;            // Expression: 50
                                       //  Referenced by: '<S9>/Constant3'

  real_T Constant6_Value;              // Expression: 11.1
                                       //  Referenced by: '<S9>/Constant6'

  real_T GetParameter1_SampleTime;     // Expression: SampleTime
                                       //  Referenced by: '<S2>/Get Parameter1'

  real_T GetParameter2_SampleTime;     // Expression: SampleTime
                                       //  Referenced by: '<S2>/Get Parameter2'

  real_T GetParameter_SampleTime;      // Expression: SampleTime
                                       //  Referenced by: '<S2>/Get Parameter'

  real_T Constant_Value_b;             // Expression: 0.0
                                       //  Referenced by: '<S36>/Constant'

  SL_Bus_simulation_servo_agent_std_msgs_Float32 Out1_Y0;// Computed Parameter: Out1_Y0
                                                         //  Referenced by: '<S38>/Out1'

  SL_Bus_simulation_servo_agent_std_msgs_Float32 Constant_Value_i;// Computed Parameter: Constant_Value_i
                                                                  //  Referenced by: '<S37>/Constant'

};

// Real-time Model Data Structure
struct tag_RTM_simulation_servo_agent_T {
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  //
  //  NonInlinedSFcns:
  //  The following substructure contains information regarding
  //  non-inlined s-functions used in the model.

  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[2];
    SimStruct childSFunctions[1];
    SimStruct *childSFunctionPtrs[1];
    struct _ssBlkInfo2 blkInfo2[1];
    struct _ssSFcnModelMethods2 methods2[1];
    struct _ssSFcnModelMethods3 methods3[1];
    struct _ssSFcnModelMethods4 methods4[1];
    struct _ssStatesInfo2 statesInfo2[1];
    ssPeriodicStatesInfo periodicStatesInfo[1];
    struct _ssPortInfo2 inputOutputPortInfo2[1];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn0;
  } NonInlinedSFcns;

  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;

  //
  //  Sizes:
  //  The following substructure contains sizes information
  //  for many of the model attributes such as inputs, outputs,
  //  dwork, sample times, etc.

  struct {
    uint32_T options;
    int_T numContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    time_T stepSize;
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    time_T stepSize1;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;
};

// Block parameters (auto storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_simulation_servo_agent_T simulation_servo_agent_P;

#ifdef __cplusplus

}
#endif

// Block signals (auto storage)
extern B_simulation_servo_agent_T simulation_servo_agent_B;

// Block states (auto storage)
extern DW_simulation_servo_agent_T simulation_servo_agent_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void simulation_servo_agent_initialize(void);
  extern void simulation_servo_agent_step(void);
  extern void simulation_servo_agent_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_simulation_servo_agent_T *const simulation_servo_agent_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S3>/Clock1' : Unused code path elimination
//  Block '<S4>/Scope1' : Unused code path elimination
//  Block '<S18>/Digital  Clock' : Unused code path elimination
//  Block '<S18>/Gain' : Unused code path elimination
//  Block '<S18>/Gain1' : Unused code path elimination
//  Block '<S18>/K2' : Unused code path elimination
//  Block '<S18>/Product' : Unused code path elimination
//  Block '<S18>/Relational Operator' : Unused code path elimination
//  Block '<S18>/Sum1' : Unused code path elimination
//  Block '<S18>/Sum5' : Unused code path elimination
//  Block '<S18>/Sum7' : Unused code path elimination
//  Block '<S18>/Switch' : Unused code path elimination
//  Block '<S18>/Unit Delay' : Unused code path elimination
//  Block '<S18>/Unit Delay1' : Unused code path elimination
//  Block '<S9>/Constant' : Unused code path elimination
//  Block '<S9>/Constant1' : Unused code path elimination
//  Block '<S9>/Constant2' : Unused code path elimination
//  Block '<S9>/Current//torque constant' : Unused code path elimination
//  Block '<S9>/Divide' : Unused code path elimination
//  Block '<S9>/Product' : Unused code path elimination
//  Block '<S9>/Product1' : Unused code path elimination
//  Block '<S9>/Product2' : Unused code path elimination
//  Block '<S9>/Product3' : Unused code path elimination
//  Block '<S9>/Rate Transition2' : Unused code path elimination
//  Block '<S9>/Rate Transition6' : Unused code path elimination
//  Block '<S3>/Scope' : Unused code path elimination
//  Block '<S3>/Scope1' : Unused code path elimination
//  Block '<S3>/Scope2' : Unused code path elimination
//  Block '<S3>/Scope3' : Unused code path elimination
//  Block '<S3>/Scope4' : Unused code path elimination
//  Block '<S3>/Scope5' : Unused code path elimination
//  Block '<S3>/Scope6' : Unused code path elimination
//  Block '<S3>/Scope7' : Unused code path elimination
//  Block '<S3>/Scope8' : Unused code path elimination
//  Block '<S3>/To Workspace' : Unused code path elimination
//  Block '<S3>/To Workspace1' : Unused code path elimination
//  Block '<S3>/To Workspace2' : Unused code path elimination
//  Block '<S3>/To Workspace3' : Unused code path elimination
//  Block '<S3>/To Workspace4' : Unused code path elimination
//  Block '<S9>/Rate Transition1' : Eliminated since input and output rates are identical
//  Block '<S9>/Rate Transition4' : Eliminated since input and output rates are identical
//  Block '<S9>/Rate Transition7' : Eliminated since input and output rates are identical
//  Block '<S2>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S2>/Data Type Conversion3' : Eliminate redundant data type conversion


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'simulation_servo_agent'
//  '<S1>'   : 'simulation_servo_agent/Loop Subsystem'
//  '<S2>'   : 'simulation_servo_agent/ROS_Speed_Request'
//  '<S3>'   : 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem'
//  '<S4>'   : 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor'
//  '<S5>'   : 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Discrete PID Controller'
//  '<S6>'   : 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Mean'
//  '<S7>'   : 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Meas I'
//  '<S8>'   : 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Meas Vin'
//  '<S9>'   : 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/ROS'
//  '<S10>'  : 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Sensor'
//  '<S11>'  : 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Simulink-PS Converter'
//  '<S12>'  : 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Simulink-PS Converter1'
//  '<S13>'  : 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Simulink-PS Converter2'
//  '<S14>'  : 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Simulink-PS Converter3'
//  '<S15>'  : 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Solver Configuration1'
//  '<S16>'  : 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/PS-Simulink Converter'
//  '<S17>'  : 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/PS-Simulink Converter/EVAL_KEY'
//  '<S18>'  : 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Mean/Model'
//  '<S19>'  : 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Mean/Model/Discrete Variable Time Delay'
//  '<S20>'  : 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Meas I/AWGN Channel'
//  '<S21>'  : 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Meas I/PS-Simulink Converter'
//  '<S22>'  : 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Meas I/PS-Simulink Converter/EVAL_KEY'
//  '<S23>'  : 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Meas Vin/PS-Simulink Converter2'
//  '<S24>'  : 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Meas Vin/PS-Simulink Converter2/EVAL_KEY'
//  '<S25>'  : 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/ROS/Blank Message2'
//  '<S26>'  : 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/ROS/Publish2'
//  '<S27>'  : 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Sensor/PS-Simulink Converter1'
//  '<S28>'  : 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Sensor/PS-Simulink Converter2'
//  '<S29>'  : 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Sensor/PS-Simulink Converter1/EVAL_KEY'
//  '<S30>'  : 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Sensor/PS-Simulink Converter2/EVAL_KEY'
//  '<S31>'  : 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Simulink-PS Converter/EVAL_KEY'
//  '<S32>'  : 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Simulink-PS Converter1/EVAL_KEY'
//  '<S33>'  : 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Simulink-PS Converter2/EVAL_KEY'
//  '<S34>'  : 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Simulink-PS Converter3/EVAL_KEY'
//  '<S35>'  : 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Solver Configuration1/EVAL_KEY'
//  '<S36>'  : 'simulation_servo_agent/ROS_Speed_Request/If Action Subsystem'
//  '<S37>'  : 'simulation_servo_agent/ROS_Speed_Request/Subscribe'
//  '<S38>'  : 'simulation_servo_agent/ROS_Speed_Request/Subscribe/Enabled Subsystem'

#endif                                 // RTW_HEADER_simulation_servo_agent_h_
