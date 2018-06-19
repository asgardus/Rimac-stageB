

    /*
  * solution1_7009_CAN_data.c
  *
    * Academic License - for use in teaching, academic research, and meeting
* course requirements at degree granting institutions only.  Not for
* government, commercial, or other organizational use. 
  * 
  * Code generation for model "solution1_7009_CAN".
  *
  * Model version              : 1.196
  * Simulink Coder version : 8.13 (R2017b) 24-Jul-2017
  * C source code generated on : Tue Jun 19 13:11:40 2018
 * 
 * Target selection: rti1401.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
  */


    

      #include "solution1_7009_CAN.h"

      #include "solution1_7009_CAN_private.h"



  

  

  

  

  

  

  

  

  

      /* Block parameters (auto storage) */
                 P_solution1_7009_CAN_T solution1_7009_CAN_P = {
            
    
            /* Mask Parameter: DiscretePIDController1_D
  * Referenced by: '<S33>/Derivative Gain'
   */
1.0, 


    
    
            /* Mask Parameter: DiscretePIDController2_D
  * Referenced by: '<S34>/Derivative Gain'
   */
1.0, 


    
    
            /* Mask Parameter: DiscretePIDController1_I
  * Referenced by: '<S33>/Integral Gain'
   */
0.0, 


    
    
            /* Mask Parameter: DiscretePIDController2_I
  * Referenced by: '<S34>/Integral Gain'
   */
0.0, 


    
    
            /* Mask Parameter: DiscretePIDController2_N
  * Referenced by: '<S34>/Filter Coefficient'
   */
100.0, 


    
    
            /* Mask Parameter: DiscretePIDController1_P
  * Referenced by: '<S33>/Proportional Gain'
   */
100.0, 


    
    
            /* Mask Parameter: DiscretePIDController2_P
  * Referenced by: '<S34>/Proportional Gain'
   */
1.0, 


    
    
            /* Mask Parameter: CompareToConstant_const
  * Referenced by: '<S13>/Constant'
   */
-1.0, 


    
    
            /* Expression: 1
  * Referenced by: '<S4>/Constant1'
   */
1.0, 


    
    
            /* Expression: 0
  * Referenced by: '<S4>/Constant2'
   */
0.0, 


    
    
            /* Expression: 18
  * Referenced by: '<S26>/Constant'
   */
18.0, 


    
    
            /* Expression: 15
  * Referenced by: '<S26>/Constant1'
   */
15.0, 


    
    
            /* Computed Parameter: TSamp_WtEt
  * Referenced by: '<S36>/TSamp'
   */
100.0, 


    
    
            /* Expression: DifferentiatorICPrevScaledInput
  * Referenced by: '<S36>/UD'
   */
0.0, 


    
    
            /* Computed Parameter: Integrator_gainval
  * Referenced by: '<S33>/Integrator'
   */
0.01, 


    
    
            /* Expression: InitialConditionForIntegrator
  * Referenced by: '<S33>/Integrator'
   */
0.0, 


    
    
            /* Expression: 0
  * Referenced by: '<S26>/Constant3'
   */
0.0, 


    
    
            /* Computed Parameter: Filter_gainval
  * Referenced by: '<S34>/Filter'
   */
0.01, 


    
    
            /* Expression: InitialConditionForFilter
  * Referenced by: '<S34>/Filter'
   */
0.0, 


    
    
            /* Computed Parameter: Integrator_gainval_e
  * Referenced by: '<S34>/Integrator'
   */
0.01, 


    
    
            /* Expression: InitialConditionForIntegrator
  * Referenced by: '<S34>/Integrator'
   */
0.0, 


    
    
            /* Expression: 0
  * Referenced by: '<S4>/Constant'
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


    
    
            /* Expression: 0
  * Referenced by: '<S4>/Unit Delay'
   */
0.0, 


    
    
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


    
    
            /* Expression: 1
  * Referenced by: '<Root>/IC'
   */
1.0, 


    
    
            /* Computed Parameter: UD_DelayLength
  * Referenced by: '<S36>/UD'
   */
1U





      };

     
  



  

  

  

  

  

  

  

  

  
