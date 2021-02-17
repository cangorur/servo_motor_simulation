/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Solver Configuration1'.
 */
/* simulation_servo_agent_9c2ac8b8_1_ds.c - body for module simulation_servo_agent_9c2ac8b8_1_ds */

#include "ne_ds.h"
#include "simulation_servo_agent_9c2ac8b8_1_ds_f.h"
#include "simulation_servo_agent_9c2ac8b8_1_ds_log.h"
#include "simulation_servo_agent_9c2ac8b8_1_ds_obs_exp.h"
#include "simulation_servo_agent_9c2ac8b8_1_ds_obs_act.h"
#include "simulation_servo_agent_9c2ac8b8_1_ds_obs_all.h"
#include "simulation_servo_agent_9c2ac8b8_1_ds.h"
#include "ssc_ml_fun.h"
#include "simulation_servo_agent_9c2ac8b8_1_ds_external_struct.h"
#include "simulation_servo_agent_9c2ac8b8_1_ds_ds_struct.h"
#include "simulation_servo_agent_9c2ac8b8_1_ds_externals.h"

static int32_T ds_m_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_m(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_vmm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dxm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dum_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dum(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dtm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_a_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_a(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_b_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_b(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_c_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_c(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_vmf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_slf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_slf0(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dxf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_duf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_duf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dtf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_ddf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_tduf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_tdxf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dnf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dnf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dnf_v_x(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_ic(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_icr(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_icr_im(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icr_id(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxicr(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxicr_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_tduicr_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_mduy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_mdxy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_tduy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_tdxy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_y(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_dxy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxy(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_duy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_duy(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dty_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dty(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_mode(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_zc(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_cache_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_cache_i(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_update_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_update_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_sfo(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_sfp(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_init_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_init_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_assert(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_passert(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_del_t(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_del_v(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_del_v0(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_del_tmax(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxdelt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxdelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dudelt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dudelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtdelt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtdelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dp_l(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dp_i(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dp_j(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dp_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_qx(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_qu(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_qt(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_q1(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_qx_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_qu_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_qt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_q1_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_var_tol(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_eq_tol(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_lv(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_slv(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static NeDsMethodOutput *ds_output_m_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_m(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vmm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dum_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dum(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dtm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_a_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_a(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_b_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_b(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_c_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_c(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_f(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vmf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slf0(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_duf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_duf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dtf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_ddf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_ddf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tduf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tdxf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dnf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dnf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dnf_v_x(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_ic(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_im(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_id(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxicr(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_tduicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_mduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_y(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxy(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_duy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_duy(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dty_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dty(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mode(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_zc(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_cache_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_cache_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_sfo(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_sfp(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_init_r(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_init_i(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_log(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_assert(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_passert(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_del_t(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_del_v(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_del_v0(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_del_tmax(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dxdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dxdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dudelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dudelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dtdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_obs_exp(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_obs_act(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_obs_all(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dp_l(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_i(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_j(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_r(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qx(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qu(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_q1(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qx_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qu_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qt_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_q1_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_var_tol(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_eq_tol(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_lv(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slv(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static void release_reference(NeDynamicSystem *ds);
static void get_reference(NeDynamicSystem *ds);
static NeDynamicSystem *diagnostics(const NeDynamicSystem *ds);
static void expand(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                   PmRealVector *out);
static NeEquationData s_equation_data[9] = { { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME,
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Inertia",
    2U, 0U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/La",
    2U, 2U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Sensor/Rotational Motion Sensor",
    2U, 4U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Ra",
    1U, 6U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Rotational Electromechanical Converter",
    1U, 7U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Rotational Friction",
    1U, 8U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Rotational Friction",
    1U, 9U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Torque Noise Source",
    1U, 10U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Torque Noise Source",
    1U, 11U, FALSE, 1.0, "1", } };

static NeVariableData s_variable_data[9] = { {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.La.i_L", 0U, 0,
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/La",
    1.0, "1", 0.0, TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Inductor current", },
    { "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Inertia.w", 0U, 0,
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Inertia",
    1.0, "1", 0.0, TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Rotational velocity",
  }, {
    "Loop_Subsystem.MotorControlSubsystem.Sensor.Rotational_Motion_Sensor.phi",
    0U, 0,
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Sensor/Rotational Motion Sensor",
    1.0, "1", 0.0, TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Angle", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.La.v", 0U, 0,
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/La",
    1.0, "1", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Inertia.t", 0U, 0,
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Inertia",
    1.0, "1", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Torque", }, {
    "Loop_Subsystem.MotorControlSubsystem.Torque_Noise_Source.t", 0U, 0,
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Torque Noise Source",
    1.0, "1", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Torque", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Rotational_Electromechanical_Converter.v",
    0U, 0,
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Rotational Electromechanical Converter",
    1.0, "1", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Rotational_Friction.w", 0U, 0,
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Rotational Friction",
    1.0, "1", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Rotational velocity", }, {
    "Loop_Subsystem.MotorControlSubsystem.Torque_Noise_Source.RandomNumber.Y",
    0U, 0,
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Torque Noise Source",
    1.0, "1", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Y", } };

static NeVariableData *s_discrete_data = NULL;
static NeObservableData s_observable_data[82] = { {
    "Loop_Subsystem.MotorControlSubsystem.Controlled_Voltage_Source2.i",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Controlled Voltage Source2",
    1U, 1U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "i", }, {
    "Loop_Subsystem.MotorControlSubsystem.Controlled_Voltage_Source2.n.v",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Controlled Voltage Source2",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, FALSE, "Voltage", }, {
    "Loop_Subsystem.MotorControlSubsystem.Controlled_Voltage_Source2.p.v",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Controlled Voltage Source2",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "Voltage", }, {
    "Loop_Subsystem.MotorControlSubsystem.Controlled_Voltage_Source2.v",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Controlled Voltage Source2",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "v", }, {
    "Loop_Subsystem.MotorControlSubsystem.Controlled_Voltage_Source2.vT",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Controlled Voltage Source2",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "vT", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Gear_Box.O.w",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Gear Box",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, FALSE, "Rotational velocity", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Gear_Box.S.w",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Gear Box",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, FALSE, "Rotational velocity", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Gear_Box.t_in",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Gear Box",
    1U, 1U, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "Input shaft incoming torque", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Gear_Box.t_out",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Gear Box",
    1U, 1U, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "Output shaft incoming torque", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Inertia.I.w",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Inertia",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, FALSE, "Rotational velocity", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Inertia.t",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Inertia",
    1U, 1U, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "Torque", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Inertia.w",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Inertia",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, FALSE, "Rotational velocity", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.La.i_L",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/La",
    1U, 1U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, FALSE, "Inductor current", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.La.i",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/La",
    1U, 1U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "Current", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.La.n.v",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/La",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "Voltage", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.La.p.v",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/La",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "Voltage", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.La.v",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/La",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "Voltage", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Ra.i",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Ra",
    1U, 1U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "Current", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Ra.n.v",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Ra",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "Voltage", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Ra.p.v",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Ra",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "Voltage", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Ra.v",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Ra",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "Voltage", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Rotational_Electromechanical_Converter.C.w",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Rotational Electromechanical Converter",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, FALSE, "Rotational velocity", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Rotational_Electromechanical_Converter.R.w",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Rotational Electromechanical Converter",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, FALSE, "Rotational velocity", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Rotational_Electromechanical_Converter.i",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Rotational Electromechanical Converter",
    1U, 1U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "Current", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Rotational_Electromechanical_Converter.n.v",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Rotational Electromechanical Converter",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, FALSE, "Voltage", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Rotational_Electromechanical_Converter.p.v",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Rotational Electromechanical Converter",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "Voltage", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Rotational_Electromechanical_Converter.t",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Rotational Electromechanical Converter",
    1U, 1U, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "Torque", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Rotational_Electromechanical_Converter.v",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Rotational Electromechanical Converter",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "Voltage", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Rotational_Electromechanical_Converter.w",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Rotational Electromechanical Converter",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, FALSE, "Angular velocity", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Rotational_Friction.C.w",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Rotational Friction",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, FALSE, "Rotational velocity", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Rotational_Friction.R.w",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Rotational Friction",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, FALSE, "Rotational velocity", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Rotational_Friction.t",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Rotational Friction",
    1U, 1U, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "Torque", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Rotational_Friction.w",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Rotational Friction",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, FALSE, "Rotational velocity", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Voltage_Sensor.V",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Voltage Sensor",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "V", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Voltage_Sensor.i1",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Voltage Sensor",
    1U, 1U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, FALSE, "Current", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Voltage_Sensor.n.v",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Voltage Sensor",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, FALSE, "Voltage", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Voltage_Sensor.p.v",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Voltage Sensor",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "Voltage", }, {
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Voltage_Sensor.v1",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Voltage Sensor",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "Voltage", }, {
    "Loop_Subsystem.MotorControlSubsystem.Electrical_Reference1.V.v",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Electrical Reference1",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, FALSE, "Voltage", }, {
    "Loop_Subsystem.MotorControlSubsystem.Meas_I.Current_Sensor.I",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Meas I/Current Sensor",
    1U, 1U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "I", }, {
    "Loop_Subsystem.MotorControlSubsystem.Meas_I.Current_Sensor.i1",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Meas I/Current Sensor",
    1U, 1U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "Current", }, {
    "Loop_Subsystem.MotorControlSubsystem.Meas_I.Current_Sensor.n.v",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Meas I/Current Sensor",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "Voltage", }, {
    "Loop_Subsystem.MotorControlSubsystem.Meas_I.Current_Sensor.p.v",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Meas I/Current Sensor",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "Voltage", }, {
    "Loop_Subsystem.MotorControlSubsystem.Meas_I.Current_Sensor.v1",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Meas I/Current Sensor",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, FALSE, "Voltage", }, {
    "Loop_Subsystem.MotorControlSubsystem.Meas_Vin.Voltage_Sensor.V",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Meas Vin/Voltage Sensor",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "V", }, {
    "Loop_Subsystem.MotorControlSubsystem.Meas_Vin.Voltage_Sensor.i1",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Meas Vin/Voltage Sensor",
    1U, 1U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, FALSE, "Current", }, {
    "Loop_Subsystem.MotorControlSubsystem.Meas_Vin.Voltage_Sensor.n.v",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Meas Vin/Voltage Sensor",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, FALSE, "Voltage", }, {
    "Loop_Subsystem.MotorControlSubsystem.Meas_Vin.Voltage_Sensor.p.v",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Meas Vin/Voltage Sensor",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "Voltage", }, {
    "Loop_Subsystem.MotorControlSubsystem.Meas_Vin.Voltage_Sensor.v1",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Meas Vin/Voltage Sensor",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "Voltage", }, {
    "Loop_Subsystem.MotorControlSubsystem.Mechanical_Rotational_Reference1.W.w",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Mechanical Rotational Reference1",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, FALSE, "Rotational velocity", }, {
    "Loop_Subsystem.MotorControlSubsystem.Mechanical_Rotational_Reference2.W.w",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Mechanical Rotational Reference2",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, FALSE, "Rotational velocity", }, {
    "Loop_Subsystem.MotorControlSubsystem.Mechanical_Rotational_Reference3.W.w",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Mechanical Rotational Reference3",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, FALSE, "Rotational velocity", }, {
    "Loop_Subsystem.MotorControlSubsystem.Mechanical_Rotational_Reference4.W.w",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Mechanical Rotational Reference4",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, FALSE, "Rotational velocity", }, {
    "Loop_Subsystem.MotorControlSubsystem.Sensor.Mechanical_Rotational_Reference1.W.w",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Sensor/Mechanical Rotational Reference1",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, FALSE, "Rotational velocity", }, {
    "Loop_Subsystem.MotorControlSubsystem.Sensor.PS_Terminator.I",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Sensor/PS Terminator",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "I", }, {
    "Loop_Subsystem.MotorControlSubsystem.Sensor.Rotational_Motion_Sensor.A",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Sensor/Rotational Motion Sensor",
    1U, 1U, "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "A", }, {
    "Loop_Subsystem.MotorControlSubsystem.Sensor.Rotational_Motion_Sensor.C.w",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Sensor/Rotational Motion Sensor",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, FALSE, "Rotational velocity", }, {
    "Loop_Subsystem.MotorControlSubsystem.Sensor.Rotational_Motion_Sensor.R.w",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Sensor/Rotational Motion Sensor",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, FALSE, "Rotational velocity", }, {
    "Loop_Subsystem.MotorControlSubsystem.Sensor.Rotational_Motion_Sensor.W",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Sensor/Rotational Motion Sensor",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, FALSE, "W", }, {
    "Loop_Subsystem.MotorControlSubsystem.Sensor.Rotational_Motion_Sensor.phi",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Sensor/Rotational Motion Sensor",
    1U, 1U, "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, FALSE, "Angle", }, {
    "Loop_Subsystem.MotorControlSubsystem.Sensor.Rotational_Motion_Sensor.t",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Sensor/Rotational Motion Sensor",
    1U, 1U, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, FALSE, "Torque", }, {
    "Loop_Subsystem.MotorControlSubsystem.Sensor.Rotational_Motion_Sensor.w",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Sensor/Rotational Motion Sensor",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, FALSE, "Angular velocity", }, {
    "Loop_Subsystem.MotorControlSubsystem.Sensor.Torque_Sensor.C.w",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Sensor/Torque Sensor",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, FALSE, "Rotational velocity", }, {
    "Loop_Subsystem.MotorControlSubsystem.Sensor.Torque_Sensor.R.w",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Sensor/Torque Sensor",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, FALSE, "Rotational velocity", }, {
    "Loop_Subsystem.MotorControlSubsystem.Sensor.Torque_Sensor.T",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Sensor/Torque Sensor",
    1U, 1U, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "T", }, {
    "Loop_Subsystem.MotorControlSubsystem.Sensor.Torque_Sensor.t",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Sensor/Torque Sensor",
    1U, 1U, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "Torque", }, {
    "Loop_Subsystem.MotorControlSubsystem.Sensor.Torque_Sensor.w",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Sensor/Torque Sensor",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, FALSE, "Angular velocity", }, {
    "Loop_Subsystem.MotorControlSubsystem.Torque_Noise_Source.B.w",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Torque Noise Source",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, FALSE, "Rotational velocity", }, {
    "Loop_Subsystem.MotorControlSubsystem.Torque_Noise_Source.F.w",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Torque Noise Source",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, FALSE, "Rotational velocity", }, {
    "Loop_Subsystem.MotorControlSubsystem.Torque_Noise_Source.PSD",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Torque Noise Source",
    1U, 1U, "m^2*N^2/Hz", 1.0, "m^2*N^2/Hz", NE_NOMINAL_SOURCE_FIXED,
    NE_INIT_MODE_NONE, FALSE, FALSE, FALSE, "P", }, {
    "Loop_Subsystem.MotorControlSubsystem.Torque_Noise_Source.RandomNumber.Y",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Torque Noise Source",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "Y", }, {
    "Loop_Subsystem.MotorControlSubsystem.Torque_Noise_Source.t",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Torque Noise Source",
    1U, 1U, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "Torque", }, {
    "Loop_Subsystem.MotorControlSubsystem.Torque_Source.C.w",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Torque  Source",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, FALSE, "Rotational velocity", }, {
    "Loop_Subsystem.MotorControlSubsystem.Torque_Source.R.w",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Torque  Source",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, FALSE, "Rotational velocity", }, {
    "Loop_Subsystem.MotorControlSubsystem.Torque_Source.S",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Torque  Source",
    1U, 1U, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "S", }, {
    "Loop_Subsystem.MotorControlSubsystem.Torque_Source.t",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Torque  Source",
    1U, 1U, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "Torque", }, {
    "Loop_Subsystem.MotorControlSubsystem.Torque_Source.w",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Torque  Source",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, FALSE, "Angular velocity", }, {
    "Loop_Subsystem.MotorControlSubsystem.Torque_Source1.C.w",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Torque  Source1",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, FALSE, "Rotational velocity", }, {
    "Loop_Subsystem.MotorControlSubsystem.Torque_Source1.R.w",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Torque  Source1",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, FALSE, "Rotational velocity", }, {
    "Loop_Subsystem.MotorControlSubsystem.Torque_Source1.S",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Torque  Source1",
    1U, 1U, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "S", }, {
    "Loop_Subsystem.MotorControlSubsystem.Torque_Source1.t",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Torque  Source1",
    1U, 1U, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, FALSE, "Torque", }, {
    "Loop_Subsystem.MotorControlSubsystem.Torque_Source1.w",
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Torque  Source1",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, FALSE, "Angular velocity", } };

static NeModeData s_major_mode_data[2] = { { "update0", 0U, "", 0, "", }, {
    "update0", 1U, "", 0, "", } };

static NeZCData s_zc_data[1] = { {
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Torque Noise Source",
    1U, 0U,
    "Loop_Subsystem.MotorControlSubsystem.Torque_Noise_Source.RandomNumber.c",
    "D:/Program Files/MATLAB/R2017b/toolbox/physmod/simscape/library/m/+simscape_internal/rand_gaussian.sscp",
    NE_ZC_TYPE_FALSE, } };

static NeRange s_range[1] = { {
    "D:/Program Files/MATLAB/R2017b/toolbox/physmod/simscape/library/m/+simscape_internal/rand_gaussian.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeAssertData s_assert_data[3] = { {
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Rotational Friction",
    1U, 0U, "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Rotational_Friction",
    "D:/Program Files/MATLAB/R2017b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/friction.ssc",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/DC Motor/Rotational Friction",
    1U, 1U, "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Rotational_Friction",
    "D:/Program Files/MATLAB/R2017b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/friction.ssc",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Torque Noise Source",
    1U, 2U, "Loop_Subsystem.MotorControlSubsystem.Torque_Noise_Source",
    "D:/Program Files/MATLAB/R2017b/toolbox/physmod/sdl/sdl/+sdl/+sources/torque_noise_source.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", } };

static NeRange s_assert_range[3] = { {
    "D:/Program Files/MATLAB/R2017b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/friction.ssc",
    38U, 61U, 38U, 62U, NE_RANGE_TYPE_NORMAL, }, {
    "D:/Program Files/MATLAB/R2017b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/friction.ssc",
    38U, 47U, 38U, 59U, NE_RANGE_TYPE_NORMAL, }, {
    "D:/Program Files/MATLAB/R2017b/toolbox/physmod/sdl/sdl/+sdl/+sources/torque_noise_source.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeAssertData *s_param_assert_data = NULL;
static NeRange *s_param_assert_range = NULL;
static NeRange s_equation_range[12] = { {
    "D:/Program Files/MATLAB/R2017b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 5U, 31U, 21U, NE_RANGE_TYPE_NORMAL, }, {
    "D:/Program Files/MATLAB/R2017b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 20U, 31U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "D:/Program Files/MATLAB/R2017b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc",
    30U, 5U, 30U, 23U, NE_RANGE_TYPE_NORMAL, }, {
    "D:/Program Files/MATLAB/R2017b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc",
    30U, 20U, 30U, 27U, NE_RANGE_TYPE_NORMAL, }, {
    "D:/Program Files/MATLAB/R2017b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    42U, 5U, 42U, 12U, NE_RANGE_TYPE_NORMAL, }, {
    "D:/Program Files/MATLAB/R2017b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    42U, 9U, 42U, 17U, NE_RANGE_TYPE_NORMAL, }, {
    "D:/Program Files/MATLAB/R2017b/toolbox/physmod/simscape/library/m/+foundation/+electrical/branch.ssc",
    23U, 5U, 23U, 19U, NE_RANGE_TYPE_NORMAL, }, {
    "D:/Program Files/MATLAB/R2017b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/rotational_converter.ssc",
    48U, 5U, 48U, 19U, NE_RANGE_TYPE_NORMAL, }, {
    "D:/Program Files/MATLAB/R2017b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/branch.ssc",
    23U, 5U, 23U, 19U, NE_RANGE_TYPE_NORMAL, }, {
    "D:/Program Files/MATLAB/R2017b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/friction.ssc",
    37U, 5U, 39U, 36U, NE_RANGE_TYPE_NORMAL, }, {
    "D:/Program Files/MATLAB/R2017b/toolbox/physmod/simscape/library/m/+simscape_internal/rand_gaussian.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "D:/Program Files/MATLAB/R2017b/toolbox/physmod/sdl/sdl/+sdl/+sources/torque_noise_source.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeParameterData *s_logical_parameter_data = NULL;
static NeParameterData *s_integer_parameter_data = NULL;
static NeParameterData *s_index_parameter_data = NULL;
static NeParameterData *s_real_parameter_data = NULL;
static NeDsMethodOutput *ds_output_m_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mM_P.mNumCol = 9;
  out->mM_P.mNumRow = 9;
  out->mM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    10);
  out->mM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    3);
  return out;
}

static NeDsMethodOutput *ds_output_m(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mM.mN = 3;
  out->mM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 3);
  return out;
}

static NeDsMethodOutput *ds_output_vmm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMM.mN = 3;
  out->mVMM.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    3);
  return out;
}

static NeDsMethodOutput *ds_output_dxm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXM_P.mNumCol = 9;
  out->mDXM_P.mNumRow = 3;
  out->mDXM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    10);
  out->mDXM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dxm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXM.mN = 0;
  out->mDXM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dum_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUM_P.mNumCol = 4;
  out->mDUM_P.mNumRow = 3;
  out->mDUM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mDUM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dum(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUM.mN = 0;
  out->mDUM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dtm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTM_P.mNumCol = 1;
  out->mDTM_P.mNumRow = 3;
  out->mDTM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTM.mN = 0;
  out->mDTM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_a_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mA_P.mNumCol = 9;
  out->mA_P.mNumRow = 9;
  out->mA_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    10);
  out->mA_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    18);
  return out;
}

static NeDsMethodOutput *ds_output_a(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mA.mN = 18;
  out->mA.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 18);
  return out;
}

static NeDsMethodOutput *ds_output_b_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mB_P.mNumCol = 4;
  out->mB_P.mNumRow = 9;
  out->mB_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mB_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    3);
  return out;
}

static NeDsMethodOutput *ds_output_b(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mB.mN = 3;
  out->mB.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 3);
  return out;
}

static NeDsMethodOutput *ds_output_c_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mC_P.mNumCol = 1;
  out->mC_P.mNumRow = 9;
  out->mC_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mC_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_c(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mC.mN = 0;
  out->mC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_f(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mF.mN = 9;
  out->mF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 9);
  return out;
}

static NeDsMethodOutput *ds_output_vmf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMF.mN = 9;
  out->mVMF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    9);
  return out;
}

static NeDsMethodOutput *ds_output_slf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF.mN = 9;
  out->mSLF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    9);
  return out;
}

static NeDsMethodOutput *ds_output_slf0(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF0.mN = 0;
  out->mSLF0.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF_P.mNumCol = 9;
  out->mDXF_P.mNumRow = 9;
  out->mDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    10);
  out->mDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  return out;
}

static NeDsMethodOutput *ds_output_dxf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF.mN = 2;
  out->mDXF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 2);
  return out;
}

static NeDsMethodOutput *ds_output_duf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF_P.mNumCol = 4;
  out->mDUF_P.mNumRow = 9;
  out->mDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mDUF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  return out;
}

static NeDsMethodOutput *ds_output_duf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF.mN = 1;
  out->mDUF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 1);
  return out;
}

static NeDsMethodOutput *ds_output_dtf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTF_P.mNumCol = 1;
  out->mDTF_P.mNumRow = 9;
  out->mDTF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTF.mN = 0;
  out->mDTF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDF_P.mNumCol = 0;
  out->mDDF_P.mNumRow = 9;
  out->mDDF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDDF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_ddf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDF.mN = 0;
  out->mDDF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_tduf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUF_P.mNumCol = 4;
  out->mTDUF_P.mNumRow = 9;
  out->mTDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mTDUF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    4);
  return out;
}

static NeDsMethodOutput *ds_output_tdxf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDXF_P.mNumCol = 9;
  out->mTDXF_P.mNumRow = 9;
  out->mTDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    10);
  out->mTDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    19);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_P.mNumCol = 0;
  out->mDNF_P.mNumRow = 9;
  out->mDNF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDNF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dnf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF.mN = 0;
  out->mDNF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_v_x(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_V_X.mN = 0;
  out->mDNF_V_X.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ic(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIC.mN = 9;
  out->mIC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 9);
  return out;
}

static NeDsMethodOutput *ds_output_icr(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR.mN = 0;
  out->mICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_icr_im(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_IM.mN = 0;
  out->mICR_IM.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_icr_id(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_ID.mN = 0;
  out->mICR_ID.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxicr(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICR.mN = 0;
  out->mDXICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICR_P.mNumCol = 9;
  out->mDXICR_P.mNumRow = 0;
  out->mDXICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 10);
  out->mDXICR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_tduicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUICR_P.mNumCol = 4;
  out->mTDUICR_P.mNumRow = 0;
  out->mTDUICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 5);
  out->mTDUICR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_mduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMDUY_P.mNumCol = 4;
  out->mMDUY_P.mNumRow = 5;
  out->mMDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mMDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_mdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMDXY_P.mNumCol = 9;
  out->mMDXY_P.mNumRow = 5;
  out->mMDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    10);
  out->mMDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_tduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUY_P.mNumCol = 4;
  out->mTDUY_P.mNumRow = 5;
  out->mTDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mTDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    3);
  return out;
}

static NeDsMethodOutput *ds_output_tdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDXY_P.mNumCol = 9;
  out->mTDXY_P.mNumRow = 5;
  out->mTDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    10);
  out->mTDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  return out;
}

static NeDsMethodOutput *ds_output_y(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mY.mN = 5;
  out->mY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 5);
  return out;
}

static NeDsMethodOutput *ds_output_dxy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY_P.mNumCol = 9;
  out->mDXY_P.mNumRow = 5;
  out->mDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    10);
  out->mDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  return out;
}

static NeDsMethodOutput *ds_output_dxy(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY.mN = 5;
  out->mDXY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 5);
  return out;
}

static NeDsMethodOutput *ds_output_duy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUY_P.mNumCol = 4;
  out->mDUY_P.mNumRow = 5;
  out->mDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    3);
  return out;
}

static NeDsMethodOutput *ds_output_duy(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUY.mN = 3;
  out->mDUY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 3);
  return out;
}

static NeDsMethodOutput *ds_output_dty_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTY_P.mNumCol = 1;
  out->mDTY_P.mNumRow = 5;
  out->mDTY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dty(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTY.mN = 0;
  out->mDTY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_mode(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMODE.mN = 1;
  out->mMODE.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  return out;
}

static NeDsMethodOutput *ds_output_zc(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mZC.mN = 1;
  out->mZC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 1);
  return out;
}

static NeDsMethodOutput *ds_output_cache_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCACHE_R.mN = 0;
  out->mCACHE_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_cache_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCACHE_I.mN = 0;
  out->mCACHE_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_update_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE_R.mN = 0;
  out->mUPDATE_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_update_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE_I.mN = 2;
  out->mUPDATE_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 2);
  return out;
}

static NeDsMethodOutput *ds_output_sfo(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSFO.mN = 1;
  out->mSFO.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 1);
  return out;
}

static NeDsMethodOutput *ds_output_sfp(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSFP.mN = 1;
  out->mSFP.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 1);
  return out;
}

static NeDsMethodOutput *ds_output_init_r(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mINIT_R.mN = 0;
  out->mINIT_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_init_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mINIT_I.mN = 2;
  out->mINIT_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  return out;
}

static NeDsMethodOutput *ds_output_log(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOG.mN = 82;
  out->mLOG.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 82);
  return out;
}

static NeDsMethodOutput *ds_output_assert(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mASSERT.mN = 3;
  out->mASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    3);
  return out;
}

static NeDsMethodOutput *ds_output_passert(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mPASSERT.mN = 0;
  out->mPASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_del_t(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_T.mN = 0;
  out->mDEL_T.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_del_v(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_V.mN = 0;
  out->mDEL_V.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_del_v0(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_V0.mN = 0;
  out->mDEL_V0.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_del_tmax(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_TMAX.mN = 0;
  out->mDEL_TMAX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dxdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXDELT_P.mNumCol = 9;
  out->mDXDELT_P.mNumRow = 0;
  out->mDXDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 10);
  out->mDXDELT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXDELT.mN = 0;
  out->mDXDELT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dudelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUDELT_P.mNumCol = 4;
  out->mDUDELT_P.mNumRow = 0;
  out->mDUDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 5);
  out->mDUDELT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dudelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUDELT.mN = 0;
  out->mDUDELT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTDELT_P.mNumCol = 1;
  out->mDTDELT_P.mNumRow = 0;
  out->mDTDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 2);
  out->mDTDELT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dtdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTDELT.mN = 0;
  out->mDTDELT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_obs_exp(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_EXP.mN = 82;
  out->mOBS_EXP.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    82);
  return out;
}

static NeDsMethodOutput *ds_output_obs_act(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ACT.mN = 82;
  out->mOBS_ACT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    82);
  return out;
}

static NeDsMethodOutput *ds_output_obs_all(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ALL.mN = 93;
  out->mOBS_ALL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    93);
  return out;
}

static NeDsMethodOutput *ds_output_dp_l(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_L.mN = 0;
  out->mDP_L.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_I.mN = 0;
  out->mDP_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_j(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_J.mN = 0;
  out->mDP_J.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_r(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_R.mN = 0;
  out->mDP_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qx(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQX.mN = 0;
  out->mQX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qu(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQU.mN = 0;
  out->mQU.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQT.mN = 0;
  out->mQT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_q1(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQ1.mN = 0;
  out->mQ1.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qx_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQX_P.mNumCol = 9;
  out->mQX_P.mNumRow = 9;
  out->mQX_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    10);
  out->mQX_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_qu_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQU_P.mNumCol = 4;
  out->mQU_P.mNumRow = 9;
  out->mQU_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mQU_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_qt_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQT_P.mNumCol = 1;
  out->mQT_P.mNumRow = 9;
  out->mQT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mQT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_q1_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQ1_P.mNumCol = 1;
  out->mQ1_P.mNumRow = 9;
  out->mQ1_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mQ1_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_var_tol(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVAR_TOL.mN = 9;
  out->mVAR_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    9);
  return out;
}

static NeDsMethodOutput *ds_output_eq_tol(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mEQ_TOL.mN = 9;
  out->mEQ_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    9);
  return out;
}

static NeDsMethodOutput *ds_output_lv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLV.mN = 9;
  out->mLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    9);
  return out;
}

static NeDsMethodOutput *ds_output_slv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLV.mN = 9;
  out->mSLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    9);
  return out;
}

static void release_reference(NeDynamicSystem *ds)
{
  _NeDynamicSystem *_ds;
  _ds = (_NeDynamicSystem *)ds;
  if (--_ds->mRefCnt == 0) {
    _ds->mAlloc.mFreeFcn(&_ds->mAlloc, _ds);
  }
}

static void get_reference(NeDynamicSystem *ds)
{
  _NeDynamicSystem *_ds;
  _ds = (_NeDynamicSystem *)ds;
  ++_ds->mRefCnt;
}

static NeDynamicSystem *diagnostics(const NeDynamicSystem *ds)
{
  _NeDynamicSystem *_ds = (_NeDynamicSystem *)ds;
  ne_ds_get_reference(&_ds->mBase);
  return &_ds->mBase;
}

static void expand(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                   PmRealVector *out)
{
  (void)ds;
  memcpy(out->mX, in->mX.mX, sizeof(real_T)*out->mN);
}

NeDynamicSystem *simulation_servo_agent_9c2ac8b8_1_dae_ds(PmAllocator *allocator)
{
  NeDynamicSystem *ds;
  _NeDynamicSystem *_ds;
  static NeDsIoInfo input_info[4];
  static NeDsIoInfo output_info[5];

  /* allocate dynamic system data and extended data */
  _ds = (_NeDynamicSystem *)allocator->mCallocFcn( allocator, sizeof
    (_NeDynamicSystem), 1);
  _ds->mAlloc = *allocator;
  _ds->mRefCnt = 1;
  ds = &_ds->mBase;

  /* setup sizes */
  ds->mNumVariables = 9;
  ds->mNumDiscreteRealVariables = 0;
  ds->mNumDifferentialVariables = 3;
  ds->mNumEquations = 9;
  ds->mNumICResiduals = 0;
  ds->mNumModes = 1;
  ds->mNumMajorModes = 2;
  ds->mNumRealCache = 0;
  ds->mNumIntCache = 0;
  ds->mNumObservables = 82;
  ds->mNumObservableElements = 82;
  ds->mNumZcs = 1;
  ds->mNumAsserts = 3;
  ds->mNumAssertRanges = 3;
  ds->mNumParamAsserts = 0;
  ds->mNumParamAssertRanges = 0;
  ds->mNumRanges = 1;
  ds->mNumEquationRanges = 12;
  ds->mNumFundamentalSamples = 1;
  ds->mNumDelays = 0;
  ds->mNumLogicalParameters = 0;
  ds->mNumIntegerParameters = 0;
  ds->mNumIndexParameters = 0;
  ds->mNumRealParameters = 0;
  ds->mNumLogicalDerivedParameters = 0;
  ds->mNumIntegerDerivedParameters = 0;
  ds->mNumIndexDerivedParameters = 0;
  ds->mNumRealDerivedParameters = 0;
  ds->mIsOutputLinear = TRUE;
  ds->mIsOutputSwitchedLinear = TRUE;

  /* setup ios */
  ds->mNumIo[NE_INPUT_IO_TYPE] = 4;
  input_info[0].mIdentifier =
    "Loop_Subsystem.MotorControlSubsystem.Controlled_Voltage_Source2.vT";
  input_info[0].mM = 1;
  input_info[0].mN = 1;
  input_info[0].mName =
    "Loop_Subsystem.MotorControlSubsystem.Controlled_Voltage_Source2.vT";
  input_info[0].mUnit = "V";
  input_info[1].mIdentifier =
    "Loop_Subsystem.MotorControlSubsystem.Torque_Source.S";
  input_info[1].mM = 1;
  input_info[1].mN = 1;
  input_info[1].mName = "Loop_Subsystem.MotorControlSubsystem.Torque_Source.S";
  input_info[1].mUnit = "N*m";
  input_info[2].mIdentifier =
    "Loop_Subsystem.MotorControlSubsystem.Torque_Source1.S";
  input_info[2].mM = 1;
  input_info[2].mN = 1;
  input_info[2].mName = "Loop_Subsystem.MotorControlSubsystem.Torque_Source1.S";
  input_info[2].mUnit = "N*m";
  input_info[3].mIdentifier =
    "Loop_Subsystem.MotorControlSubsystem.Torque_Noise_Source.PSD";
  input_info[3].mM = 1;
  input_info[3].mN = 1;
  input_info[3].mName =
    "Loop_Subsystem.MotorControlSubsystem.Torque_Noise_Source.PSD";
  input_info[3].mUnit = "m^2*N^2/Hz";
  ds->mIo[NE_INPUT_IO_TYPE] = input_info;
  ds->mNumIo[NE_OUTPUT_IO_TYPE] = 5;
  output_info[0].mIdentifier =
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Voltage_Sensor.V";
  output_info[0].mM = 1;
  output_info[0].mN = 1;
  output_info[0].mName =
    "Loop_Subsystem.MotorControlSubsystem.DC_Motor.Voltage_Sensor.V";
  output_info[0].mUnit = "V";
  output_info[1].mIdentifier =
    "Loop_Subsystem.MotorControlSubsystem.Meas_I.Current_Sensor.I";
  output_info[1].mM = 1;
  output_info[1].mN = 1;
  output_info[1].mName =
    "Loop_Subsystem.MotorControlSubsystem.Meas_I.Current_Sensor.I";
  output_info[1].mUnit = "A";
  output_info[2].mIdentifier =
    "Loop_Subsystem.MotorControlSubsystem.Meas_Vin.Voltage_Sensor.V";
  output_info[2].mM = 1;
  output_info[2].mN = 1;
  output_info[2].mName =
    "Loop_Subsystem.MotorControlSubsystem.Meas_Vin.Voltage_Sensor.V";
  output_info[2].mUnit = "V";
  output_info[3].mIdentifier =
    "Loop_Subsystem.MotorControlSubsystem.Sensor.Rotational_Motion_Sensor.W";
  output_info[3].mM = 1;
  output_info[3].mN = 1;
  output_info[3].mName =
    "Loop_Subsystem.MotorControlSubsystem.Sensor.Rotational_Motion_Sensor.W";
  output_info[3].mUnit = "rad/s";
  output_info[4].mIdentifier =
    "Loop_Subsystem.MotorControlSubsystem.Sensor.Torque_Sensor.T";
  output_info[4].mM = 1;
  output_info[4].mN = 1;
  output_info[4].mName =
    "Loop_Subsystem.MotorControlSubsystem.Sensor.Torque_Sensor.T";
  output_info[4].mUnit = "N*m";
  ds->mIo[NE_OUTPUT_IO_TYPE] = output_info;

  /* setup administration methods */
  ds->mReleaseReference = release_reference;
  ds->mGetReference = get_reference;
  ds->mDiagnosticsDsFcn = diagnostics;
  ds->mExpandFcn = expand;
  ds->mMethods[NE_DS_METHOD_M_P] = ds_m_p;
  ds->mMakeOutput[NE_DS_METHOD_M_P] = ds_output_m_p;
  ds->mMethods[NE_DS_METHOD_M] = ds_m;
  ds->mMakeOutput[NE_DS_METHOD_M] = ds_output_m;
  ds->mMethods[NE_DS_METHOD_VMM] = ds_vmm;
  ds->mMakeOutput[NE_DS_METHOD_VMM] = ds_output_vmm;
  ds->mMethods[NE_DS_METHOD_DXM_P] = ds_dxm_p;
  ds->mMakeOutput[NE_DS_METHOD_DXM_P] = ds_output_dxm_p;
  ds->mMethods[NE_DS_METHOD_DXM] = ds_dxm;
  ds->mMakeOutput[NE_DS_METHOD_DXM] = ds_output_dxm;
  ds->mMethods[NE_DS_METHOD_DUM_P] = ds_dum_p;
  ds->mMakeOutput[NE_DS_METHOD_DUM_P] = ds_output_dum_p;
  ds->mMethods[NE_DS_METHOD_DUM] = ds_dum;
  ds->mMakeOutput[NE_DS_METHOD_DUM] = ds_output_dum;
  ds->mMethods[NE_DS_METHOD_DTM_P] = ds_dtm_p;
  ds->mMakeOutput[NE_DS_METHOD_DTM_P] = ds_output_dtm_p;
  ds->mMethods[NE_DS_METHOD_DTM] = ds_dtm;
  ds->mMakeOutput[NE_DS_METHOD_DTM] = ds_output_dtm;
  ds->mMethods[NE_DS_METHOD_A_P] = ds_a_p;
  ds->mMakeOutput[NE_DS_METHOD_A_P] = ds_output_a_p;
  ds->mMethods[NE_DS_METHOD_A] = ds_a;
  ds->mMakeOutput[NE_DS_METHOD_A] = ds_output_a;
  ds->mMethods[NE_DS_METHOD_B_P] = ds_b_p;
  ds->mMakeOutput[NE_DS_METHOD_B_P] = ds_output_b_p;
  ds->mMethods[NE_DS_METHOD_B] = ds_b;
  ds->mMakeOutput[NE_DS_METHOD_B] = ds_output_b;
  ds->mMethods[NE_DS_METHOD_C_P] = ds_c_p;
  ds->mMakeOutput[NE_DS_METHOD_C_P] = ds_output_c_p;
  ds->mMethods[NE_DS_METHOD_C] = ds_c;
  ds->mMakeOutput[NE_DS_METHOD_C] = ds_output_c;
  ds->mMethods[NE_DS_METHOD_F] = simulation_servo_agent_9c2ac8b8_1_ds_f;
  ds->mMakeOutput[NE_DS_METHOD_F] = ds_output_f;
  ds->mMethods[NE_DS_METHOD_VMF] = ds_vmf;
  ds->mMakeOutput[NE_DS_METHOD_VMF] = ds_output_vmf;
  ds->mMethods[NE_DS_METHOD_SLF] = ds_slf;
  ds->mMakeOutput[NE_DS_METHOD_SLF] = ds_output_slf;
  ds->mMethods[NE_DS_METHOD_SLF0] = ds_slf0;
  ds->mMakeOutput[NE_DS_METHOD_SLF0] = ds_output_slf0;
  ds->mMethods[NE_DS_METHOD_DXF_P] = ds_dxf_p;
  ds->mMakeOutput[NE_DS_METHOD_DXF_P] = ds_output_dxf_p;
  ds->mMethods[NE_DS_METHOD_DXF] = ds_dxf;
  ds->mMakeOutput[NE_DS_METHOD_DXF] = ds_output_dxf;
  ds->mMethods[NE_DS_METHOD_DUF_P] = ds_duf_p;
  ds->mMakeOutput[NE_DS_METHOD_DUF_P] = ds_output_duf_p;
  ds->mMethods[NE_DS_METHOD_DUF] = ds_duf;
  ds->mMakeOutput[NE_DS_METHOD_DUF] = ds_output_duf;
  ds->mMethods[NE_DS_METHOD_DTF_P] = ds_dtf_p;
  ds->mMakeOutput[NE_DS_METHOD_DTF_P] = ds_output_dtf_p;
  ds->mMethods[NE_DS_METHOD_DTF] = ds_dtf;
  ds->mMakeOutput[NE_DS_METHOD_DTF] = ds_output_dtf;
  ds->mMethods[NE_DS_METHOD_DDF_P] = ds_ddf_p;
  ds->mMakeOutput[NE_DS_METHOD_DDF_P] = ds_output_ddf_p;
  ds->mMethods[NE_DS_METHOD_DDF] = ds_ddf;
  ds->mMakeOutput[NE_DS_METHOD_DDF] = ds_output_ddf;
  ds->mMethods[NE_DS_METHOD_TDUF_P] = ds_tduf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUF_P] = ds_output_tduf_p;
  ds->mMethods[NE_DS_METHOD_TDXF_P] = ds_tdxf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXF_P] = ds_output_tdxf_p;
  ds->mMethods[NE_DS_METHOD_DNF_P] = ds_dnf_p;
  ds->mMakeOutput[NE_DS_METHOD_DNF_P] = ds_output_dnf_p;
  ds->mMethods[NE_DS_METHOD_DNF] = ds_dnf;
  ds->mMakeOutput[NE_DS_METHOD_DNF] = ds_output_dnf;
  ds->mMethods[NE_DS_METHOD_DNF_V_X] = ds_dnf_v_x;
  ds->mMakeOutput[NE_DS_METHOD_DNF_V_X] = ds_output_dnf_v_x;
  ds->mMethods[NE_DS_METHOD_IC] = ds_ic;
  ds->mMakeOutput[NE_DS_METHOD_IC] = ds_output_ic;
  ds->mMethods[NE_DS_METHOD_ICR] = ds_icr;
  ds->mMakeOutput[NE_DS_METHOD_ICR] = ds_output_icr;
  ds->mMethods[NE_DS_METHOD_ICR_IM] = ds_icr_im;
  ds->mMakeOutput[NE_DS_METHOD_ICR_IM] = ds_output_icr_im;
  ds->mMethods[NE_DS_METHOD_ICR_ID] = ds_icr_id;
  ds->mMakeOutput[NE_DS_METHOD_ICR_ID] = ds_output_icr_id;
  ds->mMethods[NE_DS_METHOD_DXICR] = ds_dxicr;
  ds->mMakeOutput[NE_DS_METHOD_DXICR] = ds_output_dxicr;
  ds->mMethods[NE_DS_METHOD_DXICR_P] = ds_dxicr_p;
  ds->mMakeOutput[NE_DS_METHOD_DXICR_P] = ds_output_dxicr_p;
  ds->mMethods[NE_DS_METHOD_TDUICR_P] = ds_tduicr_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUICR_P] = ds_output_tduicr_p;
  ds->mMethods[NE_DS_METHOD_MDUY_P] = ds_mduy_p;
  ds->mMakeOutput[NE_DS_METHOD_MDUY_P] = ds_output_mduy_p;
  ds->mMethods[NE_DS_METHOD_MDXY_P] = ds_mdxy_p;
  ds->mMakeOutput[NE_DS_METHOD_MDXY_P] = ds_output_mdxy_p;
  ds->mMethods[NE_DS_METHOD_TDUY_P] = ds_tduy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUY_P] = ds_output_tduy_p;
  ds->mMethods[NE_DS_METHOD_TDXY_P] = ds_tdxy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXY_P] = ds_output_tdxy_p;
  ds->mMethods[NE_DS_METHOD_Y] = ds_y;
  ds->mMakeOutput[NE_DS_METHOD_Y] = ds_output_y;
  ds->mMethods[NE_DS_METHOD_DXY_P] = ds_dxy_p;
  ds->mMakeOutput[NE_DS_METHOD_DXY_P] = ds_output_dxy_p;
  ds->mMethods[NE_DS_METHOD_DXY] = ds_dxy;
  ds->mMakeOutput[NE_DS_METHOD_DXY] = ds_output_dxy;
  ds->mMethods[NE_DS_METHOD_DUY_P] = ds_duy_p;
  ds->mMakeOutput[NE_DS_METHOD_DUY_P] = ds_output_duy_p;
  ds->mMethods[NE_DS_METHOD_DUY] = ds_duy;
  ds->mMakeOutput[NE_DS_METHOD_DUY] = ds_output_duy;
  ds->mMethods[NE_DS_METHOD_DTY_P] = ds_dty_p;
  ds->mMakeOutput[NE_DS_METHOD_DTY_P] = ds_output_dty_p;
  ds->mMethods[NE_DS_METHOD_DTY] = ds_dty;
  ds->mMakeOutput[NE_DS_METHOD_DTY] = ds_output_dty;
  ds->mMethods[NE_DS_METHOD_MODE] = ds_mode;
  ds->mMakeOutput[NE_DS_METHOD_MODE] = ds_output_mode;
  ds->mMethods[NE_DS_METHOD_ZC] = ds_zc;
  ds->mMakeOutput[NE_DS_METHOD_ZC] = ds_output_zc;
  ds->mMethods[NE_DS_METHOD_CACHE_R] = ds_cache_r;
  ds->mMakeOutput[NE_DS_METHOD_CACHE_R] = ds_output_cache_r;
  ds->mMethods[NE_DS_METHOD_CACHE_I] = ds_cache_i;
  ds->mMakeOutput[NE_DS_METHOD_CACHE_I] = ds_output_cache_i;
  ds->mMethods[NE_DS_METHOD_UPDATE_R] = ds_update_r;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_R] = ds_output_update_r;
  ds->mMethods[NE_DS_METHOD_UPDATE_I] = ds_update_i;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_I] = ds_output_update_i;
  ds->mMethods[NE_DS_METHOD_SFO] = ds_sfo;
  ds->mMakeOutput[NE_DS_METHOD_SFO] = ds_output_sfo;
  ds->mMethods[NE_DS_METHOD_SFP] = ds_sfp;
  ds->mMakeOutput[NE_DS_METHOD_SFP] = ds_output_sfp;
  ds->mMethods[NE_DS_METHOD_INIT_R] = ds_init_r;
  ds->mMakeOutput[NE_DS_METHOD_INIT_R] = ds_output_init_r;
  ds->mMethods[NE_DS_METHOD_INIT_I] = ds_init_i;
  ds->mMakeOutput[NE_DS_METHOD_INIT_I] = ds_output_init_i;
  ds->mMethods[NE_DS_METHOD_LOG] = simulation_servo_agent_9c2ac8b8_1_ds_log;
  ds->mMakeOutput[NE_DS_METHOD_LOG] = ds_output_log;
  ds->mMethods[NE_DS_METHOD_ASSERT] = ds_assert;
  ds->mMakeOutput[NE_DS_METHOD_ASSERT] = ds_output_assert;
  ds->mMethods[NE_DS_METHOD_PASSERT] = ds_passert;
  ds->mMakeOutput[NE_DS_METHOD_PASSERT] = ds_output_passert;
  ds->mMethods[NE_DS_METHOD_DEL_T] = ds_del_t;
  ds->mMakeOutput[NE_DS_METHOD_DEL_T] = ds_output_del_t;
  ds->mMethods[NE_DS_METHOD_DEL_V] = ds_del_v;
  ds->mMakeOutput[NE_DS_METHOD_DEL_V] = ds_output_del_v;
  ds->mMethods[NE_DS_METHOD_DEL_V0] = ds_del_v0;
  ds->mMakeOutput[NE_DS_METHOD_DEL_V0] = ds_output_del_v0;
  ds->mMethods[NE_DS_METHOD_DEL_TMAX] = ds_del_tmax;
  ds->mMakeOutput[NE_DS_METHOD_DEL_TMAX] = ds_output_del_tmax;
  ds->mMethods[NE_DS_METHOD_DXDELT_P] = ds_dxdelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DXDELT_P] = ds_output_dxdelt_p;
  ds->mMethods[NE_DS_METHOD_DXDELT] = ds_dxdelt;
  ds->mMakeOutput[NE_DS_METHOD_DXDELT] = ds_output_dxdelt;
  ds->mMethods[NE_DS_METHOD_DUDELT_P] = ds_dudelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DUDELT_P] = ds_output_dudelt_p;
  ds->mMethods[NE_DS_METHOD_DUDELT] = ds_dudelt;
  ds->mMakeOutput[NE_DS_METHOD_DUDELT] = ds_output_dudelt;
  ds->mMethods[NE_DS_METHOD_DTDELT_P] = ds_dtdelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DTDELT_P] = ds_output_dtdelt_p;
  ds->mMethods[NE_DS_METHOD_DTDELT] = ds_dtdelt;
  ds->mMakeOutput[NE_DS_METHOD_DTDELT] = ds_output_dtdelt;
  ds->mMethods[NE_DS_METHOD_OBS_EXP] =
    simulation_servo_agent_9c2ac8b8_1_ds_obs_exp;
  ds->mMakeOutput[NE_DS_METHOD_OBS_EXP] = ds_output_obs_exp;
  ds->mMethods[NE_DS_METHOD_OBS_ACT] =
    simulation_servo_agent_9c2ac8b8_1_ds_obs_act;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ACT] = ds_output_obs_act;
  ds->mMethods[NE_DS_METHOD_OBS_ALL] =
    simulation_servo_agent_9c2ac8b8_1_ds_obs_all;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ALL] = ds_output_obs_all;
  ds->mMethods[NE_DS_METHOD_DP_L] = ds_dp_l;
  ds->mMakeOutput[NE_DS_METHOD_DP_L] = ds_output_dp_l;
  ds->mMethods[NE_DS_METHOD_DP_I] = ds_dp_i;
  ds->mMakeOutput[NE_DS_METHOD_DP_I] = ds_output_dp_i;
  ds->mMethods[NE_DS_METHOD_DP_J] = ds_dp_j;
  ds->mMakeOutput[NE_DS_METHOD_DP_J] = ds_output_dp_j;
  ds->mMethods[NE_DS_METHOD_DP_R] = ds_dp_r;
  ds->mMakeOutput[NE_DS_METHOD_DP_R] = ds_output_dp_r;
  ds->mMethods[NE_DS_METHOD_QX] = ds_qx;
  ds->mMakeOutput[NE_DS_METHOD_QX] = ds_output_qx;
  ds->mMethods[NE_DS_METHOD_QU] = ds_qu;
  ds->mMakeOutput[NE_DS_METHOD_QU] = ds_output_qu;
  ds->mMethods[NE_DS_METHOD_QT] = ds_qt;
  ds->mMakeOutput[NE_DS_METHOD_QT] = ds_output_qt;
  ds->mMethods[NE_DS_METHOD_Q1] = ds_q1;
  ds->mMakeOutput[NE_DS_METHOD_Q1] = ds_output_q1;
  ds->mMethods[NE_DS_METHOD_QX_P] = ds_qx_p;
  ds->mMakeOutput[NE_DS_METHOD_QX_P] = ds_output_qx_p;
  ds->mMethods[NE_DS_METHOD_QU_P] = ds_qu_p;
  ds->mMakeOutput[NE_DS_METHOD_QU_P] = ds_output_qu_p;
  ds->mMethods[NE_DS_METHOD_QT_P] = ds_qt_p;
  ds->mMakeOutput[NE_DS_METHOD_QT_P] = ds_output_qt_p;
  ds->mMethods[NE_DS_METHOD_Q1_P] = ds_q1_p;
  ds->mMakeOutput[NE_DS_METHOD_Q1_P] = ds_output_q1_p;
  ds->mMethods[NE_DS_METHOD_VAR_TOL] = ds_var_tol;
  ds->mMakeOutput[NE_DS_METHOD_VAR_TOL] = ds_output_var_tol;
  ds->mMethods[NE_DS_METHOD_EQ_TOL] = ds_eq_tol;
  ds->mMakeOutput[NE_DS_METHOD_EQ_TOL] = ds_output_eq_tol;
  ds->mMethods[NE_DS_METHOD_LV] = ds_lv;
  ds->mMakeOutput[NE_DS_METHOD_LV] = ds_output_lv;
  ds->mMethods[NE_DS_METHOD_SLV] = ds_slv;
  ds->mMakeOutput[NE_DS_METHOD_SLV] = ds_output_slv;

  /* equation data */
  ds->mEquationData = s_equation_data;

  /* continuous variable data */
  ds->mVariableData = s_variable_data;

  /* discrete variable data */
  ds->mDiscreteData = s_discrete_data;

  /* observable data */
  ds->mObservableData = s_observable_data;

  /* major mode data */
  ds->mMajorModeData = s_major_mode_data;

  /* zc data */
  ds->mZCData = s_zc_data;

  /* ranges */
  ds->mRanges = s_range;

  /* assert data */
  ds->mAssertData = s_assert_data;

  /* assert ranges */
  ds->mAssertRanges = s_assert_range;

  /* param assert data */
  ds->mParamAssertData = s_param_assert_data;

  /* param assert ranges */
  ds->mParamAssertRanges = s_param_assert_range;

  /* equation ranges */
  ds->mEquationRanges = s_equation_range;

  /* parameters */
  ds->mLogicalParameters = s_logical_parameter_data;
  ds->mIntegerParameters = s_integer_parameter_data;
  ds->mIndexParameters = s_index_parameter_data;
  ds->mRealParameters = s_real_parameter_data;

  /* constant tables */
  return (NeDynamicSystem *)_ds;
}

static int32_T ds_assert (const NeDynamicSystem *ds, const NeDynamicSystemInput *
  t3, NeDsMethodOutput *t4)
{
  PmIntVector out;
  real_T U_idx_3;
  U_idx_3 = t3->mU.mX[3];
  out = t4->mASSERT;
  out.mX[0] = 1;
  out.mX[1] = 1;
  out.mX[2] = (int32_T)(U_idx_3 / 2.0 / 0.001 >= 0.0);
  (void)ds;
  (void)t4;
  return 0;
}

static int32_T ds_passert (const NeDynamicSystem *ds, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_del_v (const NeDynamicSystem *ds, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_del_v0 (const NeDynamicSystem *ds, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_del_tmax (const NeDynamicSystem *ds, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_del_t (const NeDynamicSystem *ds, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_dxdelt (const NeDynamicSystem *ds, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_dxdelt_p (const NeDynamicSystem *ds, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDXDELT_P;
  out.mNumCol = 9ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_dudelt (const NeDynamicSystem *ds, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_dudelt_p (const NeDynamicSystem *ds, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDUDELT_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_dtdelt (const NeDynamicSystem *ds, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_dtdelt_p (const NeDynamicSystem *ds, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDTDELT_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_cache_r (const NeDynamicSystem *ds, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_init_r (const NeDynamicSystem *ds, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_update_r (const NeDynamicSystem *ds, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_cache_i (const NeDynamicSystem *ds, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_init_i (const NeDynamicSystem *ds, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmIntVector out;
  (void)t1;
  out = t2->mINIT_I;
  out.mX[0] = 1457850878;
  out.mX[1] = 1458777923;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_update_i (const NeDynamicSystem *ds, const
  NeDynamicSystemInput *t2, NeDsMethodOutput *t3)
{
  PmIntVector out;
  int32_T t1[2];
  void *_in1var[1];
  int32_T _retvar[2];
  int32_T E_idx_0;
  int32_T efOut_idx_0;
  int32_T efOut_idx_1;
  efOut_idx_0 = t2->mQ.mX[0];
  efOut_idx_1 = t2->mQ.mX[1];
  E_idx_0 = t2->mE.mX[0];
  out = t3->mUPDATE_I;
  if (E_idx_0 != 0) {
    t1[0ULL] = efOut_idx_0;
    t1[1ULL] = efOut_idx_1;
    _in1var[0ULL] = (void *)t1;
    update_gaussian_seed(&_retvar, &_in1var);
    efOut_idx_0 = _retvar[0];
    efOut_idx_1 = _retvar[1];
  }

  out.mX[0] = efOut_idx_0;
  out.mX[1] = efOut_idx_1;
  (void)ds;
  (void)t3;
  return 0;
}

static int32_T ds_sfp (const NeDynamicSystem *ds, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mSFP;
  out.mX[0] = 0.001;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_sfo (const NeDynamicSystem *ds, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mSFO;
  out.mX[0] = 0.001;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_dxf (const NeDynamicSystem *ds, const NeDynamicSystemInput *t6,
  NeDsMethodOutput *t7)
{
  PmRealVector out;
  real_T t4;
  real_T X_idx_7;
  real_T U_idx_3;
  U_idx_3 = t6->mU.mX[3];
  X_idx_7 = t6->mX.mX[7];
  out = t7->mDXF;
  t4 = cosh(X_idx_7 / 1.0000000000000002E-6) * cosh(X_idx_7 /
    1.0000000000000002E-6);
  X_idx_7 = -pmf_sqrt(U_idx_3 / 2.0 / 0.001);
  out.mX[0] = -(1.0 / (t4 == 0.0 ? 1.0E-16 : t4) * 801.70918437309763);
  out.mX[1] = X_idx_7;
  (void)ds;
  (void)t7;
  return 0;
}

static int32_T ds_dxf_p (const NeDynamicSystem *ds, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDXF_P;
  out.mNumCol = 9ULL;
  out.mNumRow = 9ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 1;
  out.mJc[9] = 2;
  out.mIr[0] = 6;
  out.mIr[1] = 8;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_duf (const NeDynamicSystem *ds, const NeDynamicSystemInput *t4,
  NeDsMethodOutput *t5)
{
  PmRealVector out;
  real_T U_idx_3;
  real_T X_idx_8;
  U_idx_3 = t4->mU.mX[3];
  X_idx_8 = t4->mX.mX[8];
  out = t5->mDUF;
  U_idx_3 = pmf_sqrt(U_idx_3 / 2.0 / 0.001) * 2.0;
  out.mX[0] = -(1.0 / (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3) * X_idx_8 * 500.0);
  (void)ds;
  (void)t5;
  return 0;
}

static int32_T ds_duf_p (const NeDynamicSystem *ds, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDUF_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 9ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 1;
  out.mIr[0] = 8;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_dtf (const NeDynamicSystem *ds, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_dtf_p (const NeDynamicSystem *ds, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDTF_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 9ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_a (const NeDynamicSystem *ds, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mA;
  out.mX[0] = -0.0;
  out.mX[1] = 1.0;
  out.mX[2] = 0.006488870651066;
  out.mX[3] = 1.0;
  out.mX[4] = -1.0;
  out.mX[5] = -1.0;
  out.mX[6] = -0.2857142857142857;
  out.mX[7] = 0.17649370819245924;
  out.mX[8] = 6.488870651066E-12;
  out.mX[9] = -1.0;
  out.mX[10] = -0.0038684719535783366;
  out.mX[11] = -0.0038684719535783366;
  out.mX[12] = 1.0;
  out.mX[13] = 0.17649370719245924;
  out.mX[14] = 0.59617029859314874;
  out.mX[15] = 0.0038684719535783366;
  out.mX[16] = -7.1066619450443576E-7;
  out.mX[17] = 1.0;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_a_p (const NeDynamicSystem *ds, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mA_P;
  out.mNumCol = 9ULL;
  out.mNumRow = 9ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 3;
  out.mJc[2] = 6;
  out.mJc[3] = 6;
  out.mJc[4] = 9;
  out.mJc[5] = 11;
  out.mJc[6] = 13;
  out.mJc[7] = 15;
  out.mJc[8] = 17;
  out.mJc[9] = 18;
  out.mIr[0] = 1;
  out.mIr[1] = 3;
  out.mIr[2] = 6;
  out.mIr[3] = 2;
  out.mIr[4] = 4;
  out.mIr[5] = 5;
  out.mIr[6] = 1;
  out.mIr[7] = 3;
  out.mIr[8] = 6;
  out.mIr[9] = 0;
  out.mIr[10] = 6;
  out.mIr[11] = 6;
  out.mIr[12] = 8;
  out.mIr[13] = 3;
  out.mIr[14] = 4;
  out.mIr[15] = 5;
  out.mIr[16] = 6;
  out.mIr[17] = 7;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_b (const NeDynamicSystem *ds, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mB;
  out.mX[0] = -0.17649370719245924;
  out.mX[1] = 0.0038684719535783366;
  out.mX[2] = 0.0038684719535783366;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_b_p (const NeDynamicSystem *ds, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mB_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 9ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 2;
  out.mJc[3] = 3;
  out.mJc[4] = 3;
  out.mIr[0] = 3;
  out.mIr[1] = 6;
  out.mIr[2] = 6;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_c (const NeDynamicSystem *ds, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  (void)t1;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_c_p (const NeDynamicSystem *ds, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mC_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 9ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_tduf_p (const NeDynamicSystem *ds, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mTDUF_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 9ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 2;
  out.mJc[3] = 3;
  out.mJc[4] = 4;
  out.mIr[0] = 3;
  out.mIr[1] = 6;
  out.mIr[2] = 6;
  out.mIr[3] = 8;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_tdxf_p (const NeDynamicSystem *ds, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mTDXF_P;
  out.mNumCol = 9ULL;
  out.mNumRow = 9ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 3;
  out.mJc[2] = 6;
  out.mJc[3] = 6;
  out.mJc[4] = 9;
  out.mJc[5] = 11;
  out.mJc[6] = 13;
  out.mJc[7] = 15;
  out.mJc[8] = 17;
  out.mJc[9] = 19;
  out.mIr[0] = 1;
  out.mIr[1] = 3;
  out.mIr[2] = 6;
  out.mIr[3] = 2;
  out.mIr[4] = 4;
  out.mIr[5] = 5;
  out.mIr[6] = 1;
  out.mIr[7] = 3;
  out.mIr[8] = 6;
  out.mIr[9] = 0;
  out.mIr[10] = 6;
  out.mIr[11] = 6;
  out.mIr[12] = 8;
  out.mIr[13] = 3;
  out.mIr[14] = 4;
  out.mIr[15] = 5;
  out.mIr[16] = 6;
  out.mIr[17] = 7;
  out.mIr[18] = 8;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_ddf (const NeDynamicSystem *ds, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_ddf_p (const NeDynamicSystem *ds, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDDF_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 9ULL;
  out.mJc[0] = 0;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_vmf (const NeDynamicSystem *ds, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mVMF;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = true;
  out.mX[7] = true;
  out.mX[8] = true;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_slf (const NeDynamicSystem *ds, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mSLF;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_dnf (const NeDynamicSystem *ds, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_dnf_p (const NeDynamicSystem *ds, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDNF_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 9ULL;
  out.mJc[0] = 0;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_dnf_v_x (const NeDynamicSystem *ds, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_slf0 (const NeDynamicSystem *ds, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_ic (const NeDynamicSystem *ds, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mIC;
  out.mX[0] = 0.0;
  out.mX[1] = 0.0;
  out.mX[2] = 0.0;
  out.mX[3] = 0.0;
  out.mX[4] = 0.0;
  out.mX[5] = 0.0;
  out.mX[6] = 0.0;
  out.mX[7] = 0.0;
  out.mX[8] = 0.0;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_icr (const NeDynamicSystem *ds, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_icr_im (const NeDynamicSystem *ds, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_icr_id (const NeDynamicSystem *ds, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_dxicr (const NeDynamicSystem *ds, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_dxicr_p (const NeDynamicSystem *ds, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDXICR_P;
  out.mNumCol = 9ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_tduicr_p (const NeDynamicSystem *ds, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mTDUICR_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_m (const NeDynamicSystem *ds, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mM;
  out.mX[0] = -1.0;
  out.mX[1] = -0.0006;
  out.mX[2] = 1.0;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_m_p (const NeDynamicSystem *ds, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mM_P;
  out.mNumCol = 9ULL;
  out.mNumRow = 9ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 2;
  out.mJc[3] = 3;
  out.mJc[4] = 3;
  out.mJc[5] = 3;
  out.mJc[6] = 3;
  out.mJc[7] = 3;
  out.mJc[8] = 3;
  out.mJc[9] = 3;
  out.mIr[0] = 1;
  out.mIr[1] = 0;
  out.mIr[2] = 2;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_dxm (const NeDynamicSystem *ds, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_dxm_p (const NeDynamicSystem *ds, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDXM_P;
  out.mNumCol = 9ULL;
  out.mNumRow = 3ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_dum (const NeDynamicSystem *ds, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_dum_p (const NeDynamicSystem *ds, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDUM_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 3ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_dtm (const NeDynamicSystem *ds, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_dtm_p (const NeDynamicSystem *ds, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDTM_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 3ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_vmm (const NeDynamicSystem *ds, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mVMM;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_mode (const NeDynamicSystem *ds, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmIntVector out;
  real_T T_idx_0;
  T_idx_0 = t1->mT.mX[0];
  out = t2->mMODE;
  out.mX[0] = (int32_T)(T_idx_0 < 0.0);
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_dp_l (const NeDynamicSystem *ds, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_dp_i (const NeDynamicSystem *ds, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_dp_j (const NeDynamicSystem *ds, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_dp_r (const NeDynamicSystem *ds, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_qx (const NeDynamicSystem *ds, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_qu (const NeDynamicSystem *ds, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_qt (const NeDynamicSystem *ds, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_q1 (const NeDynamicSystem *ds, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_qx_p (const NeDynamicSystem *ds, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mQX_P;
  out.mNumCol = 9ULL;
  out.mNumRow = 9ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_qu_p (const NeDynamicSystem *ds, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mQU_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 9ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_qt_p (const NeDynamicSystem *ds, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mQT_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 9ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_q1_p (const NeDynamicSystem *ds, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mQ1_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 9ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_var_tol (const NeDynamicSystem *ds, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mVAR_TOL;
  out.mX[0] = 1.0E-9;
  out.mX[1] = 1.0E-9;
  out.mX[2] = 1.0E-9;
  out.mX[3] = 1.0E-9;
  out.mX[4] = 1.0E-9;
  out.mX[5] = 1.0E-9;
  out.mX[6] = 1.0E-9;
  out.mX[7] = 1.0E-9;
  out.mX[8] = 1.0E-9;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_eq_tol (const NeDynamicSystem *ds, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mEQ_TOL;
  out.mX[0] = 1.0E-9;
  out.mX[1] = 1.0E-9;
  out.mX[2] = 1.0E-9;
  out.mX[3] = 1.0E-9;
  out.mX[4] = 1.0E-9;
  out.mX[5] = 1.0E-9;
  out.mX[6] = 1.0E-9;
  out.mX[7] = 1.0E-9;
  out.mX[8] = 1.0E-9;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_lv (const NeDynamicSystem *ds, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mLV;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = true;
  out.mX[7] = false;
  out.mX[8] = false;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_slv (const NeDynamicSystem *ds, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mSLV;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = true;
  out.mX[7] = false;
  out.mX[8] = false;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_y (const NeDynamicSystem *ds, const NeDynamicSystemInput *t3,
                     NeDsMethodOutput *t4)
{
  PmRealVector out;
  real_T X_idx_0;
  real_T X_idx_3;
  real_T U_idx_0;
  real_T X_idx_6;
  real_T X_idx_1;
  real_T U_idx_1;
  real_T U_idx_2;
  real_T X_idx_5;
  U_idx_0 = t3->mU.mX[0];
  U_idx_1 = t3->mU.mX[1];
  U_idx_2 = t3->mU.mX[2];
  X_idx_0 = t3->mX.mX[0];
  X_idx_1 = t3->mX.mX[1];
  X_idx_3 = t3->mX.mX[3];
  X_idx_5 = t3->mX.mX[5];
  X_idx_6 = t3->mX.mX[6];
  out = t4->mY;
  out.mX[0] = -X_idx_6 / -1.0;
  out.mX[1] = -(-X_idx_0 + X_idx_3 * -1.0E-9);
  out.mX[2] = -U_idx_0 / -1.0;
  out.mX[3] = X_idx_1;
  out.mX[4] = (-U_idx_1 + -U_idx_2) + X_idx_5;
  (void)ds;
  (void)t4;
  return 0;
}

static int32_T ds_dxy (const NeDynamicSystem *ds, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mDXY;
  out.mX[0] = 1.0;
  out.mX[1] = 1.0;
  out.mX[2] = 1.0E-9;
  out.mX[3] = 1.0;
  out.mX[4] = 1.0;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_dxy_p (const NeDynamicSystem *ds, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDXY_P;
  out.mNumCol = 9ULL;
  out.mNumRow = 5ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 2;
  out.mJc[3] = 2;
  out.mJc[4] = 3;
  out.mJc[5] = 3;
  out.mJc[6] = 4;
  out.mJc[7] = 5;
  out.mJc[8] = 5;
  out.mJc[9] = 5;
  out.mIr[0] = 1;
  out.mIr[1] = 3;
  out.mIr[2] = 1;
  out.mIr[3] = 4;
  out.mIr[4] = 0;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_duy (const NeDynamicSystem *ds, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mDUY;
  out.mX[0] = 1.0;
  out.mX[1] = -1.0;
  out.mX[2] = -1.0;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_duy_p (const NeDynamicSystem *ds, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDUY_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 5ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 2;
  out.mJc[3] = 3;
  out.mJc[4] = 3;
  out.mIr[0] = 2;
  out.mIr[1] = 4;
  out.mIr[2] = 4;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_mduy_p (const NeDynamicSystem *ds, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mMDUY_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 5ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_mdxy_p (const NeDynamicSystem *ds, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mMDXY_P;
  out.mNumCol = 9ULL;
  out.mNumRow = 5ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_tduy_p (const NeDynamicSystem *ds, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mTDUY_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 5ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 2;
  out.mJc[3] = 3;
  out.mJc[4] = 3;
  out.mIr[0] = 2;
  out.mIr[1] = 4;
  out.mIr[2] = 4;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_tdxy_p (const NeDynamicSystem *ds, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mTDXY_P;
  out.mNumCol = 9ULL;
  out.mNumRow = 5ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 2;
  out.mJc[3] = 2;
  out.mJc[4] = 3;
  out.mJc[5] = 3;
  out.mJc[6] = 4;
  out.mJc[7] = 5;
  out.mJc[8] = 5;
  out.mJc[9] = 5;
  out.mIr[0] = 1;
  out.mIr[1] = 3;
  out.mIr[2] = 1;
  out.mIr[3] = 4;
  out.mIr[4] = 0;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_dty (const NeDynamicSystem *ds, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_dty_p (const NeDynamicSystem *ds, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDTY_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 5ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)ds;
  (void)t2;
  return 0;
}

static int32_T ds_zc (const NeDynamicSystem *ds, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  PmRealVector out;
  real_T T_idx_0;
  T_idx_0 = t1->mT.mX[0];
  out = t2->mZC;
  out.mX[0] = -T_idx_0;
  (void)ds;
  (void)t2;
  return 0;
}
