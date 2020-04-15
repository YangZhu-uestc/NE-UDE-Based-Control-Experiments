/*
 * Experiment_AERO_pitch_channel.c
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
#include "Experiment_AERO_pitch_channel_dt.h"

/* Block signals (default storage) */
B_Experiment_AERO_pitch_chann_T Experiment_AERO_pitch_channel_B;

/* Continuous states */
X_Experiment_AERO_pitch_chann_T Experiment_AERO_pitch_channel_X;

/* Block states (default storage) */
DW_Experiment_AERO_pitch_chan_T Experiment_AERO_pitch_channe_DW;

/* Real-time model */
RT_MODEL_Experiment_AERO_pitc_T Experiment_AERO_pitch_channe_M_;
RT_MODEL_Experiment_AERO_pitc_T *const Experiment_AERO_pitch_channe_M =
  &Experiment_AERO_pitch_channe_M_;

/*
 * This function updates continuous states using the ODE4 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE4_IntgData *id = (ODE4_IntgData *)rtsiGetSolverData(si);
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T *f3 = id->f[3];
  real_T temp;
  int_T i;
  int_T nXc = 26;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                (uint_T)nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  Experiment_AERO_pitch_channel_derivatives();

  /* f1 = f(t + (h/2), y + (h/2)*f0) */
  temp = 0.5 * h;
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (temp*f0[i]);
  }

  rtsiSetT(si, t + temp);
  rtsiSetdX(si, f1);
  Experiment_AERO_pitch_channel_output();
  Experiment_AERO_pitch_channel_derivatives();

  /* f2 = f(t + (h/2), y + (h/2)*f1) */
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (temp*f1[i]);
  }

  rtsiSetdX(si, f2);
  Experiment_AERO_pitch_channel_output();
  Experiment_AERO_pitch_channel_derivatives();

  /* f3 = f(t + h, y + h*f2) */
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (h*f2[i]);
  }

  rtsiSetT(si, tnew);
  rtsiSetdX(si, f3);
  Experiment_AERO_pitch_channel_output();
  Experiment_AERO_pitch_channel_derivatives();

  /* tnew = t + h
     ynew = y + (h/6)*(f0 + 2*f1 + 2*f2 + 2*f3) */
  temp = h / 6.0;
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + temp*(f0[i] + 2.0*f1[i] + 2.0*f2[i] + f3[i]);
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Model output function */
void Experiment_AERO_pitch_channel_output(void)
{
  /* local block i/o variables */
  real_T rtb_HILRead_o1;
  real_T rtb_HILRead_o2;
  real_T rtb_HILRead_o4;
  real_T rtb_HILRead_o8;
  real_T rtb_HILRead_o9;
  real_T rtb_HILRead_o13;
  real_T rtb_HILRead_o14;
  real_T rtb_HILRead_o15;
  real_T rtb_HILRead_o3;
  real_T rtb_HILRead_o10;
  real_T rtb_HILRead_o11;
  real_T rtb_Switch1;
  boolean_T rtb_HILRead_o5;
  boolean_T rtb_HILRead_o6;
  boolean_T rtb_HILRead_o7;
  real_T rtb_ud;
  real_T rtb_LPF5;
  real_T rtb_LPF5_0;
  real_T rtb_LPF5_tmp;
  if (rtmIsMajorTimeStep(Experiment_AERO_pitch_channe_M)) {
    /* set solver stop time */
    if (!(Experiment_AERO_pitch_channe_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&Experiment_AERO_pitch_channe_M->solverInfo,
                            ((Experiment_AERO_pitch_channe_M->Timing.clockTickH0
        + 1) * Experiment_AERO_pitch_channe_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&Experiment_AERO_pitch_channe_M->solverInfo,
                            ((Experiment_AERO_pitch_channe_M->Timing.clockTick0
        + 1) * Experiment_AERO_pitch_channe_M->Timing.stepSize0 +
        Experiment_AERO_pitch_channe_M->Timing.clockTickH0 *
        Experiment_AERO_pitch_channe_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(Experiment_AERO_pitch_channe_M)) {
    Experiment_AERO_pitch_channe_M->Timing.t[0] = rtsiGetT
      (&Experiment_AERO_pitch_channe_M->solverInfo);
  }

  if (rtmIsMajorTimeStep(Experiment_AERO_pitch_channe_M)) {
    /* S-Function (hil_read_block): '<S4>/HIL Read' */

    /* S-Function Block: Experiment_AERO_pitch_channel/Quanser Aero USB Interface/HIL Read (hil_read_block) */
    {
      t_error result = hil_read
        (Experiment_AERO_pitch_channe_DW.HILInitialize_Card,
         Experiment_AERO_pitch_channel_P.HILRead_analog_channels, 2U,
         Experiment_AERO_pitch_channel_P.HILRead_encoder_channels, 2U,
         Experiment_AERO_pitch_channel_P.HILRead_digital_channels, 3U,
         Experiment_AERO_pitch_channel_P.HILRead_other_channels, 8U,
         &Experiment_AERO_pitch_channe_DW.HILRead_AnalogBuffer[0],
         &Experiment_AERO_pitch_channe_DW.HILRead_EncoderBuffer[0],
         &Experiment_AERO_pitch_channe_DW.HILRead_DigitalBuffer[0],
         &Experiment_AERO_pitch_channe_DW.HILRead_OtherBuffer[0]
         );
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Experiment_AERO_pitch_channe_M, _rt_error_message);
      } else {
        rtb_HILRead_o1 = Experiment_AERO_pitch_channe_DW.HILRead_AnalogBuffer[0];
        rtb_HILRead_o2 = Experiment_AERO_pitch_channe_DW.HILRead_AnalogBuffer[1];
        rtb_HILRead_o3 = Experiment_AERO_pitch_channe_DW.HILRead_EncoderBuffer[0];
        rtb_HILRead_o4 = Experiment_AERO_pitch_channe_DW.HILRead_EncoderBuffer[1];
        rtb_HILRead_o5 = Experiment_AERO_pitch_channe_DW.HILRead_DigitalBuffer[0];
        rtb_HILRead_o6 = Experiment_AERO_pitch_channe_DW.HILRead_DigitalBuffer[1];
        rtb_HILRead_o7 = Experiment_AERO_pitch_channe_DW.HILRead_DigitalBuffer[2];
        rtb_HILRead_o8 = Experiment_AERO_pitch_channe_DW.HILRead_OtherBuffer[0];
        rtb_HILRead_o9 = Experiment_AERO_pitch_channe_DW.HILRead_OtherBuffer[1];
        rtb_HILRead_o10 = Experiment_AERO_pitch_channe_DW.HILRead_OtherBuffer[2];
        rtb_HILRead_o11 = Experiment_AERO_pitch_channe_DW.HILRead_OtherBuffer[3];
        rtb_Switch1 = Experiment_AERO_pitch_channe_DW.HILRead_OtherBuffer[4];
        rtb_HILRead_o13 = Experiment_AERO_pitch_channe_DW.HILRead_OtherBuffer[5];
        rtb_HILRead_o14 = Experiment_AERO_pitch_channe_DW.HILRead_OtherBuffer[6];
        rtb_HILRead_o15 = Experiment_AERO_pitch_channe_DW.HILRead_OtherBuffer[7];
      }
    }

    /* Gain: '<S4>/Gyro Calibration' */
    Experiment_AERO_pitch_channel_B.GyroCalibration[0] =
      Experiment_AERO_pitch_channel_P.GyroCalibration_Gain[0] * rtb_HILRead_o10;
    Experiment_AERO_pitch_channel_B.GyroCalibration[1] =
      Experiment_AERO_pitch_channel_P.GyroCalibration_Gain[1] * rtb_HILRead_o11;
    Experiment_AERO_pitch_channel_B.GyroCalibration[2] =
      Experiment_AERO_pitch_channel_P.GyroCalibration_Gain[2] * rtb_Switch1;

    /* Gain: '<S4>/Pitch: counts to deg' */
    Experiment_AERO_pitch_channel_B.Pitchcountstodeg =
      Experiment_AERO_pitch_channel_P.Pitchcountstodeg_Gain * rtb_HILRead_o3;
  }

  /* TransferFcn: '<Root>/LPF3' */
  Experiment_AERO_pitch_channel_B.LPF3 = 0.0;
  Experiment_AERO_pitch_channel_B.LPF3 += Experiment_AERO_pitch_channel_P.LPF3_C
    * Experiment_AERO_pitch_channel_X.LPF3_CSTATE;

  /* TransferFcn: '<Root>/LPF2' */
  Experiment_AERO_pitch_channel_B.LPF2 = 0.0;
  Experiment_AERO_pitch_channel_B.LPF2 += Experiment_AERO_pitch_channel_P.LPF2_C
    * Experiment_AERO_pitch_channel_X.LPF2_CSTATE;

  /* TransferFcn: '<Root>/LPF1' */
  Experiment_AERO_pitch_channel_B.LPF1 = 0.0;
  Experiment_AERO_pitch_channel_B.LPF1 += Experiment_AERO_pitch_channel_P.LPF1_C
    * Experiment_AERO_pitch_channel_X.LPF1_CSTATE;

  /* MATLAB Function: '<S10>/MATLAB Function1' incorporates:
   *  Constant: '<S10>/a1'
   *  Constant: '<S10>/a2'
   *  Constant: '<S10>/uc'
   *  Integrator: '<S10>/zd'
   */
  /* MATLAB Function 'Ref for AERO 0.2+0.2sint/MATLAB Function1': '<S17>:1' */
  /* '<S17>:1:9' */
  /* '<S17>:1:8' */
  /* '<S17>:1:7' */
  /* '<S17>:1:5' */
  /* '<S17>:1:6' */
  Experiment_AERO_pitch_channel_B.theta_d = 0.2 *
    Experiment_AERO_pitch_channel_X.zd_CSTATE[0] + 0.0 *
    Experiment_AERO_pitch_channel_X.zd_CSTATE[1];

  /* '<S17>:1:8' */
  Experiment_AERO_pitch_channel_B.omega_d = (0.0 *
    Experiment_AERO_pitch_channel_X.zd_CSTATE[0] + 0.2 *
    Experiment_AERO_pitch_channel_X.zd_CSTATE[1]) + 0.0 *
    Experiment_AERO_pitch_channel_P.uc_Value;

  /* '<S17>:1:9' */
  rtb_ud = (((-0.2 * Experiment_AERO_pitch_channel_X.zd_CSTATE[0] + 0.0 *
              Experiment_AERO_pitch_channel_X.zd_CSTATE[1]) + 0.2 *
             Experiment_AERO_pitch_channel_P.uc_Value) -
            (Experiment_AERO_pitch_channel_P.a1 * 0.2 *
             Experiment_AERO_pitch_channel_X.zd_CSTATE[0] +
             Experiment_AERO_pitch_channel_P.a1 * 0.0 *
             Experiment_AERO_pitch_channel_X.zd_CSTATE[1])) -
    ((Experiment_AERO_pitch_channel_P.a2 * 0.2 * 0.0 +
      -(Experiment_AERO_pitch_channel_P.a2 * 0.0)) *
     Experiment_AERO_pitch_channel_X.zd_CSTATE[0] +
     (Experiment_AERO_pitch_channel_P.a2 * 0.0 * 0.0 +
      Experiment_AERO_pitch_channel_P.a2 * 0.2) *
     Experiment_AERO_pitch_channel_X.zd_CSTATE[1]);

  /* ManualSwitch: '<Root>/Manual Switch11' incorporates:
   *  ManualSwitch: '<Root>/Manual Switch8'
   */
  if (Experiment_AERO_pitch_channel_P.ManualSwitch11_CurrentSetting == 1) {
    /* ManualSwitch: '<Root>/Manual Switch10' incorporates:
     *  TransferFcn: '<Root>/LPF6'
     *  TransferFcn: '<Root>/LPF7'
     */
    if (Experiment_AERO_pitch_channel_P.ManualSwitch10_CurrentSetting == 1) {
      Experiment_AERO_pitch_channel_B.ManualSwitch11 =
        Experiment_AERO_pitch_channel_P.LPF7_C *
        Experiment_AERO_pitch_channel_X.LPF7_CSTATE;
    } else {
      Experiment_AERO_pitch_channel_B.ManualSwitch11 =
        Experiment_AERO_pitch_channel_P.LPF6_C *
        Experiment_AERO_pitch_channel_X.LPF6_CSTATE;
    }

    /* End of ManualSwitch: '<Root>/Manual Switch10' */
  } else if (Experiment_AERO_pitch_channel_P.ManualSwitch8_CurrentSetting == 1)
  {
    /* ManualSwitch: '<Root>/Manual Switch8' incorporates:
     *  TransferFcn: '<Root>/LPF5'
     */
    Experiment_AERO_pitch_channel_B.ManualSwitch11 =
      Experiment_AERO_pitch_channel_P.LPF5_C *
      Experiment_AERO_pitch_channel_X.LPF5_CSTATE;
  } else {
    Experiment_AERO_pitch_channel_B.ManualSwitch11 =
      Experiment_AERO_pitch_channel_B.Pitchcountstodeg;
  }

  /* End of ManualSwitch: '<Root>/Manual Switch11' */

  /* Sum: '<S13>/Sum' incorporates:
   *  Gain: '<Root>/ feedback?4'
   *  Gain: '<Root>/ feedback?5'
   *  Gain: '<Root>/ feedback?6'
   *  Gain: '<S13>/kd'
   *  Gain: '<S13>/kp'
   *  Sum: '<Root>/Sum17'
   *  Sum: '<Root>/Sum18'
   */
  Experiment_AERO_pitch_channel_B.u0 = ((Experiment_AERO_pitch_channel_B.theta_d
    - Experiment_AERO_pitch_channel_B.ManualSwitch11) *
    Experiment_AERO_pitch_channel_P.feedback4_Gain *
    Experiment_AERO_pitch_channel_P.kp +
    Experiment_AERO_pitch_channel_P.feedback6_Gain * rtb_ud) +
    (Experiment_AERO_pitch_channel_B.omega_d -
     Experiment_AERO_pitch_channel_B.GyroCalibration[1]) *
    Experiment_AERO_pitch_channel_P.feedback5_Gain *
    Experiment_AERO_pitch_channel_P.kd;

  /* Integrator: '<S12>/theta_fb(0)' */
  if (Experiment_AERO_pitch_channe_DW.theta_fb0_IWORK != 0) {
    Experiment_AERO_pitch_channel_X.theta_fb0_CSTATE =
      Experiment_AERO_pitch_channel_B.ManualSwitch11;
  }

  /* Gain: '<S12>/Gain1' incorporates:
   *  Gain: '<S11>/Gain1'
   */
  rtb_LPF5 = Experiment_AERO_pitch_channel_P.a2 *
    Experiment_AERO_pitch_channel_B.ManualSwitch11;

  /* Gain: '<S12>/Gain' incorporates:
   *  Gain: '<S12>/Gain1'
   *  Gain: '<S12>/Gain2'
   *  Gain: '<S12>/Gain3'
   *  Integrator: '<S12>/Integrator1'
   *  Integrator: '<S12>/Integrator2'
   *  Integrator: '<S12>/theta_fb(0)'
   *  Sum: '<S12>/Sum1'
   *  Sum: '<S12>/Sum2'
   *  Sum: '<S12>/Sum5'
   *  Sum: '<S12>/Sum6'
   */
  Experiment_AERO_pitch_channel_B.Gain =
    ((Experiment_AERO_pitch_channel_B.GyroCalibration[1] - (rtb_LPF5 +
       Experiment_AERO_pitch_channel_P.a1 *
       Experiment_AERO_pitch_channel_X.Integrator1_CSTATE)) +
     (Experiment_AERO_pitch_channel_P.a2 *
      Experiment_AERO_pitch_channel_X.theta_fb0_CSTATE -
      Experiment_AERO_pitch_channel_X.Integrator2_CSTATE)) * (1.0 /
    Experiment_AERO_pitch_channel_P.T);

  /* Integrator: '<S11>/theta_fb(0)' */
  if (Experiment_AERO_pitch_channe_DW.theta_fb0_IWORK_c != 0) {
    Experiment_AERO_pitch_channel_X.theta_fb0_CSTATE_p =
      Experiment_AERO_pitch_channel_B.ManualSwitch11;
  }

  Experiment_AERO_pitch_channel_B.theta_fb0 =
    Experiment_AERO_pitch_channel_X.theta_fb0_CSTATE_p;

  /* End of Integrator: '<S11>/theta_fb(0)' */

  /* Gain: '<S11>/Gain' incorporates:
   *  Gain: '<S11>/Gain2'
   *  Gain: '<S11>/Gain3'
   *  Integrator: '<S11>/Integrator1'
   *  Integrator: '<S11>/Integrator2'
   *  Sum: '<S11>/Sum1'
   *  Sum: '<S11>/Sum2'
   *  Sum: '<S11>/Sum3'
   *  Sum: '<S11>/Sum4'
   *  Sum: '<S11>/Sum5'
   *  Sum: '<S11>/Sum6'
   *  TransferFcn: '<S11>/TF1'
   *  TransferFcn: '<S11>/TF4'
   *  TransferFcn: '<S11>/TF5'
   */
  Experiment_AERO_pitch_channel_B.Gain_m =
    (((Experiment_AERO_pitch_channel_B.GyroCalibration[1] -
       (Experiment_AERO_pitch_channel_P.TF1_C[0] *
        Experiment_AERO_pitch_channel_X.TF1_CSTATE[0] +
        Experiment_AERO_pitch_channel_P.TF1_C[1] *
        Experiment_AERO_pitch_channel_X.TF1_CSTATE[1])) - ((rtb_LPF5 +
        Experiment_AERO_pitch_channel_P.a1 *
        Experiment_AERO_pitch_channel_X.Integrator1_CSTATE_d) -
       (Experiment_AERO_pitch_channel_P.TF4_C *
        Experiment_AERO_pitch_channel_X.TF4_CSTATE +
        Experiment_AERO_pitch_channel_P.TF4_D *
        Experiment_AERO_pitch_channel_B.ManualSwitch11))) +
     ((Experiment_AERO_pitch_channel_P.a2 *
       Experiment_AERO_pitch_channel_B.theta_fb0 -
       (Experiment_AERO_pitch_channel_P.TF5_C *
        Experiment_AERO_pitch_channel_X.TF5_CSTATE +
        Experiment_AERO_pitch_channel_P.TF5_D *
        Experiment_AERO_pitch_channel_B.theta_fb0)) -
      Experiment_AERO_pitch_channel_X.Integrator2_CSTATE_e)) * (1.0 /
    Experiment_AERO_pitch_channel_P.Tf);

  /* ManualSwitch: '<Root>/Manual Switch9' incorporates:
   *  Constant: '<Root>/2'
   *  ManualSwitch: '<Root>/Manual Switch3'
   */
  if (Experiment_AERO_pitch_channel_P.ManualSwitch9_CurrentSetting == 1) {
    rtb_LPF5 = Experiment_AERO_pitch_channel_P.u_Value;
  } else if (Experiment_AERO_pitch_channel_P.ManualSwitch3_CurrentSetting == 1)
  {
    /* ManualSwitch: '<Root>/Manual Switch3' */
    rtb_LPF5 = Experiment_AERO_pitch_channel_B.Gain;
  } else {
    rtb_LPF5 = Experiment_AERO_pitch_channel_B.Gain_m;
  }

  /* End of ManualSwitch: '<Root>/Manual Switch9' */

  /* Sum: '<Root>/Sum3' */
  Experiment_AERO_pitch_channel_B.u0d_hat = Experiment_AERO_pitch_channel_B.u0 -
    rtb_LPF5;

  /* Integrator: '<S2>/theta_fb(0)' */
  if (Experiment_AERO_pitch_channe_DW.theta_fb0_IWORK_m != 0) {
    Experiment_AERO_pitch_channel_X.theta_fb0_CSTATE_c =
      Experiment_AERO_pitch_channel_B.ManualSwitch11;
  }

  Experiment_AERO_pitch_channel_B.theta_fb0_f =
    Experiment_AERO_pitch_channel_X.theta_fb0_CSTATE_c;

  /* End of Integrator: '<S2>/theta_fb(0)' */

  /* Sum: '<S2>/Sum2' incorporates:
   *  Sum: '<S2>/Sum'
   *  TransferFcn: '<S2>/TF1'
   *  TransferFcn: '<S2>/TF2'
   *  TransferFcn: '<S2>/TF3'
   */
  Experiment_AERO_pitch_channel_B.Sum2 = ((Experiment_AERO_pitch_channel_P.TF3_C
    * Experiment_AERO_pitch_channel_X.TF3_CSTATE +
    Experiment_AERO_pitch_channel_P.TF3_D *
    Experiment_AERO_pitch_channel_B.theta_fb0_f) +
    Experiment_AERO_pitch_channel_P.TF1_C_p *
    Experiment_AERO_pitch_channel_X.TF1_CSTATE_a) -
    (Experiment_AERO_pitch_channel_P.TF2_C *
     Experiment_AERO_pitch_channel_X.TF2_CSTATE +
     Experiment_AERO_pitch_channel_P.TF2_D *
     Experiment_AERO_pitch_channel_B.ManualSwitch11);

  /* ManualSwitch: '<Root>/Manual Switch2' incorporates:
   *  Constant: '<Root>/0'
   *  Gain: '<Root>/k'
   */
  if (Experiment_AERO_pitch_channel_P.ManualSwitch2_CurrentSetting_b == 1) {
    rtb_LPF5 = Experiment_AERO_pitch_channel_P.u_Value_f;
  } else {
    rtb_LPF5 = Experiment_AERO_pitch_channel_P.kd *
      Experiment_AERO_pitch_channel_B.Sum2;
  }

  /* End of ManualSwitch: '<Root>/Manual Switch2' */

  /* Gain: '<Root>/ 5' incorporates:
   *  Sum: '<Root>/Sum10'
   */
  Experiment_AERO_pitch_channel_B.u = (Experiment_AERO_pitch_channel_B.u0d_hat +
    rtb_LPF5) * Experiment_AERO_pitch_channel_P.Jp;

  /* ManualSwitch: '<Root>/Manual Switch13' incorporates:
   *  ManualSwitch: '<Root>/Manual Switch14'
   */
  if (Experiment_AERO_pitch_channel_P.ManualSwitch13_CurrentSetting == 1) {
    /* ManualSwitch: '<Root>/Manual Switch12' */
    if (Experiment_AERO_pitch_channel_P.ManualSwitch12_CurrentSetting == 1) {
      Experiment_AERO_pitch_channel_B.ManualSwitch13 =
        Experiment_AERO_pitch_channel_B.LPF3;
    } else {
      Experiment_AERO_pitch_channel_B.ManualSwitch13 =
        Experiment_AERO_pitch_channel_B.LPF2;
    }

    /* End of ManualSwitch: '<Root>/Manual Switch12' */
  } else if (Experiment_AERO_pitch_channel_P.ManualSwitch14_CurrentSetting == 1)
  {
    /* ManualSwitch: '<Root>/Manual Switch14' */
    Experiment_AERO_pitch_channel_B.ManualSwitch13 =
      Experiment_AERO_pitch_channel_B.LPF1;
  } else {
    Experiment_AERO_pitch_channel_B.ManualSwitch13 =
      Experiment_AERO_pitch_channel_B.u;
  }

  /* End of ManualSwitch: '<Root>/Manual Switch13' */

  /* Saturate: '<S1>/Pitch cmd limit: +//- 24V2' */
  if (Experiment_AERO_pitch_channel_B.ManualSwitch13 >
      Experiment_AERO_pitch_channel_P.Pitchcmdlimit24V2_UpperSat) {
    rtb_LPF5 = Experiment_AERO_pitch_channel_P.Pitchcmdlimit24V2_UpperSat;
  } else if (Experiment_AERO_pitch_channel_B.ManualSwitch13 <
             Experiment_AERO_pitch_channel_P.Pitchcmdlimit24V2_LowerSat) {
    rtb_LPF5 = Experiment_AERO_pitch_channel_P.Pitchcmdlimit24V2_LowerSat;
  } else {
    rtb_LPF5 = Experiment_AERO_pitch_channel_B.ManualSwitch13;
  }

  /* End of Saturate: '<S1>/Pitch cmd limit: +//- 24V2' */

  /* Switch: '<S1>/Switch' incorporates:
   *  Constant: '<S1>/Pitch Motor Enable'
   *  Constant: '<S1>/u = 0V(if not enabled)'
   */
  if (Experiment_AERO_pitch_channel_P.PitchMotorEnable >
      Experiment_AERO_pitch_channel_P.Switch_Threshold) {
    /* ManualSwitch: '<S1>/Manual Switch3' incorporates:
     *  Constant: '<S1>/Kpp'
     *  Product: '<S1>/Divide1'
     */
    if (Experiment_AERO_pitch_channel_P.ManualSwitch3_CurrentSetting_c == 1) {
      /* ManualSwitch: '<S1>/Manual Switch1' incorporates:
       *  Constant: '<S1>/p1'
       *  Constant: '<S1>/p2'
       *  Constant: '<S1>/p3'
       *  Constant: '<S1>/p4'
       *  Constant: '<S1>/p5'
       *  ManualSwitch: '<S1>/Manual Switch2'
       *  Product: '<S1>/Product1'
       *  Product: '<S1>/Product2'
       *  Product: '<S1>/Product3'
       *  Product: '<S1>/Product4'
       *  Sqrt: '<S1>/Sqrt'
       *  Sum: '<S1>/Sum'
       *
       * About '<S1>/Sqrt':
       *  Operator: signedSqrt
       */
      if (Experiment_AERO_pitch_channel_P.ManualSwitch1_CurrentSetting == 1) {
        rtb_LPF5 = (((Experiment_AERO_pitch_channel_P.p1_Value * rtb_LPF5 *
                      rtb_LPF5 * rtb_LPF5 * rtb_LPF5 + rtb_LPF5 * rtb_LPF5 *
                      rtb_LPF5 * Experiment_AERO_pitch_channel_P.p2_Value) +
                     rtb_LPF5 * rtb_LPF5 *
                     Experiment_AERO_pitch_channel_P.p3_Value) + rtb_LPF5 *
                    Experiment_AERO_pitch_channel_P.p4_Value) +
          Experiment_AERO_pitch_channel_P.p5_Value;
      } else if (Experiment_AERO_pitch_channel_P.ManualSwitch2_CurrentSetting ==
                 1) {
        /* Sqrt: '<S1>/Sqrt'
         *
         * About '<S1>/Sqrt':
         *  Operator: signedSqrt
         */
        if (rtb_LPF5 < 0.0) {
          rtb_LPF5_0 = -sqrt(fabs(rtb_LPF5));
        } else {
          rtb_LPF5_0 = sqrt(rtb_LPF5);
        }

        /* Product: '<S1>/Product6' incorporates:
         *  Constant: '<S1>/a'
         *  Constant: '<S1>/b'
         *  Constant: '<S1>/c'
         *  Constant: '<S1>/d'
         *  Product: '<S1>/Product5'
         *  Product: '<S1>/Product7'
         *  Product: '<S1>/Product8'
         *  Sum: '<S1>/Sum1'
         */
        rtb_LPF5 = (((rtb_LPF5 * rtb_LPF5 * rtb_LPF5 *
                      Experiment_AERO_pitch_channel_P.a_Value + rtb_LPF5 *
                      rtb_LPF5 * Experiment_AERO_pitch_channel_P.b_Value) +
                     rtb_LPF5 * Experiment_AERO_pitch_channel_P.c_Value) +
                    Experiment_AERO_pitch_channel_P.d_Value) * rtb_LPF5_0;

        /* Saturate: '<S1>/Pitch cmd limit: +//- 24V1' incorporates:
         *  ManualSwitch: '<S1>/Manual Switch2'
         */
        if (rtb_LPF5 >
            Experiment_AERO_pitch_channel_P.Pitchcmdlimit24V1_UpperSat) {
          rtb_LPF5 = Experiment_AERO_pitch_channel_P.Pitchcmdlimit24V1_UpperSat;
        } else {
          if (rtb_LPF5 <
              Experiment_AERO_pitch_channel_P.Pitchcmdlimit24V1_LowerSat) {
            rtb_LPF5 =
              Experiment_AERO_pitch_channel_P.Pitchcmdlimit24V1_LowerSat;
          }
        }

        /* End of Saturate: '<S1>/Pitch cmd limit: +//- 24V1' */
      } else {
        if (rtb_LPF5 < 0.0) {
          /* Sqrt: '<S1>/Sqrt'
           *
           * About '<S1>/Sqrt':
           *  Operator: signedSqrt
           */
          rtb_LPF5_0 = -sqrt(fabs(rtb_LPF5));
        } else {
          /* Sqrt: '<S1>/Sqrt'
           *
           * About '<S1>/Sqrt':
           *  Operator: signedSqrt
           */
          rtb_LPF5_0 = sqrt(rtb_LPF5);
        }

        /* Product: '<S1>/Product7' incorporates:
         *  Product: '<S1>/Product8'
         */
        rtb_LPF5_tmp = rtb_LPF5 * rtb_LPF5;

        /* ManualSwitch: '<S1>/Manual Switch2' incorporates:
         *  Constant: '<S1>/a'
         *  Constant: '<S1>/b'
         *  Constant: '<S1>/c'
         *  Constant: '<S1>/d'
         *  Product: '<S1>/Product5'
         *  Product: '<S1>/Product6'
         *  Product: '<S1>/Product7'
         *  Product: '<S1>/Product8'
         *  Sum: '<S1>/Sum1'
         */
        rtb_LPF5 = (((rtb_LPF5_tmp * rtb_LPF5 *
                      Experiment_AERO_pitch_channel_P.a_Value + rtb_LPF5_tmp *
                      Experiment_AERO_pitch_channel_P.b_Value) + rtb_LPF5 *
                     Experiment_AERO_pitch_channel_P.c_Value) +
                    Experiment_AERO_pitch_channel_P.d_Value) * rtb_LPF5_0;
      }

      /* End of ManualSwitch: '<S1>/Manual Switch1' */
    } else {
      rtb_LPF5 /= Experiment_AERO_pitch_channel_P.Kpp;
    }

    /* End of ManualSwitch: '<S1>/Manual Switch3' */

    /* Saturate: '<S1>/Pitch cmd limit: +//- 24V' */
    if (rtb_LPF5 > Experiment_AERO_pitch_channel_P.Pitchcmdlimit24V_UpperSat) {
      Experiment_AERO_pitch_channel_B.Switch =
        Experiment_AERO_pitch_channel_P.Pitchcmdlimit24V_UpperSat;
    } else if (rtb_LPF5 <
               Experiment_AERO_pitch_channel_P.Pitchcmdlimit24V_LowerSat) {
      Experiment_AERO_pitch_channel_B.Switch =
        Experiment_AERO_pitch_channel_P.Pitchcmdlimit24V_LowerSat;
    } else {
      Experiment_AERO_pitch_channel_B.Switch = rtb_LPF5;
    }

    /* End of Saturate: '<S1>/Pitch cmd limit: +//- 24V' */
  } else {
    Experiment_AERO_pitch_channel_B.Switch =
      Experiment_AERO_pitch_channel_P.u0Vifnotenabled_Value;
  }

  /* End of Switch: '<S1>/Switch' */

  /* Gain: '<Root>/ ' */
  Experiment_AERO_pitch_channel_B.u_g = Experiment_AERO_pitch_channel_P._Gain *
    Experiment_AERO_pitch_channel_B.Switch;
  if (rtmIsMajorTimeStep(Experiment_AERO_pitch_channe_M)) {
    /* Switch: '<S1>/Switch1' incorporates:
     *  Constant: '<S1>/Yaw Enable Motor'
     *  Constant: '<S1>/u = 0V(if not enabled)'
     */
    if (Experiment_AERO_pitch_channel_P.YawMotorEnable >
        Experiment_AERO_pitch_channel_P.Switch1_Threshold) {
      /* Saturate: '<S1>/Yaw cmd limit: +//- 24V' incorporates:
       *  Constant: '<S1>/no input'
       */
      if (Experiment_AERO_pitch_channel_P.noinput_Value >
          Experiment_AERO_pitch_channel_P.Yawcmdlimit24V_UpperSat) {
        rtb_Switch1 = Experiment_AERO_pitch_channel_P.Yawcmdlimit24V_UpperSat;
      } else if (Experiment_AERO_pitch_channel_P.noinput_Value <
                 Experiment_AERO_pitch_channel_P.Yawcmdlimit24V_LowerSat) {
        rtb_Switch1 = Experiment_AERO_pitch_channel_P.Yawcmdlimit24V_LowerSat;
      } else {
        rtb_Switch1 = Experiment_AERO_pitch_channel_P.noinput_Value;
      }

      /* End of Saturate: '<S1>/Yaw cmd limit: +//- 24V' */
    } else {
      rtb_Switch1 = Experiment_AERO_pitch_channel_P.u0Vifnotenabled_Value;
    }

    /* End of Switch: '<S1>/Switch1' */

    /* S-Function (hil_write_block): '<S4>/HIL Write' incorporates:
     *  Constant: '<Root>/Pitch Motor Enable'
     *  Constant: '<Root>/Yaw Enable Motor'
     *  Constant: '<S14>/Constant'
     */

    /* S-Function Block: Experiment_AERO_pitch_channel/Quanser Aero USB Interface/HIL Write (hil_write_block) */
    {
      t_error result;
      Experiment_AERO_pitch_channe_DW.HILWrite_AnalogBuffer[0] =
        Experiment_AERO_pitch_channel_B.u_g;
      Experiment_AERO_pitch_channe_DW.HILWrite_AnalogBuffer[1] = rtb_Switch1;
      Experiment_AERO_pitch_channe_DW.HILWrite_DigitalBuffer[0] =
        (Experiment_AERO_pitch_channel_P.PitchMotorEnable_Value != 0);
      Experiment_AERO_pitch_channe_DW.HILWrite_DigitalBuffer[1] =
        (Experiment_AERO_pitch_channel_P.YawEnableMotor_Value != 0);
      Experiment_AERO_pitch_channe_DW.HILWrite_OtherBuffer[0] =
        Experiment_AERO_pitch_channel_P.BaseLEDColour_color[0];
      Experiment_AERO_pitch_channe_DW.HILWrite_OtherBuffer[1] =
        Experiment_AERO_pitch_channel_P.BaseLEDColour_color[1];
      Experiment_AERO_pitch_channe_DW.HILWrite_OtherBuffer[2] =
        Experiment_AERO_pitch_channel_P.BaseLEDColour_color[2];
      result = hil_write(Experiment_AERO_pitch_channe_DW.HILInitialize_Card,
                         Experiment_AERO_pitch_channel_P.HILWrite_analog_channels,
                         2U,
                         NULL, 0U,
                         Experiment_AERO_pitch_channel_P.HILWrite_digital_channels,
                         2U,
                         Experiment_AERO_pitch_channel_P.HILWrite_other_channels,
                         3U,
                         &Experiment_AERO_pitch_channe_DW.HILWrite_AnalogBuffer
                         [0],
                         NULL,
                         &Experiment_AERO_pitch_channe_DW.HILWrite_DigitalBuffer[
                         0],
                         &Experiment_AERO_pitch_channe_DW.HILWrite_OtherBuffer[0]
                         );
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Experiment_AERO_pitch_channe_M, _rt_error_message);
      }
    }

    /* Constant: '<S3>/Pitch axis Enable' */
    Experiment_AERO_pitch_channel_B.PitchaxisEnable =
      Experiment_AERO_pitch_channel_P.PitchAxisEnable;

    /* Constant: '<S3>/Yaw axis Enable' */
    Experiment_AERO_pitch_channel_B.YawaxisEnable =
      Experiment_AERO_pitch_channel_P.YawAxisEnable;
  }

  /* Gain: '<S10>/Gain' */
  Experiment_AERO_pitch_channel_B.Gain_e = Experiment_AERO_pitch_channel_P.Jp *
    rtb_ud;
  if (rtmIsMajorTimeStep(Experiment_AERO_pitch_channe_M)) {
  }

  /* Sum: '<Root>/Sum4' */
  Experiment_AERO_pitch_channel_B.Sum4 = Experiment_AERO_pitch_channel_B.theta_d
    - Experiment_AERO_pitch_channel_B.Pitchcountstodeg;
  if (rtmIsMajorTimeStep(Experiment_AERO_pitch_channe_M)) {
  }

  /* Sum: '<Root>/Sum2' */
  Experiment_AERO_pitch_channel_B.Sum2_c =
    Experiment_AERO_pitch_channel_B.GyroCalibration[1] -
    Experiment_AERO_pitch_channel_B.Sum2;
  if (rtmIsMajorTimeStep(Experiment_AERO_pitch_channe_M)) {
  }

  /* Gain: '<S9>/Gain' */
  Experiment_AERO_pitch_channel_B.Gain_l =
    Experiment_AERO_pitch_channel_P.Gain_Gain *
    Experiment_AERO_pitch_channel_B.Sum2;
  if (rtmIsMajorTimeStep(Experiment_AERO_pitch_channe_M)) {
  }

  /* Gain: '<S7>/Gain' */
  Experiment_AERO_pitch_channel_B.Gain_a[0] =
    Experiment_AERO_pitch_channel_P.Gain_Gain_l *
    Experiment_AERO_pitch_channel_B.theta_d;
  Experiment_AERO_pitch_channel_B.Gain_a[1] =
    Experiment_AERO_pitch_channel_P.Gain_Gain_l * 0.0;
  Experiment_AERO_pitch_channel_B.Gain_a[2] =
    Experiment_AERO_pitch_channel_P.Gain_Gain_l *
    Experiment_AERO_pitch_channel_B.Pitchcountstodeg;
  if (rtmIsMajorTimeStep(Experiment_AERO_pitch_channe_M)) {
  }

  /* Gain: '<S5>/Gain' */
  Experiment_AERO_pitch_channel_B.Gain_j[0] =
    Experiment_AERO_pitch_channel_P.Gain_Gain_k *
    Experiment_AERO_pitch_channel_B.omega_d;
  Experiment_AERO_pitch_channel_B.Gain_j[1] =
    Experiment_AERO_pitch_channel_P.Gain_Gain_k * 0.0;
  Experiment_AERO_pitch_channel_B.Gain_j[2] =
    Experiment_AERO_pitch_channel_P.Gain_Gain_k *
    Experiment_AERO_pitch_channel_B.GyroCalibration[1];
  if (rtmIsMajorTimeStep(Experiment_AERO_pitch_channe_M)) {
  }

  /* Gain: '<S6>/Gain' */
  Experiment_AERO_pitch_channel_B.Gain_h =
    Experiment_AERO_pitch_channel_P.Gain_Gain_h *
    Experiment_AERO_pitch_channel_B.Sum4;
  if (rtmIsMajorTimeStep(Experiment_AERO_pitch_channe_M)) {
  }

  /* Integrator: '<S3>/theta_dot' */
  Experiment_AERO_pitch_channel_B.theta_dot =
    Experiment_AERO_pitch_channel_X.theta_dot_CSTATE;

  /* Gain: '<S3>/model uncertainty1' */
  rtb_ud = Experiment_AERO_pitch_channel_P.modeluncertainty1_Gain *
    Experiment_AERO_pitch_channel_B.theta_dot;

  /* Signum: '<S3>/Sign' */
  if (rtb_ud < 0.0) {
    rtb_ud = -1.0;
  } else if (rtb_ud > 0.0) {
    rtb_ud = 1.0;
  } else if (rtb_ud == 0.0) {
    rtb_ud = 0.0;
  } else {
    rtb_ud = (rtNaN);
  }

  /* End of Signum: '<S3>/Sign' */

  /* Gain: '<S3>/Gain2' incorporates:
   *  Gain: '<S3>/Gain'
   *  Gain: '<S3>/Gain1'
   *  Gain: '<S3>/Gain5'
   *  Gain: '<S3>/model uncertainty'
   *  Integrator: '<S3>/theta'
   *  Sum: '<S3>/Sum1'
   *  Sum: '<S3>/Sum2'
   */
  Experiment_AERO_pitch_channel_B.Gain2 =
    ((Experiment_AERO_pitch_channel_P.modeluncertainty_Gain *
      Experiment_AERO_pitch_channel_X.theta_CSTATE *
      -Experiment_AERO_pitch_channel_P.Ksp +
      Experiment_AERO_pitch_channel_B.ManualSwitch13) +
     (-Experiment_AERO_pitch_channel_P.Dp *
      Experiment_AERO_pitch_channel_B.theta_dot +
      -Experiment_AERO_pitch_channel_P.Dp_static * rtb_ud)) * (1.0 /
    Experiment_AERO_pitch_channel_P.Jp);

  /* Integrator: '<S3>/psi_dot' */
  Experiment_AERO_pitch_channel_B.psi_dot =
    Experiment_AERO_pitch_channel_X.psi_dot_CSTATE;

  /* Gain: '<S3>/Gain7' incorporates:
   *  Constant: '<Root>/tauy (uncontrolled)'
   *  Gain: '<S3>/Gain6'
   *  Sum: '<S3>/Sum4'
   */
  Experiment_AERO_pitch_channel_B.Gain7 = (-Experiment_AERO_pitch_channel_P.Dy *
    Experiment_AERO_pitch_channel_B.psi_dot +
    Experiment_AERO_pitch_channel_P.tauyuncontrolled_Value) * (1.0 /
    Experiment_AERO_pitch_channel_P.Jy);

  /* MATLAB Function: '<S10>/MATLAB Function' incorporates:
   *  Constant: '<S10>/uc'
   *  Integrator: '<S10>/zd'
   */
  /* MATLAB Function 'Ref for AERO 0.2+0.2sint/MATLAB Function': '<S16>:1' */
  /* '<S16>:1:4' */
  Experiment_AERO_pitch_channel_B.zd_dot[0] = (0.0 *
    Experiment_AERO_pitch_channel_X.zd_CSTATE[0] +
    Experiment_AERO_pitch_channel_X.zd_CSTATE[1]) + 0.0 *
    Experiment_AERO_pitch_channel_P.uc_Value;
  Experiment_AERO_pitch_channel_B.zd_dot[1] = (0.0 *
    Experiment_AERO_pitch_channel_X.zd_CSTATE[1] +
    -Experiment_AERO_pitch_channel_X.zd_CSTATE[0]) +
    Experiment_AERO_pitch_channel_P.uc_Value;

  /* Sum: '<S11>/Sum' incorporates:
   *  Constant: '<S11>/W(s)=0'
   */
  Experiment_AERO_pitch_channel_B.Sum = Experiment_AERO_pitch_channel_B.u0 +
    Experiment_AERO_pitch_channel_P.Ws0_Value;

  /* Sum: '<S12>/Sum' incorporates:
   *  Constant: '<S12>/W(s)=0'
   */
  Experiment_AERO_pitch_channel_B.Sum_p = Experiment_AERO_pitch_channel_B.u0 +
    Experiment_AERO_pitch_channel_P.Ws0_Value_d;
}

