//
//  simulation_servo_agent.cpp
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


#include "simulation_servo_agent.h"
#include "simulation_servo_agent_private.h"
#define simulat_ParameterInitialValue_l (0.0)
#define simulatio_ParameterInitialValue (false)
#define simulation_se_MessageQueueLen_l (1)
#define simulation_serv_MessageQueueLen (105)

using namespace std;

// Block signals (auto storage)
B_simulation_servo_agent_T simulation_servo_agent_B;

// Block states (auto storage)
DW_simulation_servo_agent_T simulation_servo_agent_DW;

// Real-time model
RT_MODEL_simulation_servo_agent_T simulation_servo_agent_M_;
RT_MODEL_simulation_servo_agent_T *const simulation_servo_agent_M =
  &simulation_servo_agent_M_;

// Forward declaration for local functions
static real_T AbstractMovingStatistic_stepImp(const
  dsp_MovingAverage_simulation__T *obj, real_T u);
static real_T AbstractMovingStatistic_stepImp(const
  dsp_MovingAverage_simulation__T *obj, real_T u)
{
  real_T y;
  dsp_private_SlidingWindowAver_T *obj_0;
  int32_T i;
  obj_0 = obj->pStatistic;
  if (obj_0->isInitialized != 1) {
    obj_0->isInitialized = 1;
    obj_0->pCumSum = 0.0;
    for (i = 0; i < 999; i++) {
      obj_0->pCumSumRev[i] = 0.0;
    }

    obj_0->pCumRevIndex = 1.0;
    obj_0->pCumSum = 0.0;
    for (i = 0; i < 999; i++) {
      obj_0->pCumSumRev[i] = 0.0;
    }

    obj_0->pCumRevIndex = 1.0;
  }

  simulation_servo_agent_B.cumRevIndex_f = obj_0->pCumRevIndex;
  simulation_servo_agent_B.csum_g = obj_0->pCumSum;
  for (i = 0; i < 999; i++) {
    simulation_servo_agent_B.csumrev[i] = obj_0->pCumSumRev[i];
  }

  simulation_servo_agent_B.csum_g += u;
  i = (int32_T)simulation_servo_agent_B.cumRevIndex_f - 1;
  simulation_servo_agent_B.z_g = simulation_servo_agent_B.csumrev[i] +
    simulation_servo_agent_B.csum_g;
  simulation_servo_agent_B.csumrev[i] = u;
  if (simulation_servo_agent_B.cumRevIndex_f != 999.0) {
    simulation_servo_agent_B.cumRevIndex_f++;
  } else {
    simulation_servo_agent_B.cumRevIndex_f = 1.0;
    simulation_servo_agent_B.csum_g = 0.0;
    for (i = 0; i < 998; i++) {
      simulation_servo_agent_B.csumrev[997 - i] +=
        simulation_servo_agent_B.csumrev[998 - i];
    }
  }

  y = simulation_servo_agent_B.z_g / 1000.0;
  obj_0->pCumSum = simulation_servo_agent_B.csum_g;
  for (i = 0; i < 999; i++) {
    obj_0->pCumSumRev[i] = simulation_servo_agent_B.csumrev[i];
  }

  obj_0->pCumRevIndex = simulation_servo_agent_B.cumRevIndex_f;
  return y;
}

