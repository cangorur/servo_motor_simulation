//
//  simulation_servo_agent_private.h
//
//  Code generation for model "simulation_servo_agent".
//
//  Model version              : 1.802
//  Simulink Coder version : 8.13 (R2017b) 24-Jul-2017
//  C++ source code generated on : Wed Mar 20 22:27:18 2019
//
//  Target selection: ert.tlc
//  Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
//  Code generation objectives: Unspecified
//  Validation result: Not run


#ifndef RTW_HEADER_simulation_servo_agent_private_h_
#define RTW_HEADER_simulation_servo_agent_private_h_
#include "rtwtypes.h"

// Private macros used by the generated code to access rtModel
#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

extern "C" void sfun_discreteVariableDelay(SimStruct *rts);

#endif                                 // RTW_HEADER_simulation_servo_agent_private_h_ 