/* Model update function */
void Experiment_AERO_pitch_channel_update(void)
{
  /* Update for Integrator: '<S12>/theta_fb(0)' */
  Experiment_AERO_pitch_channe_DW.theta_fb0_IWORK = 0;

  /* Update for Integrator: '<S11>/theta_fb(0)' */
  Experiment_AERO_pitch_channe_DW.theta_fb0_IWORK_c = 0;

  /* Update for Integrator: '<S2>/theta_fb(0)' */
  Experiment_AERO_pitch_channe_DW.theta_fb0_IWORK_m = 0;
  if (rtmIsMajorTimeStep(Experiment_AERO_pitch_channe_M)) {
    rt_ertODEUpdateContinuousStates(&Experiment_AERO_pitch_channe_M->solverInfo);
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
  if (!(++Experiment_AERO_pitch_channe_M->Timing.clockTick0)) {
    ++Experiment_AERO_pitch_channe_M->Timing.clockTickH0;
  }

  Experiment_AERO_pitch_channe_M->Timing.t[0] = rtsiGetSolverStopTime
    (&Experiment_AERO_pitch_channe_M->solverInfo);

  {
    /* Update absolute timer for sample time: [0.001s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++Experiment_AERO_pitch_channe_M->Timing.clockTick1)) {
      ++Experiment_AERO_pitch_channe_M->Timing.clockTickH1;
    }

    Experiment_AERO_pitch_channe_M->Timing.t[1] =
      Experiment_AERO_pitch_channe_M->Timing.clockTick1 *
      Experiment_AERO_pitch_channe_M->Timing.stepSize1 +
      Experiment_AERO_pitch_channe_M->Timing.clockTickH1 *
      Experiment_AERO_pitch_channe_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Derivatives for root system: '<Root>' */
void Experiment_AERO_pitch_channel_derivatives(void)
{
  XDot_Experiment_AERO_pitch_ch_T *_rtXdot;
  _rtXdot = ((XDot_Experiment_AERO_pitch_ch_T *)
             Experiment_AERO_pitch_channe_M->derivs);

  /* Derivatives for TransferFcn: '<Root>/LPF3' */
  _rtXdot->LPF3_CSTATE = 0.0;
  _rtXdot->LPF3_CSTATE += Experiment_AERO_pitch_channel_P.LPF3_A *
    Experiment_AERO_pitch_channel_X.LPF3_CSTATE;
  _rtXdot->LPF3_CSTATE += Experiment_AERO_pitch_channel_B.u;

  /* Derivatives for TransferFcn: '<Root>/LPF2' */
  _rtXdot->LPF2_CSTATE = 0.0;
  _rtXdot->LPF2_CSTATE += Experiment_AERO_pitch_channel_P.LPF2_A *
    Experiment_AERO_pitch_channel_X.LPF2_CSTATE;
  _rtXdot->LPF2_CSTATE += Experiment_AERO_pitch_channel_B.u;

  /* Derivatives for TransferFcn: '<Root>/LPF1' */
  _rtXdot->LPF1_CSTATE = 0.0;
  _rtXdot->LPF1_CSTATE += Experiment_AERO_pitch_channel_P.LPF1_A *
    Experiment_AERO_pitch_channel_X.LPF1_CSTATE;
  _rtXdot->LPF1_CSTATE += Experiment_AERO_pitch_channel_B.u;

  /* Derivatives for TransferFcn: '<Root>/LPF7' */
  _rtXdot->LPF7_CSTATE = 0.0;
  _rtXdot->LPF7_CSTATE += Experiment_AERO_pitch_channel_P.LPF7_A *
    Experiment_AERO_pitch_channel_X.LPF7_CSTATE;
  _rtXdot->LPF7_CSTATE += Experiment_AERO_pitch_channel_B.Pitchcountstodeg;

  /* Derivatives for TransferFcn: '<Root>/LPF6' */
  _rtXdot->LPF6_CSTATE = 0.0;
  _rtXdot->LPF6_CSTATE += Experiment_AERO_pitch_channel_P.LPF6_A *
    Experiment_AERO_pitch_channel_X.LPF6_CSTATE;
  _rtXdot->LPF6_CSTATE += Experiment_AERO_pitch_channel_B.Pitchcountstodeg;

  /* Derivatives for TransferFcn: '<Root>/LPF5' */
  _rtXdot->LPF5_CSTATE = 0.0;
  _rtXdot->LPF5_CSTATE += Experiment_AERO_pitch_channel_P.LPF5_A *
    Experiment_AERO_pitch_channel_X.LPF5_CSTATE;
  _rtXdot->LPF5_CSTATE += Experiment_AERO_pitch_channel_B.Pitchcountstodeg;

  /* Derivatives for Integrator: '<S12>/Integrator1' */
  _rtXdot->Integrator1_CSTATE = Experiment_AERO_pitch_channel_B.ManualSwitch11;

  /* Derivatives for Integrator: '<S12>/theta_fb(0)' incorporates:
   *  Constant: '<S12>/Constant'
   */
  _rtXdot->theta_fb0_CSTATE = Experiment_AERO_pitch_channel_P.Constant_Value_g3;

  /* Derivatives for Integrator: '<S12>/Integrator2' */
  _rtXdot->Integrator2_CSTATE = Experiment_AERO_pitch_channel_B.Sum_p;

  /* Derivatives for Integrator: '<S10>/zd' */
  _rtXdot->zd_CSTATE[0] = Experiment_AERO_pitch_channel_B.zd_dot[0];

  /* Derivatives for TransferFcn: '<S11>/TF1' */
  _rtXdot->TF1_CSTATE[0] = 0.0;
  _rtXdot->TF1_CSTATE[0] += Experiment_AERO_pitch_channel_P.TF1_A[0] *
    Experiment_AERO_pitch_channel_X.TF1_CSTATE[0];

  /* Derivatives for Integrator: '<S10>/zd' */
  _rtXdot->zd_CSTATE[1] = Experiment_AERO_pitch_channel_B.zd_dot[1];

  /* Derivatives for TransferFcn: '<S11>/TF1' */
  _rtXdot->TF1_CSTATE[1] = 0.0;
  _rtXdot->TF1_CSTATE[0] += Experiment_AERO_pitch_channel_P.TF1_A[1] *
    Experiment_AERO_pitch_channel_X.TF1_CSTATE[1];
  _rtXdot->TF1_CSTATE[1] += Experiment_AERO_pitch_channel_X.TF1_CSTATE[0];
  _rtXdot->TF1_CSTATE[0] += Experiment_AERO_pitch_channel_B.GyroCalibration[1];

  /* Derivatives for Integrator: '<S11>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_d = Experiment_AERO_pitch_channel_B.ManualSwitch11;

  /* Derivatives for TransferFcn: '<S11>/TF4' */
  _rtXdot->TF4_CSTATE = 0.0;
  _rtXdot->TF4_CSTATE += Experiment_AERO_pitch_channel_P.TF4_A *
    Experiment_AERO_pitch_channel_X.TF4_CSTATE;
  _rtXdot->TF4_CSTATE += Experiment_AERO_pitch_channel_B.ManualSwitch11;

  /* Derivatives for Integrator: '<S11>/theta_fb(0)' incorporates:
   *  Constant: '<S11>/Constant'
   */
  _rtXdot->theta_fb0_CSTATE_p = Experiment_AERO_pitch_channel_P.Constant_Value_g;

  /* Derivatives for TransferFcn: '<S11>/TF5' */
  _rtXdot->TF5_CSTATE = 0.0;
  _rtXdot->TF5_CSTATE += Experiment_AERO_pitch_channel_P.TF5_A *
    Experiment_AERO_pitch_channel_X.TF5_CSTATE;
  _rtXdot->TF5_CSTATE += Experiment_AERO_pitch_channel_B.theta_fb0;

  /* Derivatives for Integrator: '<S11>/Integrator2' */
  _rtXdot->Integrator2_CSTATE_e = Experiment_AERO_pitch_channel_B.Sum;

  /* Derivatives for TransferFcn: '<S2>/TF1' */
  _rtXdot->TF1_CSTATE_a = 0.0;
  _rtXdot->TF1_CSTATE_a += Experiment_AERO_pitch_channel_P.TF1_A_b *
    Experiment_AERO_pitch_channel_X.TF1_CSTATE_a;
  _rtXdot->TF1_CSTATE_a += Experiment_AERO_pitch_channel_B.GyroCalibration[1];

  /* Derivatives for Integrator: '<S2>/theta_fb(0)' incorporates:
   *  Constant: '<S2>/Constant'
   */
  _rtXdot->theta_fb0_CSTATE_c = Experiment_AERO_pitch_channel_P.Constant_Value;

  /* Derivatives for TransferFcn: '<S2>/TF3' */
  _rtXdot->TF3_CSTATE = 0.0;
  _rtXdot->TF3_CSTATE += Experiment_AERO_pitch_channel_P.TF3_A *
    Experiment_AERO_pitch_channel_X.TF3_CSTATE;
  _rtXdot->TF3_CSTATE += Experiment_AERO_pitch_channel_B.theta_fb0_f;

  /* Derivatives for TransferFcn: '<S2>/TF2' */
  _rtXdot->TF2_CSTATE = 0.0;
  _rtXdot->TF2_CSTATE += Experiment_AERO_pitch_channel_P.TF2_A *
    Experiment_AERO_pitch_channel_X.TF2_CSTATE;
  _rtXdot->TF2_CSTATE += Experiment_AERO_pitch_channel_B.ManualSwitch11;

  /* Derivatives for Integrator: '<S3>/theta' */
  _rtXdot->theta_CSTATE = Experiment_AERO_pitch_channel_B.theta_dot;

  /* Derivatives for Integrator: '<S3>/theta_dot' */
  _rtXdot->theta_dot_CSTATE = Experiment_AERO_pitch_channel_B.Gain2;

  /* Derivatives for Integrator: '<S3>/psi_dot' */
  _rtXdot->psi_dot_CSTATE = Experiment_AERO_pitch_channel_B.Gain7;

  /* Derivatives for Integrator: '<S3>/psi' */
  _rtXdot->psi_CSTATE = Experiment_AERO_pitch_channel_B.psi_dot;
}

/* Model initialize function */
void Experiment_AERO_pitch_channel_initialize(void)
{
  /* Start for S-Function (hil_initialize_block): '<S4>/HIL Initialize' */

  /* S-Function Block: Experiment_AERO_pitch_channel/Quanser Aero USB Interface/HIL Initialize (hil_initialize_block) */
  {
    t_int result;
    t_boolean is_switching;
    result = hil_open("quanser_aero_usb", "0",
                      &Experiment_AERO_pitch_channe_DW.HILInitialize_Card);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Experiment_AERO_pitch_channe_M, _rt_error_message);
      return;
    }

    is_switching = false;
    result = hil_watchdog_clear
      (Experiment_AERO_pitch_channe_DW.HILInitialize_Card);
    if (result < 0 && result != -QERR_HIL_WATCHDOG_CLEAR) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Experiment_AERO_pitch_channe_M, _rt_error_message);
      return;
    }

    if ((Experiment_AERO_pitch_channel_P.HILInitialize_AIPStart && !is_switching)
        || (Experiment_AERO_pitch_channel_P.HILInitialize_AIPEnter &&
            is_switching)) {
      Experiment_AERO_pitch_channe_DW.HILInitialize_AIMinimums[0] =
        (Experiment_AERO_pitch_channel_P.HILInitialize_AILow);
      Experiment_AERO_pitch_channe_DW.HILInitialize_AIMinimums[1] =
        (Experiment_AERO_pitch_channel_P.HILInitialize_AILow);
      Experiment_AERO_pitch_channe_DW.HILInitialize_AIMaximums[0] =
        Experiment_AERO_pitch_channel_P.HILInitialize_AIHigh;
      Experiment_AERO_pitch_channe_DW.HILInitialize_AIMaximums[1] =
        Experiment_AERO_pitch_channel_P.HILInitialize_AIHigh;
      result = hil_set_analog_input_ranges
        (Experiment_AERO_pitch_channe_DW.HILInitialize_Card,
         Experiment_AERO_pitch_channel_P.HILInitialize_AIChannels, 2U,
         &Experiment_AERO_pitch_channe_DW.HILInitialize_AIMinimums[0],
         &Experiment_AERO_pitch_channe_DW.HILInitialize_AIMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Experiment_AERO_pitch_channe_M, _rt_error_message);
        return;
      }
    }

    if ((Experiment_AERO_pitch_channel_P.HILInitialize_AOPStart && !is_switching)
        || (Experiment_AERO_pitch_channel_P.HILInitialize_AOPEnter &&
            is_switching)) {
      Experiment_AERO_pitch_channe_DW.HILInitialize_AOMinimums[0] =
        (Experiment_AERO_pitch_channel_P.HILInitialize_AOLow);
      Experiment_AERO_pitch_channe_DW.HILInitialize_AOMinimums[1] =
        (Experiment_AERO_pitch_channel_P.HILInitialize_AOLow);
      Experiment_AERO_pitch_channe_DW.HILInitialize_AOMaximums[0] =
        Experiment_AERO_pitch_channel_P.HILInitialize_AOHigh;
      Experiment_AERO_pitch_channe_DW.HILInitialize_AOMaximums[1] =
        Experiment_AERO_pitch_channel_P.HILInitialize_AOHigh;
      result = hil_set_analog_output_ranges
        (Experiment_AERO_pitch_channe_DW.HILInitialize_Card,
         Experiment_AERO_pitch_channel_P.HILInitialize_AOChannels, 2U,
         &Experiment_AERO_pitch_channe_DW.HILInitialize_AOMinimums[0],
         &Experiment_AERO_pitch_channe_DW.HILInitialize_AOMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Experiment_AERO_pitch_channe_M, _rt_error_message);
        return;
      }
    }

    if ((Experiment_AERO_pitch_channel_P.HILInitialize_AOStart && !is_switching)
        || (Experiment_AERO_pitch_channel_P.HILInitialize_AOEnter &&
            is_switching)) {
      Experiment_AERO_pitch_channe_DW.HILInitialize_AOVoltages[0] =
        Experiment_AERO_pitch_channel_P.HILInitialize_AOInitial;
      Experiment_AERO_pitch_channe_DW.HILInitialize_AOVoltages[1] =
        Experiment_AERO_pitch_channel_P.HILInitialize_AOInitial;
      result = hil_write_analog
        (Experiment_AERO_pitch_channe_DW.HILInitialize_Card,
         Experiment_AERO_pitch_channel_P.HILInitialize_AOChannels, 2U,
         &Experiment_AERO_pitch_channe_DW.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Experiment_AERO_pitch_channe_M, _rt_error_message);
        return;
      }
    }

    if (Experiment_AERO_pitch_channel_P.HILInitialize_AOReset) {
      Experiment_AERO_pitch_channe_DW.HILInitialize_AOVoltages[0] =
        Experiment_AERO_pitch_channel_P.HILInitialize_AOWatchdog;
      Experiment_AERO_pitch_channe_DW.HILInitialize_AOVoltages[1] =
        Experiment_AERO_pitch_channel_P.HILInitialize_AOWatchdog;
      result = hil_watchdog_set_analog_expiration_state
        (Experiment_AERO_pitch_channe_DW.HILInitialize_Card,
         Experiment_AERO_pitch_channel_P.HILInitialize_AOChannels, 2U,
         &Experiment_AERO_pitch_channe_DW.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Experiment_AERO_pitch_channe_M, _rt_error_message);
        return;
      }
    }

    result = hil_set_digital_directions
      (Experiment_AERO_pitch_channe_DW.HILInitialize_Card, NULL, 0U,
       Experiment_AERO_pitch_channel_P.HILInitialize_DOChannels, 2U);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Experiment_AERO_pitch_channe_M, _rt_error_message);
      return;
    }

    if ((Experiment_AERO_pitch_channel_P.HILInitialize_DOStart && !is_switching)
        || (Experiment_AERO_pitch_channel_P.HILInitialize_DOEnter &&
            is_switching)) {
      Experiment_AERO_pitch_channe_DW.HILInitialize_DOBits[0] =
        Experiment_AERO_pitch_channel_P.HILInitialize_DOInitial;
      Experiment_AERO_pitch_channe_DW.HILInitialize_DOBits[1] =
        Experiment_AERO_pitch_channel_P.HILInitialize_DOInitial;
      result = hil_write_digital
        (Experiment_AERO_pitch_channe_DW.HILInitialize_Card,
         Experiment_AERO_pitch_channel_P.HILInitialize_DOChannels, 2U,
         (t_boolean *) &Experiment_AERO_pitch_channe_DW.HILInitialize_DOBits[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Experiment_AERO_pitch_channe_M, _rt_error_message);
        return;
      }
    }

    if (Experiment_AERO_pitch_channel_P.HILInitialize_DOReset) {
      Experiment_AERO_pitch_channe_DW.HILInitialize_DOStates[0] =
        Experiment_AERO_pitch_channel_P.HILInitialize_DOWatchdog;
      Experiment_AERO_pitch_channe_DW.HILInitialize_DOStates[1] =
        Experiment_AERO_pitch_channel_P.HILInitialize_DOWatchdog;
      result = hil_watchdog_set_digital_expiration_state
        (Experiment_AERO_pitch_channe_DW.HILInitialize_Card,
         Experiment_AERO_pitch_channel_P.HILInitialize_DOChannels, 2U, (const
          t_digital_state *)
         &Experiment_AERO_pitch_channe_DW.HILInitialize_DOStates[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Experiment_AERO_pitch_channe_M, _rt_error_message);
        return;
      }
    }

    if ((Experiment_AERO_pitch_channel_P.HILInitialize_EIPStart && !is_switching)
        || (Experiment_AERO_pitch_channel_P.HILInitialize_EIPEnter &&
            is_switching)) {
      Experiment_AERO_pitch_channe_DW.HILInitialize_QuadratureModes[0] =
        Experiment_AERO_pitch_channel_P.HILInitialize_EIQuadrature;
      Experiment_AERO_pitch_channe_DW.HILInitialize_QuadratureModes[1] =
        Experiment_AERO_pitch_channel_P.HILInitialize_EIQuadrature;
      Experiment_AERO_pitch_channe_DW.HILInitialize_QuadratureModes[2] =
        Experiment_AERO_pitch_channel_P.HILInitialize_EIQuadrature;
      Experiment_AERO_pitch_channe_DW.HILInitialize_QuadratureModes[3] =
        Experiment_AERO_pitch_channel_P.HILInitialize_EIQuadrature;
      result = hil_set_encoder_quadrature_mode
        (Experiment_AERO_pitch_channe_DW.HILInitialize_Card,
         Experiment_AERO_pitch_channel_P.HILInitialize_EIChannels, 4U,
         (t_encoder_quadrature_mode *)
         &Experiment_AERO_pitch_channe_DW.HILInitialize_QuadratureModes[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Experiment_AERO_pitch_channe_M, _rt_error_message);
        return;
      }
    }

    if ((Experiment_AERO_pitch_channel_P.HILInitialize_EIStart && !is_switching)
        || (Experiment_AERO_pitch_channel_P.HILInitialize_EIEnter &&
            is_switching)) {
      Experiment_AERO_pitch_channe_DW.HILInitialize_InitialEICounts[0] =
        Experiment_AERO_pitch_channel_P.HILInitialize_EIInitial;
      Experiment_AERO_pitch_channe_DW.HILInitialize_InitialEICounts[1] =
        Experiment_AERO_pitch_channel_P.HILInitialize_EIInitial;
      Experiment_AERO_pitch_channe_DW.HILInitialize_InitialEICounts[2] =
        Experiment_AERO_pitch_channel_P.HILInitialize_EIInitial;
      Experiment_AERO_pitch_channe_DW.HILInitialize_InitialEICounts[3] =
        Experiment_AERO_pitch_channel_P.HILInitialize_EIInitial;
      result = hil_set_encoder_counts
        (Experiment_AERO_pitch_channe_DW.HILInitialize_Card,
         Experiment_AERO_pitch_channel_P.HILInitialize_EIChannels, 4U,
         &Experiment_AERO_pitch_channe_DW.HILInitialize_InitialEICounts[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Experiment_AERO_pitch_channe_M, _rt_error_message);
        return;
      }
    }

    if ((Experiment_AERO_pitch_channel_P.HILInitialize_OOStart && !is_switching)
        || (Experiment_AERO_pitch_channel_P.HILInitialize_OOEnter &&
            is_switching)) {
      result = hil_write_other
        (Experiment_AERO_pitch_channe_DW.HILInitialize_Card,
         Experiment_AERO_pitch_channel_P.HILInitialize_OOChannels, 3U,
         Experiment_AERO_pitch_channel_P.HILInitialize_OOInitial);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Experiment_AERO_pitch_channe_M, _rt_error_message);
        return;
      }
    }

    if (Experiment_AERO_pitch_channel_P.HILInitialize_OOReset) {
      result = hil_watchdog_set_other_expiration_state
        (Experiment_AERO_pitch_channe_DW.HILInitialize_Card,
         Experiment_AERO_pitch_channel_P.HILInitialize_OOChannels, 3U,
         Experiment_AERO_pitch_channel_P.HILInitialize_OOWatchdog);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Experiment_AERO_pitch_channe_M, _rt_error_message);
        return;
      }
    }
  }

  /* InitializeConditions for TransferFcn: '<Root>/LPF3' */
  Experiment_AERO_pitch_channel_X.LPF3_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<Root>/LPF2' */
  Experiment_AERO_pitch_channel_X.LPF2_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<Root>/LPF1' */
  Experiment_AERO_pitch_channel_X.LPF1_CSTATE = 0.0;

  /* InitializeConditions for Integrator: '<S10>/zd' */
  Experiment_AERO_pitch_channel_X.zd_CSTATE[0] =
    Experiment_AERO_pitch_channel_P.zd_IC[0];
  Experiment_AERO_pitch_channel_X.zd_CSTATE[1] =
    Experiment_AERO_pitch_channel_P.zd_IC[1];

  /* InitializeConditions for TransferFcn: '<Root>/LPF7' */
  Experiment_AERO_pitch_channel_X.LPF7_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<Root>/LPF6' */
  Experiment_AERO_pitch_channel_X.LPF6_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<Root>/LPF5' */
  Experiment_AERO_pitch_channel_X.LPF5_CSTATE = 0.0;

  /* InitializeConditions for Integrator: '<S12>/Integrator1' */
  Experiment_AERO_pitch_channel_X.Integrator1_CSTATE =
    Experiment_AERO_pitch_channel_P.Integrator1_IC;

  /* InitializeConditions for Integrator: '<S12>/theta_fb(0)' incorporates:
   *  Integrator: '<S11>/theta_fb(0)'
   */
  if (rtmIsFirstInitCond(Experiment_AERO_pitch_channe_M)) {
    Experiment_AERO_pitch_channel_X.theta_fb0_CSTATE = 0.0;
    Experiment_AERO_pitch_channel_X.theta_fb0_CSTATE_p = 0.0;
  }

  Experiment_AERO_pitch_channe_DW.theta_fb0_IWORK = 1;

  /* End of InitializeConditions for Integrator: '<S12>/theta_fb(0)' */

  /* InitializeConditions for Integrator: '<S12>/Integrator2' */
  Experiment_AERO_pitch_channel_X.Integrator2_CSTATE =
    Experiment_AERO_pitch_channel_P.Integrator2_IC;

  /* InitializeConditions for TransferFcn: '<S11>/TF1' */
  Experiment_AERO_pitch_channel_X.TF1_CSTATE[0] = 0.0;
  Experiment_AERO_pitch_channel_X.TF1_CSTATE[1] = 0.0;

  /* InitializeConditions for Integrator: '<S11>/Integrator1' */
  Experiment_AERO_pitch_channel_X.Integrator1_CSTATE_d =
    Experiment_AERO_pitch_channel_P.Integrator1_IC_n;

  /* InitializeConditions for TransferFcn: '<S11>/TF4' */
  Experiment_AERO_pitch_channel_X.TF4_CSTATE = 0.0;

  /* InitializeConditions for Integrator: '<S11>/theta_fb(0)' */
  Experiment_AERO_pitch_channe_DW.theta_fb0_IWORK_c = 1;

  /* InitializeConditions for TransferFcn: '<S11>/TF5' */
  Experiment_AERO_pitch_channel_X.TF5_CSTATE = 0.0;

  /* InitializeConditions for Integrator: '<S11>/Integrator2' */
  Experiment_AERO_pitch_channel_X.Integrator2_CSTATE_e =
    Experiment_AERO_pitch_channel_P.Integrator2_IC_n;

  /* InitializeConditions for TransferFcn: '<S2>/TF1' */
  Experiment_AERO_pitch_channel_X.TF1_CSTATE_a = 0.0;

  /* InitializeConditions for Integrator: '<S2>/theta_fb(0)' */
  if (rtmIsFirstInitCond(Experiment_AERO_pitch_channe_M)) {
    Experiment_AERO_pitch_channel_X.theta_fb0_CSTATE_c = 0.0;
  }

  Experiment_AERO_pitch_channe_DW.theta_fb0_IWORK_m = 1;

  /* End of InitializeConditions for Integrator: '<S2>/theta_fb(0)' */

  /* InitializeConditions for TransferFcn: '<S2>/TF3' */
  Experiment_AERO_pitch_channel_X.TF3_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<S2>/TF2' */
  Experiment_AERO_pitch_channel_X.TF2_CSTATE = 0.0;

  /* InitializeConditions for Integrator: '<S3>/theta' */
  Experiment_AERO_pitch_channel_X.theta_CSTATE =
    Experiment_AERO_pitch_channel_P.theta_initial;

  /* InitializeConditions for Integrator: '<S3>/theta_dot' */
  Experiment_AERO_pitch_channel_X.theta_dot_CSTATE =
    Experiment_AERO_pitch_channel_P.theta_dot_initial;

  /* InitializeConditions for Integrator: '<S3>/psi_dot' */
  Experiment_AERO_pitch_channel_X.psi_dot_CSTATE =
    Experiment_AERO_pitch_channel_P.psi_dot_initial;

  /* InitializeConditions for Integrator: '<S3>/psi' */
  Experiment_AERO_pitch_channel_X.psi_CSTATE =
    Experiment_AERO_pitch_channel_P.psi_initial;

  /* set "at time zero" to false */
  if (rtmIsFirstInitCond(Experiment_AERO_pitch_channe_M)) {
    rtmSetFirstInitCond(Experiment_AERO_pitch_channe_M, 0);
  }
}

