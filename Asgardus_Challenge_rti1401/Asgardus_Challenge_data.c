/*
 * Asgardus_Challenge_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Asgardus_Challenge".
 *
 * Model version              : 1.17
 * Simulink Coder version : 8.13 (R2017b) 24-Jul-2017
 * C source code generated on : Tue Jun 19 13:13:08 2018
 *
 * Target selection: rti1401.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Asgardus_Challenge.h"
#include "Asgardus_Challenge_private.h"

/* Block parameters (auto storage) */
P_Asgardus_Challenge_T Asgardus_Challenge_P = {
  /* Mask Parameter: DiscretePIDController1_D
   * Referenced by: '<S32>/Derivative Gain'
   */
  1.0,

  /* Mask Parameter: DiscretePIDController2_D
   * Referenced by: '<S33>/Derivative Gain'
   */
  1.0,

  /* Mask Parameter: DiscretePIDController1_I
   * Referenced by: '<S32>/Integral Gain'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController2_I
   * Referenced by: '<S33>/Integral Gain'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController2_N
   * Referenced by: '<S33>/Filter Coefficient'
   */
  100.0,

  /* Mask Parameter: DiscretePIDController1_P
   * Referenced by: '<S32>/Proportional Gain'
   */
  100.0,

  /* Mask Parameter: DiscretePIDController2_P
   * Referenced by: '<S33>/Proportional Gain'
   */
  1.0,

  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S40>/Constant'
   */
  -1.0,

  /* Expression: 18
   * Referenced by: '<S25>/Constant'
   */
  18.0,

  /* Expression: 15
   * Referenced by: '<S25>/Constant1'
   */
  15.0,

  /* Computed Parameter: TSamp_WtEt
   * Referenced by: '<S35>/TSamp'
   */
  100.0,

  /* Expression: DifferentiatorICPrevScaledInput
   * Referenced by: '<S35>/UD'
   */
  0.0,

  /* Computed Parameter: Integrator_gainval
   * Referenced by: '<S32>/Integrator'
   */
  0.01,

  /* Expression: InitialConditionForIntegrator
   * Referenced by: '<S32>/Integrator'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S25>/Constant3'
   */
  0.0,

  /* Computed Parameter: Filter_gainval
   * Referenced by: '<S33>/Filter'
   */
  0.01,

  /* Expression: InitialConditionForFilter
   * Referenced by: '<S33>/Filter'
   */
  0.0,

  /* Computed Parameter: Integrator_gainval_g
   * Referenced by: '<S33>/Integrator'
   */
  0.01,

  /* Expression: InitialConditionForIntegrator
   * Referenced by: '<S33>/Integrator'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S4>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S13>/Unit Delay1'
   */
  0.0,

  /* Expression: 50
   * Referenced by: '<S48>/Constant1'
   */
  50.0,

  /* Expression: 106
   * Referenced by: '<S48>/Constant'
   */
  106.0,

  /* Expression: -6
   * Referenced by: '<S48>/Constant3'
   */
  -6.0,

  /* Expression: 106
   * Referenced by: '<S48>/Constant2'
   */
  106.0,

  /* Expression: 21
   * Referenced by: '<S51>/Constant1'
   */
  21.0,

  /* Expression: 89.5
   * Referenced by: '<S51>/Constant'
   */
  89.5,

  /* Expression: 89.5
   * Referenced by: '<S51>/Constant3'
   */
  89.5,

  /* Expression: 106
   * Referenced by: '<S51>/Constant2'
   */
  106.0,

  /* Computed Parameter: RateLimiter_RisingLim
   * Referenced by: '<S4>/Rate Limiter'
   */
  0.087266462599716474,

  /* Computed Parameter: RateLimiter_FallingLim
   * Referenced by: '<S4>/Rate Limiter'
   */
  -0.087266462599716474,

  /* Expression: 0
   * Referenced by: '<S4>/Rate Limiter'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<Root>/IC'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S13>/Constant1'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S13>/Constant2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S47>/Constant1'
   */
  0.0,

  /* Expression: 50
   * Referenced by: '<S47>/Constant'
   */
  50.0,

  /* Expression: -6
   * Referenced by: '<S47>/Constant3'
   */
  -6.0,

  /* Expression: 6
   * Referenced by: '<S47>/Constant2'
   */
  6.0,

  /* Expression: 50
   * Referenced by: '<S49>/Constant1'
   */
  50.0,

  /* Expression: 120
   * Referenced by: '<S49>/Constant'
   */
  120.0,

  /* Expression: 164
   * Referenced by: '<S49>/Constant3'
   */
  164.0,

  /* Expression: 176
   * Referenced by: '<S49>/Constant2'
   */
  176.0,

  /* Expression: 9
   * Referenced by: '<S50>/Constant1'
   */
  9.0,

  /* Expression: 50
   * Referenced by: '<S50>/Constant'
   */
  50.0,

  /* Expression: 100
   * Referenced by: '<S50>/Constant3'
   */
  100.0,

  /* Expression: 182
   * Referenced by: '<S50>/Constant2'
   */
  182.0,

  /* Computed Parameter: UD_DelayLength
   * Referenced by: '<S35>/UD'
   */
  1U
};
