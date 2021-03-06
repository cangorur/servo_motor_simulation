#include <stdio.h>
#include <stdlib.h>
#include "simulation_servo_agent.h"
#include "simulation_servo_agent_private.h"
#include "rtwtypes.h"
#include "limits.h"
#include "rt_nonfinite.h"
#include "linuxinitialize.h"
#define UNUSED(x)                      x = x

// Function prototype declaration
void exitFcn(int sig);
void *terminateTask(void *arg);
void *baseRateTask(void *arg);
void *subrateTask(void *arg);
volatile boolean_T stopRequested = false;
volatile boolean_T runModel = true;
sem_t stopSem;
sem_t baserateTaskSem;
pthread_t schedulerThread;
pthread_t baseRateThread;
unsigned long threadJoinStatus[8];
int terminatingmodel = 0;
void *baseRateTask(void *arg)
{
  runModel = (rtmGetErrorStatus(simulation_servo_agent_M) == (NULL)) &&
    !rtmGetStopRequested(simulation_servo_agent_M);
  while (runModel) {
    sem_wait(&baserateTaskSem);
    simulation_servo_agent_step();

    // Get model outputs here
    stopRequested = !((rtmGetErrorStatus(simulation_servo_agent_M) == (NULL)) &&
                      !rtmGetStopRequested(simulation_servo_agent_M));
    runModel = !stopRequested;
  }

  runModel = 0;
  terminateTask(arg);
  pthread_exit((void *)0);
  return NULL;
}

void exitFcn(int sig)
{
  UNUSED(sig);
  rtmSetErrorStatus(simulation_servo_agent_M, "stopping the model");
}

void *terminateTask(void *arg)
{
  UNUSED(arg);
  terminatingmodel = 1;

  {
    runModel = 0;
  }

  // Disable rt_OneStep() here

  // Terminate model
  simulation_servo_agent_terminate();
  sem_post(&stopSem);
  return NULL;
}

int main(int argc, char **argv)
{
  UNUSED(argc);
  UNUSED(argv);
  void slros_node_init(int argc, char** argv);
  slros_node_init(argc, argv);
  rtmSetErrorStatus(simulation_servo_agent_M, 0);

  // Initialize model
  simulation_servo_agent_initialize();

  // Call RTOS Initialization function
  myRTOSInit(0.001, 0);

  // Wait for stop semaphore
  sem_wait(&stopSem);
  return 0;
}
