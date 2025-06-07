/*
 * TrafficLightController.h
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

#ifndef TrafficLightController_h_
#define TrafficLightController_h_
#ifndef TrafficLightController_COMMON_INCLUDES_
#define TrafficLightController_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#include "rt_nonfinite.h"
#include "math.h"
#endif                             /* TrafficLightController_COMMON_INCLUDES_ */

#include "TrafficLightController_types.h"
#include <float.h>
#include <string.h>
#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                (&(rtm)->Timing.taskTime0)
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint8_T is_active_c3_TrafficLightContro;/* '<Root>/Chart' */
  uint8_T is_c3_TrafficLightController;/* '<Root>/Chart' */
  uint8_T temporalCounter_i1;          /* '<Root>/Chart' */
} DW_TrafficLightController_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T ButtonPress;                  /* '<Root>/ButtonPress' */
} ExtU_TrafficLightController_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T VehicleLight;                 /* '<Root>/VehicleLight' */
  real_T PedestrianLight;              /* '<Root>/PedestrianLight' */
} ExtY_TrafficLightController_T;

/* Real-time Model Data Structure */
struct tag_RTM_TrafficLightControlle_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block states (default storage) */
extern DW_TrafficLightController_T TrafficLightController_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_TrafficLightController_T TrafficLightController_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_TrafficLightController_T TrafficLightController_Y;

/* Model entry point functions */
extern void TrafficLightController_initialize(void);
extern void TrafficLightController_step(void);
extern void TrafficLightController_terminate(void);

/* Real-time Model object */
extern RT_MODEL_TrafficLightControll_T *const TrafficLightController_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'TrafficLightController'
 * '<S1>'   : 'TrafficLightController/Chart'
 */
#endif                                 /* TrafficLightController_h_ */
