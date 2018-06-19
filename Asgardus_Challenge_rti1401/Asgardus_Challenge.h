/*
 * Asgardus_Challenge.h
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

#ifndef RTW_HEADER_Asgardus_Challenge_h_
#define RTW_HEADER_Asgardus_Challenge_h_
#include <math.h>
#include <string.h>
#ifndef Asgardus_Challenge_COMMON_INCLUDES_
# define Asgardus_Challenge_COMMON_INCLUDES_
#include <brtenv.h>
#include <rtkernel.h>
#include <rti_assert.h>
#include <rtidefineddatatypes.h>
#include <rtican_ds1401.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* Asgardus_Challenge_COMMON_INCLUDES_ */

#include "Asgardus_Challenge_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T UnitDelay1;                   /* '<S13>/Unit Delay1' */
  real_T Product3;                     /* '<S4>/Product3' */
  real_T Product2;                     /* '<S4>/Product2' */
  real_T SFunction1_o1;                /* '<S10>/S-Function1' */
  real_T SFunction1_o2;                /* '<S10>/S-Function1' */
  real_T SFunction1_o3;                /* '<S10>/S-Function1' */
  real_T SFunction1_o4;                /* '<S10>/S-Function1' */
  real_T SFunction1_o1_p;              /* '<S1>/S-Function1' */
  real_T SFunction1_o2_m;              /* '<S1>/S-Function1' */
  real_T SFunction1_o3_k;              /* '<S1>/S-Function1' */
  real_T SFunction1_o4_k;              /* '<S1>/S-Function1' */
  real_T SFunction1_o1_n;              /* '<S6>/S-Function1' */
  real_T SFunction1_o2_n;              /* '<S6>/S-Function1' */
  real_T SFunction1_o3_m;              /* '<S6>/S-Function1' */
  real_T Product1;                     /* '<S4>/Product1' */
  real_T Product;                      /* '<S4>/Product' */
  real_T SFunction1_o1_f;              /* '<S9>/S-Function1' */
  real_T SFunction1_o2_j;              /* '<S9>/S-Function1' */
  real_T SFunction1_o3_k0;             /* '<S9>/S-Function1' */
  real_T SFunction1_o4_i;              /* '<S9>/S-Function1' */
  real_T steer_c;                      /* '<S4>/Rate Limiter' */
  real_T Product4;                     /* '<S4>/Product4' */
  real_T SFunction1;                   /* '<S7>/S-Function1' */
  real_T SFunction1_o1_j;              /* '<S2>/S-Function1' */
  real_T SFunction1_o2_p;              /* '<S2>/S-Function1' */
  real_T SFunction1_o3_n;              /* '<S2>/S-Function1' */
  real_T SIMULATION_STATE;             /* '<Root>/IC' */
  real_T Divide;                       /* '<S4>/Divide' */
  real_T Switch;                       /* '<S13>/Switch' */
  real_T beta;                         /* '<S4>/Trigonometric Function' */
  real_T SFunction1_o1_e;              /* '<S8>/S-Function1' */
  real_T SFunction1_o2_d;              /* '<S8>/S-Function1' */
  real_T SFunction1_o3_mx;             /* '<S8>/S-Function1' */
  real_T SFunction1_o4_g;              /* '<S8>/S-Function1' */
  real_T SFunction1_o1_b;              /* '<S11>/S-Function1' */
  real_T SFunction1_o2_l;              /* '<S11>/S-Function1' */
  real_T SFunction1_o3_c;              /* '<S11>/S-Function1' */
  real_T SFunction1_o4_m;              /* '<S11>/S-Function1' */
  real_T Switch1;                      /* '<S25>/Switch1' */
  real_T velocity_error;               /* '<S25>/Subtract1' */
  real_T DerivativeGain;               /* '<S32>/Derivative Gain' */
  real_T TSamp;                        /* '<S35>/TSamp' */
  real_T UD;                           /* '<S35>/UD' */
  real_T Diff;                         /* '<S35>/Diff' */
  real_T IntegralGain;                 /* '<S32>/Integral Gain' */
  real_T Integrator;                   /* '<S32>/Integrator' */
  real_T ProportionalGain;             /* '<S32>/Proportional Gain' */
  real_T Sum;                          /* '<S32>/Sum' */
  real_T offset_error;                 /* '<S25>/Subtract2' */
  real_T DerivativeGain_f;             /* '<S33>/Derivative Gain' */
  real_T Filter;                       /* '<S33>/Filter' */
  real_T SumD;                         /* '<S33>/SumD' */
  real_T FilterCoefficient;            /* '<S33>/Filter Coefficient' */
  real_T IntegralGain_g;               /* '<S33>/Integral Gain' */
  real_T Integrator_a;                 /* '<S33>/Integrator' */
  real_T ProportionalGain_g;           /* '<S33>/Proportional Gain' */
  real_T Sum_k;                        /* '<S33>/Sum' */
  boolean_T min_relop;                 /* '<S54>/min_relop' */
  boolean_T max_relop;                 /* '<S54>/max_relop' */
  boolean_T conjunction;               /* '<S54>/conjunction' */
  boolean_T min_relop_p;               /* '<S55>/min_relop' */
  boolean_T max_relop_d;               /* '<S55>/max_relop' */
  boolean_T conjunction_b;             /* '<S55>/conjunction' */
  boolean_T LogicalOperator;           /* '<S48>/Logical Operator' */
  boolean_T min_relop_f;               /* '<S60>/min_relop' */
  boolean_T max_relop_g;               /* '<S60>/max_relop' */
  boolean_T conjunction_bi;            /* '<S60>/conjunction' */
  boolean_T min_relop_g;               /* '<S61>/min_relop' */
  boolean_T max_relop_o;               /* '<S61>/max_relop' */
  boolean_T conjunction_n;             /* '<S61>/conjunction' */
  boolean_T LogicalOperator_n;         /* '<S51>/Logical Operator' */
  boolean_T Compare;                   /* '<S40>/Compare' */
  boolean_T min_relop_l;               /* '<S52>/min_relop' */
  boolean_T max_relop_f;               /* '<S52>/max_relop' */
  boolean_T conjunction_h;             /* '<S52>/conjunction' */
  boolean_T min_relop_d;               /* '<S53>/min_relop' */
  boolean_T max_relop_i;               /* '<S53>/max_relop' */
  boolean_T conjunction_c;             /* '<S53>/conjunction' */
  boolean_T LogicalOperator_i;         /* '<S47>/Logical Operator' */
  boolean_T min_relop_i;               /* '<S56>/min_relop' */
  boolean_T max_relop_h;               /* '<S56>/max_relop' */
  boolean_T conjunction_hp;            /* '<S56>/conjunction' */
  boolean_T min_relop_n;               /* '<S57>/min_relop' */
  boolean_T max_relop_n;               /* '<S57>/max_relop' */
  boolean_T conjunction_g;             /* '<S57>/conjunction' */
  boolean_T LogicalOperator_o;         /* '<S49>/Logical Operator' */
  boolean_T min_relop_a;               /* '<S58>/min_relop' */
  boolean_T max_relop_l;               /* '<S58>/max_relop' */
  boolean_T conjunction_p;             /* '<S58>/conjunction' */
  boolean_T min_relop_nf;              /* '<S59>/min_relop' */
  boolean_T max_relop_dn;              /* '<S59>/max_relop' */
  boolean_T conjunction_d;             /* '<S59>/conjunction' */
  boolean_T LogicalOperator_ie;        /* '<S50>/Logical Operator' */
  boolean_T LogicalOperator1;          /* '<S25>/Logical Operator1' */
} B_Asgardus_Challenge_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay1_DSTATE;            /* '<S13>/Unit Delay1' */
  real_T UD_DSTATE;                    /* '<S35>/UD' */
  real_T Integrator_DSTATE;            /* '<S32>/Integrator' */
  real_T Filter_DSTATE;                /* '<S33>/Filter' */
  real_T Integrator_DSTATE_g;          /* '<S33>/Integrator' */
  real_T PrevY;                        /* '<S4>/Rate Limiter' */
  void* Assertion_slioAccessor;        /* '<S52>/Assertion' */
  void* Assertion_slioAccessor_j;      /* '<S53>/Assertion' */
  void* Assertion_slioAccessor_m;      /* '<S54>/Assertion' */
  void* Assertion_slioAccessor_e;      /* '<S55>/Assertion' */
  void* Assertion_slioAccessor_i;      /* '<S56>/Assertion' */
  void* Assertion_slioAccessor_a;      /* '<S57>/Assertion' */
  void* Assertion_slioAccessor_f;      /* '<S58>/Assertion' */
  void* Assertion_slioAccessor_p;      /* '<S59>/Assertion' */
  void* Assertion_slioAccessor_c;      /* '<S60>/Assertion' */
  void* Assertion_slioAccessor_jb;     /* '<S61>/Assertion' */
  int_T SFunction1_IWORK[2];           /* '<S3>/S-Function1' */
  boolean_T IC_FirstOutputTime;        /* '<Root>/IC' */
} DW_Asgardus_Challenge_T;