// Model step function
void simulation_servo_agent_step(void)
{
  {
    boolean_T p;
    boolean_T p_0;
    NeslSimulationData *simulationData;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    char *msg;
    real_T *lastU;
    SL_Bus_simulation_servo_agent_std_msgs_Float32 b_varargout_2;
    int32_T z_tmp;

    // MATLABSystem: '<S2>/Get Parameter'
    p = false;
    p_0 = true;
    if (!(simulation_servo_agent_DW.obj_k.SampleTime ==
          simulation_servo_agent_P.GetParameter_SampleTime)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      simulation_servo_agent_DW.obj_k.SampleTime =
        simulation_servo_agent_P.GetParameter_SampleTime;
    }

    ParamGet_simulation_servo_agent_3318.get_parameter
      (&simulation_servo_agent_B.GetParameter);

    // End of MATLABSystem: '<S2>/Get Parameter'

    // Outputs for Atomic SubSystem: '<S2>/Subscribe'
    // MATLABSystem: '<S37>/SourceBlock' incorporates:
    //   Inport: '<S38>/In1'

    p = Sub_simulation_servo_agent_3760.getLatestMessage(&b_varargout_2);

    // Outputs for Enabled SubSystem: '<S37>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S38>/Enable'

    if (p) {
      simulation_servo_agent_B.In1 = b_varargout_2;
    }

    // End of MATLABSystem: '<S37>/SourceBlock'
    // End of Outputs for SubSystem: '<S37>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<S2>/Subscribe'

    // DataTypeConversion: '<S2>/Data Type Conversion2'
    simulation_servo_agent_B.DataTypeConversion2 =
      simulation_servo_agent_B.In1.Data;

    // MATLABSystem: '<S2>/Get Parameter2'
    p = false;
    p_0 = true;
    if (!(simulation_servo_agent_DW.obj_c.SampleTime ==
          simulation_servo_agent_P.GetParameter2_SampleTime)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      simulation_servo_agent_DW.obj_c.SampleTime =
        simulation_servo_agent_P.GetParameter2_SampleTime;
    }

    ParamGet_simulation_servo_agent_3752.get_parameter
      (&simulation_servo_agent_B.GetParameter2);

    // End of MATLABSystem: '<S2>/Get Parameter2'

    // MATLABSystem: '<S2>/Get Parameter1'
    p = false;
    p_0 = true;
    if (!(simulation_servo_agent_DW.obj_cm.SampleTime ==
          simulation_servo_agent_P.GetParameter1_SampleTime)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      simulation_servo_agent_DW.obj_cm.SampleTime =
        simulation_servo_agent_P.GetParameter1_SampleTime;
    }

    ParamGet_simulation_servo_agent_3398.get_parameter(&p);

    // DataTypeConversion: '<S2>/Data Type Conversion' incorporates:
    //   MATLABSystem: '<S2>/Get Parameter1'

    simulation_servo_agent_B.DataTypeConversion = p;

    // Outputs for Enabled SubSystem: '<Root>/Loop Subsystem' incorporates:
    //   EnablePort: '<S1>/Enable'

    if (simulation_servo_agent_B.DataTypeConversion > 0.0) {
      if (!simulation_servo_agent_DW.LoopSubsystem_MODE) {
        // Enable for Atomic SubSystem: '<S1>/MotorControlSubsystem'
        // Enable for DiscreteIntegrator: '<S18>/Integ4'
        simulation_servo_agent_DW.Integ4_SYSTEM_ENABLE = 1U;

        // End of Enable for SubSystem: '<S1>/MotorControlSubsystem'
        simulation_servo_agent_DW.LoopSubsystem_MODE = true;
      }
    } else {
      if (simulation_servo_agent_DW.LoopSubsystem_MODE) {
        simulation_servo_agent_DW.LoopSubsystem_MODE = false;
      }
    }

    if (simulation_servo_agent_DW.LoopSubsystem_MODE) {
      // Outputs for Atomic SubSystem: '<S1>/MotorControlSubsystem'
      // Saturate: '<S3>/Speed Limitation'
      if (simulation_servo_agent_B.GetParameter2 >
          simulation_servo_agent_P.SpeedLimitation_UpperSat) {
        simulation_servo_agent_B.Sum3 =
          simulation_servo_agent_P.SpeedLimitation_UpperSat;
      } else if (simulation_servo_agent_B.GetParameter2 <
                 simulation_servo_agent_P.SpeedLimitation_LowerSat) {
        simulation_servo_agent_B.Sum3 =
          simulation_servo_agent_P.SpeedLimitation_LowerSat;
      } else {
        simulation_servo_agent_B.Sum3 = simulation_servo_agent_B.GetParameter2;
      }

      // End of Saturate: '<S3>/Speed Limitation'

      // Sum: '<S3>/Sum3' incorporates:
      //   UnitDelay: '<S3>/Unit Delay'

      simulation_servo_agent_B.Sum3 -=
        simulation_servo_agent_DW.UnitDelay_DSTATE;

      // Gain: '<S5>/Filter Coefficient' incorporates:
      //   DiscreteIntegrator: '<S5>/Filter'
      //   Gain: '<S5>/Derivative Gain'
      //   Sum: '<S5>/SumD'

      simulation_servo_agent_B.FilterCoefficient =
        (simulation_servo_agent_P.DiscretePIDController_D *
         simulation_servo_agent_B.Sum3 - simulation_servo_agent_DW.Filter_DSTATE)
        * simulation_servo_agent_P.DiscretePIDController_N;

      // Sum: '<S5>/Sum' incorporates:
      //   DiscreteIntegrator: '<S5>/Integrator'
      //   Gain: '<S5>/Proportional Gain'

      simulation_servo_agent_B.Saturate =
        (simulation_servo_agent_P.DiscretePIDController_P *
         simulation_servo_agent_B.Sum3 +
         simulation_servo_agent_DW.Integrator_DSTATE) +
        simulation_servo_agent_B.FilterCoefficient;

      // Saturate: '<S5>/Saturate'
      if (simulation_servo_agent_B.Saturate >
          simulation_servo_agent_P.DiscretePIDController_UpperSatu) {
        // Sum: '<S5>/Sum'
        simulation_servo_agent_B.Saturate =
          simulation_servo_agent_P.DiscretePIDController_UpperSatu;
      } else {
        if (simulation_servo_agent_B.Saturate <
            simulation_servo_agent_P.DiscretePIDController_LowerSatu) {
          // Sum: '<S5>/Sum'
          simulation_servo_agent_B.Saturate =
            simulation_servo_agent_P.DiscretePIDController_LowerSatu;
        }
      }

      // End of Saturate: '<S5>/Saturate'

      // SimscapeInputBlock: '<S35>/INPUT_2_1_1'
      simulation_servo_agent_B.INPUT_2_1_1[0] =
        simulation_servo_agent_B.Saturate;
      simulation_servo_agent_B.INPUT_2_1_1[1] = 0.0;
      simulation_servo_agent_B.INPUT_2_1_1[2] = 0.0;
      simulation_servo_agent_DW.INPUT_2_1_1_discrete[0] =
        !(simulation_servo_agent_B.INPUT_2_1_1[0] ==
          simulation_servo_agent_DW.INPUT_2_1_1_discrete[1]);
      simulation_servo_agent_DW.INPUT_2_1_1_discrete[1] =
        simulation_servo_agent_B.INPUT_2_1_1[0];
      simulation_servo_agent_B.INPUT_2_1_1[0] =
        simulation_servo_agent_DW.INPUT_2_1_1_discrete[1];
      simulation_servo_agent_B.INPUT_2_1_1[3] =
        simulation_servo_agent_DW.INPUT_2_1_1_discrete[0];

      // SimscapeInputBlock: '<S35>/INPUT_1_1_1'
      simulation_servo_agent_B.INPUT_1_1_1[0] =
        simulation_servo_agent_B.GetParameter;
      simulation_servo_agent_B.INPUT_1_1_1[1] = 0.0;
      simulation_servo_agent_B.INPUT_1_1_1[2] = 0.0;
      simulation_servo_agent_DW.INPUT_1_1_1_discrete[0] =
        !(simulation_servo_agent_B.INPUT_1_1_1[0] ==
          simulation_servo_agent_DW.INPUT_1_1_1_discrete[1]);
      simulation_servo_agent_DW.INPUT_1_1_1_discrete[1] =
        simulation_servo_agent_B.INPUT_1_1_1[0];
      simulation_servo_agent_B.INPUT_1_1_1[0] =
        simulation_servo_agent_DW.INPUT_1_1_1_discrete[1];
      simulation_servo_agent_B.INPUT_1_1_1[3] =
        simulation_servo_agent_DW.INPUT_1_1_1_discrete[0];

      // SimscapeInputBlock: '<S35>/INPUT_3_1_1'
      simulation_servo_agent_B.INPUT_3_1_1[0] =
        simulation_servo_agent_B.DataTypeConversion2;
      simulation_servo_agent_B.INPUT_3_1_1[1] = 0.0;
      simulation_servo_agent_B.INPUT_3_1_1[2] = 0.0;
      simulation_servo_agent_DW.INPUT_3_1_1_discrete[0] =
        !(simulation_servo_agent_B.INPUT_3_1_1[0] ==
          simulation_servo_agent_DW.INPUT_3_1_1_discrete[1]);
      simulation_servo_agent_DW.INPUT_3_1_1_discrete[1] =
        simulation_servo_agent_B.INPUT_3_1_1[0];
      simulation_servo_agent_B.INPUT_3_1_1[0] =
        simulation_servo_agent_DW.INPUT_3_1_1_discrete[1];
      simulation_servo_agent_B.INPUT_3_1_1[3] =
        simulation_servo_agent_DW.INPUT_3_1_1_discrete[0];

      // SimscapeExecutionBlock: '<S35>/STATE_1'
      simulationData = (NeslSimulationData *)
        simulation_servo_agent_DW.STATE_1_SimulationData;
      simulation_servo_agent_B.time = simulation_servo_agent_M->Timing.t[0];
      simulationData->mData->mTime.mN = 1;
      simulationData->mData->mTime.mX = &simulation_servo_agent_B.time;
      simulationData->mData->mContStates.mN = 0;
      simulationData->mData->mContStates.mX = NULL;
      simulationData->mData->mDiscStates.mN = 7;
      simulationData->mData->mDiscStates.mX = (real_T *)
        &simulation_servo_agent_DW.STATE_1_DiscStates;
      simulationData->mData->mModeVector.mN = 0;
      simulationData->mData->mModeVector.mX = NULL;
      p = false;
      simulationData->mData->mFoundZcEvents = p;
      simulationData->mData->mIsMajorTimeStep = true;
      p = false;
      simulationData->mData->mIsSolverAssertCheck = p;
      simulationData->mData->mIsSolverCheckingCIC = false;
      simulationData->mData->mIsComputingJacobian = false;
      simulationData->mData->mIsEvaluatingF0 = false;
      simulationData->mData->mIsSolverRequestingReset = false;
      simulation_servo_agent_B.iv3[0] = 0;
      simulation_servo_agent_B.dv3[0] = simulation_servo_agent_B.INPUT_2_1_1[0];
      simulation_servo_agent_B.dv3[1] = simulation_servo_agent_B.INPUT_2_1_1[1];
      simulation_servo_agent_B.dv3[2] = simulation_servo_agent_B.INPUT_2_1_1[2];
      simulation_servo_agent_B.dv3[3] = simulation_servo_agent_B.INPUT_2_1_1[3];
      simulation_servo_agent_B.iv3[1] = 4;
      simulation_servo_agent_B.dv3[4] = simulation_servo_agent_B.INPUT_1_1_1[0];
      simulation_servo_agent_B.dv3[5] = simulation_servo_agent_B.INPUT_1_1_1[1];
      simulation_servo_agent_B.dv3[6] = simulation_servo_agent_B.INPUT_1_1_1[2];
      simulation_servo_agent_B.dv3[7] = simulation_servo_agent_B.INPUT_1_1_1[3];
      simulation_servo_agent_B.iv3[2] = 8;
      simulation_servo_agent_B.dv3[8] = simulation_servo_agent_B.INPUT_3_1_1[0];
      simulation_servo_agent_B.dv3[9] = simulation_servo_agent_B.INPUT_3_1_1[1];
      simulation_servo_agent_B.dv3[10] = simulation_servo_agent_B.INPUT_3_1_1[2];
      simulation_servo_agent_B.dv3[11] = simulation_servo_agent_B.INPUT_3_1_1[3];
      simulation_servo_agent_B.iv3[3] = 12;
      simulationData->mData->mInputValues.mN = 12;
      simulationData->mData->mInputValues.mX = &simulation_servo_agent_B.dv3[0];
      simulationData->mData->mInputOffsets.mN = 4;
      simulationData->mData->mInputOffsets.mX = &simulation_servo_agent_B.iv3[0];
      simulationData->mData->mOutputs.mN = 7;
      simulationData->mData->mOutputs.mX = &simulation_servo_agent_B.STATE_1[0];
      simulationData->mData->mSampleHits.mN = 0;
      simulationData->mData->mSampleHits.mX = NULL;
      p = 1;
      simulationData->mData->mIsFundamentalSampleHit = p;
      simulationData->mData->mTolerances.mN = 0;
      simulationData->mData->mTolerances.mX = NULL;
      diagnosticManager = (NeuDiagnosticManager *)
        simulation_servo_agent_DW.STATE_1_DiagnosticManager;
      diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
      z_tmp = ne_simulator_method((NeslSimulator *)
        simulation_servo_agent_DW.STATE_1_Simulator, NESL_SIM_OUTPUTS,
        simulationData, diagnosticManager);
      if (z_tmp != 0) {
        p = error_buffer_is_empty(rtmGetErrorStatus(simulation_servo_agent_M));
        if (p) {
          msg = rtw_diagnostics_msg(diagnosticTree);
          rtmSetErrorStatus(simulation_servo_agent_M, msg);
        }
      }

      // End of SimscapeExecutionBlock: '<S35>/STATE_1'

      // Constant: '<S25>/Constant'
      simulation_servo_agent_B.Constant =
        simulation_servo_agent_P.Constant_Value;

      // SimscapeExecutionBlock: '<S35>/OUTPUT_1_0'
      simulationData = (NeslSimulationData *)
        simulation_servo_agent_DW.OUTPUT_1_0_SimulationData;
      simulation_servo_agent_B.time_b = simulation_servo_agent_M->Timing.t[0];
      simulationData->mData->mTime.mN = 1;
      simulationData->mData->mTime.mX = &simulation_servo_agent_B.time_b;
      simulationData->mData->mContStates.mN = 0;
      simulationData->mData->mContStates.mX = NULL;
      simulationData->mData->mDiscStates.mN = 0;
      simulationData->mData->mDiscStates.mX = NULL;
      simulationData->mData->mModeVector.mN = 0;
      simulationData->mData->mModeVector.mX = NULL;
      p = false;
      simulationData->mData->mFoundZcEvents = p;
      simulationData->mData->mIsMajorTimeStep = true;
      p = false;
      simulationData->mData->mIsSolverAssertCheck = p;
      simulationData->mData->mIsSolverCheckingCIC = false;
      simulationData->mData->mIsComputingJacobian = false;
      simulationData->mData->mIsEvaluatingF0 = false;
      simulationData->mData->mIsSolverRequestingReset = false;
      simulation_servo_agent_B.iv0[0] = 0;
      simulation_servo_agent_B.dv0[0] = simulation_servo_agent_B.INPUT_2_1_1[0];
      simulation_servo_agent_B.dv0[1] = simulation_servo_agent_B.INPUT_2_1_1[1];
      simulation_servo_agent_B.dv0[2] = simulation_servo_agent_B.INPUT_2_1_1[2];
      simulation_servo_agent_B.dv0[3] = simulation_servo_agent_B.INPUT_2_1_1[3];
      simulation_servo_agent_B.iv0[1] = 4;
      simulation_servo_agent_B.dv0[4] = simulation_servo_agent_B.INPUT_1_1_1[0];
      simulation_servo_agent_B.dv0[5] = simulation_servo_agent_B.INPUT_1_1_1[1];
      simulation_servo_agent_B.dv0[6] = simulation_servo_agent_B.INPUT_1_1_1[2];
      simulation_servo_agent_B.dv0[7] = simulation_servo_agent_B.INPUT_1_1_1[3];
      simulation_servo_agent_B.iv0[2] = 8;
      simulation_servo_agent_B.dv0[8] = simulation_servo_agent_B.INPUT_3_1_1[0];
      simulation_servo_agent_B.dv0[9] = simulation_servo_agent_B.INPUT_3_1_1[1];
      simulation_servo_agent_B.dv0[10] = simulation_servo_agent_B.INPUT_3_1_1[2];
      simulation_servo_agent_B.dv0[11] = simulation_servo_agent_B.INPUT_3_1_1[3];
      simulation_servo_agent_B.iv0[3] = 12;
      simulation_servo_agent_B.dv0[12] = simulation_servo_agent_B.STATE_1[0];
      simulation_servo_agent_B.dv0[13] = simulation_servo_agent_B.STATE_1[1];
      simulation_servo_agent_B.dv0[14] = simulation_servo_agent_B.STATE_1[2];
      simulation_servo_agent_B.dv0[15] = simulation_servo_agent_B.STATE_1[3];
      simulation_servo_agent_B.dv0[16] = simulation_servo_agent_B.STATE_1[4];
      simulation_servo_agent_B.dv0[17] = simulation_servo_agent_B.STATE_1[5];
      simulation_servo_agent_B.dv0[18] = simulation_servo_agent_B.STATE_1[6];
      simulation_servo_agent_B.iv0[4] = 19;
      simulationData->mData->mInputValues.mN = 19;
      simulationData->mData->mInputValues.mX = &simulation_servo_agent_B.dv0[0];
      simulationData->mData->mInputOffsets.mN = 5;
      simulationData->mData->mInputOffsets.mX = &simulation_servo_agent_B.iv0[0];
      simulationData->mData->mOutputs.mN = 3;
      simulationData->mData->mOutputs.mX = &simulation_servo_agent_B.OUTPUT_1_0
        [0];
      simulationData->mData->mSampleHits.mN = 0;
      simulationData->mData->mSampleHits.mX = NULL;
      p = 1;
      simulationData->mData->mIsFundamentalSampleHit = p;
      simulationData->mData->mTolerances.mN = 0;
      simulationData->mData->mTolerances.mX = NULL;
      diagnosticManager = (NeuDiagnosticManager *)
        simulation_servo_agent_DW.OUTPUT_1_0_DiagnosticManager;
      diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
      z_tmp = ne_simulator_method((NeslSimulator *)
        simulation_servo_agent_DW.OUTPUT_1_0_Simulator, NESL_SIM_OUTPUTS,
        simulationData, diagnosticManager);
      if (z_tmp != 0) {
        p = error_buffer_is_empty(rtmGetErrorStatus(simulation_servo_agent_M));
        if (p) {
          msg = rtw_diagnostics_msg(diagnosticTree);
          rtmSetErrorStatus(simulation_servo_agent_M, msg);
        }
      }

      // End of SimscapeExecutionBlock: '<S35>/OUTPUT_1_0'

      // MATLABSystem: '<S3>/Moving Average1' incorporates:
      //   Gain: '<S29>/GAIN'
      //   UnitDelay: '<S3>/Unit Delay'

      simulation_servo_agent_DW.UnitDelay_DSTATE =
        simulation_servo_agent_P.GAIN_Gain *
        simulation_servo_agent_B.OUTPUT_1_0[2];
      if (simulation_servo_agent_DW.obj_i.TunablePropsChanged) {
        simulation_servo_agent_DW.obj_i.TunablePropsChanged = false;
      }

      if (simulation_servo_agent_DW.obj_i.pStatistic->isInitialized != 1) {
        simulation_servo_agent_DW.obj_i.pStatistic->isInitialized = 1;
        simulation_servo_agent_DW.obj_i.pStatistic->pCumSum = 0.0;
        simulation_servo_agent_DW.obj_i.pStatistic->pCumRevIndex = 1.0;
        simulation_servo_agent_DW.obj_i.pStatistic->pCumSum = 0.0;
        memset(&simulation_servo_agent_DW.obj_i.pStatistic->pCumSumRev[0], 0,
               299U * sizeof(real_T));
        simulation_servo_agent_DW.obj_i.pStatistic->pCumRevIndex = 1.0;
      }

      simulation_servo_agent_B.cumRevIndex =
        simulation_servo_agent_DW.obj_i.pStatistic->pCumRevIndex;
      simulation_servo_agent_B.csum =
        simulation_servo_agent_DW.obj_i.pStatistic->pCumSum;
      for (z_tmp = 0; z_tmp < 299; z_tmp++) {
        simulation_servo_agent_B.csumrev_m[z_tmp] =
          simulation_servo_agent_DW.obj_i.pStatistic->pCumSumRev[z_tmp];
      }

      simulation_servo_agent_B.csum +=
        simulation_servo_agent_DW.UnitDelay_DSTATE;
      z_tmp = (int32_T)simulation_servo_agent_B.cumRevIndex - 1;
      simulation_servo_agent_B.z = simulation_servo_agent_B.csumrev_m[z_tmp] +
        simulation_servo_agent_B.csum;
      simulation_servo_agent_B.csumrev_m[z_tmp] =
        simulation_servo_agent_DW.UnitDelay_DSTATE;
      if (simulation_servo_agent_B.cumRevIndex != 299.0) {
        simulation_servo_agent_B.cumRevIndex++;
      } else {
        simulation_servo_agent_B.cumRevIndex = 1.0;
        simulation_servo_agent_B.csum = 0.0;
        for (z_tmp = 0; z_tmp < 298; z_tmp++) {
          simulation_servo_agent_B.csumrev_m[297 - z_tmp] +=
            simulation_servo_agent_B.csumrev_m[298 - z_tmp];
        }
      }

      simulation_servo_agent_DW.obj_i.pStatistic->pCumSum =
        simulation_servo_agent_B.csum;
      memcpy(&simulation_servo_agent_DW.obj_i.pStatistic->pCumSumRev[0],
             &simulation_servo_agent_B.csumrev_m[0], 299U * sizeof(real_T));
      simulation_servo_agent_DW.obj_i.pStatistic->pCumRevIndex =
        simulation_servo_agent_B.cumRevIndex;
      simulation_servo_agent_B.MovingAverage1 = simulation_servo_agent_B.z /
        300.0;

      // End of MATLABSystem: '<S3>/Moving Average1'

      // Derivative: '<S3>/Derivative'
      if ((simulation_servo_agent_DW.TimeStampA >=
           simulation_servo_agent_M->Timing.t[0]) &&
          (simulation_servo_agent_DW.TimeStampB >=
           simulation_servo_agent_M->Timing.t[0])) {
        simulation_servo_agent_B.cumRevIndex = 0.0;
      } else {
        simulation_servo_agent_B.cumRevIndex =
          simulation_servo_agent_DW.TimeStampA;
        lastU = &simulation_servo_agent_DW.LastUAtTimeA;
        if (simulation_servo_agent_DW.TimeStampA <
            simulation_servo_agent_DW.TimeStampB) {
          if (simulation_servo_agent_DW.TimeStampB <
              simulation_servo_agent_M->Timing.t[0]) {
            simulation_servo_agent_B.cumRevIndex =
              simulation_servo_agent_DW.TimeStampB;
            lastU = &simulation_servo_agent_DW.LastUAtTimeB;
          }
        } else {
          if (simulation_servo_agent_DW.TimeStampA >=
              simulation_servo_agent_M->Timing.t[0]) {
            simulation_servo_agent_B.cumRevIndex =
              simulation_servo_agent_DW.TimeStampB;
            lastU = &simulation_servo_agent_DW.LastUAtTimeB;
          }
        }

        simulation_servo_agent_B.cumRevIndex =
          (simulation_servo_agent_B.MovingAverage1 - *lastU) /
          (simulation_servo_agent_M->Timing.t[0] -
           simulation_servo_agent_B.cumRevIndex);
      }

      // End of Derivative: '<S3>/Derivative'

      // Constant: '<S9>/Constant3'
      simulation_servo_agent_B.Constant3 =
        simulation_servo_agent_P.Constant3_Value;

      // Constant: '<S9>/Constant6'
      simulation_servo_agent_B.Constant6 =
        simulation_servo_agent_P.Constant6_Value;

      // SimscapeExecutionBlock: '<S35>/OUTPUT_1_1'
      simulationData = (NeslSimulationData *)
        simulation_servo_agent_DW.OUTPUT_1_1_SimulationData;
      simulation_servo_agent_B.time_p = simulation_servo_agent_M->Timing.t[0];
      simulationData->mData->mTime.mN = 1;
      simulationData->mData->mTime.mX = &simulation_servo_agent_B.time_p;
      simulationData->mData->mContStates.mN = 0;
      simulationData->mData->mContStates.mX = NULL;
      simulationData->mData->mDiscStates.mN = 0;
      simulationData->mData->mDiscStates.mX = NULL;
      simulationData->mData->mModeVector.mN = 0;
      simulationData->mData->mModeVector.mX = NULL;
      p = false;
      simulationData->mData->mFoundZcEvents = p;
      simulationData->mData->mIsMajorTimeStep = true;
      p = false;
      simulationData->mData->mIsSolverAssertCheck = p;
      simulationData->mData->mIsSolverCheckingCIC = false;
      simulationData->mData->mIsComputingJacobian = false;
      simulationData->mData->mIsEvaluatingF0 = false;
      simulationData->mData->mIsSolverRequestingReset = false;
      simulation_servo_agent_B.iv1[0] = 0;
      simulation_servo_agent_B.dv1[0] = simulation_servo_agent_B.INPUT_2_1_1[0];
      simulation_servo_agent_B.dv1[1] = simulation_servo_agent_B.INPUT_2_1_1[1];
      simulation_servo_agent_B.dv1[2] = simulation_servo_agent_B.INPUT_2_1_1[2];
      simulation_servo_agent_B.dv1[3] = simulation_servo_agent_B.INPUT_2_1_1[3];
      simulation_servo_agent_B.iv1[1] = 4;
      simulation_servo_agent_B.dv1[4] = simulation_servo_agent_B.INPUT_1_1_1[0];
      simulation_servo_agent_B.dv1[5] = simulation_servo_agent_B.INPUT_1_1_1[1];
      simulation_servo_agent_B.dv1[6] = simulation_servo_agent_B.INPUT_1_1_1[2];
      simulation_servo_agent_B.dv1[7] = simulation_servo_agent_B.INPUT_1_1_1[3];
      simulation_servo_agent_B.iv1[2] = 8;
      simulation_servo_agent_B.dv1[8] = simulation_servo_agent_B.INPUT_3_1_1[0];
      simulation_servo_agent_B.dv1[9] = simulation_servo_agent_B.INPUT_3_1_1[1];
      simulation_servo_agent_B.dv1[10] = simulation_servo_agent_B.INPUT_3_1_1[2];
      simulation_servo_agent_B.dv1[11] = simulation_servo_agent_B.INPUT_3_1_1[3];
      simulation_servo_agent_B.iv1[3] = 12;
      simulation_servo_agent_B.dv1[12] = simulation_servo_agent_B.STATE_1[0];
      simulation_servo_agent_B.dv1[13] = simulation_servo_agent_B.STATE_1[1];
      simulation_servo_agent_B.dv1[14] = simulation_servo_agent_B.STATE_1[2];
      simulation_servo_agent_B.dv1[15] = simulation_servo_agent_B.STATE_1[3];
      simulation_servo_agent_B.dv1[16] = simulation_servo_agent_B.STATE_1[4];
      simulation_servo_agent_B.dv1[17] = simulation_servo_agent_B.STATE_1[5];
      simulation_servo_agent_B.dv1[18] = simulation_servo_agent_B.STATE_1[6];
      simulation_servo_agent_B.iv1[4] = 19;
      simulationData->mData->mInputValues.mN = 19;
      simulationData->mData->mInputValues.mX = &simulation_servo_agent_B.dv1[0];
      simulationData->mData->mInputOffsets.mN = 5;
      simulationData->mData->mInputOffsets.mX = &simulation_servo_agent_B.iv1[0];
      simulationData->mData->mOutputs.mN = 1;
      simulationData->mData->mOutputs.mX = &simulation_servo_agent_B.OUTPUT_1_1;
      simulationData->mData->mSampleHits.mN = 0;
      simulationData->mData->mSampleHits.mX = NULL;
      p = 1;
      simulationData->mData->mIsFundamentalSampleHit = p;
      simulationData->mData->mTolerances.mN = 0;
      simulationData->mData->mTolerances.mX = NULL;
      diagnosticManager = (NeuDiagnosticManager *)
        simulation_servo_agent_DW.OUTPUT_1_1_DiagnosticManager;
      diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
      z_tmp = ne_simulator_method((NeslSimulator *)
        simulation_servo_agent_DW.OUTPUT_1_1_Simulator, NESL_SIM_OUTPUTS,
        simulationData, diagnosticManager);
      if (z_tmp != 0) {
        p = error_buffer_is_empty(rtmGetErrorStatus(simulation_servo_agent_M));
        if (p) {
          msg = rtw_diagnostics_msg(diagnosticTree);
          rtmSetErrorStatus(simulation_servo_agent_M, msg);
        }
      }

      // End of SimscapeExecutionBlock: '<S35>/OUTPUT_1_1'

      // Product: '<S9>/Divide2'
      simulation_servo_agent_B.Divide2 = simulation_servo_agent_B.OUTPUT_1_1 /
        simulation_servo_agent_B.Constant6;

      // SimscapeExecutionBlock: '<S35>/OUTPUT_1_2'
      simulationData = (NeslSimulationData *)
        simulation_servo_agent_DW.OUTPUT_1_2_SimulationData;
      simulation_servo_agent_B.time_c = simulation_servo_agent_M->Timing.t[0];
      simulationData->mData->mTime.mN = 1;
      simulationData->mData->mTime.mX = &simulation_servo_agent_B.time_c;
      simulationData->mData->mContStates.mN = 0;
      simulationData->mData->mContStates.mX = NULL;
      simulationData->mData->mDiscStates.mN = 0;
      simulationData->mData->mDiscStates.mX = NULL;
      simulationData->mData->mModeVector.mN = 0;
      simulationData->mData->mModeVector.mX = NULL;
      p = false;
      simulationData->mData->mFoundZcEvents = p;
      simulationData->mData->mIsMajorTimeStep = true;
      p = false;
      simulationData->mData->mIsSolverAssertCheck = p;
      simulationData->mData->mIsSolverCheckingCIC = false;
      simulationData->mData->mIsComputingJacobian = false;
      simulationData->mData->mIsEvaluatingF0 = false;
      simulationData->mData->mIsSolverRequestingReset = false;
      simulation_servo_agent_B.iv2[0] = 0;
      simulation_servo_agent_B.dv2[0] = simulation_servo_agent_B.INPUT_2_1_1[0];
      simulation_servo_agent_B.dv2[1] = simulation_servo_agent_B.INPUT_2_1_1[1];
      simulation_servo_agent_B.dv2[2] = simulation_servo_agent_B.INPUT_2_1_1[2];
      simulation_servo_agent_B.dv2[3] = simulation_servo_agent_B.INPUT_2_1_1[3];
      simulation_servo_agent_B.iv2[1] = 4;
      simulation_servo_agent_B.dv2[4] = simulation_servo_agent_B.INPUT_1_1_1[0];
      simulation_servo_agent_B.dv2[5] = simulation_servo_agent_B.INPUT_1_1_1[1];
      simulation_servo_agent_B.dv2[6] = simulation_servo_agent_B.INPUT_1_1_1[2];
      simulation_servo_agent_B.dv2[7] = simulation_servo_agent_B.INPUT_1_1_1[3];
      simulation_servo_agent_B.iv2[2] = 8;
      simulation_servo_agent_B.dv2[8] = simulation_servo_agent_B.INPUT_3_1_1[0];
      simulation_servo_agent_B.dv2[9] = simulation_servo_agent_B.INPUT_3_1_1[1];
      simulation_servo_agent_B.dv2[10] = simulation_servo_agent_B.INPUT_3_1_1[2];
      simulation_servo_agent_B.dv2[11] = simulation_servo_agent_B.INPUT_3_1_1[3];
      simulation_servo_agent_B.iv2[3] = 12;
      simulation_servo_agent_B.dv2[12] = simulation_servo_agent_B.STATE_1[0];
      simulation_servo_agent_B.dv2[13] = simulation_servo_agent_B.STATE_1[1];
      simulation_servo_agent_B.dv2[14] = simulation_servo_agent_B.STATE_1[2];
      simulation_servo_agent_B.dv2[15] = simulation_servo_agent_B.STATE_1[3];
      simulation_servo_agent_B.dv2[16] = simulation_servo_agent_B.STATE_1[4];
      simulation_servo_agent_B.dv2[17] = simulation_servo_agent_B.STATE_1[5];
      simulation_servo_agent_B.dv2[18] = simulation_servo_agent_B.STATE_1[6];
      simulation_servo_agent_B.iv2[4] = 19;
      simulationData->mData->mInputValues.mN = 19;
      simulationData->mData->mInputValues.mX = &simulation_servo_agent_B.dv2[0];
      simulationData->mData->mInputOffsets.mN = 5;
      simulationData->mData->mInputOffsets.mX = &simulation_servo_agent_B.iv2[0];
      simulationData->mData->mOutputs.mN = 1;
      simulationData->mData->mOutputs.mX = &simulation_servo_agent_B.OUTPUT_1_2;
      simulationData->mData->mSampleHits.mN = 0;
      simulationData->mData->mSampleHits.mX = NULL;
      p = 1;
      simulationData->mData->mIsFundamentalSampleHit = p;
      simulationData->mData->mTolerances.mN = 0;
      simulationData->mData->mTolerances.mX = NULL;
      diagnosticManager = (NeuDiagnosticManager *)
        simulation_servo_agent_DW.OUTPUT_1_2_DiagnosticManager;
      diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
      z_tmp = ne_simulator_method((NeslSimulator *)
        simulation_servo_agent_DW.OUTPUT_1_2_Simulator, NESL_SIM_OUTPUTS,
        simulationData, diagnosticManager);
      if (z_tmp != 0) {
        p = error_buffer_is_empty(rtmGetErrorStatus(simulation_servo_agent_M));
        if (p) {
          msg = rtw_diagnostics_msg(diagnosticTree);
          rtmSetErrorStatus(simulation_servo_agent_M, msg);
        }
      }

      // End of SimscapeExecutionBlock: '<S35>/OUTPUT_1_2'

      // BusAssignment: '<S9>/Bus Assignment2' incorporates:
      //   Clock: '<S9>/Clock1'
      //   UnitDelay: '<S3>/Unit Delay'

      simulation_servo_agent_B.BusAssignment2.RawTimestamp =
        simulation_servo_agent_M->Timing.t[0];
      simulation_servo_agent_B.BusAssignment2.RawRequestedVelocity =
        simulation_servo_agent_B.GetParameter2;
      simulation_servo_agent_B.BusAssignment2.RawVelocity =
        simulation_servo_agent_DW.UnitDelay_DSTATE;
      simulation_servo_agent_B.BusAssignment2.RawCurrent =
        simulation_servo_agent_B.OUTPUT_1_0[1];
      simulation_servo_agent_B.BusAssignment2.RawTemperature =
        simulation_servo_agent_B.Constant3;
      simulation_servo_agent_B.BusAssignment2.RawSupplyVoltage =
        simulation_servo_agent_B.Constant6;
      simulation_servo_agent_B.BusAssignment2.RawPwm =
        simulation_servo_agent_B.Divide2;
      simulation_servo_agent_B.BusAssignment2.RawTorque =
        simulation_servo_agent_B.OUTPUT_1_2;
      simulation_servo_agent_B.BusAssignment2.RawAcceleration =
        simulation_servo_agent_B.cumRevIndex;

      // Outputs for Atomic SubSystem: '<S9>/Publish2'
      // MATLABSystem: '<S26>/SinkBlock'
      Pub_simulation_servo_agent_3424.publish
        (&simulation_servo_agent_B.BusAssignment2);

      // End of Outputs for SubSystem: '<S9>/Publish2'

      // DiscreteIntegrator: '<S18>/Integ4'
      if (simulation_servo_agent_DW.Integ4_SYSTEM_ENABLE != 0) {
        simulation_servo_agent_B.Integ4 =
          simulation_servo_agent_DW.Integ4_DSTATE;
      } else {
        simulation_servo_agent_B.Integ4 =
          simulation_servo_agent_P.Integ4_gainval *
          simulation_servo_agent_B.OUTPUT_1_1 +
          simulation_servo_agent_DW.Integ4_DSTATE;
      }

      // End of DiscreteIntegrator: '<S18>/Integ4'

      // Constant: '<S18>/K1'
      simulation_servo_agent_B.K1 = simulation_servo_agent_P.K1_Value;

      // S-Function (sfun_discreteVariableDelay): '<S19>/S-Function'

      // Level2 S-Function Block: '<S19>/S-Function' (sfun_discreteVariableDelay) 
      {
        SimStruct *rts = simulation_servo_agent_M->childSfunctions[0];
        sfcnOutputs(rts,1);
      }

      // MATLABSystem: '<S3>/Moving Average'
      simulation_servo_agent_B.cumRevIndex =
        simulation_servo_agent_B.OUTPUT_1_0[1];
      if (simulation_servo_agent_DW.obj.TunablePropsChanged) {
        simulation_servo_agent_DW.obj.TunablePropsChanged = false;
      }

      AbstractMovingStatistic_stepImp(&simulation_servo_agent_DW.obj,
        simulation_servo_agent_B.cumRevIndex);

      // End of MATLABSystem: '<S3>/Moving Average'

      // Gain: '<S5>/Integral Gain'
      simulation_servo_agent_B.IntegralGain =
        simulation_servo_agent_P.DiscretePIDController_I *
        simulation_servo_agent_B.Sum3;

      // End of Outputs for SubSystem: '<S1>/MotorControlSubsystem'
    }

    // End of Outputs for SubSystem: '<Root>/Loop Subsystem'

    // If: '<S2>/If' incorporates:
    //   Clock: '<S2>/Clock1'

    simulation_servo_agent_DW.If_ActiveSubsystem = -1;
    if (simulation_servo_agent_M->Timing.t[0] < 0.001) {
      simulation_servo_agent_DW.If_ActiveSubsystem = 0;

      // Outputs for IfAction SubSystem: '<S2>/If Action Subsystem' incorporates:
      //   ActionPort: '<S36>/Action Port'

      // MATLABSystem: '<S36>/Set Parameter' incorporates:
      //   Constant: '<S36>/Constant'

      ParamSet_simulation_servo_agent_3446.set_parameter
        (simulation_servo_agent_P.Constant_Value_b);

      // MATLABSystem: '<S36>/Set Parameter1' incorporates:
      //   Constant: '<S36>/Constant'

      ParamSet_simulation_servo_agent_3447.set_parameter
        (simulation_servo_agent_P.Constant_Value_b);

      // End of Outputs for SubSystem: '<S2>/If Action Subsystem'
    }

    // End of If: '<S2>/If'
  }

  {
    NeslSimulationData *simulationData;
    boolean_T tmp;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    int32_T tmp_0;
    char *msg;
    real_T *lastU;

    // Update for Enabled SubSystem: '<Root>/Loop Subsystem' incorporates:
    //   EnablePort: '<S1>/Enable'

    if (simulation_servo_agent_DW.LoopSubsystem_MODE) {
      // Update for Atomic SubSystem: '<S1>/MotorControlSubsystem'
      // Update for DiscreteIntegrator: '<S5>/Filter'
      simulation_servo_agent_DW.Filter_DSTATE +=
        simulation_servo_agent_P.Filter_gainval *
        simulation_servo_agent_B.FilterCoefficient;

      // Update for DiscreteIntegrator: '<S5>/Integrator'
      simulation_servo_agent_DW.Integrator_DSTATE +=
        simulation_servo_agent_P.Integrator_gainval *
        simulation_servo_agent_B.IntegralGain;

      // Update for SimscapeExecutionBlock: '<S35>/STATE_1'
      simulationData = (NeslSimulationData *)
        simulation_servo_agent_DW.STATE_1_SimulationData;
      simulation_servo_agent_B.time_pp = simulation_servo_agent_M->Timing.t[0];
      simulationData->mData->mTime.mN = 1;
      simulationData->mData->mTime.mX = &simulation_servo_agent_B.time_pp;
      simulationData->mData->mContStates.mN = 0;
      simulationData->mData->mContStates.mX = NULL;
      simulationData->mData->mDiscStates.mN = 7;
      simulationData->mData->mDiscStates.mX = (real_T *)
        &simulation_servo_agent_DW.STATE_1_DiscStates;
      simulationData->mData->mModeVector.mN = 0;
      simulationData->mData->mModeVector.mX = NULL;
      tmp = false;
      simulationData->mData->mFoundZcEvents = tmp;
      simulationData->mData->mIsMajorTimeStep = true;
      tmp = false;
      simulationData->mData->mIsSolverAssertCheck = tmp;
      simulationData->mData->mIsSolverCheckingCIC = false;
      simulationData->mData->mIsComputingJacobian = false;
      simulationData->mData->mIsEvaluatingF0 = false;
      simulationData->mData->mIsSolverRequestingReset = false;
      simulation_servo_agent_B.iv4[0] = 0;
      simulation_servo_agent_B.dv4[0] = simulation_servo_agent_B.INPUT_2_1_1[0];
      simulation_servo_agent_B.dv4[1] = simulation_servo_agent_B.INPUT_2_1_1[1];
      simulation_servo_agent_B.dv4[2] = simulation_servo_agent_B.INPUT_2_1_1[2];
      simulation_servo_agent_B.dv4[3] = simulation_servo_agent_B.INPUT_2_1_1[3];
      simulation_servo_agent_B.iv4[1] = 4;
      simulation_servo_agent_B.dv4[4] = simulation_servo_agent_B.INPUT_1_1_1[0];
      simulation_servo_agent_B.dv4[5] = simulation_servo_agent_B.INPUT_1_1_1[1];
      simulation_servo_agent_B.dv4[6] = simulation_servo_agent_B.INPUT_1_1_1[2];
      simulation_servo_agent_B.dv4[7] = simulation_servo_agent_B.INPUT_1_1_1[3];
      simulation_servo_agent_B.iv4[2] = 8;
      simulation_servo_agent_B.dv4[8] = simulation_servo_agent_B.INPUT_3_1_1[0];
      simulation_servo_agent_B.dv4[9] = simulation_servo_agent_B.INPUT_3_1_1[1];
      simulation_servo_agent_B.dv4[10] = simulation_servo_agent_B.INPUT_3_1_1[2];
      simulation_servo_agent_B.dv4[11] = simulation_servo_agent_B.INPUT_3_1_1[3];
      simulation_servo_agent_B.iv4[3] = 12;
      simulationData->mData->mInputValues.mN = 12;
      simulationData->mData->mInputValues.mX = &simulation_servo_agent_B.dv4[0];
      simulationData->mData->mInputOffsets.mN = 4;
      simulationData->mData->mInputOffsets.mX = &simulation_servo_agent_B.iv4[0];
      diagnosticManager = (NeuDiagnosticManager *)
        simulation_servo_agent_DW.STATE_1_DiagnosticManager;
      diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
      tmp_0 = ne_simulator_method((NeslSimulator *)
        simulation_servo_agent_DW.STATE_1_Simulator, NESL_SIM_UPDATE,
        simulationData, diagnosticManager);
      if (tmp_0 != 0) {
        tmp = error_buffer_is_empty(rtmGetErrorStatus(simulation_servo_agent_M));
        if (tmp) {
          msg = rtw_diagnostics_msg(diagnosticTree);
          rtmSetErrorStatus(simulation_servo_agent_M, msg);
        }
      }

      // End of Update for SimscapeExecutionBlock: '<S35>/STATE_1'

      // Update for Derivative: '<S3>/Derivative'
      if (simulation_servo_agent_DW.TimeStampA == (rtInf)) {
        simulation_servo_agent_DW.TimeStampA =
          simulation_servo_agent_M->Timing.t[0];
        lastU = &simulation_servo_agent_DW.LastUAtTimeA;
      } else if (simulation_servo_agent_DW.TimeStampB == (rtInf)) {
        simulation_servo_agent_DW.TimeStampB =
          simulation_servo_agent_M->Timing.t[0];
        lastU = &simulation_servo_agent_DW.LastUAtTimeB;
      } else if (simulation_servo_agent_DW.TimeStampA <
                 simulation_servo_agent_DW.TimeStampB) {
        simulation_servo_agent_DW.TimeStampA =
          simulation_servo_agent_M->Timing.t[0];
        lastU = &simulation_servo_agent_DW.LastUAtTimeA;
      } else {
        simulation_servo_agent_DW.TimeStampB =
          simulation_servo_agent_M->Timing.t[0];
        lastU = &simulation_servo_agent_DW.LastUAtTimeB;
      }

      *lastU = simulation_servo_agent_B.MovingAverage1;

      // End of Update for Derivative: '<S3>/Derivative'

      // Update for DiscreteIntegrator: '<S18>/Integ4'
      simulation_servo_agent_DW.Integ4_SYSTEM_ENABLE = 0U;
      simulation_servo_agent_DW.Integ4_DSTATE =
        simulation_servo_agent_P.Integ4_gainval *
        simulation_servo_agent_B.OUTPUT_1_1 + simulation_servo_agent_B.Integ4;

      // Update for S-Function (sfun_discreteVariableDelay): '<S19>/S-Function'
      // Level2 S-Function Block: '<S19>/S-Function' (sfun_discreteVariableDelay) 
      {
        SimStruct *rts = simulation_servo_agent_M->childSfunctions[0];
        sfcnUpdate(rts,1);
        if (ssGetErrorStatus(rts) != (NULL))
          return;
      }

      // End of Update for SubSystem: '<S1>/MotorControlSubsystem'
    }

    // End of Update for SubSystem: '<Root>/Loop Subsystem'
  }

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  simulation_servo_agent_M->Timing.t[0] =
    (++simulation_servo_agent_M->Timing.clockTick0) *
    simulation_servo_agent_M->Timing.stepSize0;

  {
    // Update absolute timer for sample time: [0.001s, 0.0s]
    // The "clockTick1" counts the number of times the code of this task has
    //  been executed. The absolute time is the multiplication of "clockTick1"
    //  and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
    //  overflow during the application lifespan selected.

    simulation_servo_agent_M->Timing.t[1] =
      (++simulation_servo_agent_M->Timing.clockTick1) *
      simulation_servo_agent_M->Timing.stepSize1;
  }
}

