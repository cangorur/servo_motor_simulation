/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Solver Configuration1'.
 */

#ifdef MATLAB_MEX_FILE
#include "tmwtypes.h"
#else
#include "rtwtypes.h"
#endif

#include "nesl_rtw.h"
#include "simulation_servo_agent_9c2ac8b8_1.h"

void simulation_servo_agent_9c2ac8b8_1_gateway(void)
{
  NeModelParameters modelparams = { (NeSolverType) 2, 0.001, 0, 0.001, 0, 0, 0,
    0, (SscLoggingSetting) 0, 475020351, };

  NeSolverParameters solverparams = { 0, 0, 1, 0, 0, 0.001, 1e-06, 1e-09, 0, 0,
    100, 0, 1, 0, 1e-09, 1, (NeLocalSolverChoice) 0, 0.001, 1, 3, 2,
    (NeLinearAlgebraChoice) 0, (NeEquationFormulationChoice) 0, 1024, 1, 0.001,
  };

  const NeOutputParameters* outputparameters = NULL;
  NeDae* dae[1];
  size_t numOutputs = 0;

  {
    static const NeOutputParameters outputparameters_init[] = { { 0, 0,
        "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Solver\nConfiguration1",
      }, { 0, 1,
        "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Solver\nConfiguration1",
      }, { 0, 2,
        "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Solver\nConfiguration1",
      }, };

    outputparameters = outputparameters_init;
    numOutputs = sizeof(outputparameters_init)/sizeof(outputparameters_init[0]);
  }

  simulation_servo_agent_9c2ac8b8_1_dae(&dae[0],
    &modelparams,
    &solverparams);
  nesl_register_simulator_group(
    "simulation_servo_agent/Loop Subsystem/MotorControlSubsystem/Solver Configuration1_1",
    1,
    &dae[0],
    &solverparams,
    &modelparams,
    numOutputs,
    outputparameters,
    1);
}
