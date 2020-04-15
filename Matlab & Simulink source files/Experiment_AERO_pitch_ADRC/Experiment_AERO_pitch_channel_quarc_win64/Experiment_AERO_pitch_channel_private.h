/*
 * Experiment_AERO_pitch_channel_private.h
 *
 * Code generation for model "Experiment_AERO_pitch_channel".
 *
 * Model version              : 1.325
 * Simulink Coder version : 8.14 (R2018a) 06-Feb-2018
 * C source code generated on : Fri Apr 10 23:10:33 2020
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Experiment_AERO_pitch_channel_private_h_
#define RTW_HEADER_Experiment_AERO_pitch_channel_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "Experiment_AERO_pitch_channel.h"

/* A global buffer for storing error messages (defined in quanser_common library) */
EXTERN char _rt_error_message[512];
extern real_T rt_powd_snf(real_T u0, real_T u1);
extern void Experiment_AERO__falxalphadelta(real_T rtu_x, real_T rtu_alpha,
  real_T rtu_delta, B_falxalphadelta_Experiment_A_T *localB);

/* private model entry point functions */
extern void Experiment_AERO_pitch_channel_derivatives(void);

#endif                                 /* RTW_HEADER_Experiment_AERO_pitch_channel_private_h_ */