/* Model terminate function */
void Experiment_AERO_pitch_channel_terminate(void)
{
  /* Terminate for S-Function (hil_initialize_block): '<S4>/HIL Initialize' */

  /* S-Function Block: Experiment_AERO_pitch_channel/Quanser Aero USB Interface/HIL Initialize (hil_initialize_block) */
  {
    t_boolean is_switching;
    t_int result;
    t_uint32 num_final_analog_outputs = 0;
    t_uint32 num_final_digital_outputs = 0;
    t_uint32 num_final_other_outputs = 0;
    hil_task_stop_all(Experiment_AERO_pitch_channe_DW.HILInitialize_Card);
    hil_monitor_stop_all(Experiment_AERO_pitch_channe_DW.HILInitialize_Card);
    is_switching = false;
    if ((Experiment_AERO_pitch_channel_P.HILInitialize_AOTerminate &&
         !is_switching) || (Experiment_AERO_pitch_channel_P.HILInitialize_AOExit
         && is_switching)) {
      Experiment_AERO_pitch_channe_DW.HILInitialize_AOVoltages[0] =
        Experiment_AERO_pitch_channel_P.HILInitialize_AOFinal;
      Experiment_AERO_pitch_channe_DW.HILInitialize_AOVoltages[1] =
        Experiment_AERO_pitch_channel_P.HILInitialize_AOFinal;
      num_final_analog_outputs = 2U;
    }

    if ((Experiment_AERO_pitch_channel_P.HILInitialize_DOTerminate &&
         !is_switching) || (Experiment_AERO_pitch_channel_P.HILInitialize_DOExit
         && is_switching)) {
      Experiment_AERO_pitch_channe_DW.HILInitialize_DOBits[0] =
        Experiment_AERO_pitch_channel_P.HILInitialize_DOFinal;
      Experiment_AERO_pitch_channe_DW.HILInitialize_DOBits[1] =
        Experiment_AERO_pitch_channel_P.HILInitialize_DOFinal;
      num_final_digital_outputs = 2U;
    }

    if ((Experiment_AERO_pitch_channel_P.HILInitialize_OOTerminate &&
         !is_switching) || (Experiment_AERO_pitch_channel_P.HILInitialize_OOExit
         && is_switching)) {
      num_final_other_outputs = 3U;
    }

    if (0
        || num_final_analog_outputs > 0
        || num_final_digital_outputs > 0
        || num_final_other_outputs > 0
        ) {
      /* Attempt to write the final outputs atomically (due to firmware issue in old Q2-USB). Otherwise write channels individually */
      result = hil_write(Experiment_AERO_pitch_channe_DW.HILInitialize_Card
                         ,
                         Experiment_AERO_pitch_channel_P.HILInitialize_AOChannels,
                         num_final_analog_outputs
                         , NULL, 0
                         ,
                         Experiment_AERO_pitch_channel_P.HILInitialize_DOChannels,
                         num_final_digital_outputs
                         ,
                         Experiment_AERO_pitch_channel_P.HILInitialize_OOChannels,
                         num_final_other_outputs
                         ,
                         &Experiment_AERO_pitch_channe_DW.HILInitialize_AOVoltages
                         [0]
                         , NULL
                         , (t_boolean *)
                         &Experiment_AERO_pitch_channe_DW.HILInitialize_DOBits[0]
                         , Experiment_AERO_pitch_channel_P.HILInitialize_OOFinal
                         );
      if (result == -QERR_HIL_WRITE_NOT_SUPPORTED) {
        t_error local_result;
        result = 0;

        /* The hil_write operation is not supported by this card. Write final outputs for each channel type */
        if (num_final_analog_outputs > 0) {
          local_result = hil_write_analog
            (Experiment_AERO_pitch_channe_DW.HILInitialize_Card,
             Experiment_AERO_pitch_channel_P.HILInitialize_AOChannels,
             num_final_analog_outputs,
             &Experiment_AERO_pitch_channe_DW.HILInitialize_AOVoltages[0]);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (num_final_digital_outputs > 0) {
          local_result = hil_write_digital
            (Experiment_AERO_pitch_channe_DW.HILInitialize_Card,
             Experiment_AERO_pitch_channel_P.HILInitialize_DOChannels,
             num_final_digital_outputs, (t_boolean *)
             &Experiment_AERO_pitch_channe_DW.HILInitialize_DOBits[0]);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (num_final_other_outputs > 0) {
          local_result = hil_write_other
            (Experiment_AERO_pitch_channe_DW.HILInitialize_Card,
             Experiment_AERO_pitch_channel_P.HILInitialize_OOChannels,
             num_final_other_outputs,
             Experiment_AERO_pitch_channel_P.HILInitialize_OOFinal);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(Experiment_AERO_pitch_channe_M, _rt_error_message);
        }
      }
    }

    hil_task_delete_all(Experiment_AERO_pitch_channe_DW.HILInitialize_Card);
    hil_monitor_delete_all(Experiment_AERO_pitch_channe_DW.HILInitialize_Card);
    hil_close(Experiment_AERO_pitch_channe_DW.HILInitialize_Card);
    Experiment_AERO_pitch_channe_DW.HILInitialize_Card = NULL;
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/

/* Solver interface called by GRT_Main */
#ifndef USE_GENERATED_SOLVER

void rt_ODECreateIntegrationData(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

void rt_ODEDestroyIntegrationData(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

void rt_ODEUpdateContinuousStates(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

#endif

void MdlOutputs(int_T tid)
{
  Experiment_AERO_pitch_channel_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  Experiment_AERO_pitch_channel_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  Experiment_AERO_pitch_channel_initialize();
}

void MdlTerminate(void)
{
  Experiment_AERO_pitch_channel_terminate();
}

/* Registration function */
RT_MODEL_Experiment_AERO_pitc_T *Experiment_AERO_pitch_channel(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Experiment_AERO_pitch_channe_M, 0,
                sizeof(RT_MODEL_Experiment_AERO_pitc_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&Experiment_AERO_pitch_channe_M->solverInfo,
                          &Experiment_AERO_pitch_channe_M->Timing.simTimeStep);
    rtsiSetTPtr(&Experiment_AERO_pitch_channe_M->solverInfo, &rtmGetTPtr
                (Experiment_AERO_pitch_channe_M));
    rtsiSetStepSizePtr(&Experiment_AERO_pitch_channe_M->solverInfo,
                       &Experiment_AERO_pitch_channe_M->Timing.stepSize0);
    rtsiSetdXPtr(&Experiment_AERO_pitch_channe_M->solverInfo,
                 &Experiment_AERO_pitch_channe_M->derivs);
    rtsiSetContStatesPtr(&Experiment_AERO_pitch_channe_M->solverInfo, (real_T **)
                         &Experiment_AERO_pitch_channe_M->contStates);
    rtsiSetNumContStatesPtr(&Experiment_AERO_pitch_channe_M->solverInfo,
      &Experiment_AERO_pitch_channe_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&Experiment_AERO_pitch_channe_M->solverInfo,
      &Experiment_AERO_pitch_channe_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr
      (&Experiment_AERO_pitch_channe_M->solverInfo,
       &Experiment_AERO_pitch_channe_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr
      (&Experiment_AERO_pitch_channe_M->solverInfo,
       &Experiment_AERO_pitch_channe_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&Experiment_AERO_pitch_channe_M->solverInfo,
                          (&rtmGetErrorStatus(Experiment_AERO_pitch_channe_M)));
    rtsiSetRTModelPtr(&Experiment_AERO_pitch_channe_M->solverInfo,
                      Experiment_AERO_pitch_channe_M);
  }

  rtsiSetSimTimeStep(&Experiment_AERO_pitch_channe_M->solverInfo,
                     MAJOR_TIME_STEP);
  Experiment_AERO_pitch_channe_M->intgData.y =
    Experiment_AERO_pitch_channe_M->odeY;
  Experiment_AERO_pitch_channe_M->intgData.f[0] =
    Experiment_AERO_pitch_channe_M->odeF[0];
  Experiment_AERO_pitch_channe_M->intgData.f[1] =
    Experiment_AERO_pitch_channe_M->odeF[1];
  Experiment_AERO_pitch_channe_M->intgData.f[2] =
    Experiment_AERO_pitch_channe_M->odeF[2];
  Experiment_AERO_pitch_channe_M->intgData.f[3] =
    Experiment_AERO_pitch_channe_M->odeF[3];
  Experiment_AERO_pitch_channe_M->contStates = ((real_T *)
    &Experiment_AERO_pitch_channel_X);
  rtsiSetSolverData(&Experiment_AERO_pitch_channe_M->solverInfo, (void *)
                    &Experiment_AERO_pitch_channe_M->intgData);
  rtsiSetSolverName(&Experiment_AERO_pitch_channe_M->solverInfo,"ode4");

  /* Initialize timing info */
  {
    int_T *mdlTsMap =
      Experiment_AERO_pitch_channe_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    Experiment_AERO_pitch_channe_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    Experiment_AERO_pitch_channe_M->Timing.sampleTimes =
      (&Experiment_AERO_pitch_channe_M->Timing.sampleTimesArray[0]);
    Experiment_AERO_pitch_channe_M->Timing.offsetTimes =
      (&Experiment_AERO_pitch_channe_M->Timing.offsetTimesArray[0]);

    /* task periods */
    Experiment_AERO_pitch_channe_M->Timing.sampleTimes[0] = (0.0);
    Experiment_AERO_pitch_channe_M->Timing.sampleTimes[1] = (0.001);

    /* task offsets */
    Experiment_AERO_pitch_channe_M->Timing.offsetTimes[0] = (0.0);
    Experiment_AERO_pitch_channe_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(Experiment_AERO_pitch_channe_M,
             &Experiment_AERO_pitch_channe_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = Experiment_AERO_pitch_channe_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    Experiment_AERO_pitch_channe_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(Experiment_AERO_pitch_channe_M, 35.0);
  Experiment_AERO_pitch_channe_M->Timing.stepSize0 = 0.001;
  Experiment_AERO_pitch_channe_M->Timing.stepSize1 = 0.001;
  rtmSetFirstInitCond(Experiment_AERO_pitch_channe_M, 1);

  /* External mode info */
  Experiment_AERO_pitch_channe_M->Sizes.checksums[0] = (3320430816U);
  Experiment_AERO_pitch_channe_M->Sizes.checksums[1] = (1305624298U);
  Experiment_AERO_pitch_channe_M->Sizes.checksums[2] = (1076080333U);
  Experiment_AERO_pitch_channe_M->Sizes.checksums[3] = (96581108U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[16];
    Experiment_AERO_pitch_channe_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    systemRan[6] = &rtAlwaysEnabled;
    systemRan[7] = &rtAlwaysEnabled;
    systemRan[8] = &rtAlwaysEnabled;
    systemRan[9] = &rtAlwaysEnabled;
    systemRan[10] = &rtAlwaysEnabled;
    systemRan[11] = &rtAlwaysEnabled;
    systemRan[12] = &rtAlwaysEnabled;
    systemRan[13] = &rtAlwaysEnabled;
    systemRan[14] = &rtAlwaysEnabled;
    systemRan[15] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(Experiment_AERO_pitch_channe_M->extModeInfo,
      &Experiment_AERO_pitch_channe_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(Experiment_AERO_pitch_channe_M->extModeInfo,
                        Experiment_AERO_pitch_channe_M->Sizes.checksums);
    rteiSetTPtr(Experiment_AERO_pitch_channe_M->extModeInfo, rtmGetTPtr
                (Experiment_AERO_pitch_channe_M));
  }

  Experiment_AERO_pitch_channe_M->solverInfoPtr =
    (&Experiment_AERO_pitch_channe_M->solverInfo);
  Experiment_AERO_pitch_channe_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&Experiment_AERO_pitch_channe_M->solverInfo, 0.001);
  rtsiSetSolverMode(&Experiment_AERO_pitch_channe_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  Experiment_AERO_pitch_channe_M->blockIO = ((void *)
    &Experiment_AERO_pitch_channel_B);
  (void) memset(((void *) &Experiment_AERO_pitch_channel_B), 0,
                sizeof(B_Experiment_AERO_pitch_chann_T));

  /* parameters */
  Experiment_AERO_pitch_channe_M->defaultParam = ((real_T *)
    &Experiment_AERO_pitch_channel_P);

  /* states (continuous) */
  {
    real_T *x = (real_T *) &Experiment_AERO_pitch_channel_X;
    Experiment_AERO_pitch_channe_M->contStates = (x);
    (void) memset((void *)&Experiment_AERO_pitch_channel_X, 0,
                  sizeof(X_Experiment_AERO_pitch_chann_T));
  }

  /* states (dwork) */
  Experiment_AERO_pitch_channe_M->dwork = ((void *)
    &Experiment_AERO_pitch_channe_DW);
  (void) memset((void *)&Experiment_AERO_pitch_channe_DW, 0,
                sizeof(DW_Experiment_AERO_pitch_chan_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    Experiment_AERO_pitch_channe_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 17;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Initialize Sizes */
  Experiment_AERO_pitch_channe_M->Sizes.numContStates = (26);/* Number of continuous states */
  Experiment_AERO_pitch_channe_M->Sizes.numPeriodicContStates = (0);/* Number of periodic continuous states */
  Experiment_AERO_pitch_channe_M->Sizes.numY = (0);/* Number of model outputs */
  Experiment_AERO_pitch_channe_M->Sizes.numU = (0);/* Number of model inputs */
  Experiment_AERO_pitch_channe_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  Experiment_AERO_pitch_channe_M->Sizes.numSampTimes = (2);/* Number of sample times */
  Experiment_AERO_pitch_channe_M->Sizes.numBlocks = (184);/* Number of blocks */
  Experiment_AERO_pitch_channe_M->Sizes.numBlockIO = (35);/* Number of block outputs */
  Experiment_AERO_pitch_channe_M->Sizes.numBlockPrms = (500);/* Sum of parameter "widths" */
  return Experiment_AERO_pitch_channe_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
