

    /*
  * solution1_7009_CAN.h
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


  #ifndef RTW_HEADER_solution1_7009_CAN_h_
  #define RTW_HEADER_solution1_7009_CAN_h_
  
    

  
#include <string.h>
    #ifndef solution1_7009_CAN_COMMON_INCLUDES_
  # define solution1_7009_CAN_COMMON_INCLUDES_
    #include <brtenv.h>
    #include <rtkernel.h>
    #include <rti_assert.h>
    #include <rtidefineddatatypes.h>
    #include <rtican_ds1401.h>
    #include "rtwtypes.h"
      #include "rtw_continuous.h"
      #include "rtw_solver.h"
  #endif /* solution1_7009_CAN_COMMON_INCLUDES_ */
  

    #include "solution1_7009_CAN_types.h"    
        
    /* Shared type includes */
          #include "multiword_types.h"

    

  
  

  

  

  
    /* Macros for accessing real-time model data structure */
    

    #ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm) ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm) ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm) (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm) ((rtm)->Timing.taskTime0)
#endif


  
   
    
    
      


  

  

  

  

              /* Block signals (auto storage) */
                  
          
  
     typedef struct   {
  
      



        
          
          
            
          
            

                     real_T SFunction1_o1; /* '<S1>/S-Function1' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T SFunction1_o2; /* '<S1>/S-Function1' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T SFunction1_o3; /* '<S1>/S-Function1' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T SFunction1_o4; /* '<S1>/S-Function1' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T SFunction1_o1_k; /* '<S2>/S-Function1' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T SFunction1_o2_g; /* '<S2>/S-Function1' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T SFunction1_o3_g; /* '<S2>/S-Function1' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T SFunction1_o1_h; /* '<S11>/S-Function1' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T SFunction1_o2_p; /* '<S11>/S-Function1' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T SFunction1_o3_l; /* '<S11>/S-Function1' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T SFunction1_o4_k; /* '<S11>/S-Function1' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T SFunction1_o1_d; /* '<S6>/S-Function1' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T SFunction1_o2_l; /* '<S6>/S-Function1' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T SFunction1_o3_o; /* '<S6>/S-Function1' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T Product; /* '<S4>/Product' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T Product1; /* '<S4>/Product1' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T Product2; /* '<S4>/Product2' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T Product3; /* '<S4>/Product3' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T Product4; /* '<S4>/Product4' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T Switch; /* '<S4>/Switch' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T IC; /* '<Root>/IC' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T SFunction1; /* '<S7>/S-Function1' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T SFunction1_o; /* '<S8>/S-Function1' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T SFunction1_o1_ht; /* '<S9>/S-Function1' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T SFunction1_o2_c; /* '<S9>/S-Function1' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T SFunction1_o3_oh; /* '<S9>/S-Function1' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T SFunction1_o4_d; /* '<S9>/S-Function1' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T SFunction1_o1_l; /* '<S10>/S-Function1' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T SFunction1_o2_e; /* '<S10>/S-Function1' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T SFunction1_o3_c; /* '<S10>/S-Function1' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T SFunction1_o4_i; /* '<S10>/S-Function1' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T SFunction1_o1_b; /* '<S12>/S-Function1' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T SFunction1_o2_o; /* '<S12>/S-Function1' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T SFunction1_o3_i; /* '<S12>/S-Function1' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T SFunction1_o4_b; /* '<S12>/S-Function1' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T TSamp; /* '<S36>/TSamp' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T IntegralGain; /* '<S33>/Integral Gain' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T FilterCoefficient; /* '<S34>/Filter Coefficient' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T IntegralGain_j; /* '<S34>/Integral Gain' */
                          

          
          
	  
                  
      



  }    B_solution1_7009_CAN_T;
  

        
              
          /* Block states (auto storage) for system '<Root>' */
              
        
  
     typedef struct   {
  
      



        
          
          
            
          
            

                     real_T UnitDelay_DSTATE; /* '<S4>/Unit Delay' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T UD_DSTATE; /* '<S36>/UD' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T Integrator_DSTATE; /* '<S33>/Integrator' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T Filter_DSTATE; /* '<S34>/Filter' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T Integrator_DSTATE_g; /* '<S34>/Integrator' */
                          

          
          
	  



        
          
          
            
          
            

                     real_T PrevY; /* '<S4>/Rate Limiter' */
                          

          
          
	  



        
          
          
            
                        int_T SFunction1_IWORK[2];    /* '<S3>/S-Function1' */


          
          
	  



        
          
          
            
          
            

                     boolean_T IC_FirstOutputTime; /* '<Root>/IC' */
                          

          
          
	  
                  
      



  }    DW_solution1_7009_CAN_T;
  

      
        
      
            /* Parameters (auto storage) */
      
        struct P_solution1_7009_CAN_T_ {
          
      



        
          
          
            
          
            

                     real_T DiscretePIDController1_D; /* Mask Parameter: DiscretePIDController1_D
  * Referenced by: '<S33>/Derivative Gain'
   */
                          

          
          
	  



        
          
          
            
          
            

                     real_T DiscretePIDController2_D; /* Mask Parameter: DiscretePIDController2_D
  * Referenced by: '<S34>/Derivative Gain'
   */
                          

          
          
	  



        
          
          
            
          
            

                     real_T DiscretePIDController1_I; /* Mask Parameter: DiscretePIDController1_I
  * Referenced by: '<S33>/Integral Gain'
   */
                          

          
          
	  



        
          
          
            
          
            

                     real_T DiscretePIDController2_I; /* Mask Parameter: DiscretePIDController2_I
  * Referenced by: '<S34>/Integral Gain'
   */
                          

          
          
	  



        
          
          
            
          
            

                     real_T DiscretePIDController2_N; /* Mask Parameter: DiscretePIDController2_N
  * Referenced by: '<S34>/Filter Coefficient'
   */
                          

          
          
	  



        
          
          
            
          
            

                     real_T DiscretePIDController1_P; /* Mask Parameter: DiscretePIDController1_P
  * Referenced by: '<S33>/Proportional Gain'
   */
                          

          
          
	  



        
          
          
            
          
            

                     real_T DiscretePIDController2_P; /* Mask Parameter: DiscretePIDController2_P
  * Referenced by: '<S34>/Proportional Gain'
   */
                          

          
          
	  



        
          
          
            
          
            

                     real_T CompareToConstant_const; /* Mask Parameter: CompareToConstant_const
  * Referenced by: '<S13>/Constant'
   */
                          

          
          
	  



        
          
          
            
          
            

                     real_T Constant1_Value; /* Expression: 1
  * Referenced by: '<S4>/Constant1'
   */
                          

          
          
	  



        
          
          
            
          
            

                     real_T Constant2_Value; /* Expression: 0
  * Referenced by: '<S4>/Constant2'
   */
                          

          
          
	  



        
          
          
            
          
            

                     real_T Constant_Value; /* Expression: 18
  * Referenced by: '<S26>/Constant'
   */
                          

          
          
	  



        
          
          
            
          
            

                     real_T Constant1_Value_h; /* Expression: 15
  * Referenced by: '<S26>/Constant1'
   */
                          

          
          
	  



        
          
          
            
          
            

                     real_T TSamp_WtEt; /* Computed Parameter: TSamp_WtEt
  * Referenced by: '<S36>/TSamp'
   */
                          

          
          
	  



        
          
          
            
          
            

                     real_T UD_InitialCondition; /* Expression: DifferentiatorICPrevScaledInput
  * Referenced by: '<S36>/UD'
   */
                          

          
          
	  



        
          
          
            
          
            

                     real_T Integrator_gainval; /* Computed Parameter: Integrator_gainval
  * Referenced by: '<S33>/Integrator'
   */
                          

          
          
	  



        
          
          
            
          
            

                     real_T Integrator_IC; /* Expression: InitialConditionForIntegrator
  * Referenced by: '<S33>/Integrator'
   */
                          

          
          
	  



        
          
          
            
          
            

                     real_T Constant3_Value; /* Expression: 0
  * Referenced by: '<S26>/Constant3'
   */
                          

          
          
	  



        
          
          
            
          
            

                     real_T Filter_gainval; /* Computed Parameter: Filter_gainval
  * Referenced by: '<S34>/Filter'
   */
                          

          
          
	  



        
          
          
            
          
            

                     real_T Filter_IC; /* Expression: InitialConditionForFilter
  * Referenced by: '<S34>/Filter'
   */
                          

          
          
	  



        
          
          
            
          
            

                     real_T Integrator_gainval_e; /* Computed Parameter: Integrator_gainval_e
  * Referenced by: '<S34>/Integrator'
   */
                          

          
          
	  



        
          
          
            
          
            

                     real_T Integrator_IC_k; /* Expression: InitialConditionForIntegrator
  * Referenced by: '<S34>/Integrator'
   */
                          

          
          
	  



        
          
          
            
          
            

                     real_T Constant_Value_g; /* Expression: 0
  * Referenced by: '<S4>/Constant'
   */
                          

          
          
	  



        
          
          
            
          
            

                     real_T Constant1_Value_d; /* Expression: 50
  * Referenced by: '<S48>/Constant1'
   */
                          

          
          
	  



        
          
          
            
          
            

                     real_T Constant_Value_l; /* Expression: 106
  * Referenced by: '<S48>/Constant'
   */
                          

          
          
	  



        
          
          
            
          
            

                     real_T Constant3_Value_o; /* Expression: -6
  * Referenced by: '<S48>/Constant3'
   */
                          

          
          
	  



        
          
          
            
          
            

                     real_T Constant2_Value_p; /* Expression: 106
  * Referenced by: '<S48>/Constant2'
   */
                          

          
          
	  



        
          
          
            
          
            

                     real_T Constant1_Value_l; /* Expression: 21
  * Referenced by: '<S51>/Constant1'
   */
                          

          
          
	  



        
          
          
            
          
            

                     real_T Constant_Value_e; /* Expression: 89.5
  * Referenced by: '<S51>/Constant'
   */
                          

          
          
	  



        
          
          
            
          
            

                     real_T Constant3_Value_n; /* Expression: 89.5
  * Referenced by: '<S51>/Constant3'
   */
                          

          
          
	  



        
          
          
            
          
            

                     real_T Constant2_Value_g; /* Expression: 106
  * Referenced by: '<S51>/Constant2'
   */
                          

          
          
	  



        
          
          
            
          
            

                     real_T UnitDelay_InitialCondition; /* Expression: 0
  * Referenced by: '<S4>/Unit Delay'
   */
                          

          
          
	  



        
          
          
            
          
            

                     real_T RateLimiter_RisingLim; /* Computed Parameter: RateLimiter_RisingLim
  * Referenced by: '<S4>/Rate Limiter'
   */
                          

          
          
	  



        
          
          
            
          
            

                     real_T RateLimiter_FallingLim; /* Computed Parameter: RateLimiter_FallingLim
  * Referenced by: '<S4>/Rate Limiter'
   */
                          

          
          
	  



        
          
          
            
          
            

                     real_T RateLimiter_IC; /* Expression: 0
  * Referenced by: '<S4>/Rate Limiter'
   */
                          

          
          
	  



        
          
          
            
          
            

                     real_T IC_Value; /* Expression: 1
  * Referenced by: '<Root>/IC'
   */
                          

          
          
	  



        
          
          
            
          
            

                     uint32_T UD_DelayLength; /* Computed Parameter: UD_DelayLength
  * Referenced by: '<S36>/UD'
   */
                          

          
          
	  
                  
      



        };
      
      

    


      /* Real-time Model Data Structure */
      
  struct tag_RTM_solution1_7009_CAN_T {
            const char_T *errorStatus;

              /*
     * Timing:
           * The following substructure contains information regarding
      * the timing information for the model.
      */
 
  struct  {
            time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    boolean_T stopRequestedFlag;



  } Timing;



  };
      
        
          


  

  

          

      /* Block parameters (auto storage) */
        extern         P_solution1_7009_CAN_T solution1_7009_CAN_P;



      
      /* Block signals (auto storage) */
        extern         B_solution1_7009_CAN_T solution1_7009_CAN_B;



      
        /* Block states (auto storage) */
        extern         DW_solution1_7009_CAN_T solution1_7009_CAN_DW;



    

  
      /* Model entry point functions */
            extern void solution1_7009_CAN_initialize(void);
          
        
                extern void solution1_7009_CAN_output(void);
                          extern void solution1_7009_CAN_update(void);
            
    
            extern void solution1_7009_CAN_terminate(void);
          


  

            
          /* Real-time Model object */
          
            extern             RT_MODEL_solution1_7009_CAN_T *const solution1_7009_CAN_M;



          


  

  

  

        
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
    * '<Root>' : 'solution1_7009_CAN'
      * '<S1>'   : 'solution1_7009_CAN/ACC'
      * '<S2>'   : 'solution1_7009_CAN/ANGRATE'
      * '<S3>'   : 'solution1_7009_CAN/CAN_TYPE1_SETUP_M1_C1'
      * '<S4>'   : 'solution1_7009_CAN/Control Algorithm'
      * '<S5>'   : 'solution1_7009_CAN/RTI Data'
      * '<S6>'   : 'solution1_7009_CAN/SIMSTATE'
      * '<S7>'   : 'solution1_7009_CAN/SIMSTATE1'
      * '<S8>'   : 'solution1_7009_CAN/STEERING_CMD'
      * '<S9>'   : 'solution1_7009_CAN/TORQUE_ACT'
      * '<S10>'  : 'solution1_7009_CAN/TORQUE_CMD'
      * '<S11>'  : 'solution1_7009_CAN/VEL'
      * '<S12>'  : 'solution1_7009_CAN/WHEELSPEED'
      * '<S13>'  : 'solution1_7009_CAN/Control Algorithm/Compare To Constant'
      * '<S14>'  : 'solution1_7009_CAN/Control Algorithm/Control'
      * '<S15>'  : 'solution1_7009_CAN/Control Algorithm/Tire Forces from FMU data'
      * '<S16>'  : 'solution1_7009_CAN/Control Algorithm/Track Segment Identifier'
      * '<S17>'  : 'solution1_7009_CAN/Control Algorithm/XY Graph'
      * '<S18>'  : 'solution1_7009_CAN/Control Algorithm/Control/Compare To Constant'
      * '<S19>'  : 'solution1_7009_CAN/Control Algorithm/Control/Compare To Constant1'
      * '<S20>'  : 'solution1_7009_CAN/Control Algorithm/Control/Compare To Constant2'
      * '<S21>'  : 'solution1_7009_CAN/Control Algorithm/Control/Compare To Constant3'
      * '<S22>'  : 'solution1_7009_CAN/Control Algorithm/Control/Compare To Constant4'
      * '<S23>'  : 'solution1_7009_CAN/Control Algorithm/Control/Compare To Constant5'
      * '<S24>'  : 'solution1_7009_CAN/Control Algorithm/Control/Drift generate'
      * '<S25>'  : 'solution1_7009_CAN/Control Algorithm/Control/Drift sustain'
      * '<S26>'  : 'solution1_7009_CAN/Control Algorithm/Control/Normal Driving'
      * '<S27>'  : 'solution1_7009_CAN/Control Algorithm/Control/Drift generate/Discrete PID Controller1'
      * '<S28>'  : 'solution1_7009_CAN/Control Algorithm/Control/Drift generate/Max wheel force'
      * '<S29>'  : 'solution1_7009_CAN/Control Algorithm/Control/Drift generate/Max wheel force/Wheel Traction control'
      * '<S30>'  : 'solution1_7009_CAN/Control Algorithm/Control/Drift sustain/Discrete PID Controller'
      * '<S31>'  : 'solution1_7009_CAN/Control Algorithm/Control/Drift sustain/Discrete PID Controller5'
      * '<S32>'  : 'solution1_7009_CAN/Control Algorithm/Control/Drift sustain/Discrete PID Controller5/Differentiator'
      * '<S33>'  : 'solution1_7009_CAN/Control Algorithm/Control/Normal Driving/Discrete PID Controller1'
      * '<S34>'  : 'solution1_7009_CAN/Control Algorithm/Control/Normal Driving/Discrete PID Controller2'
      * '<S35>'  : 'solution1_7009_CAN/Control Algorithm/Control/Normal Driving/Wheel ESP'
      * '<S36>'  : 'solution1_7009_CAN/Control Algorithm/Control/Normal Driving/Discrete PID Controller1/Differentiator'
      * '<S37>'  : 'solution1_7009_CAN/Control Algorithm/Control/Normal Driving/Wheel ESP/Saturation Dynamic'
      * '<S38>'  : 'solution1_7009_CAN/Control Algorithm/Control/Normal Driving/Wheel ESP/Saturation Dynamic1'
      * '<S39>'  : 'solution1_7009_CAN/Control Algorithm/Control/Normal Driving/Wheel ESP/Saturation Dynamic2'
      * '<S40>'  : 'solution1_7009_CAN/Control Algorithm/Control/Normal Driving/Wheel ESP/Saturation Dynamic3'
      * '<S41>'  : 'solution1_7009_CAN/Control Algorithm/Tire Forces from FMU data/Tire Vertical Load'
      * '<S42>'  : 'solution1_7009_CAN/Control Algorithm/Tire Forces from FMU data/Wheels1'
      * '<S43>'  : 'solution1_7009_CAN/Control Algorithm/Tire Forces from FMU data/Wheels1/wheel_1'
      * '<S44>'  : 'solution1_7009_CAN/Control Algorithm/Tire Forces from FMU data/Wheels1/wheel_2'
      * '<S45>'  : 'solution1_7009_CAN/Control Algorithm/Tire Forces from FMU data/Wheels1/wheel_3'
      * '<S46>'  : 'solution1_7009_CAN/Control Algorithm/Tire Forces from FMU data/Wheels1/wheel_4'
      * '<S47>'  : 'solution1_7009_CAN/Control Algorithm/Track Segment Identifier/1 if in first straight'
      * '<S48>'  : 'solution1_7009_CAN/Control Algorithm/Track Segment Identifier/1 if in first turn'
      * '<S49>'  : 'solution1_7009_CAN/Control Algorithm/Track Segment Identifier/1 if in last straight'
      * '<S50>'  : 'solution1_7009_CAN/Control Algorithm/Track Segment Identifier/1 if in second turn'
      * '<S51>'  : 'solution1_7009_CAN/Control Algorithm/Track Segment Identifier/1 if in transition phase'
      * '<S52>'  : 'solution1_7009_CAN/Control Algorithm/Track Segment Identifier/1 if in first straight/Check  Dynamic Range'
      * '<S53>'  : 'solution1_7009_CAN/Control Algorithm/Track Segment Identifier/1 if in first straight/Check  Dynamic Range1'
      * '<S54>'  : 'solution1_7009_CAN/Control Algorithm/Track Segment Identifier/1 if in first turn/Check  Dynamic Range'
      * '<S55>'  : 'solution1_7009_CAN/Control Algorithm/Track Segment Identifier/1 if in first turn/Check  Dynamic Range1'
      * '<S56>'  : 'solution1_7009_CAN/Control Algorithm/Track Segment Identifier/1 if in last straight/Check  Dynamic Range'
      * '<S57>'  : 'solution1_7009_CAN/Control Algorithm/Track Segment Identifier/1 if in last straight/Check  Dynamic Range1'
      * '<S58>'  : 'solution1_7009_CAN/Control Algorithm/Track Segment Identifier/1 if in second turn/Check  Dynamic Range'
      * '<S59>'  : 'solution1_7009_CAN/Control Algorithm/Track Segment Identifier/1 if in second turn/Check  Dynamic Range1'
      * '<S60>'  : 'solution1_7009_CAN/Control Algorithm/Track Segment Identifier/1 if in transition phase/Check  Dynamic Range'
      * '<S61>'  : 'solution1_7009_CAN/Control Algorithm/Track Segment Identifier/1 if in transition phase/Check  Dynamic Range1'
      * '<S62>'  : 'solution1_7009_CAN/RTI Data/RTI Data Store'
      * '<S63>'  : 'solution1_7009_CAN/RTI Data/RTI Data Store/RTI Data Store'
      * '<S64>'  : 'solution1_7009_CAN/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
   */


  

    #endif /* RTW_HEADER_solution1_7009_CAN_h_ */