/* Parameters (auto storage) */
struct P_Asgardus_Challenge_T_ {
  real_T DiscretePIDController1_D;     /* Mask Parameter: DiscretePIDController1_D
                                        * Referenced by: '<S32>/Derivative Gain'
                                        */
  real_T DiscretePIDController2_D;     /* Mask Parameter: DiscretePIDController2_D
                                        * Referenced by: '<S33>/Derivative Gain'
                                        */
  real_T DiscretePIDController1_I;     /* Mask Parameter: DiscretePIDController1_I
                                        * Referenced by: '<S32>/Integral Gain'
                                        */
  real_T DiscretePIDController2_I;     /* Mask Parameter: DiscretePIDController2_I
                                        * Referenced by: '<S33>/Integral Gain'
                                        */
  real_T DiscretePIDController2_N;     /* Mask Parameter: DiscretePIDController2_N
                                        * Referenced by: '<S33>/Filter Coefficient'
                                        */
  real_T DiscretePIDController1_P;     /* Mask Parameter: DiscretePIDController1_P
                                        * Referenced by: '<S32>/Proportional Gain'
                                        */
  real_T DiscretePIDController2_P;     /* Mask Parameter: DiscretePIDController2_P
                                        * Referenced by: '<S33>/Proportional Gain'
                                        */
  real_T CompareToConstant_const;      /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S40>/Constant'
                                        */
  real_T Constant_Value;               /* Expression: 18
                                        * Referenced by: '<S25>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 15
                                        * Referenced by: '<S25>/Constant1'
                                        */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S35>/TSamp'
                                        */
  real_T UD_InitialCondition;          /* Expression: DifferentiatorICPrevScaledInput
                                        * Referenced by: '<S35>/UD'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S32>/Integrator'
                                        */
  real_T Integrator_IC;                /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S32>/Integrator'
                                        */
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<S25>/Constant3'
                                        */
  real_T Filter_gainval;               /* Computed Parameter: Filter_gainval
                                        * Referenced by: '<S33>/Filter'
                                        */
  real_T Filter_IC;                    /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S33>/Filter'
                                        */
  real_T Integrator_gainval_g;         /* Computed Parameter: Integrator_gainval_g
                                        * Referenced by: '<S33>/Integrator'
                                        */
  real_T Integrator_IC_e;              /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S33>/Integrator'
                                        */
  real_T Constant_Value_k;             /* Expression: 0
                                        * Referenced by: '<S4>/Constant'
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S13>/Unit Delay1'
                                        */
  real_T Constant1_Value_c;            /* Expression: 50
                                        * Referenced by: '<S48>/Constant1'
                                        */
  real_T Constant_Value_e;             /* Expression: 106
                                        * Referenced by: '<S48>/Constant'
                                        */
  real_T Constant3_Value_k;            /* Expression: -6
                                        * Referenced by: '<S48>/Constant3'
                                        */
  real_T Constant2_Value;              /* Expression: 106
                                        * Referenced by: '<S48>/Constant2'
                                        */
  real_T Constant1_Value_d;            /* Expression: 21
                                        * Referenced by: '<S51>/Constant1'
                                        */
  real_T Constant_Value_i;             /* Expression: 89.5
                                        * Referenced by: '<S51>/Constant'
                                        */
  real_T Constant3_Value_kw;           /* Expression: 89.5
                                        * Referenced by: '<S51>/Constant3'
                                        */
  real_T Constant2_Value_d;            /* Expression: 106
                                        * Referenced by: '<S51>/Constant2'
                                        */
  real_T RateLimiter_RisingLim;        /* Computed Parameter: RateLimiter_RisingLim
                                        * Referenced by: '<S4>/Rate Limiter'
                                        */
  real_T RateLimiter_FallingLim;       /* Computed Parameter: RateLimiter_FallingLim
                                        * Referenced by: '<S4>/Rate Limiter'
                                        */
  real_T RateLimiter_IC;               /* Expression: 0
                                        * Referenced by: '<S4>/Rate Limiter'
                                        */
  real_T IC_Value;                     /* Expression: -1
                                        * Referenced by: '<Root>/IC'
                                        */
  real_T Constant1_Value_p;            /* Expression: 1
                                        * Referenced by: '<S13>/Constant1'
                                        */
  real_T Constant2_Value_e;            /* Expression: 0
                                        * Referenced by: '<S13>/Constant2'
                                        */
  real_T Constant1_Value_l;            /* Expression: 0
                                        * Referenced by: '<S47>/Constant1'
                                        */
  real_T Constant_Value_o;             /* Expression: 50
                                        * Referenced by: '<S47>/Constant'
                                        */
  real_T Constant3_Value_ky;           /* Expression: -6
                                        * Referenced by: '<S47>/Constant3'
                                        */
  real_T Constant2_Value_f;            /* Expression: 6
                                        * Referenced by: '<S47>/Constant2'
                                        */
  real_T Constant1_Value_k;            /* Expression: 50
                                        * Referenced by: '<S49>/Constant1'
                                        */
  real_T Constant_Value_n;             /* Expression: 120
                                        * Referenced by: '<S49>/Constant'
                                        */
  real_T Constant3_Value_l;            /* Expression: 164
                                        * Referenced by: '<S49>/Constant3'
                                        */
  real_T Constant2_Value_n;            /* Expression: 176
                                        * Referenced by: '<S49>/Constant2'
                                        */
  real_T Constant1_Value_e;            /* Expression: 9
                                        * Referenced by: '<S50>/Constant1'
                                        */
  real_T Constant_Value_h;             /* Expression: 50
                                        * Referenced by: '<S50>/Constant'
                                        */
  real_T Constant3_Value_k3;           /* Expression: 100
                                        * Referenced by: '<S50>/Constant3'
                                        */
  real_T Constant2_Value_h;            /* Expression: 182
                                        * Referenced by: '<S50>/Constant2'
                                        */
  uint32_T UD_DelayLength;             /* Computed Parameter: UD_DelayLength
                                        * Referenced by: '<S35>/UD'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Asgardus_Challenge_T {
  const char_T *errorStatus;

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
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (auto storage) */
extern P_Asgardus_Challenge_T Asgardus_Challenge_P;

/* Block signals (auto storage) */
extern B_Asgardus_Challenge_T Asgardus_Challenge_B;

/* Block states (auto storage) */
extern DW_Asgardus_Challenge_T Asgardus_Challenge_DW;

/* Model entry point functions */
extern void Asgardus_Challenge_initialize(void);
extern void Asgardus_Challenge_output(void);
extern void Asgardus_Challenge_update(void);
extern void Asgardus_Challenge_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Asgardus_Challenge_T *const Asgardus_Challenge_M;

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
 * '<Root>' : 'Asgardus_Challenge'
 * '<S1>'   : 'Asgardus_Challenge/ACC'
 * '<S2>'   : 'Asgardus_Challenge/ANGRATE'
 * '<S3>'   : 'Asgardus_Challenge/CAN_TYPE1_SETUP_M1_C1'
 * '<S4>'   : 'Asgardus_Challenge/Control Algorithm'
 * '<S5>'   : 'Asgardus_Challenge/RTI Data'
 * '<S6>'   : 'Asgardus_Challenge/SIMSTATE'
 * '<S7>'   : 'Asgardus_Challenge/STEERING_CMD'
 * '<S8>'   : 'Asgardus_Challenge/TORQUE_ACT'
 * '<S9>'   : 'Asgardus_Challenge/TORQUE_CMD'
 * '<S10>'  : 'Asgardus_Challenge/VEL'
 * '<S11>'  : 'Asgardus_Challenge/WHEELSPEED'
 * '<S12>'  : 'Asgardus_Challenge/Control Algorithm/Control'
 * '<S13>'  : 'Asgardus_Challenge/Control Algorithm/Sim State check '
 * '<S14>'  : 'Asgardus_Challenge/Control Algorithm/Tire Forces from FMU data'
 * '<S15>'  : 'Asgardus_Challenge/Control Algorithm/Track Segment Identifier'
 * '<S16>'  : 'Asgardus_Challenge/Control Algorithm/XY Graph'
 * '<S17>'  : 'Asgardus_Challenge/Control Algorithm/Control/Compare To Constant'
 * '<S18>'  : 'Asgardus_Challenge/Control Algorithm/Control/Compare To Constant1'
 * '<S19>'  : 'Asgardus_Challenge/Control Algorithm/Control/Compare To Constant2'
 * '<S20>'  : 'Asgardus_Challenge/Control Algorithm/Control/Compare To Constant3'
 * '<S21>'  : 'Asgardus_Challenge/Control Algorithm/Control/Compare To Constant4'
 * '<S22>'  : 'Asgardus_Challenge/Control Algorithm/Control/Compare To Constant5'
 * '<S23>'  : 'Asgardus_Challenge/Control Algorithm/Control/Drift generate'
 * '<S24>'  : 'Asgardus_Challenge/Control Algorithm/Control/Drift sustain'
 * '<S25>'  : 'Asgardus_Challenge/Control Algorithm/Control/Normal Driving'
 * '<S26>'  : 'Asgardus_Challenge/Control Algorithm/Control/Drift generate/Discrete PID Controller1'
 * '<S27>'  : 'Asgardus_Challenge/Control Algorithm/Control/Drift generate/Max wheel force'
 * '<S28>'  : 'Asgardus_Challenge/Control Algorithm/Control/Drift generate/Max wheel force/Wheel Traction control'
 * '<S29>'  : 'Asgardus_Challenge/Control Algorithm/Control/Drift sustain/Discrete PID Controller'
 * '<S30>'  : 'Asgardus_Challenge/Control Algorithm/Control/Drift sustain/Discrete PID Controller5'
 * '<S31>'  : 'Asgardus_Challenge/Control Algorithm/Control/Drift sustain/Discrete PID Controller5/Differentiator'
 * '<S32>'  : 'Asgardus_Challenge/Control Algorithm/Control/Normal Driving/Discrete PID Controller1'
 * '<S33>'  : 'Asgardus_Challenge/Control Algorithm/Control/Normal Driving/Discrete PID Controller2'
 * '<S34>'  : 'Asgardus_Challenge/Control Algorithm/Control/Normal Driving/Wheel ESP'
 * '<S35>'  : 'Asgardus_Challenge/Control Algorithm/Control/Normal Driving/Discrete PID Controller1/Differentiator'
 * '<S36>'  : 'Asgardus_Challenge/Control Algorithm/Control/Normal Driving/Wheel ESP/Saturation Dynamic'
 * '<S37>'  : 'Asgardus_Challenge/Control Algorithm/Control/Normal Driving/Wheel ESP/Saturation Dynamic1'
 * '<S38>'  : 'Asgardus_Challenge/Control Algorithm/Control/Normal Driving/Wheel ESP/Saturation Dynamic2'
 * '<S39>'  : 'Asgardus_Challenge/Control Algorithm/Control/Normal Driving/Wheel ESP/Saturation Dynamic3'
 * '<S40>'  : 'Asgardus_Challenge/Control Algorithm/Sim State check /Compare To Constant'
 * '<S41>'  : 'Asgardus_Challenge/Control Algorithm/Tire Forces from FMU data/Tire Vertical Load'
 * '<S42>'  : 'Asgardus_Challenge/Control Algorithm/Tire Forces from FMU data/Wheels1'
 * '<S43>'  : 'Asgardus_Challenge/Control Algorithm/Tire Forces from FMU data/Wheels1/wheel_1'
 * '<S44>'  : 'Asgardus_Challenge/Control Algorithm/Tire Forces from FMU data/Wheels1/wheel_2'
 * '<S45>'  : 'Asgardus_Challenge/Control Algorithm/Tire Forces from FMU data/Wheels1/wheel_3'
 * '<S46>'  : 'Asgardus_Challenge/Control Algorithm/Tire Forces from FMU data/Wheels1/wheel_4'
 * '<S47>'  : 'Asgardus_Challenge/Control Algorithm/Track Segment Identifier/1 if in first straight'
 * '<S48>'  : 'Asgardus_Challenge/Control Algorithm/Track Segment Identifier/1 if in first turn'
 * '<S49>'  : 'Asgardus_Challenge/Control Algorithm/Track Segment Identifier/1 if in last straight'
 * '<S50>'  : 'Asgardus_Challenge/Control Algorithm/Track Segment Identifier/1 if in second turn'
 * '<S51>'  : 'Asgardus_Challenge/Control Algorithm/Track Segment Identifier/1 if in transition phase'
 * '<S52>'  : 'Asgardus_Challenge/Control Algorithm/Track Segment Identifier/1 if in first straight/Check  Dynamic Range'
 * '<S53>'  : 'Asgardus_Challenge/Control Algorithm/Track Segment Identifier/1 if in first straight/Check  Dynamic Range1'
 * '<S54>'  : 'Asgardus_Challenge/Control Algorithm/Track Segment Identifier/1 if in first turn/Check  Dynamic Range'
 * '<S55>'  : 'Asgardus_Challenge/Control Algorithm/Track Segment Identifier/1 if in first turn/Check  Dynamic Range1'
 * '<S56>'  : 'Asgardus_Challenge/Control Algorithm/Track Segment Identifier/1 if in last straight/Check  Dynamic Range'
 * '<S57>'  : 'Asgardus_Challenge/Control Algorithm/Track Segment Identifier/1 if in last straight/Check  Dynamic Range1'
 * '<S58>'  : 'Asgardus_Challenge/Control Algorithm/Track Segment Identifier/1 if in second turn/Check  Dynamic Range'
 * '<S59>'  : 'Asgardus_Challenge/Control Algorithm/Track Segment Identifier/1 if in second turn/Check  Dynamic Range1'
 * '<S60>'  : 'Asgardus_Challenge/Control Algorithm/Track Segment Identifier/1 if in transition phase/Check  Dynamic Range'
 * '<S61>'  : 'Asgardus_Challenge/Control Algorithm/Track Segment Identifier/1 if in transition phase/Check  Dynamic Range1'
 * '<S62>'  : 'Asgardus_Challenge/RTI Data/RTI Data Store'
 * '<S63>'  : 'Asgardus_Challenge/RTI Data/RTI Data Store/RTI Data Store'
 * '<S64>'  : 'Asgardus_Challenge/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 */
#endif                                 /* RTW_HEADER_Asgardus_Challenge_h_ */
