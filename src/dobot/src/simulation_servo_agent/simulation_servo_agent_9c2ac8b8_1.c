/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Solver Configuration1'.
 */

#include "ne_std.h"
#include "pm_default_allocator.h"
#include "ne_dae_fwd.h"
#include "ne_profiler_fwd.h"
#include "ne_dae_construct.h"
#include "nesl_la.h"
#include "simulation_servo_agent_9c2ac8b8_1_ds.h"

void simulation_servo_agent_9c2ac8b8_1_dae( NeDae **dae, const NeModelParameters
  *modelParams,
  const NeSolverParameters *solverParams)
{
  PmAllocator *ne_allocator;
  const McLinearAlgebra *linear_algebra_ptr =
    (solverParams->mLinearAlgebra == NE_FULL_LA) ?
    get_rtw_linear_algebra() :
    mc_get_csparse_linear_algebra();
  ne_allocator = pm_default_allocator();
  ne_dae_create( dae,
                simulation_servo_agent_9c2ac8b8_1_dae_ds( ne_allocator ),
                *solverParams,
                *modelParams,
                linear_algebra_ptr,
                NULL,
                NULL,
                NULL,
                ne_allocator);
}
