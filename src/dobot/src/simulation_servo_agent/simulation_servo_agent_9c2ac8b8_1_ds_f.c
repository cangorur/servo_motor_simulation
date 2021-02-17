/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Solver Configuration1'.
 */

#include "ne_ds.h"
#include "simulation_servo_agent_9c2ac8b8_1_ds_f.h"
#include "simulation_servo_agent_9c2ac8b8_1_ds_ds_struct.h"
#include "simulation_servo_agent_9c2ac8b8_1_ds_externals.h"
#include "simulation_servo_agent_9c2ac8b8_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T simulation_servo_agent_9c2ac8b8_1_ds_f(const NeDynamicSystem *ds, const
  NeDynamicSystemInput *t10, NeDsMethodOutput *t11)
{
  PmRealVector out;
  real_T t1[1];
  real_T t2[1];
  int32_T t3[2];
  void *_in1var[3];
  real_T _retvar[1];
  real_T t4_idx_6;
  int32_T M_idx_0;
  int32_T Q_idx_0;
  int32_T Q_idx_1;
  real_T efOut_idx_0;
  real_T X_idx_7;
  real_T U_idx_3;
  real_T X_idx_8;
  Q_idx_0 = t10->mQ.mX[0];
  Q_idx_1 = t10->mQ.mX[1];
  M_idx_0 = t10->mM.mX[0];
  U_idx_3 = t10->mU.mX[3];
  X_idx_7 = t10->mX.mX[7];
  X_idx_8 = t10->mX.mX[8];
  out = t11->mF;
  if (M_idx_0 != 0) {
    efOut_idx_0 = 0.0;
  } else {
    t1[0] = 0.0;
    t2[0] = 1.0;
    t3[0ULL] = Q_idx_0;
    t3[1ULL] = Q_idx_1;
    _in1var[0ULL] = (void *)t1;
    _in1var[1ULL] = (void *)t2;
    _in1var[2ULL] = (void *)t3;
    compute_gaussian_value(&_retvar, &_in1var);
    efOut_idx_0 = _retvar[0];
  }

  t4_idx_6 = -(tanh(X_idx_7 / 1.0000000000000002E-6) * 0.00080170918437309769);
  X_idx_7 = -(pmf_sqrt(U_idx_3 / 2.0 / 0.001) * X_idx_8);
  out.mX[0] = -0.0;
  out.mX[1] = -0.0;
  out.mX[2] = -0.0;
  out.mX[3] = 0.0;
  out.mX[4] = 0.0;
  out.mX[5] = 0.0;
  out.mX[6] = t4_idx_6;
  out.mX[7] = -efOut_idx_0;
  out.mX[8] = X_idx_7;
  (void)ds;
  (void)t11;
  return 0;
}
