/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Solver Configuration1'.
 */

#include "ne_ds.h"
#include "simulation_servo_agent_9c2ac8b8_1_ds_obs_all.h"
#include "simulation_servo_agent_9c2ac8b8_1_ds_ds_struct.h"
#include "simulation_servo_agent_9c2ac8b8_1_ds_externals.h"
#include "simulation_servo_agent_9c2ac8b8_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T simulation_servo_agent_9c2ac8b8_1_ds_obs_all(const NeDynamicSystem *ds,
  const NeDynamicSystemInput *t4, NeDsMethodOutput *t5)
{
  PmRealVector out;
  real_T Loop_Subsystem_MotorControlSubsystem_Controlled_Voltage_Source2;
  real_T Loop_Subsystem_MotorControlSubsystem_DC_Motor_Gear_Box_t_in;
  real_T Loop_Subsystem_MotorControlSubsystem_DC_Motor_La_i;
  real_T Loop_Subsystem_MotorControlSubsystem_DC_Motor_La_p_v;
  real_T Loop_Subsystem_MotorControlSubsystem_DC_Motor_Voltage_Sensor_V;
  real_T Loop_Subsystem_MotorControlSubsystem_Sensor_Torque_Sensor_T;
  real_T Loop_Subsystem_MotorControlSubsystem_Torque_Source_w;
  real_T t1;
  real_T X_idx_0;
  real_T X_idx_3;
  real_T U_idx_0;
  real_T X_idx_4;
  real_T U_idx_1;
  real_T U_idx_2;
  real_T X_idx_5;
  real_T X_idx_1;
  real_T X_idx_6;
  real_T X_idx_2;
  U_idx_0 = t4->mU.mX[0];
  U_idx_1 = t4->mU.mX[1];
  U_idx_2 = t4->mU.mX[2];
  X_idx_0 = t4->mX.mX[0];
  X_idx_1 = t4->mX.mX[1];
  X_idx_2 = t4->mX.mX[2];
  X_idx_3 = t4->mX.mX[3];
  X_idx_4 = t4->mX.mX[4];
  X_idx_5 = t4->mX.mX[5];
  X_idx_6 = t4->mX.mX[6];
  out = t5->mOBS_ALL;
  Loop_Subsystem_MotorControlSubsystem_Controlled_Voltage_Source2 = -X_idx_0 +
    X_idx_3 * -1.0E-9;
  Loop_Subsystem_MotorControlSubsystem_DC_Motor_Gear_Box_t_in = (X_idx_4 *
    0.0038684719535783366 + U_idx_1 * -0.0038684719535783366) + U_idx_2 *
    -0.0038684719535783366;
  Loop_Subsystem_MotorControlSubsystem_DC_Motor_La_i = X_idx_3 * 1.0E-9 +
    X_idx_0;
  Loop_Subsystem_MotorControlSubsystem_DC_Motor_La_p_v = X_idx_3 + X_idx_5;
  Loop_Subsystem_MotorControlSubsystem_DC_Motor_Voltage_Sensor_V = -X_idx_5 /
    -1.0;
  t1 = -U_idx_0 / -1.0;
  Loop_Subsystem_MotorControlSubsystem_Sensor_Torque_Sensor_T = -U_idx_1 +
    -U_idx_2;
  Loop_Subsystem_MotorControlSubsystem_Torque_Source_w = -(-X_idx_1) / -1.0;
  out.mX[0] = Loop_Subsystem_MotorControlSubsystem_Controlled_Voltage_Source2;
  out.mX[1] = 0.0;
  out.mX[2] = U_idx_0;
  out.mX[3] = U_idx_0;
  out.mX[4] = U_idx_0;
  out.mX[5] = 0.0;
  out.mX[6] = X_idx_1;
  out.mX[7] = X_idx_1 * 258.5;
  out.mX[8] = Loop_Subsystem_MotorControlSubsystem_DC_Motor_Gear_Box_t_in;
  out.mX[9] = Loop_Subsystem_MotorControlSubsystem_DC_Motor_Gear_Box_t_in *
    -258.5;
  out.mX[10] = X_idx_1;
  out.mX[11] = X_idx_4;
  out.mX[12] = X_idx_1;
  out.mX[13] = X_idx_0;
  out.mX[14] = Loop_Subsystem_MotorControlSubsystem_DC_Motor_La_i;
  out.mX[15] = X_idx_5;
  out.mX[16] = Loop_Subsystem_MotorControlSubsystem_DC_Motor_La_p_v;
  out.mX[17] = X_idx_3;
  out.mX[18] = X_idx_1;
  out.mX[19] = Loop_Subsystem_MotorControlSubsystem_DC_Motor_La_i;
  out.mX[20] = Loop_Subsystem_MotorControlSubsystem_DC_Motor_La_p_v;
  out.mX[21] = U_idx_0;
  out.mX[22] = Loop_Subsystem_MotorControlSubsystem_DC_Motor_La_i *
    5.6659243885083139;
  out.mX[23] = 0.0;
  out.mX[24] = X_idx_1 * 258.5;
  out.mX[25] = Loop_Subsystem_MotorControlSubsystem_DC_Motor_La_i;
  out.mX[26] = 0.0;
  out.mX[27] = X_idx_5;
  out.mX[28] = Loop_Subsystem_MotorControlSubsystem_DC_Motor_La_i *
    -0.006488870651066;
  out.mX[29] = X_idx_5;
  out.mX[30] = X_idx_5 * 154.11002218632896;
  out.mX[31] = 0.0;
  out.mX[32] = X_idx_1 * 258.5;
  out.mX[33] = (((X_idx_0 * 0.006488870651066 + X_idx_4 * -0.0038684719535783366)
                 + X_idx_3 * 6.488870651066E-12) + U_idx_1 *
                0.0038684719535783366) + U_idx_2 * 0.0038684719535783366;
  out.mX[34] = X_idx_6;
  out.mX[35] = U_idx_0;
  out.mX[36] = 0.0;
  out.mX[37] = Loop_Subsystem_MotorControlSubsystem_DC_Motor_Voltage_Sensor_V;
  out.mX[38] = 0.0;
  out.mX[39] = 0.0;
  out.mX[40] = X_idx_5;
  out.mX[41] = Loop_Subsystem_MotorControlSubsystem_DC_Motor_Voltage_Sensor_V;
  out.mX[42] = 0.0;
  out.mX[43] = -Loop_Subsystem_MotorControlSubsystem_Controlled_Voltage_Source2;
  out.mX[44] = -Loop_Subsystem_MotorControlSubsystem_Controlled_Voltage_Source2;
  out.mX[45] = U_idx_0;
  out.mX[46] = U_idx_0;
  out.mX[47] = 0.0;
  out.mX[48] = U_idx_0;
  out.mX[49] = U_idx_0;
  out.mX[50] = t1;
  out.mX[51] = 0.0;
  out.mX[52] = 0.0;
  out.mX[53] = U_idx_0;
  out.mX[54] = t1;
  out.mX[55] = U_idx_0;
  out.mX[56] = 0.0;
  out.mX[57] = 0.0;
  out.mX[58] = 0.0;
  out.mX[59] = 0.0;
  out.mX[60] = 0.0;
  out.mX[61] = X_idx_2;
  out.mX[62] = X_idx_1;
  out.mX[63] = X_idx_1;
  out.mX[64] = X_idx_2;
  out.mX[65] = 0.0;
  out.mX[66] = X_idx_1;
  out.mX[67] = X_idx_1;
  out.mX[68] = X_idx_2;
  out.mX[69] = 0.0;
  out.mX[70] = X_idx_1;
  out.mX[71] = X_idx_1;
  out.mX[72] = X_idx_1;
  out.mX[73] = Loop_Subsystem_MotorControlSubsystem_Sensor_Torque_Sensor_T;
  out.mX[74] = Loop_Subsystem_MotorControlSubsystem_Sensor_Torque_Sensor_T;
  out.mX[75] = 0.0;
  out.mX[76] = 0.0;
  out.mX[77] = X_idx_1;
  out.mX[78] = U_idx_1;
  out.mX[79] = -U_idx_1;
  out.mX[80] = Loop_Subsystem_MotorControlSubsystem_Torque_Source_w;
  out.mX[81] = 0.0;
  out.mX[82] = X_idx_1;
  out.mX[83] = U_idx_2;
  out.mX[84] = -U_idx_2;
  out.mX[85] = Loop_Subsystem_MotorControlSubsystem_Torque_Source_w;
  (void)ds;
  (void)t5;
  return 0;
}
