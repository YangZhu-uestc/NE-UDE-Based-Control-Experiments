/*
 * Experiment_AERO_pitch_channel_data.c
 *
 * Code generation for model "Experiment_AERO_pitch_channel".
 *
 * Model version              : 1.332
 * Simulink Coder version : 8.14 (R2018a) 06-Feb-2018
 * C source code generated on : Fri Apr 10 20:44:19 2020
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Experiment_AERO_pitch_channel.h"
#include "Experiment_AERO_pitch_channel_private.h"

/* Block parameters (default storage) */
P_Experiment_AERO_pitch_chann_T Experiment_AERO_pitch_channel_P = {
  /* Variable: Dp
   * Referenced by: '<S3>/Gain1'
   */
  0.00776862141696,

  /* Variable: Dp_static
   * Referenced by: '<S3>/Gain5'
   */
  0.00038843107084800006,

  /* Variable: Dy
   * Referenced by: '<S3>/Gain6'
   */
  0.022,

  /* Variable: Jp
   * Referenced by:
   *   '<Root>/ 1'
   *   '<Root>/ 2'
   *   '<S3>/Gain2'
   *   '<S9>/Gain'
   */
  0.021886864828333335,

  /* Variable: Jy
   * Referenced by: '<S3>/Gain7'
   */
  0.021992064828333335,

  /* Variable: Kpp
   * Referenced by: '<S2>/Kpp'
   */
  0.00099719556509400022,

  /* Variable: Ksp
   * Referenced by:
   *   '<Root>/ 2'
   *   '<S3>/Gain'
   */
  0.071643279410402,

  /* Variable: PitchAxisEnable
   * Referenced by: '<S3>/Pitch axis Enable'
   */
  1.0,

  /* Variable: PitchMotorEnable
   * Referenced by: '<S2>/Pitch Motor Enable'
   */
  1.0,

  /* Variable: YawAxisEnable
   * Referenced by: '<S3>/Yaw axis Enable'
   */
  0.0,

  /* Variable: YawMotorEnable
   * Referenced by: '<S2>/Yaw Enable Motor'
   */
  0.0,

  /* Variable: a1
   * Referenced by: '<S9>/a1'
   */
  -3.273345907343348,

  /* Variable: a2
   * Referenced by: '<S9>/a2'
   */
  -0.35494445997140894,

  /* Variable: psi_dot_initial
   * Referenced by: '<S3>/psi_dot'
   */
  0.0,

  /* Variable: psi_initial
   * Referenced by: '<S3>/psi'
   */
  0.0,

  /* Variable: theta_dot_initial
   * Referenced by: '<S3>/theta_dot'
   */
  0.0,

  /* Variable: theta_initial
   * Referenced by: '<S3>/theta'
   */
  0.0,

  /* Mask Parameter: BaseLEDColour_color
   * Referenced by: '<S16>/Constant'
   */
  { 0.0, 1.0, 0.0 },

  /* Mask Parameter: HILRead_analog_channels
   * Referenced by: '<S4>/HIL Read'
   */
  { 0U, 1U },

  /* Mask Parameter: HILWrite_analog_channels
   * Referenced by: '<S4>/HIL Write'
   */
  { 0U, 1U },

  /* Mask Parameter: HILRead_digital_channels
   * Referenced by: '<S4>/HIL Read'
   */
  { 0U, 1U, 2U },

  /* Mask Parameter: HILWrite_digital_channels
   * Referenced by: '<S4>/HIL Write'
   */
  { 0U, 1U },

  /* Mask Parameter: HILRead_encoder_channels
   * Referenced by: '<S4>/HIL Read'
   */
  { 2U, 3U },

  /* Mask Parameter: HILRead_other_channels
   * Referenced by: '<S4>/HIL Read'
   */
  { 14000U, 14001U, 3000U, 3001U, 3002U, 4000U, 4001U, 4002U },

  /* Mask Parameter: HILWrite_other_channels
   * Referenced by: '<S4>/HIL Write'
   */
  { 11000U, 11001U, 11002U },

  /* Expression: 0
   * Referenced by: '<S2>/no input'
   */
  0.0,

  /* Expression: 24
   * Referenced by: '<S2>/Yaw cmd limit: +//- 24V'
   */
  24.0,

  /* Expression: -24
   * Referenced by: '<S2>/Yaw cmd limit: +//- 24V'
   */
  -24.0,

  /* Expression: 24
   * Referenced by: '<S2>/Pitch cmd limit: +//- 24V1'
   */
  24.0,

  /* Expression: 0
   * Referenced by: '<S2>/Pitch cmd limit: +//- 24V1'
   */
  0.0,

  /* Expression: 24
   * Referenced by: '<S2>/Pitch cmd limit: +//- 24V'
   */
  24.0,

  /* Expression: -24
   * Referenced by: '<S2>/Pitch cmd limit: +//- 24V'
   */
  -24.0,

  /* Expression: set_other_outputs_at_terminate
   * Referenced by: '<S4>/HIL Initialize'
   */
  1.0,

  /* Expression: set_other_outputs_at_switch_out
   * Referenced by: '<S4>/HIL Initialize'
   */
  0.0,

  /* Expression: set_other_outputs_at_start
   * Referenced by: '<S4>/HIL Initialize'
   */
  1.0,

  /* Expression: set_other_outputs_at_switch_in
   * Referenced by: '<S4>/HIL Initialize'
   */
  0.0,

  /* Expression: final_analog_outputs
   * Referenced by: '<S4>/HIL Initialize'
   */
  0.0,

  /* Expression: final_other_outputs
   * Referenced by: '<S4>/HIL Initialize'
   */
  { 1.0, 0.0, 0.0 },

  /* Expression: analog_input_maximums
   * Referenced by: '<S4>/HIL Initialize'
   */
  3.0,

  /* Expression: analog_input_minimums
   * Referenced by: '<S4>/HIL Initialize'
   */
  -3.0,

  /* Expression: analog_output_maximums
   * Referenced by: '<S4>/HIL Initialize'
   */
  24.0,

  /* Expression: analog_output_minimums
   * Referenced by: '<S4>/HIL Initialize'
   */
  -24.0,

  /* Expression: initial_analog_outputs
   * Referenced by: '<S4>/HIL Initialize'
   */
  0.0,

  /* Expression: watchdog_analog_outputs
   * Referenced by: '<S4>/HIL Initialize'
   */
  0.0,

  /* Expression: initial_other_outputs
   * Referenced by: '<S4>/HIL Initialize'
   */
  { 0.0, 1.0, 0.0 },

  /* Expression: watchdog_other_outputs
   * Referenced by: '<S4>/HIL Initialize'
   */
  { 0.0, 0.0, 1.0 },

  /* Expression: [1 -1 1]
   * Referenced by: '<S4>/Gyro Calibration'
   */
  { 1.0, -1.0, 1.0 },

  /* Expression: 2*pi/512/4
   * Referenced by: '<S4>/Pitch: counts to deg'
   */
  0.0030679615757712823,

  /* Expression: -1.635e+07
   * Referenced by: '<S2>/p1'
   */
  -1.635E+7,

  /* Expression: 1
   * Referenced by: '<Root>/cost'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/cost'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/cost'
   */
  1.0,

  /* Expression: pi/2
   * Referenced by: '<Root>/cost'
   */
  1.5707963267948966,

  /* Expression: 0.2
   * Referenced by: '<Root>/gain'
   */
  0.2,

  /* Expression: 2
   * Referenced by: '<Root>/kI'
   */
  2.0,

  /* Computed Parameter: LPF7_A
   * Referenced by: '<Root>/LPF7'
   */
  -10.0,

  /* Computed Parameter: LPF7_C
   * Referenced by: '<Root>/LPF7'
   */
  10.0,

  /* Computed Parameter: LPF6_A
   * Referenced by: '<Root>/LPF6'
   */
  -20.0,

  /* Computed Parameter: LPF6_C
   * Referenced by: '<Root>/LPF6'
   */
  20.0,

  /* Computed Parameter: LPF5_A
   * Referenced by: '<Root>/LPF5'
   */
  -100.0,

  /* Computed Parameter: LPF5_C
   * Referenced by: '<Root>/LPF5'
   */
  100.0,

  /* Expression: 1
   * Referenced by: '<S9>/uc'
   */
  1.0,

  /* Expression: [0;0]
   * Referenced by: '<S9>/zd'
   */
  { 0.0, 0.0 },

  /* Expression: 0.3
   * Referenced by: '<Root>/k0'
   */
  0.3,

  /* Expression: 0
   * Referenced by: '<Root>/Integrator1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Integrator2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Integrator'
   */
  0.0,

  /* Expression: 20
   * Referenced by: '<Root>/k2'
   */
  20.0,

  /* Expression: 0.2
   * Referenced by: '<Root>/k1'
   */
  0.2,

  /* Expression: 0.05
   * Referenced by: '<S2>/Pitch cmd limit: +//- 24V2'
   */
  0.05,

  /* Expression: 0
   * Referenced by: '<S2>/Pitch cmd limit: +//- 24V2'
   */
  0.0,

  /* Expression: 1.582e+06
   * Referenced by: '<S2>/p2'
   */
  1.582E+6,

  /* Expression: -5.763e+04
   * Referenced by: '<S2>/p3'
   */
  -57630.0,

  /* Expression: 1330
   * Referenced by: '<S2>/p4'
   */
  1330.0,

  /* Expression: 3.291
   * Referenced by: '<S2>/p5'
   */
  3.291,

  /* Expression: -3.62e5
   * Referenced by: '<S2>/a'
   */
  -362000.0,

  /* Expression: 3.058e4
   * Referenced by: '<S2>/b'
   */
  30580.0,

  /* Expression: -862.1
   * Referenced by: '<S2>/c'
   */
  -862.1,

  /* Expression: 127.8
   * Referenced by: '<S2>/d'
   */
  127.8,

  /* Expression: 0
   * Referenced by: '<S2>/u = 0V(if not enabled)'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S2>/Switch'
   */
  0.5,

  /* Expression: 1
   * Referenced by: '<Root>/ '
   */
  1.0,

  /* Expression: 0.5
   * Referenced by: '<S2>/Switch1'
   */
  0.5,

  /* Expression: 1
   * Referenced by: '<Root>/Pitch Motor Enable'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Yaw Enable Motor'
   */
  0.0,

  /* Expression: 180/pi
   * Referenced by: '<S7>/Gain'
   */
  57.295779513082323,

  /* Expression: 180/pi
   * Referenced by: '<S5>/Gain'
   */
  57.295779513082323,

  /* Expression: 180/pi
   * Referenced by: '<S6>/Gain'
   */
  57.295779513082323,

  /* Expression: 1
   * Referenced by: '<S3>/model uncertainty'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S3>/model uncertainty1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/tauy (uncontrolled)'
   */
  0.0,

  /* Computed Parameter: HILInitialize_CKChannels
   * Referenced by: '<S4>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_DOWatchdog
   * Referenced by: '<S4>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_EIInitial
   * Referenced by: '<S4>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_AIChannels
   * Referenced by: '<S4>/HIL Initialize'
   */
  { 0U, 1U },

  /* Computed Parameter: HILInitialize_AOChannels
   * Referenced by: '<S4>/HIL Initialize'
   */
  { 0U, 1U },

  /* Computed Parameter: HILInitialize_DOChannels
   * Referenced by: '<S4>/HIL Initialize'
   */
  { 0U, 1U },

  /* Computed Parameter: HILInitialize_EIChannels
   * Referenced by: '<S4>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U },

  /* Computed Parameter: HILInitialize_EIQuadrature
   * Referenced by: '<S4>/HIL Initialize'
   */
  4U,

  /* Computed Parameter: HILInitialize_OOChannels
   * Referenced by: '<S4>/HIL Initialize'
   */
  { 11000U, 11001U, 11002U },

  /* Computed Parameter: ToHostFile1_Decimation
   * Referenced by: '<Root>/To Host File1'
   */
  1U,

  /* Computed Parameter: ToHostFile1_BitRate
   * Referenced by: '<Root>/To Host File1'
   */
  2000000U,

  /* Computed Parameter: ToHostFile2_Decimation
   * Referenced by: '<Root>/To Host File2'
   */
  1U,

  /* Computed Parameter: ToHostFile2_BitRate
   * Referenced by: '<Root>/To Host File2'
   */
  2000000U,

  /* Computed Parameter: ToHostFile4_Decimation
   * Referenced by: '<Root>/To Host File4'
   */
  1U,

  /* Computed Parameter: ToHostFile4_BitRate
   * Referenced by: '<Root>/To Host File4'
   */
  2000000U,

  /* Computed Parameter: ToHostFile5_Decimation
   * Referenced by: '<Root>/To Host File5'
   */
  1U,

  /* Computed Parameter: ToHostFile5_BitRate
   * Referenced by: '<Root>/To Host File5'
   */
  2000000U,

  /* Computed Parameter: ToHostFile6_Decimation
   * Referenced by: '<Root>/To Host File6'
   */
  1U,

  /* Computed Parameter: ToHostFile6_BitRate
   * Referenced by: '<Root>/To Host File6'
   */
  2000000U,

  /* Computed Parameter: HILInitialize_Active
   * Referenced by: '<S4>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_AOTerminate
   * Referenced by: '<S4>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILInitialize_AOExit
   * Referenced by: '<S4>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_DOTerminate
   * Referenced by: '<S4>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILInitialize_DOExit
   * Referenced by: '<S4>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POTerminate
   * Referenced by: '<S4>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POExit
   * Referenced by: '<S4>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_CKPStart
   * Referenced by: '<S4>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_CKPEnter
   * Referenced by: '<S4>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_CKStart
   * Referenced by: '<S4>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_CKEnter
   * Referenced by: '<S4>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_AIPStart
   * Referenced by: '<S4>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_AIPEnter
   * Referenced by: '<S4>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_AOPStart
   * Referenced by: '<S4>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_AOPEnter
   * Referenced by: '<S4>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_AOStart
   * Referenced by: '<S4>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILInitialize_AOEnter
   * Referenced by: '<S4>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_AOReset
   * Referenced by: '<S4>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILInitialize_DOPStart
   * Referenced by: '<S4>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_DOPEnter
   * Referenced by: '<S4>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_DOStart
   * Referenced by: '<S4>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILInitialize_DOEnter
   * Referenced by: '<S4>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_DOReset
   * Referenced by: '<S4>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILInitialize_EIPStart
   * Referenced by: '<S4>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_EIPEnter
   * Referenced by: '<S4>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_EIStart
   * Referenced by: '<S4>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILInitialize_EIEnter
   * Referenced by: '<S4>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POPStart
   * Referenced by: '<S4>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POPEnter
   * Referenced by: '<S4>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POStart
   * Referenced by: '<S4>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POEnter
   * Referenced by: '<S4>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POReset
   * Referenced by: '<S4>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_OOReset
   * Referenced by: '<S4>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILInitialize_DOFinal
   * Referenced by: '<S4>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_DOInitial
   * Referenced by: '<S4>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILRead_Active
   * Referenced by: '<S4>/HIL Read'
   */
  1,

  /* Computed Parameter: HILWrite_Active
   * Referenced by: '<S4>/HIL Write'
   */
  0,

  /* Computed Parameter: ManualSwitch8_CurrentSetting
   * Referenced by: '<Root>/Manual Switch8'
   */
  0U,

  /* Computed Parameter: ManualSwitch10_CurrentSetting
   * Referenced by: '<Root>/Manual Switch10'
   */
  0U,

  /* Computed Parameter: ManualSwitch2_CurrentSetting
   * Referenced by: '<S2>/Manual Switch2'
   */
  1U,

  /* Computed Parameter: ManualSwitch1_CurrentSetting
   * Referenced by: '<S2>/Manual Switch1'
   */
  0U,

  /* Computed Parameter: ManualSwitch3_CurrentSetting
   * Referenced by: '<S2>/Manual Switch3'
   */
  1U,

  /* Computed Parameter: ManualSwitch11_CurrentSetting
   * Referenced by: '<Root>/Manual Switch11'
   */
  0U,

  /* Expression: file_name_argument
   * Referenced by: '<Root>/To Host File1'
   */
  { 76U, 111U, 103U, 95U, 84U, 114U, 97U, 99U, 107U, 105U, 110U, 103U, 95U, 69U,
    114U, 114U, 46U, 109U, 97U, 116U, 0U },

  /* Expression: variable_name_argument
   * Referenced by: '<Root>/To Host File1'
   */
  { 76U, 111U, 103U, 95U, 84U, 114U, 97U, 99U, 107U, 105U, 110U, 103U, 95U, 69U,
    114U, 114U, 0U },

  /* Computed Parameter: ToHostFile1_FileFormat
   * Referenced by: '<Root>/To Host File1'
   */
  2U,

  /* Expression: file_name_argument
   * Referenced by: '<Root>/To Host File2'
   */
  { 76U, 111U, 103U, 95U, 84U, 104U, 101U, 116U, 97U, 95U, 82U, 101U, 115U, 112U,
    111U, 110U, 115U, 101U, 46U, 109U, 97U, 116U, 0U },

  /* Expression: variable_name_argument
   * Referenced by: '<Root>/To Host File2'
   */
  { 76U, 111U, 103U, 95U, 84U, 104U, 101U, 116U, 97U, 95U, 82U, 101U, 115U, 112U,
    111U, 110U, 115U, 101U, 0U },

  /* Computed Parameter: ToHostFile2_FileFormat
   * Referenced by: '<Root>/To Host File2'
   */
  2U,

  /* Expression: file_name_argument
   * Referenced by: '<Root>/To Host File4'
   */
  { 76U, 111U, 103U, 95U, 73U, 110U, 112U, 117U, 116U, 95U, 86U, 111U, 108U,
    116U, 97U, 103U, 101U, 46U, 109U, 97U, 116U, 0U },

  /* Expression: variable_name_argument
   * Referenced by: '<Root>/To Host File4'
   */
  { 76U, 111U, 103U, 95U, 73U, 110U, 112U, 117U, 116U, 95U, 86U, 111U, 108U,
    116U, 97U, 103U, 101U, 0U },

  /* Computed Parameter: ToHostFile4_FileFormat
   * Referenced by: '<Root>/To Host File4'
   */
  2U,

  /* Expression: file_name_argument
   * Referenced by: '<Root>/To Host File5'
   */
  { 76U, 111U, 103U, 95U, 73U, 110U, 112U, 117U, 116U, 95U, 84U, 111U, 114U,
    113U, 117U, 101U, 46U, 109U, 97U, 116U, 0U },

  /* Expression: variable_name_argument
   * Referenced by: '<Root>/To Host File5'
   */
  { 76U, 111U, 103U, 95U, 73U, 110U, 112U, 117U, 116U, 95U, 84U, 111U, 114U,
    113U, 117U, 101U, 0U },

  /* Computed Parameter: ToHostFile5_FileFormat
   * Referenced by: '<Root>/To Host File5'
   */
  2U,

  /* Expression: file_name_argument
   * Referenced by: '<Root>/To Host File6'
   */
  { 76U, 111U, 103U, 95U, 84U, 104U, 101U, 116U, 97U, 95U, 100U, 111U, 116U, 95U,
    82U, 101U, 115U, 112U, 111U, 110U, 115U, 101U, 46U, 109U, 97U, 116U, 0U },

  /* Expression: variable_name_argument
   * Referenced by: '<Root>/To Host File6'
   */
  { 76U, 111U, 103U, 95U, 84U, 104U, 101U, 116U, 97U, 95U, 100U, 111U, 116U, 95U,
    82U, 101U, 115U, 112U, 111U, 110U, 115U, 101U, 0U },

  /* Computed Parameter: ToHostFile6_FileFormat
   * Referenced by: '<Root>/To Host File6'
   */
  2U
};
