/*
 * Experiment_AERO_pitch_channel_data.c
 *
 * Code generation for model "Experiment_AERO_pitch_channel".
 *
 * Model version              : 1.322
 * Simulink Coder version : 8.14 (R2018a) 06-Feb-2018
 * C source code generated on : Fri Apr 10 22:44:23 2020
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
   *   '<Root>/ 5'
   *   '<S3>/Gain2'
   *   '<S10>/Gain'
   */
  0.021886864828333335,

  /* Variable: Jy
   * Referenced by: '<S3>/Gain7'
   */
  0.021992064828333335,

  /* Variable: Kpp
   * Referenced by: '<S1>/Kpp'
   */
  0.00099719556509400022,

  /* Variable: Ksp
   * Referenced by: '<S3>/Gain'
   */
  0.071643279410402,

  /* Variable: PitchAxisEnable
   * Referenced by: '<S3>/Pitch axis Enable'
   */
  1.0,

  /* Variable: PitchMotorEnable
   * Referenced by: '<S1>/Pitch Motor Enable'
   */
  1.0,

  /* Variable: T
   * Referenced by: '<S12>/Gain'
   */
  0.05,

  /* Variable: Tf
   * Referenced by: '<S11>/Gain'
   */
  0.05,

  /* Variable: YawAxisEnable
   * Referenced by: '<S3>/Yaw axis Enable'
   */
  0.0,

  /* Variable: YawMotorEnable
   * Referenced by: '<S1>/Yaw Enable Motor'
   */
  0.0,

  /* Variable: a1
   * Referenced by:
   *   '<S10>/a1'
   *   '<S11>/Gain2'
   *   '<S12>/Gain2'
   */
  -3.273345907343348,

  /* Variable: a2
   * Referenced by:
   *   '<S10>/a2'
   *   '<S11>/Gain1'
   *   '<S11>/Gain3'
   *   '<S12>/Gain1'
   *   '<S12>/Gain3'
   */
  -0.35494445997140894,

  /* Variable: kd
   * Referenced by:
   *   '<Root>/k'
   *   '<S13>/kd'
   */
  3.0,

  /* Variable: kp
   * Referenced by: '<S13>/kp'
   */
  5.0,

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
   * Referenced by: '<S14>/Constant'
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
   * Referenced by: '<S1>/no input'
   */
  0.0,

  /* Expression: 24
   * Referenced by: '<S1>/Yaw cmd limit: +//- 24V'
   */
  24.0,

  /* Expression: -24
   * Referenced by: '<S1>/Yaw cmd limit: +//- 24V'
   */
  -24.0,

  /* Expression: 24
   * Referenced by: '<S1>/Pitch cmd limit: +//- 24V1'
   */
  24.0,

  /* Expression: 0
   * Referenced by: '<S1>/Pitch cmd limit: +//- 24V1'
   */
  0.0,

  /* Expression: 24
   * Referenced by: '<S1>/Pitch cmd limit: +//- 24V'
   */
  24.0,

  /* Expression: -24
   * Referenced by: '<S1>/Pitch cmd limit: +//- 24V'
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
   * Referenced by: '<S1>/p1'
   */
  -1.635E+7,

  /* Computed Parameter: LPF3_A
   * Referenced by: '<Root>/LPF3'
   */
  -10.0,

  /* Computed Parameter: LPF3_C
   * Referenced by: '<Root>/LPF3'
   */
  10.0,

  /* Computed Parameter: LPF2_A
   * Referenced by: '<Root>/LPF2'
   */
  -20.0,

  /* Computed Parameter: LPF2_C
   * Referenced by: '<Root>/LPF2'
   */
  20.0,

  /* Computed Parameter: LPF1_A
   * Referenced by: '<Root>/LPF1'
   */
  -100.0,

  /* Computed Parameter: LPF1_C
   * Referenced by: '<Root>/LPF1'
   */
  100.0,

  /* Expression: 1
   * Referenced by: '<S10>/uc'
   */
  1.0,

  /* Expression: [0;0]
   * Referenced by: '<S10>/zd'
   */
  { 0.0, 0.0 },

  /* Expression: 1
   * Referenced by: '<Root>/ feedback?6'
   */
  1.0,

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
   * Referenced by: '<Root>/ feedback?4'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<Root>/ feedback?5'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S12>/Integrator1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S12>/Integrator2'
   */
  0.0,

  /* Computed Parameter: TF1_A
   * Referenced by: '<S11>/TF1'
   */
  { -20.0, -0.0 },

  /* Computed Parameter: TF1_C
   * Referenced by: '<S11>/TF1'
   */
  { 20.0, 60.0 },

  /* Expression: 0
   * Referenced by: '<S11>/Integrator1'
   */
  0.0,

  /* Computed Parameter: TF4_A
   * Referenced by: '<S11>/TF4'
   */
  -20.0,

  /* Computed Parameter: TF4_C
   * Referenced by: '<S11>/TF4'
   */
  -340.0,

  /* Computed Parameter: TF4_D
   * Referenced by: '<S11>/TF4'
   */
  20.0,

  /* Computed Parameter: TF5_A
   * Referenced by: '<S11>/TF5'
   */
  -20.0,

  /* Computed Parameter: TF5_C
   * Referenced by: '<S11>/TF5'
   */
  -340.0,

  /* Computed Parameter: TF5_D
   * Referenced by: '<S11>/TF5'
   */
  20.0,

  /* Expression: 0
   * Referenced by: '<S11>/Integrator2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/0'
   */
  0.0,

  /* Computed Parameter: TF1_A_b
   * Referenced by: '<S2>/TF1'
   */
  -20.0,

  /* Computed Parameter: TF1_C_p
   * Referenced by: '<S2>/TF1'
   */
  20.0,

  /* Computed Parameter: TF3_A
   * Referenced by: '<S2>/TF3'
   */
  -20.0,

  /* Computed Parameter: TF3_C
   * Referenced by: '<S2>/TF3'
   */
  -400.0,

  /* Computed Parameter: TF3_D
   * Referenced by: '<S2>/TF3'
   */
  20.0,

  /* Computed Parameter: TF2_A
   * Referenced by: '<S2>/TF2'
   */
  -20.0,

  /* Computed Parameter: TF2_C
   * Referenced by: '<S2>/TF2'
   */
  -400.0,

  /* Computed Parameter: TF2_D
   * Referenced by: '<S2>/TF2'
   */
  20.0,

  /* Expression: 0.05
   * Referenced by: '<S1>/Pitch cmd limit: +//- 24V2'
   */
  0.05,

  /* Expression: 0
   * Referenced by: '<S1>/Pitch cmd limit: +//- 24V2'
   */
  0.0,

  /* Expression: 1.582e+06
   * Referenced by: '<S1>/p2'
   */
  1.582E+6,

  /* Expression: -5.763e+04
   * Referenced by: '<S1>/p3'
   */
  -57630.0,

  /* Expression: 1330
   * Referenced by: '<S1>/p4'
   */
  1330.0,

  /* Expression: 3.291
   * Referenced by: '<S1>/p5'
   */
  3.291,

  /* Expression: -3.62e5
   * Referenced by: '<S1>/a'
   */
  -362000.0,

  /* Expression: 3.058e4
   * Referenced by: '<S1>/b'
   */
  30580.0,

  /* Expression: -862.1
   * Referenced by: '<S1>/c'
   */
  -862.1,

  /* Expression: 127.8
   * Referenced by: '<S1>/d'
   */
  127.8,

  /* Expression: 0
   * Referenced by: '<S1>/u = 0V(if not enabled)'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S1>/Switch'
   */
  0.5,

  /* Expression: 1
   * Referenced by: '<Root>/ '
   */
  1.0,

  /* Expression: 0.5
   * Referenced by: '<S1>/Switch1'
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
   * Referenced by: '<S9>/Gain'
   */
  57.295779513082323,

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

  /* Expression: 0
   * Referenced by: '<S2>/Constant'
   */
  0.0,

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

  /* Expression: 0
   * Referenced by: '<S11>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S11>/W(s)=0'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S12>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S12>/W(s)=0'
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

  /* Computed Parameter: ToHostFile3_Decimation
   * Referenced by: '<Root>/To Host File3'
   */
  1U,

  /* Computed Parameter: ToHostFile3_BitRate
   * Referenced by: '<Root>/To Host File3'
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

  /* Computed Parameter: ManualSwitch3_CurrentSetting
   * Referenced by: '<Root>/Manual Switch3'
   */
  0U,

  /* Computed Parameter: ManualSwitch14_CurrentSetting
   * Referenced by: '<Root>/Manual Switch14'
   */
  0U,

  /* Computed Parameter: ManualSwitch12_CurrentSetting
   * Referenced by: '<Root>/Manual Switch12'
   */
  1U,

  /* Computed Parameter: ManualSwitch8_CurrentSetting
   * Referenced by: '<Root>/Manual Switch8'
   */
  0U,

  /* Computed Parameter: ManualSwitch10_CurrentSetting
   * Referenced by: '<Root>/Manual Switch10'
   */
  0U,

  /* Computed Parameter: ManualSwitch2_CurrentSetting
   * Referenced by: '<S1>/Manual Switch2'
   */
  1U,

  /* Computed Parameter: ManualSwitch1_CurrentSetting
   * Referenced by: '<S1>/Manual Switch1'
   */
  0U,

  /* Computed Parameter: ManualSwitch3_CurrentSetting_c
   * Referenced by: '<S1>/Manual Switch3'
   */
  1U,

  /* Computed Parameter: ManualSwitch11_CurrentSetting
   * Referenced by: '<Root>/Manual Switch11'
   */
  0U,

  /* Computed Parameter: ManualSwitch9_CurrentSetting
   * Referenced by: '<Root>/Manual Switch9'
   */
  0U,

  /* Computed Parameter: ManualSwitch2_CurrentSetting_b
   * Referenced by: '<Root>/Manual Switch2'
   */
  0U,

  /* Computed Parameter: ManualSwitch13_CurrentSetting
   * Referenced by: '<Root>/Manual Switch13'
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
   * Referenced by: '<Root>/To Host File3'
   */
  { 76U, 111U, 103U, 95U, 84U, 104U, 101U, 116U, 97U, 95U, 100U, 111U, 116U, 95U,
    78U, 69U, 95U, 101U, 115U, 116U, 105U, 109U, 97U, 116U, 105U, 111U, 110U,
    46U, 109U, 97U, 116U, 0U },

  /* Expression: variable_name_argument
   * Referenced by: '<Root>/To Host File3'
   */
  { 76U, 111U, 103U, 95U, 84U, 104U, 101U, 116U, 97U, 95U, 100U, 111U, 116U, 95U,
    78U, 69U, 95U, 101U, 115U, 116U, 105U, 109U, 97U, 116U, 105U, 111U, 110U, 0U
  },

  /* Computed Parameter: ToHostFile3_FileFormat
   * Referenced by: '<Root>/To Host File3'
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
