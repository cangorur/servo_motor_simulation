//
// File: simulation_servo_agent_data.cpp
//
// Code generated for Simulink model 'simulation_servo_agent'.
//
// Model version                  : 1.801
// Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
// C/C++ source code generated on : Wed Mar 20 15:49:16 2019
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "simulation_servo_agent.h"
#include "simulation_servo_agent_private.h"

// Block parameters (auto storage)
P_simulation_servo_agent_T simulation_servo_agent_P = {
  // Mask Parameter: DiscretePIDController_D
  //  Referenced by: '<S5>/Derivative Gain'

  0.007,

  // Mask Parameter: DiscretePIDController_I
  //  Referenced by: '<S5>/Integral Gain'

  1.5,

  // Mask Parameter: DiscretePIDController_LowerSatu
  //  Referenced by: '<S5>/Saturate'

  -11.1,

  // Mask Parameter: RandomSource_MeanVal
  //  Referenced by: '<S20>/Random Source'

  0.0,

  // Mask Parameter: DiscretePIDController_N
  //  Referenced by: '<S5>/Filter Coefficient'

  55.0,

  // Mask Parameter: DiscretePIDController_P
  //  Referenced by: '<S5>/Proportional Gain'

  0.12,

  // Mask Parameter: DiscretePIDController_UpperSatu
  //  Referenced by: '<S5>/Saturate'

  11.1,

  // Mask Parameter: AWGNChannel_seed
  //  Referenced by:
  //    '<S20>/Dynamic AWGN'
  //    '<S20>/Random Source'

  67U,

  // Computed Parameter: Constant_Value
  //  Referenced by: '<S25>/Constant'

  {
    0.0,                               // RawTimestamp
    0.0,                               // RawRequestedVelocity
    0.0,                               // RawVelocity
    0.0,                               // RawCurrent
    0.0,                               // RawTemperature
    0.0,                               // RawSupplyVoltage
    0.0,                               // RawPwm
    0.0,                               // RawTorque
    0.0                                // RawAcceleration
  },

  // Expression: 57
  //  Referenced by: '<S3>/Speed Limitation'

  57.0,

  // Expression: -57
  //  Referenced by: '<S3>/Speed Limitation'

  -57.0,

  // Expression: 0
  //  Referenced by: '<S3>/Unit Delay'

  0.0,

  // Computed Parameter: Filter_gainval
  //  Referenced by: '<S5>/Filter'

  0.001,

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S5>/Filter'

  0.0,

  // Computed Parameter: Integrator_gainval
  //  Referenced by: '<S5>/Integrator'

  0.001,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S5>/Integrator'

  0.0,

  // Expression: 0
  //  Referenced by: '<S3>/Unit Delay2'

  0.0,

  // Expression: 1
  //  Referenced by: '<S3>/Switch'

  1.0,

  // Expression: pm_unit('rad/s', 'rpm', 'linear')
  //  Referenced by: '<S29>/GAIN'

  9.5492965855137211,

  // Expression: 0.229
  //  Referenced by: '<S10>/Constant3'

  0.229,

  // Expression: 0.229
  //  Referenced by: '<S10>/Constant4'

  0.229,

  // Computed Parameter: Integ4_gainval
  //  Referenced by: '<S18>/Integ4'

  0.0005,

  // Expression: 0
  //  Referenced by: '<S18>/Integ4'

  0.0,

  // Expression: sps.Delay
  //  Referenced by: '<S18>/K1'

  0.1,

  // Computed Parameter: SFunction_P1_Size
  //  Referenced by: '<S19>/S-Function'

  { 1.0, 1.0 },

  // Expression: MaxDelay
  //  Referenced by: '<S19>/S-Function'

  0.10200000000000001,

  // Computed Parameter: SFunction_P2_Size
  //  Referenced by: '<S19>/S-Function'

  { 1.0, 1.0 },

  // Expression: Ts
  //  Referenced by: '<S19>/S-Function'

  0.001,

  // Computed Parameter: SFunction_P3_Size
  //  Referenced by: '<S19>/S-Function'

  { 1.0, 1.0 },

  // Expression: InitialValue
  //  Referenced by: '<S19>/S-Function'

  0.0,

  // Computed Parameter: SFunction_P4_Size
  //  Referenced by: '<S19>/S-Function'

  { 1.0, 1.0 },

  // Expression: DFT
  //  Referenced by: '<S19>/S-Function'

  1.0,

  // Computed Parameter: RandomSource_VarianceRTP
  //  Referenced by: '<S20>/Random Source'

  1.0,

  // Expression: 0
  //  Referenced by: '<S7>/Unit Delay2'

  0.0,

  // Expression: 50
  //  Referenced by: '<S9>/Constant3'

  50.0,

  // Expression: 11.1
  //  Referenced by: '<S9>/Constant6'

  11.1,

  // Expression: SampleTime
  //  Referenced by: '<S2>/Get Parameter1'

  -1.0,

  // Expression: SampleTime
  //  Referenced by: '<S2>/Get Parameter2'

  -1.0,

  // Expression: SampleTime
  //  Referenced by: '<S2>/Get Parameter'

  -1.0,

  // Expression: 0.0
  //  Referenced by: '<S36>/Constant'

  0.0,

  // Computed Parameter: Out1_Y0
  //  Referenced by: '<S38>/Out1'

  {
    0.0F                               // Data
  },

  // Computed Parameter: Constant_Value_i
  //  Referenced by: '<S37>/Constant'

  {
    0.0F                               // Data
  }
};

//
// File trailer for generated code.
//
// [EOF]
//