// Model initialize function
void simulation_servo_agent_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // initialize real-time model
  (void) memset((void *)simulation_servo_agent_M, 0,
                sizeof(RT_MODEL_simulation_servo_agent_T));

  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&simulation_servo_agent_M->solverInfo,
                          &simulation_servo_agent_M->Timing.simTimeStep);
    rtsiSetTPtr(&simulation_servo_agent_M->solverInfo, &rtmGetTPtr
                (simulation_servo_agent_M));
    rtsiSetStepSizePtr(&simulation_servo_agent_M->solverInfo,
                       &simulation_servo_agent_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&simulation_servo_agent_M->solverInfo,
                          (&rtmGetErrorStatus(simulation_servo_agent_M)));
    rtsiSetRTModelPtr(&simulation_servo_agent_M->solverInfo,
                      simulation_servo_agent_M);
  }

  rtsiSetSimTimeStep(&simulation_servo_agent_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&simulation_servo_agent_M->solverInfo,"FixedStepDiscrete");
  simulation_servo_agent_M->solverInfoPtr =
    (&simulation_servo_agent_M->solverInfo);

  // Initialize timing info
  {
    int_T *mdlTsMap = simulation_servo_agent_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    simulation_servo_agent_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    simulation_servo_agent_M->Timing.sampleTimes =
      (&simulation_servo_agent_M->Timing.sampleTimesArray[0]);
    simulation_servo_agent_M->Timing.offsetTimes =
      (&simulation_servo_agent_M->Timing.offsetTimesArray[0]);

    // task periods
    simulation_servo_agent_M->Timing.sampleTimes[0] = (0.0);
    simulation_servo_agent_M->Timing.sampleTimes[1] = (0.001);

    // task offsets
    simulation_servo_agent_M->Timing.offsetTimes[0] = (0.0);
    simulation_servo_agent_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(simulation_servo_agent_M, &simulation_servo_agent_M->Timing.tArray
             [0]);

  {
    int_T *mdlSampleHits = simulation_servo_agent_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    simulation_servo_agent_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(simulation_servo_agent_M, -1);
  simulation_servo_agent_M->Timing.stepSize0 = 0.001;
  simulation_servo_agent_M->Timing.stepSize1 = 0.001;
  simulation_servo_agent_M->solverInfoPtr =
    (&simulation_servo_agent_M->solverInfo);
  simulation_servo_agent_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&simulation_servo_agent_M->solverInfo, 0.001);
  rtsiSetSolverMode(&simulation_servo_agent_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  // block I/O
  (void) memset(((void *) &simulation_servo_agent_B), 0,
                sizeof(B_simulation_servo_agent_T));

  // states (dwork)
  (void) memset((void *)&simulation_servo_agent_DW, 0,
                sizeof(DW_simulation_servo_agent_T));

  // child S-Function registration
  {
    RTWSfcnInfo *sfcnInfo = &simulation_servo_agent_M->NonInlinedSFcns.sfcnInfo;
    simulation_servo_agent_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(simulation_servo_agent_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &simulation_servo_agent_M->Sizes.numSampTimes);
    simulation_servo_agent_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (simulation_servo_agent_M)[0]);
    simulation_servo_agent_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr
      (simulation_servo_agent_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,
                   simulation_servo_agent_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(simulation_servo_agent_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(simulation_servo_agent_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (simulation_servo_agent_M));
    rtssSetStepSizePtr(sfcnInfo, &simulation_servo_agent_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (simulation_servo_agent_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &simulation_servo_agent_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &simulation_servo_agent_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &simulation_servo_agent_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &simulation_servo_agent_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &simulation_servo_agent_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &simulation_servo_agent_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &simulation_servo_agent_M->solverInfoPtr);
  }

  simulation_servo_agent_M->Sizes.numSFcns = (1);

  // register each child
  {
    (void) memset((void *)
                  &simulation_servo_agent_M->NonInlinedSFcns.childSFunctions[0],
                  0,
                  1*sizeof(SimStruct));
    simulation_servo_agent_M->childSfunctions =
      (&simulation_servo_agent_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    simulation_servo_agent_M->childSfunctions[0] =
      (&simulation_servo_agent_M->NonInlinedSFcns.childSFunctions[0]);

    // Level2 S-Function Block: simulation_servo_agent/<S19>/S-Function (sfun_discreteVariableDelay) 
    {
      SimStruct *rts = simulation_servo_agent_M->childSfunctions[0];

      // timing info
      time_T *sfcnPeriod =
        simulation_servo_agent_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        simulation_servo_agent_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        simulation_servo_agent_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &simulation_servo_agent_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &simulation_servo_agent_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      // Set up the mdlInfo pointer
      ssSetRTWSfcnInfo(rts, simulation_servo_agent_M->sfcnInfo);

      // Allocate memory of model methods 2
      {
        ssSetModelMethods2(rts,
                           &simulation_servo_agent_M->NonInlinedSFcns.methods2[0]);
      }

      // Allocate memory of model methods 3
      {
        ssSetModelMethods3(rts,
                           &simulation_servo_agent_M->NonInlinedSFcns.methods3[0]);
      }

      // Allocate memory of model methods 4
      {
        ssSetModelMethods4(rts,
                           &simulation_servo_agent_M->NonInlinedSFcns.methods4[0]);
      }

      // Allocate memory for states auxilliary information
      {
        ssSetStatesInfo2(rts,
                         &simulation_servo_agent_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &simulation_servo_agent_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      // inputs
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &simulation_servo_agent_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &simulation_servo_agent_M->NonInlinedSFcns.Sfcn0.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);

        // port 0
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &simulation_servo_agent_M->NonInlinedSFcns.Sfcn0.UPtrs0;
          sfcnUPtrs[0] = &simulation_servo_agent_B.Integ4;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        // port 1
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &simulation_servo_agent_M->NonInlinedSFcns.Sfcn0.UPtrs1;
          sfcnUPtrs[0] = &simulation_servo_agent_B.K1;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      // outputs
      {
        ssSetPortInfoForOutputs(rts,
          &simulation_servo_agent_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &simulation_servo_agent_M->NonInlinedSFcns.Sfcn0.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);

        // port 0
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &simulation_servo_agent_B.SFunction));
        }
      }

      // path info
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Mean/Model/Discrete Variable Time Delay/S-Function");
      ssSetRTModel(rts,simulation_servo_agent_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      // parameters
      {
        mxArray **sfcnParams = (mxArray **)
          &simulation_servo_agent_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       simulation_servo_agent_P.SFunction_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       simulation_servo_agent_P.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       simulation_servo_agent_P.SFunction_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       simulation_servo_agent_P.SFunction_P4_Size);
      }

      // work vectors
      ssSetRWork(rts, (real_T *) &simulation_servo_agent_DW.SFunction_RWORK);
      ssSetIWork(rts, (int_T *) &simulation_servo_agent_DW.SFunction_IWORK);
      ssSetPWork(rts, (void **) &simulation_servo_agent_DW.SFunction_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &simulation_servo_agent_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &simulation_servo_agent_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        // RWORK
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &simulation_servo_agent_DW.SFunction_RWORK);

        // IWORK
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &simulation_servo_agent_DW.SFunction_IWORK);

        // PWORK
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &simulation_servo_agent_DW.SFunction_PWORK);
      }

      // registration
      sfun_discreteVariableDelay(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      // adjust sample time
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      // set compiled values of dynamic vector attributes
      ssSetInputPortWidth(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortWidth(rts, 1, 1);
      ssSetInputPortDataType(rts, 1, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 1, 0);
      ssSetInputPortFrameData(rts, 1, 0);
      ssSetInputPortUnit(rts, 1, 0);
      ssSetOutputPortWidth(rts, 0, 1);
      ssSetOutputPortDataType(rts, 0, SS_DOUBLE);
      ssSetOutputPortComplexSignal(rts, 0, 0);
      ssSetOutputPortFrameData(rts, 0, 0);
      ssSetOutputPortUnit(rts, 0, 0);
      ssSetNumIWork(rts, 1);
      ssSetNumPWork(rts, 1);
      ssSetNumNonsampledZCs(rts, 0);

      // Update connectivity flags for each port
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      // Update the BufferDstPort flags for each input port
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }
  }

  {
    NeslSimulator *tmp;
    boolean_T tmp_0;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    char *msg;
    NeslSimulationData *simulationData;
    real_T time;
    real_T time_0;
    // static const char_T tmp_1[45] = { '/', 's', 'i', 'm', 'u', 'l', 'a', 't',
    //   'i', 'o', 'n', '_', 's', 'e', 'r', 'v', 'o', '_', 'a', 'g', 'e', 'n', 't',
    //   '/', 'u', 'p', 'd', 'a', 't', 'e', '_', 'v', 'e', 'l', 'o', 'c', 'i', 't',
    //   'y', '/', 's', 'p', 'e', 'e', 'd' };

    // static const char_T tmp_2[49] = { '/', 's', 'i', 'm', 'u', 'l', 'a', 't',
    //   'i', 'o', 'n', '_', 's', 'e', 'r', 'v', 'o', '_', 'a', 'g', 'e', 'n', 't',
    //   '/', 'u', 'p', 'd', 'a', 't', 'e', '_', 'v', 'e', 'l', 'o', 'c', 'i', 't',
    //   'y', '/', 'i', 's', 'E', 'n', 'a', 'b', 'l', 'e', 'd' };

    // static const char_T tmp_3[38] = { '/', 's', 'i', 'm', 'u', 'l', 'a', 't',
    //   'i', 'o', 'n', '_', 's', 'e', 'r', 'v', 'o', '_', 'a', 'g', 'e', 'n', 't',
    //   '/', 'm', 'o', 't', 'o', 'r', '_', 'r', 'a', 'w', '_', 'd', 'a', 't', 'a'
    // };

    // static const char_T tmp_4[33] = { '/', 'c', 'o', 'n', 'v', 'e', 'y', 'o',
    //   'r', '_', 'b', 'e', 'l', 't', '_', 'a', 'g', 'e', 'n', 't', '/', 'e', 'x',
    //   't', 'r', 'a', '_', 't', 'o', 'r', 'q', 'u', 'e' };

    // static const char_T tmp_5[41] = { '/', 's', 'i', 'm', 'u', 'l', 'a', 't',
    //   'i', 'o', 'n', '_', 's', 'e', 'r', 'v', 'o', '_', 'a', 'g', 'e', 'n', 't',
    //   '/', 'a', 'd', 'd', '_', 't', 'o', 'r', 'q', 'u', 'e', '/', 't', 'o', 'r',
    //   'q', 'u', 'e' };

        // *** Modified: Xin Yu @ 20 Mar 2019
    // param names and topics name changes with the node name (when there are multiple nodes)
    std:string nodeName, tmp_1, tmp_2, tmp_3, tmp_4, tmp_5;
    nodeName = ros::this_node::getName();
    tmp_1 = nodeName + string("/update_velocity/speed");
    tmp_2 = nodeName + string("/update_velocity/isEnabled");
    tmp_3 = nodeName + string("/motor_raw_data");
    char ch = nodeName.back();   
    
    tmp_4 = string("/") + string("conveyor_belt_agent");
    std::size_t found = nodeName.find_first_of("0123456789");
    if (found!=std::string::npos)
        tmp_4 += string("_") + nodeName.substr(found) + string("/abnormal_torque");
    else
        tmp_4 += string("/abnormal_torque");

    tmp_5 = nodeName + string("/add_torque/torque");  
    // ***

    int32_T i;

    // Start for MATLABSystem: '<S2>/Get Parameter'
    simulation_servo_agent_DW.obj_k.isInitialized = 0;
    simulation_servo_agent_DW.objisempty_n = true;
    simulation_servo_agent_DW.obj_k.SampleTime =
      simulation_servo_agent_P.GetParameter_SampleTime;
    simulation_servo_agent_DW.obj_k.isInitialized = 1;
    // for (i = 0; i < 41; i++) {
    //   simulation_servo_agent_B.cv2[i] = tmp_5[i];
    // }

    // simulation_servo_agent_B.cv2[41] = '\x00';
    simulation_servo_agent_B.cv2 = tmp_5;
    ParamGet_simulation_servo_agent_3318.initialize(simulation_servo_agent_B.cv2);
    ParamGet_simulation_servo_agent_3318.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_simulation_servo_agent_3318.set_initial_value
      (simulat_ParameterInitialValue_l);

    // End of Start for MATLABSystem: '<S2>/Get Parameter'

    // Start for Atomic SubSystem: '<S2>/Subscribe'
    // Start for MATLABSystem: '<S37>/SourceBlock'
    simulation_servo_agent_DW.obj_a.isInitialized = 0;
    simulation_servo_agent_DW.objisempty = true;
    simulation_servo_agent_DW.obj_a.isInitialized = 1;
    // for (i = 0; i < 33; i++) {
    //   simulation_servo_agent_B.cv4[i] = tmp_4[i];
    // }

    // simulation_servo_agent_B.cv4[33] = '\x00';
    simulation_servo_agent_B.cv4 = tmp_4;
    Sub_simulation_servo_agent_3760.createSubscriber
      (simulation_servo_agent_B.cv4, simulation_se_MessageQueueLen_l);

    // End of Start for MATLABSystem: '<S37>/SourceBlock'
    // End of Start for SubSystem: '<S2>/Subscribe'

    // Start for MATLABSystem: '<S2>/Get Parameter2'
    simulation_servo_agent_DW.obj_c.isInitialized = 0;
    simulation_servo_agent_DW.objisempty_l = true;
    simulation_servo_agent_DW.obj_c.SampleTime =
      simulation_servo_agent_P.GetParameter2_SampleTime;
    simulation_servo_agent_DW.obj_c.isInitialized = 1;
    // for (i = 0; i < 45; i++) {
    //   simulation_servo_agent_B.cv1[i] = tmp_1[i];
    // }

    // simulation_servo_agent_B.cv1[45] = '\x00';
    simulation_servo_agent_B.cv1 = tmp_1;      
    ParamGet_simulation_servo_agent_3752.initialize(simulation_servo_agent_B.cv1);
    ParamGet_simulation_servo_agent_3752.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_simulation_servo_agent_3752.set_initial_value
      (simulat_ParameterInitialValue_l);

    // End of Start for MATLABSystem: '<S2>/Get Parameter2'

    // Start for MATLABSystem: '<S2>/Get Parameter1'
    simulation_servo_agent_DW.obj_cm.isInitialized = 0;
    simulation_servo_agent_DW.objisempty_d = true;
    simulation_servo_agent_DW.obj_cm.SampleTime =
      simulation_servo_agent_P.GetParameter1_SampleTime;
    simulation_servo_agent_DW.obj_cm.isInitialized = 1;
    // for (i = 0; i < 49; i++) {
    //   simulation_servo_agent_B.cv0[i] = tmp_2[i];
    // }

    // simulation_servo_agent_B.cv0[49] = '\x00';
    simulation_servo_agent_B.cv0 = tmp_2;
    ParamGet_simulation_servo_agent_3398.initialize(simulation_servo_agent_B.cv0);
    ParamGet_simulation_servo_agent_3398.initialize_error_codes(0U, 1U, 2U, 3U);
    ParamGet_simulation_servo_agent_3398.set_initial_value
      (simulatio_ParameterInitialValue);

    // End of Start for MATLABSystem: '<S2>/Get Parameter1'

    // Start for Enabled SubSystem: '<Root>/Loop Subsystem'
    // Start for Atomic SubSystem: '<S1>/MotorControlSubsystem'
    // Start for SimscapeExecutionBlock: '<S35>/STATE_1'
    tmp = nesl_lease_simulator(
      "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Solver Configuration1_1",
      0, 0);
    simulation_servo_agent_DW.STATE_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(simulation_servo_agent_DW.STATE_1_Simulator);
    if (tmp_0) {
      simulation_servo_agent_9c2ac8b8_1_gateway();
      tmp = nesl_lease_simulator(
        "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Solver Configuration1_1",
        0, 0);
      simulation_servo_agent_DW.STATE_1_Simulator = (void *)tmp;
    }

    simulationData = nesl_create_simulation_data();
    simulation_servo_agent_DW.STATE_1_SimulationData = (void *)simulationData;
    diagnosticManager = rtw_create_diagnostics();
    simulation_servo_agent_DW.STATE_1_DiagnosticManager = (void *)
      diagnosticManager;
    simulation_servo_agent_B.modelParameters.mSolverType =
      NE_SOLVER_TYPE_DISCRETE;
    simulation_servo_agent_B.modelParameters.mSolverTolerance = 0.001;
    simulation_servo_agent_B.modelParameters.mVariableStepSolver = false;
    simulation_servo_agent_B.modelParameters.mFixedStepSize = 0.001;
    simulation_servo_agent_B.modelParameters.mStartTime = 0.0;
    simulation_servo_agent_B.modelParameters.mLoadInitialState = false;
    simulation_servo_agent_B.modelParameters.mUseSimState = false;
    simulation_servo_agent_B.modelParameters.mLinTrimCompile = false;
    simulation_servo_agent_B.modelParameters.mLoggingMode = SSC_LOGGING_NONE;
    simulation_servo_agent_B.modelParameters.mRTWModifiedTimeStamp =
      4.75020351E+8;
    simulation_servo_agent_B.d0 = 0.001;
    simulation_servo_agent_B.modelParameters.mSolverTolerance =
      simulation_servo_agent_B.d0;
    simulation_servo_agent_B.d0 = 0.001;
    simulation_servo_agent_B.modelParameters.mFixedStepSize =
      simulation_servo_agent_B.d0;
    tmp_0 = false;
    simulation_servo_agent_B.modelParameters.mVariableStepSolver = tmp_0;
    diagnosticManager = (NeuDiagnosticManager *)
      simulation_servo_agent_DW.STATE_1_DiagnosticManager;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = nesl_initialize_simulator((NeslSimulator *)
      simulation_servo_agent_DW.STATE_1_Simulator,
      &simulation_servo_agent_B.modelParameters, diagnosticManager);
    if (i != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(simulation_servo_agent_M));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(simulation_servo_agent_M, msg);
      }
    }

    simulation_servo_agent_B.expl_temp.mRealParameters.mN = 0;
    simulation_servo_agent_B.expl_temp.mRealParameters.mX = NULL;
    simulation_servo_agent_B.expl_temp.mLogicalParameters.mN = 0;
    simulation_servo_agent_B.expl_temp.mLogicalParameters.mX = NULL;
    simulation_servo_agent_B.expl_temp.mIntegerParameters.mN = 0;
    simulation_servo_agent_B.expl_temp.mIntegerParameters.mX = NULL;
    simulation_servo_agent_B.expl_temp.mIndexParameters.mN = 0;
    simulation_servo_agent_B.expl_temp.mIndexParameters.mX = NULL;
    nesl_simulator_set_rtps((NeslSimulator *)
      simulation_servo_agent_DW.STATE_1_Simulator,
      simulation_servo_agent_B.expl_temp);
    simulationData = (NeslSimulationData *)
      simulation_servo_agent_DW.STATE_1_SimulationData;
    simulation_servo_agent_B.time_m = simulation_servo_agent_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &simulation_servo_agent_B.time_m;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 7;
    simulationData->mData->mDiscStates.mX = (real_T *)
      &simulation_servo_agent_DW.STATE_1_DiscStates;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = NULL;
    tmp_0 = false;
    simulationData->mData->mFoundZcEvents = tmp_0;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_0 = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_0;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    diagnosticManager = (NeuDiagnosticManager *)
      simulation_servo_agent_DW.STATE_1_DiagnosticManager;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      simulation_servo_agent_DW.STATE_1_Simulator, NESL_SIM_INITIALIZEONCE,
      simulationData, diagnosticManager);
    if (i != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(simulation_servo_agent_M));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(simulation_servo_agent_M, msg);
      }
    }

    // End of Start for SimscapeExecutionBlock: '<S35>/STATE_1'

    // Start for SimscapeExecutionBlock: '<S35>/OUTPUT_1_0'
    tmp = nesl_lease_simulator(
      "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Solver Configuration1_1",
      2, 0);
    simulation_servo_agent_DW.OUTPUT_1_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(simulation_servo_agent_DW.OUTPUT_1_0_Simulator);
    if (tmp_0) {
      simulation_servo_agent_9c2ac8b8_1_gateway();
      tmp = nesl_lease_simulator(
        "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Solver Configuration1_1",
        2, 0);
      simulation_servo_agent_DW.OUTPUT_1_0_Simulator = (void *)tmp;
    }

    simulationData = nesl_create_simulation_data();
    simulation_servo_agent_DW.OUTPUT_1_0_SimulationData = (void *)simulationData;
    diagnosticManager = rtw_create_diagnostics();
    simulation_servo_agent_DW.OUTPUT_1_0_DiagnosticManager = (void *)
      diagnosticManager;
    simulation_servo_agent_B.modelParameters_c.mSolverType =
      NE_SOLVER_TYPE_DISCRETE;
    simulation_servo_agent_B.modelParameters_c.mSolverTolerance = 0.001;
    simulation_servo_agent_B.modelParameters_c.mVariableStepSolver = false;
    simulation_servo_agent_B.modelParameters_c.mFixedStepSize = 0.001;
    simulation_servo_agent_B.modelParameters_c.mStartTime = 0.0;
    simulation_servo_agent_B.modelParameters_c.mLoadInitialState = false;
    simulation_servo_agent_B.modelParameters_c.mUseSimState = false;
    simulation_servo_agent_B.modelParameters_c.mLinTrimCompile = false;
    simulation_servo_agent_B.modelParameters_c.mLoggingMode = SSC_LOGGING_NONE;
    simulation_servo_agent_B.modelParameters_c.mRTWModifiedTimeStamp =
      4.75020351E+8;
    simulation_servo_agent_B.d0 = 0.001;
    simulation_servo_agent_B.modelParameters_c.mSolverTolerance =
      simulation_servo_agent_B.d0;
    simulation_servo_agent_B.d0 = 0.001;
    simulation_servo_agent_B.modelParameters_c.mFixedStepSize =
      simulation_servo_agent_B.d0;
    tmp_0 = false;
    simulation_servo_agent_B.modelParameters_c.mVariableStepSolver = tmp_0;
    diagnosticManager = (NeuDiagnosticManager *)
      simulation_servo_agent_DW.OUTPUT_1_0_DiagnosticManager;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = nesl_initialize_simulator((NeslSimulator *)
      simulation_servo_agent_DW.OUTPUT_1_0_Simulator,
      &simulation_servo_agent_B.modelParameters_c, diagnosticManager);
    if (i != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(simulation_servo_agent_M));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(simulation_servo_agent_M, msg);
      }
    }

    simulationData = (NeslSimulationData *)
      simulation_servo_agent_DW.OUTPUT_1_0_SimulationData;
    simulation_servo_agent_B.time_n = simulation_servo_agent_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &simulation_servo_agent_B.time_n;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = NULL;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = NULL;
    tmp_0 = false;
    simulationData->mData->mFoundZcEvents = tmp_0;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_0 = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_0;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    diagnosticManager = (NeuDiagnosticManager *)
      simulation_servo_agent_DW.OUTPUT_1_0_DiagnosticManager;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      simulation_servo_agent_DW.OUTPUT_1_0_Simulator, NESL_SIM_INITIALIZEONCE,
      simulationData, diagnosticManager);
    if (i != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(simulation_servo_agent_M));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(simulation_servo_agent_M, msg);
      }
    }

    // End of Start for SimscapeExecutionBlock: '<S35>/OUTPUT_1_0'

    // Start for MATLABSystem: '<S3>/Moving Average1'
    simulation_servo_agent_DW.obj_i.isInitialized = 0;
    simulation_servo_agent_DW.obj_i.NumChannels = -1;
    simulation_servo_agent_DW.objisempty_b = true;
    simulation_servo_agent_DW.obj_i.isInitialized = 1;
    simulation_servo_agent_DW.obj_i.NumChannels = 1;
    simulation_servo_agent_DW.gobj_0_a.isInitialized = 0;
    simulation_servo_agent_DW.obj_i.pStatistic =
      &simulation_servo_agent_DW.gobj_0_a;
    simulation_servo_agent_DW.obj_i.TunablePropsChanged = false;

    // Start for SimscapeExecutionBlock: '<S35>/OUTPUT_1_1'
    tmp = nesl_lease_simulator(
      "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Solver Configuration1_1",
      2, 1);
    simulation_servo_agent_DW.OUTPUT_1_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(simulation_servo_agent_DW.OUTPUT_1_1_Simulator);
    if (tmp_0) {
      simulation_servo_agent_9c2ac8b8_1_gateway();
      tmp = nesl_lease_simulator(
        "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Solver Configuration1_1",
        2, 1);
      simulation_servo_agent_DW.OUTPUT_1_1_Simulator = (void *)tmp;
    }

    simulationData = nesl_create_simulation_data();
    simulation_servo_agent_DW.OUTPUT_1_1_SimulationData = (void *)simulationData;
    diagnosticManager = rtw_create_diagnostics();
    simulation_servo_agent_DW.OUTPUT_1_1_DiagnosticManager = (void *)
      diagnosticManager;
    simulation_servo_agent_B.modelParameters_k.mSolverType =
      NE_SOLVER_TYPE_DISCRETE;
    simulation_servo_agent_B.modelParameters_k.mSolverTolerance = 0.001;
    simulation_servo_agent_B.modelParameters_k.mVariableStepSolver = false;
    simulation_servo_agent_B.modelParameters_k.mFixedStepSize = 0.001;
    simulation_servo_agent_B.modelParameters_k.mStartTime = 0.0;
    simulation_servo_agent_B.modelParameters_k.mLoadInitialState = false;
    simulation_servo_agent_B.modelParameters_k.mUseSimState = false;
    simulation_servo_agent_B.modelParameters_k.mLinTrimCompile = false;
    simulation_servo_agent_B.modelParameters_k.mLoggingMode = SSC_LOGGING_NONE;
    simulation_servo_agent_B.modelParameters_k.mRTWModifiedTimeStamp =
      4.75020351E+8;
    simulation_servo_agent_B.d0 = 0.001;
    simulation_servo_agent_B.modelParameters_k.mSolverTolerance =
      simulation_servo_agent_B.d0;
    simulation_servo_agent_B.d0 = 0.001;
    simulation_servo_agent_B.modelParameters_k.mFixedStepSize =
      simulation_servo_agent_B.d0;
    tmp_0 = false;
    simulation_servo_agent_B.modelParameters_k.mVariableStepSolver = tmp_0;
    diagnosticManager = (NeuDiagnosticManager *)
      simulation_servo_agent_DW.OUTPUT_1_1_DiagnosticManager;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = nesl_initialize_simulator((NeslSimulator *)
      simulation_servo_agent_DW.OUTPUT_1_1_Simulator,
      &simulation_servo_agent_B.modelParameters_k, diagnosticManager);
    if (i != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(simulation_servo_agent_M));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(simulation_servo_agent_M, msg);
      }
    }

    simulationData = (NeslSimulationData *)
      simulation_servo_agent_DW.OUTPUT_1_1_SimulationData;
    time = simulation_servo_agent_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = NULL;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = NULL;
    tmp_0 = false;
    simulationData->mData->mFoundZcEvents = tmp_0;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_0 = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_0;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    diagnosticManager = (NeuDiagnosticManager *)
      simulation_servo_agent_DW.OUTPUT_1_1_DiagnosticManager;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      simulation_servo_agent_DW.OUTPUT_1_1_Simulator, NESL_SIM_INITIALIZEONCE,
      simulationData, diagnosticManager);
    if (i != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(simulation_servo_agent_M));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(simulation_servo_agent_M, msg);
      }
    }

    // End of Start for SimscapeExecutionBlock: '<S35>/OUTPUT_1_1'

    // Start for SimscapeExecutionBlock: '<S35>/OUTPUT_1_2'
    tmp = nesl_lease_simulator(
      "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Solver Configuration1_1",
      2, 2);
    simulation_servo_agent_DW.OUTPUT_1_2_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(simulation_servo_agent_DW.OUTPUT_1_2_Simulator);
    if (tmp_0) {
      simulation_servo_agent_9c2ac8b8_1_gateway();
      tmp = nesl_lease_simulator(
        "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Solver Configuration1_1",
        2, 2);
      simulation_servo_agent_DW.OUTPUT_1_2_Simulator = (void *)tmp;
    }

    simulationData = nesl_create_simulation_data();
    simulation_servo_agent_DW.OUTPUT_1_2_SimulationData = (void *)simulationData;
    diagnosticManager = rtw_create_diagnostics();
    simulation_servo_agent_DW.OUTPUT_1_2_DiagnosticManager = (void *)
      diagnosticManager;
    simulation_servo_agent_B.modelParameters_cx.mSolverType =
      NE_SOLVER_TYPE_DISCRETE;
    simulation_servo_agent_B.modelParameters_cx.mSolverTolerance = 0.001;
    simulation_servo_agent_B.modelParameters_cx.mVariableStepSolver = false;
    simulation_servo_agent_B.modelParameters_cx.mFixedStepSize = 0.001;
    simulation_servo_agent_B.modelParameters_cx.mStartTime = 0.0;
    simulation_servo_agent_B.modelParameters_cx.mLoadInitialState = false;
    simulation_servo_agent_B.modelParameters_cx.mUseSimState = false;
    simulation_servo_agent_B.modelParameters_cx.mLinTrimCompile = false;
    simulation_servo_agent_B.modelParameters_cx.mLoggingMode = SSC_LOGGING_NONE;
    simulation_servo_agent_B.modelParameters_cx.mRTWModifiedTimeStamp =
      4.75020351E+8;
    simulation_servo_agent_B.d0 = 0.001;
    simulation_servo_agent_B.modelParameters_cx.mSolverTolerance =
      simulation_servo_agent_B.d0;
    simulation_servo_agent_B.d0 = 0.001;
    simulation_servo_agent_B.modelParameters_cx.mFixedStepSize =
      simulation_servo_agent_B.d0;
    tmp_0 = false;
    simulation_servo_agent_B.modelParameters_cx.mVariableStepSolver = tmp_0;
    diagnosticManager = (NeuDiagnosticManager *)
      simulation_servo_agent_DW.OUTPUT_1_2_DiagnosticManager;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = nesl_initialize_simulator((NeslSimulator *)
      simulation_servo_agent_DW.OUTPUT_1_2_Simulator,
      &simulation_servo_agent_B.modelParameters_cx, diagnosticManager);
    if (i != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(simulation_servo_agent_M));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(simulation_servo_agent_M, msg);
      }
    }

    simulationData = (NeslSimulationData *)
      simulation_servo_agent_DW.OUTPUT_1_2_SimulationData;
    time_0 = simulation_servo_agent_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_0;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = NULL;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = NULL;
    tmp_0 = false;
    simulationData->mData->mFoundZcEvents = tmp_0;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_0 = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_0;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    diagnosticManager = (NeuDiagnosticManager *)
      simulation_servo_agent_DW.OUTPUT_1_2_DiagnosticManager;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      simulation_servo_agent_DW.OUTPUT_1_2_Simulator, NESL_SIM_INITIALIZEONCE,
      simulationData, diagnosticManager);
    if (i != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(simulation_servo_agent_M));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(simulation_servo_agent_M, msg);
      }
    }

    // End of Start for SimscapeExecutionBlock: '<S35>/OUTPUT_1_2'

    // Start for Atomic SubSystem: '<S9>/Publish2'
    // Start for MATLABSystem: '<S26>/SinkBlock'
    simulation_servo_agent_DW.obj_h.isInitialized = 0;
    simulation_servo_agent_DW.objisempty_mz = true;
    simulation_servo_agent_DW.obj_h.isInitialized = 1;
    // for (i = 0; i < 38; i++) {
    //   simulation_servo_agent_B.cv3[i] = tmp_3[i];
    // }

    // simulation_servo_agent_B.cv3[38] = '\x00';
    simulation_servo_agent_B.cv3 = tmp_3;
    Pub_simulation_servo_agent_3424.createPublisher(simulation_servo_agent_B.cv3,
      simulation_serv_MessageQueueLen);

    // End of Start for MATLABSystem: '<S26>/SinkBlock'
    // End of Start for SubSystem: '<S9>/Publish2'

    // Start for Constant: '<S18>/K1'
    simulation_servo_agent_B.K1 = simulation_servo_agent_P.K1_Value;

    // Start for S-Function (sfun_discreteVariableDelay): '<S19>/S-Function'
    // Level2 S-Function Block: '<S19>/S-Function' (sfun_discreteVariableDelay)
    {
      SimStruct *rts = simulation_servo_agent_M->childSfunctions[0];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    // Start for MATLABSystem: '<S3>/Moving Average'
    simulation_servo_agent_DW.obj.isInitialized = 0;
    simulation_servo_agent_DW.obj.NumChannels = -1;
    simulation_servo_agent_DW.objisempty_o = true;
    simulation_servo_agent_DW.obj.isInitialized = 1;
    simulation_servo_agent_DW.obj.NumChannels = 1;
    simulation_servo_agent_DW.gobj_0.isInitialized = 0;
    simulation_servo_agent_DW.obj.pStatistic = &simulation_servo_agent_DW.gobj_0;
    simulation_servo_agent_DW.obj.TunablePropsChanged = false;

    // End of Start for SubSystem: '<S1>/MotorControlSubsystem'
    // End of Start for SubSystem: '<Root>/Loop Subsystem'

    // Start for If: '<S2>/If'
    simulation_servo_agent_DW.If_ActiveSubsystem = -1;

    // Start for IfAction SubSystem: '<S2>/If Action Subsystem'
    // Start for MATLABSystem: '<S36>/Set Parameter'
    simulation_servo_agent_DW.obj_j.isInitialized = 0;
    simulation_servo_agent_DW.objisempty_a = true;
    simulation_servo_agent_DW.obj_j.isInitialized = 1;
    // for (i = 0; i < 49; i++) {
    //   simulation_servo_agent_B.cv0[i] = tmp_2[i];
    // }

    // simulation_servo_agent_B.cv0[49] = '\x00';
    simulation_servo_agent_B.cv0 = tmp_2;
    ParamSet_simulation_servo_agent_3446.initialize(simulation_servo_agent_B.cv0);

    // End of Start for MATLABSystem: '<S36>/Set Parameter'

    // Start for MATLABSystem: '<S36>/Set Parameter1'
    simulation_servo_agent_DW.obj_f.isInitialized = 0;
    simulation_servo_agent_DW.objisempty_m = true;
    simulation_servo_agent_DW.obj_f.isInitialized = 1;
    // for (i = 0; i < 45; i++) {
    //   simulation_servo_agent_B.cv1[i] = tmp_1[i];
    // }

    // simulation_servo_agent_B.cv1[45] = '\x00';
    simulation_servo_agent_B.cv1 = tmp_1; 
    ParamSet_simulation_servo_agent_3447.initialize(simulation_servo_agent_B.cv1);

    // End of Start for MATLABSystem: '<S36>/Set Parameter1'
    // End of Start for SubSystem: '<S2>/If Action Subsystem'

    // SystemInitialize for Atomic SubSystem: '<S2>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S37>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S38>/Out1'
    simulation_servo_agent_B.In1 = simulation_servo_agent_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S37>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<S2>/Subscribe'

    // SystemInitialize for Enabled SubSystem: '<Root>/Loop Subsystem'
    // SystemInitialize for Atomic SubSystem: '<S1>/MotorControlSubsystem'
    // InitializeConditions for MATLABSystem: '<S3>/Moving Average1' incorporates:
    //   UnitDelay: '<S3>/Unit Delay'

    simulation_servo_agent_DW.UnitDelay_DSTATE =
      simulation_servo_agent_P.UnitDelay_InitialCondition;

    // InitializeConditions for DiscreteIntegrator: '<S5>/Filter'
    simulation_servo_agent_DW.Filter_DSTATE = simulation_servo_agent_P.Filter_IC;

    // InitializeConditions for DiscreteIntegrator: '<S5>/Integrator'
    simulation_servo_agent_DW.Integrator_DSTATE =
      simulation_servo_agent_P.Integrator_IC;

    // InitializeConditions for Derivative: '<S3>/Derivative'
    simulation_servo_agent_DW.TimeStampA = (rtInf);
    simulation_servo_agent_DW.TimeStampB = (rtInf);

    // InitializeConditions for DiscreteIntegrator: '<S18>/Integ4'
    simulation_servo_agent_DW.Integ4_DSTATE = simulation_servo_agent_P.Integ4_IC;

    // InitializeConditions for S-Function (sfun_discreteVariableDelay): '<S19>/S-Function' 
    // Level2 S-Function Block: '<S19>/S-Function' (sfun_discreteVariableDelay)
    {
      SimStruct *rts = simulation_servo_agent_M->childSfunctions[0];
      sfcnInitializeConditions(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    // InitializeConditions for MATLABSystem: '<S3>/Moving Average1'
    if (simulation_servo_agent_DW.obj_i.pStatistic->isInitialized == 1) {
      simulation_servo_agent_DW.obj_i.pStatistic->pCumSum = 0.0;
      memset(&simulation_servo_agent_DW.obj_i.pStatistic->pCumSumRev[0], 0, 299U
             * sizeof(real_T));
      simulation_servo_agent_DW.obj_i.pStatistic->pCumRevIndex = 1.0;
    }

    // InitializeConditions for MATLABSystem: '<S3>/Moving Average'
    if (simulation_servo_agent_DW.obj.pStatistic->isInitialized == 1) {
      simulation_servo_agent_DW.obj.pStatistic->pCumSum = 0.0;
      memset(&simulation_servo_agent_DW.obj.pStatistic->pCumSumRev[0], 0, 999U *
             sizeof(real_T));
      simulation_servo_agent_DW.obj.pStatistic->pCumRevIndex = 1.0;
    }

    // End of InitializeConditions for MATLABSystem: '<S3>/Moving Average'
    // End of SystemInitialize for SubSystem: '<S1>/MotorControlSubsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Loop Subsystem'
  }
}

// Model terminate function
void simulation_servo_agent_terminate(void)
{
  // Terminate for MATLABSystem: '<S2>/Get Parameter'
  if (simulation_servo_agent_DW.obj_k.isInitialized == 1) {
    simulation_servo_agent_DW.obj_k.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S2>/Get Parameter'

  // Terminate for Atomic SubSystem: '<S2>/Subscribe'
  // Terminate for MATLABSystem: '<S37>/SourceBlock'
  if (simulation_servo_agent_DW.obj_a.isInitialized == 1) {
    simulation_servo_agent_DW.obj_a.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S37>/SourceBlock'
  // End of Terminate for SubSystem: '<S2>/Subscribe'

  // Terminate for MATLABSystem: '<S2>/Get Parameter2'
  if (simulation_servo_agent_DW.obj_c.isInitialized == 1) {
    simulation_servo_agent_DW.obj_c.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S2>/Get Parameter2'

  // Terminate for MATLABSystem: '<S2>/Get Parameter1'
  if (simulation_servo_agent_DW.obj_cm.isInitialized == 1) {
    simulation_servo_agent_DW.obj_cm.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S2>/Get Parameter1'

  // Terminate for Enabled SubSystem: '<Root>/Loop Subsystem'
  // Terminate for Atomic SubSystem: '<S1>/MotorControlSubsystem'
  // Terminate for SimscapeExecutionBlock: '<S35>/STATE_1'
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    simulation_servo_agent_DW.STATE_1_DiagnosticManager);
  nesl_destroy_simulation_data((NeslSimulationData *)
    simulation_servo_agent_DW.STATE_1_SimulationData);
  nesl_erase_simulator("simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Solver Configuration1_1");

  // Terminate for SimscapeExecutionBlock: '<S35>/OUTPUT_1_0'
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    simulation_servo_agent_DW.OUTPUT_1_0_DiagnosticManager);
  nesl_destroy_simulation_data((NeslSimulationData *)
    simulation_servo_agent_DW.OUTPUT_1_0_SimulationData);
  nesl_erase_simulator("simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Solver Configuration1_1");

  // Terminate for MATLABSystem: '<S3>/Moving Average1'
  if (simulation_servo_agent_DW.obj_i.isInitialized == 1) {
    simulation_servo_agent_DW.obj_i.isInitialized = 2;
    if (simulation_servo_agent_DW.obj_i.pStatistic->isInitialized == 1) {
      simulation_servo_agent_DW.obj_i.pStatistic->isInitialized = 2;
    }

    simulation_servo_agent_DW.obj_i.NumChannels = -1;
  }

  // End of Terminate for MATLABSystem: '<S3>/Moving Average1'

  // Terminate for SimscapeExecutionBlock: '<S35>/OUTPUT_1_1'
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    simulation_servo_agent_DW.OUTPUT_1_1_DiagnosticManager);
  nesl_destroy_simulation_data((NeslSimulationData *)
    simulation_servo_agent_DW.OUTPUT_1_1_SimulationData);
  nesl_erase_simulator("simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Solver Configuration1_1");

  // Terminate for SimscapeExecutionBlock: '<S35>/OUTPUT_1_2'
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    simulation_servo_agent_DW.OUTPUT_1_2_DiagnosticManager);
  nesl_destroy_simulation_data((NeslSimulationData *)
    simulation_servo_agent_DW.OUTPUT_1_2_SimulationData);
  nesl_erase_simulator("simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Solver Configuration1_1");

  // Terminate for Atomic SubSystem: '<S9>/Publish2'
  // Terminate for MATLABSystem: '<S26>/SinkBlock'
  if (simulation_servo_agent_DW.obj_h.isInitialized == 1) {
    simulation_servo_agent_DW.obj_h.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S26>/SinkBlock'
  // End of Terminate for SubSystem: '<S9>/Publish2'

  // Terminate for S-Function (sfun_discreteVariableDelay): '<S19>/S-Function'
  // Level2 S-Function Block: '<S19>/S-Function' (sfun_discreteVariableDelay)
  {
    SimStruct *rts = simulation_servo_agent_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  // Terminate for MATLABSystem: '<S3>/Moving Average'
  if (simulation_servo_agent_DW.obj.isInitialized == 1) {
    simulation_servo_agent_DW.obj.isInitialized = 2;
    if (simulation_servo_agent_DW.obj.pStatistic->isInitialized == 1) {
      simulation_servo_agent_DW.obj.pStatistic->isInitialized = 2;
    }

    simulation_servo_agent_DW.obj.NumChannels = -1;
  }

  // End of Terminate for MATLABSystem: '<S3>/Moving Average'
  // End of Terminate for SubSystem: '<S1>/MotorControlSubsystem'
  // End of Terminate for SubSystem: '<Root>/Loop Subsystem'

  // Terminate for IfAction SubSystem: '<S2>/If Action Subsystem'
  // Terminate for MATLABSystem: '<S36>/Set Parameter'
  if (simulation_servo_agent_DW.obj_j.isInitialized == 1) {
    simulation_servo_agent_DW.obj_j.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S36>/Set Parameter'

  // Terminate for MATLABSystem: '<S36>/Set Parameter1'
  if (simulation_servo_agent_DW.obj_f.isInitialized == 1) {
    simulation_servo_agent_DW.obj_f.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S36>/Set Parameter1'
  // End of Terminate for SubSystem: '<S2>/If Action Subsystem'
}
