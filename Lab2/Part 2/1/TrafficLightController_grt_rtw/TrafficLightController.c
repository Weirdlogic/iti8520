/*
 * TrafficLightController.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "TrafficLightController".
 *
 * Model version              : 1.0
 * Simulink Coder version : 24.2 (R2024b) 21-Jun-2024
 * C source code generated on : Sat Jun  7 11:48:06 2025
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TrafficLightController.h"
#include "rtwtypes.h"
#include <string.h>
#include "TrafficLightController_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define TrafficLightControl_IN_Crossing ((uint8_T)2U)
#define TrafficLightController_IN_Amber ((uint8_T)1U)
#define TrafficLightController_IN_Idle ((uint8_T)3U)
#define TrafficLight_IN_NO_ACTIVE_CHILD ((uint8_T)0U)

/* Block states (default storage) */
DW_TrafficLightController_T TrafficLightController_DW;

/* External inputs (root inport signals with default storage) */
ExtU_TrafficLightController_T TrafficLightController_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_TrafficLightController_T TrafficLightController_Y;

/* Real-time model */
static RT_MODEL_TrafficLightControll_T TrafficLightController_M_;
RT_MODEL_TrafficLightControll_T *const TrafficLightController_M =
  &TrafficLightController_M_;

/* Model step function */
void TrafficLightController_step(void)
{
  int32_T i;
  char_T c[57];
  char_T d[54];
  char_T b[53];
  static const char_T e[53] = { 'T', 'r', 'a', 'f', 'f', 'i', 'c', ' ', 'L', 'i',
    'g', 'h', 't', ':', ' ', 'I', 'D', 'L', 'E', ' ', '-', ' ', 'V', 'e', 'h',
    'i', 'c', 'l', 'e', ' ', 'G', 'R', 'E', 'E', 'N', ',', ' ', 'P', 'e', 'd',
    'e', 's', 't', 'r', 'i', 'a', 'n', ' ', 'R', 'E', 'D', '\\', 'n' };

  static const char_T g[54] = { 'T', 'r', 'a', 'f', 'f', 'i', 'c', ' ', 'L', 'i',
    'g', 'h', 't', ':', ' ', 'A', 'M', 'B', 'E', 'R', ' ', '-', ' ', 'V', 'e',
    'h', 'i', 'c', 'l', 'e', ' ', 'A', 'M', 'B', 'E', 'R', ',', ' ', 'P', 'e',
    'd', 'e', 's', 't', 'r', 'i', 'a', 'n', ' ', 'R', 'E', 'D', '\\', 'n' };

  static const char_T f[57] = { 'T', 'r', 'a', 'f', 'f', 'i', 'c', ' ', 'L', 'i',
    'g', 'h', 't', ':', ' ', 'C', 'R', 'O', 'S', 'S', 'I', 'N', 'G', ' ', '-',
    ' ', 'V', 'e', 'h', 'i', 'c', 'l', 'e', ' ', 'R', 'E', 'D', ',', ' ', 'P',
    'e', 'd', 'e', 's', 't', 'r', 'i', 'a', 'n', ' ', 'G', 'R', 'E', 'E', 'N',
    '\\', 'n' };

  /* Chart: '<Root>/Chart' incorporates:
   *  Inport: '<Root>/ButtonPress'
   */
  if (TrafficLightController_DW.temporalCounter_i1 < 127) {
    TrafficLightController_DW.temporalCounter_i1++;
  }

  if (TrafficLightController_DW.is_active_c3_TrafficLightContro == 0) {
    TrafficLightController_DW.is_active_c3_TrafficLightContro = 1U;
    TrafficLightController_DW.is_c3_TrafficLightController =
      TrafficLightController_IN_Idle;

    /* Outport: '<Root>/PedestrianLight' */
    TrafficLightController_Y.PedestrianLight = 3.0;

    /* Outport: '<Root>/VehicleLight' */
    TrafficLightController_Y.VehicleLight = 0.0;
    for (i = 0; i < 53; i++) {
      b[i] = e[i];
    }

    printf(&b[0]);
  } else {
    switch (TrafficLightController_DW.is_c3_TrafficLightController) {
     case TrafficLightController_IN_Amber:
      /* Outport: '<Root>/PedestrianLight' */
      TrafficLightController_Y.PedestrianLight = 2.0;

      /* Outport: '<Root>/VehicleLight' */
      TrafficLightController_Y.VehicleLight = 0.0;
      if (TrafficLightController_DW.temporalCounter_i1 >= 15) {
        TrafficLightController_DW.temporalCounter_i1 = 0U;
        TrafficLightController_DW.is_c3_TrafficLightController =
          TrafficLightControl_IN_Crossing;

        /* Outport: '<Root>/PedestrianLight' */
        TrafficLightController_Y.PedestrianLight = 1.0;

        /* Outport: '<Root>/VehicleLight' */
        TrafficLightController_Y.VehicleLight = 1.0;
        for (i = 0; i < 57; i++) {
          c[i] = f[i];
        }

        printf(&c[0]);
      }
      break;

     case TrafficLightControl_IN_Crossing:
      /* Outport: '<Root>/PedestrianLight' */
      TrafficLightController_Y.PedestrianLight = 1.0;

      /* Outport: '<Root>/VehicleLight' */
      TrafficLightController_Y.VehicleLight = 1.0;
      if (TrafficLightController_DW.temporalCounter_i1 >= 75) {
        TrafficLightController_DW.is_c3_TrafficLightController =
          TrafficLightController_IN_Idle;

        /* Outport: '<Root>/PedestrianLight' */
        TrafficLightController_Y.PedestrianLight = 3.0;

        /* Outport: '<Root>/VehicleLight' */
        TrafficLightController_Y.VehicleLight = 0.0;
        for (i = 0; i < 53; i++) {
          b[i] = e[i];
        }

        printf(&b[0]);
      }
      break;

     default:
      /* Outport: '<Root>/PedestrianLight' */
      /* case IN_Idle: */
      TrafficLightController_Y.PedestrianLight = 3.0;

      /* Outport: '<Root>/VehicleLight' */
      TrafficLightController_Y.VehicleLight = 0.0;
      if (TrafficLightController_U.ButtonPress == 1.0) {
        TrafficLightController_DW.temporalCounter_i1 = 0U;
        TrafficLightController_DW.is_c3_TrafficLightController =
          TrafficLightController_IN_Amber;

        /* Outport: '<Root>/PedestrianLight' */
        TrafficLightController_Y.PedestrianLight = 2.0;
        for (i = 0; i < 54; i++) {
          d[i] = g[i];
        }

        printf(&d[0]);
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* Matfile logging */
  rt_UpdateTXYLogVars(TrafficLightController_M->rtwLogInfo,
                      (&TrafficLightController_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.2s, 0.0s] */
    if ((rtmGetTFinal(TrafficLightController_M)!=-1) &&
        !((rtmGetTFinal(TrafficLightController_M)-
           TrafficLightController_M->Timing.taskTime0) >
          TrafficLightController_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(TrafficLightController_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++TrafficLightController_M->Timing.clockTick0)) {
    ++TrafficLightController_M->Timing.clockTickH0;
  }

  TrafficLightController_M->Timing.taskTime0 =
    TrafficLightController_M->Timing.clockTick0 *
    TrafficLightController_M->Timing.stepSize0 +
    TrafficLightController_M->Timing.clockTickH0 *
    TrafficLightController_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void TrafficLightController_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)TrafficLightController_M, 0,
                sizeof(RT_MODEL_TrafficLightControll_T));
  rtmSetTFinal(TrafficLightController_M, 10.0);
  TrafficLightController_M->Timing.stepSize0 = 0.2;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    TrafficLightController_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(TrafficLightController_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(TrafficLightController_M->rtwLogInfo, (NULL));
    rtliSetLogT(TrafficLightController_M->rtwLogInfo, "tout");
    rtliSetLogX(TrafficLightController_M->rtwLogInfo, "");
    rtliSetLogXFinal(TrafficLightController_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(TrafficLightController_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(TrafficLightController_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(TrafficLightController_M->rtwLogInfo, 0);
    rtliSetLogDecimation(TrafficLightController_M->rtwLogInfo, 1);
    rtliSetLogY(TrafficLightController_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(TrafficLightController_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(TrafficLightController_M->rtwLogInfo, (NULL));
  }

  /* states (dwork) */
  (void) memset((void *)&TrafficLightController_DW, 0,
                sizeof(DW_TrafficLightController_T));

  /* external inputs */
  TrafficLightController_U.ButtonPress = 0.0;

  /* external outputs */
  (void)memset(&TrafficLightController_Y, 0, sizeof
               (ExtY_TrafficLightController_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(TrafficLightController_M->rtwLogInfo, 0.0,
    rtmGetTFinal(TrafficLightController_M),
    TrafficLightController_M->Timing.stepSize0, (&rtmGetErrorStatus
    (TrafficLightController_M)));

  /* SystemInitialize for Chart: '<Root>/Chart' */
  TrafficLightController_DW.temporalCounter_i1 = 0U;
  TrafficLightController_DW.is_active_c3_TrafficLightContro = 0U;
  TrafficLightController_DW.is_c3_TrafficLightController =
    TrafficLight_IN_NO_ACTIVE_CHILD;
}

/* Model terminate function */
void TrafficLightController_terminate(void)
{
  /* (no terminate code required) */
}
