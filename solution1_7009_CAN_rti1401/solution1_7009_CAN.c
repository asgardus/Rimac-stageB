

    
  
    /*
    * solution1_7009_CAN.c
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


    

  #include "solution1_7009_CAN_trc_ptr.h"
      #include "solution1_7009_CAN.h"

        #include "solution1_7009_CAN_private.h"



  

  

  

  

  

  

  

  

  

    
    

  
    
    /* Block signals (auto storage) */
                  B_solution1_7009_CAN_T solution1_7009_CAN_B;

      
  
      
    
    
    
    
    
    
    
      /* Block states (auto storage) */
                  DW_solution1_7009_CAN_T solution1_7009_CAN_DW;

      
  
        /* Real-time model */
            RT_MODEL_solution1_7009_CAN_T solution1_7009_CAN_M_;

          RT_MODEL_solution1_7009_CAN_T *const solution1_7009_CAN_M = &solution1_7009_CAN_M_;



  

  

  

  

    
  
  
        
    
    
    
    

    
    


  
        
        
          
    /* Model output function */
            void solution1_7009_CAN_output(void) 
    {
      
    
    
        
      
      real_T rtb_Sum;
real_T rtb_offset_error;


      

        
  

     
        
  

                                  

    
 
    

    
 
/* S-Function (rti_commonblock): '<S1>/S-Function1' */
                /* This comment workarounds a code generation problem */
      
      

  
/* dSPACE RTICAN RX Message Block: "ACC" Id:4 */
{
         UInt32 *CAN_Msg;
      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X4]);
      /* Convert timestamp */
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X4]->processed) {
        can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X4]->timestamp = rtk_dsts_time_to_simtime_convert(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X4]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X4]->timestamp > 0.0) {
          if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X4]->processed){
            
            CAN_Msg = can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X4]->data;
            /* ... Decode CAN Message */
            

         
         
         {
           rtican_Signal_t CAN_Sgn;
           

               /* ...... "ACC_X" (0|16, standard signal, signed int, little endian) */
                         CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.SignedSgn &= 0x0000FFFF;
      if (CAN_Sgn.SignedSgn >> 15) {
         CAN_Sgn.SignedSgn |= 0xFFFF0000;
      }
    solution1_7009_CAN_B.SFunction1_o1 = 0.0006 * ( ((real_T) CAN_Sgn.SignedSgn) );

               /* ...... "ACC_Y" (16|16, standard signal, signed int, little endian) */
                         CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.SignedSgn &= 0x0000FFFF;
      if (CAN_Sgn.SignedSgn >> 15) {
         CAN_Sgn.SignedSgn |= 0xFFFF0000;
      }
    solution1_7009_CAN_B.SFunction1_o2 = 0.0006 * ( ((real_T) CAN_Sgn.SignedSgn) );

               /* ...... "ACC_Z" (32|16, standard signal, signed int, little endian) */
                         CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.SignedSgn &= 0x0000FFFF;
      if (CAN_Sgn.SignedSgn >> 15) {
         CAN_Sgn.SignedSgn |= 0xFFFF0000;
      }
    solution1_7009_CAN_B.SFunction1_o3 = 0.0006 * ( ((real_T) CAN_Sgn.SignedSgn) );

               /* ...... "POS_Y" (48|16, standard signal, signed int, little endian) */
                         CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
          CAN_Sgn.SignedSgn &= 0x0000FFFF;
      if (CAN_Sgn.SignedSgn >> 15) {
         CAN_Sgn.SignedSgn |= 0xFFFF0000;
      }
    solution1_7009_CAN_B.SFunction1_o4 = 0.005 * ( ((real_T) CAN_Sgn.SignedSgn) );

           }

          }
      }
}


 
   
  
/* S-Function (rti_commonblock): '<S2>/S-Function1' */
                /* This comment workarounds a code generation problem */
      
      

  
/* dSPACE RTICAN RX Message Block: "ANGRATE" Id:5 */
{
         UInt32 *CAN_Msg;
      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X5]);
      /* Convert timestamp */
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X5]->processed) {
        can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X5]->timestamp = rtk_dsts_time_to_simtime_convert(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X5]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X5]->timestamp > 0.0) {
          if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X5]->processed){
            
            CAN_Msg = can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X5]->data;
            /* ... Decode CAN Message */
            

         
         
         {
           rtican_Signal_t CAN_Sgn;
           

               /* ...... "ANGRATE_PITCH" (0|16, standard signal, signed int, little endian) */
                         CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.SignedSgn &= 0x0000FFFF;
      if (CAN_Sgn.SignedSgn >> 15) {
         CAN_Sgn.SignedSgn |= 0xFFFF0000;
      }
    solution1_7009_CAN_B.SFunction1_o1_k = 0.001 * ( ((real_T) CAN_Sgn.SignedSgn) );

               /* ...... "ANGRATE_YAW" (16|16, standard signal, signed int, little endian) */
                         CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.SignedSgn &= 0x0000FFFF;
      if (CAN_Sgn.SignedSgn >> 15) {
         CAN_Sgn.SignedSgn |= 0xFFFF0000;
      }
    solution1_7009_CAN_B.SFunction1_o2_g = 0.001 * ( ((real_T) CAN_Sgn.SignedSgn) );

               /* ...... "ANGRATE_ROLL" (32|16, standard signal, signed int, little endian) */
                         CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.SignedSgn &= 0x0000FFFF;
      if (CAN_Sgn.SignedSgn >> 15) {
         CAN_Sgn.SignedSgn |= 0xFFFF0000;
      }
    solution1_7009_CAN_B.SFunction1_o3_g = 0.001 * ( ((real_T) CAN_Sgn.SignedSgn) );

           }

          }
      }
}


 
   
  
/* S-Function (rti_commonblock): '<S11>/S-Function1' */
                /* This comment workarounds a code generation problem */
      
      

  
/* dSPACE RTICAN RX Message Block: "VEL" Id:3 */
{
         UInt32 *CAN_Msg;
      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X3]);
      /* Convert timestamp */
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X3]->processed) {
        can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X3]->timestamp = rtk_dsts_time_to_simtime_convert(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X3]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X3]->timestamp > 0.0) {
          if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X3]->processed){
            
            CAN_Msg = can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X3]->data;
            /* ... Decode CAN Message */
            

         
         
         {
           rtican_Signal_t CAN_Sgn;
           

               /* ...... "VEL_X" (0|16, standard signal, signed int, little endian) */
                         CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.SignedSgn &= 0x0000FFFF;
      if (CAN_Sgn.SignedSgn >> 15) {
         CAN_Sgn.SignedSgn |= 0xFFFF0000;
      }
    solution1_7009_CAN_B.SFunction1_o1_h = 0.002 * ( ((real_T) CAN_Sgn.SignedSgn) );

               /* ...... "VEL_Y" (16|16, standard signal, signed int, little endian) */
                         CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.SignedSgn &= 0x0000FFFF;
      if (CAN_Sgn.SignedSgn >> 15) {
         CAN_Sgn.SignedSgn |= 0xFFFF0000;
      }
    solution1_7009_CAN_B.SFunction1_o2_p = 0.002 * ( ((real_T) CAN_Sgn.SignedSgn) );

               /* ...... "VEL_Z" (32|16, standard signal, signed int, little endian) */
                         CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.SignedSgn &= 0x0000FFFF;
      if (CAN_Sgn.SignedSgn >> 15) {
         CAN_Sgn.SignedSgn |= 0xFFFF0000;
      }
    solution1_7009_CAN_B.SFunction1_o3_l = 0.002 * ( ((real_T) CAN_Sgn.SignedSgn) );

               /* ...... "POS_X" (48|16, standard signal, signed int, little endian) */
                         CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
          CAN_Sgn.SignedSgn &= 0x0000FFFF;
      if (CAN_Sgn.SignedSgn >> 15) {
         CAN_Sgn.SignedSgn |= 0xFFFF0000;
      }
    solution1_7009_CAN_B.SFunction1_o4_k = 0.005 * ( ((real_T) CAN_Sgn.SignedSgn) );

           }

          }
      }
}


 
   
  
/* S-Function (rti_commonblock): '<S6>/S-Function1' */
                /* This comment workarounds a code generation problem */
      
      

  
/* dSPACE RTICAN RX Message Block: "SIMSTATE" Id:8 */
{
         UInt32 *CAN_Msg;
      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X8]);
      /* Convert timestamp */
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X8]->processed) {
        can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X8]->timestamp = rtk_dsts_time_to_simtime_convert(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X8]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X8]->timestamp > 0.0) {
          if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X8]->processed){
            
            CAN_Msg = can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X8]->data;
            /* ... Decode CAN Message */
            

         
         
         {
           rtican_Signal_t CAN_Sgn;
           

               /* ...... "FUNCTION_REWARD" (0|16, standard signal, unsigned int, little endian) */
                         CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
    solution1_7009_CAN_B.SFunction1_o1_d = 0.015 * ( ((real_T) CAN_Sgn.UnsignedSgn) );

               /* ...... "OFFSET_LATERAL" (16|8, standard signal, signed int, little endian) */
                         CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SignedSgn &= 0x000000FF;
      if (CAN_Sgn.SignedSgn >> 7) {
         CAN_Sgn.SignedSgn |= 0xFFFFFF00;
      }
    solution1_7009_CAN_B.SFunction1_o2_l = 0.05 * ( ((real_T) CAN_Sgn.SignedSgn) );

               /* ...... "SIMULATION_STATE" (24|2, standard signal, signed int, little endian) */
                         CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.SignedSgn &= 0x00000003;
      if (CAN_Sgn.SignedSgn >> 1) {
         CAN_Sgn.SignedSgn |= 0xFFFFFFFC;
      }
    solution1_7009_CAN_B.SFunction1_o3_o = ((real_T) CAN_Sgn.SignedSgn);

           }

          }
      }
}


 
   
  
/* Outputs for Atomic SubSystem: '<S4>/Control' */
/* Switch: '<S26>/Switch1' incorporates:
 *  Constant: '<S26>/Constant'
 *  Constant: '<S26>/Constant1'
 *  Constant: '<S48>/Constant'
 *  Constant: '<S48>/Constant1'
 *  Constant: '<S48>/Constant2'
 *  Constant: '<S48>/Constant3'
 *  Constant: '<S51>/Constant'
 *  Constant: '<S51>/Constant1'
 *  Constant: '<S51>/Constant2'
 *  Constant: '<S51>/Constant3'
 *  Logic: '<S26>/Logical Operator1'
 *  Logic: '<S48>/Logical Operator'
 *  Logic: '<S51>/Logical Operator'
 *  Logic: '<S54>/conjunction'
 *  Logic: '<S55>/conjunction'
 *  Logic: '<S60>/conjunction'
 *  Logic: '<S61>/conjunction'
 *  RelationalOperator: '<S54>/max_relop'
 *  RelationalOperator: '<S54>/min_relop'
 *  RelationalOperator: '<S55>/max_relop'
 *  RelationalOperator: '<S55>/min_relop'
 *  RelationalOperator: '<S60>/max_relop'
 *  RelationalOperator: '<S60>/min_relop'
 *  RelationalOperator: '<S61>/max_relop'
 *  RelationalOperator: '<S61>/min_relop'
 */
if ((solution1_7009_CAN_P.Constant1_Value_l < solution1_7009_CAN_B.SFunction1_o4_k) && (solution1_7009_CAN_B.SFunction1_o4_k < solution1_7009_CAN_P.Constant_Value_e) && ((solution1_7009_CAN_P.Constant3_Value_n < solution1_7009_CAN_B.SFunction1_o4) && (solution1_7009_CAN_B.SFunction1_o4 < solution1_7009_CAN_P.Constant2_Value_g)) && ((solution1_7009_CAN_P.Constant1_Value_d < solution1_7009_CAN_B.SFunction1_o4_k) && (solution1_7009_CAN_B.SFunction1_o4_k < solution1_7009_CAN_P.Constant_Value_l) && ((solution1_7009_CAN_P.Constant3_Value_o < solution1_7009_CAN_B.SFunction1_o4) && (solution1_7009_CAN_B.SFunction1_o4 < solution1_7009_CAN_P.Constant2_Value_p)))) {
    rtb_offset_error = solution1_7009_CAN_P.Constant1_Value_h;
} else {
    rtb_offset_error = solution1_7009_CAN_P.Constant_Value;
}
/* End of Switch: '<S26>/Switch1' */

/* Sum: '<S26>/Subtract1' */
rtb_offset_error -= solution1_7009_CAN_B.SFunction1_o1_h;
/* SampleTimeMath: '<S36>/TSamp' incorporates:
 *  Gain: '<S33>/Derivative Gain'
 *
 * About '<S36>/TSamp':
 *  y = u * K where K = 1 / ( w * Ts )
 */
solution1_7009_CAN_B.TSamp = solution1_7009_CAN_P.DiscretePIDController1_D * rtb_offset_error * solution1_7009_CAN_P.TSamp_WtEt;
/* Gain: '<S33>/Integral Gain' */
solution1_7009_CAN_B.IntegralGain = solution1_7009_CAN_P.DiscretePIDController1_I * rtb_offset_error;
/* Sum: '<S33>/Sum' incorporates:
 *  Delay: '<S36>/UD'
 *  DiscreteIntegrator: '<S33>/Integrator'
 *  Gain: '<S33>/Proportional Gain'
 *  Sum: '<S36>/Diff'
 */
rtb_Sum = (solution1_7009_CAN_P.DiscretePIDController1_P * rtb_offset_error + solution1_7009_CAN_DW.Integrator_DSTATE) + (solution1_7009_CAN_B.TSamp - solution1_7009_CAN_DW.UD_DSTATE);
/* Sum: '<S26>/Subtract2' incorporates:
 *  Constant: '<S26>/Constant3'
 */
rtb_offset_error = solution1_7009_CAN_P.Constant3_Value - solution1_7009_CAN_B.SFunction1_o2_l;
/* Gain: '<S34>/Filter Coefficient' incorporates:
 *  DiscreteIntegrator: '<S34>/Filter'
 *  Gain: '<S34>/Derivative Gain'
 *  Sum: '<S34>/SumD'
 */
solution1_7009_CAN_B.FilterCoefficient = (solution1_7009_CAN_P.DiscretePIDController2_D * rtb_offset_error - solution1_7009_CAN_DW.Filter_DSTATE) * solution1_7009_CAN_P.DiscretePIDController2_N;
/* Gain: '<S34>/Integral Gain' */
solution1_7009_CAN_B.IntegralGain_j = solution1_7009_CAN_P.DiscretePIDController2_I * rtb_offset_error;
/* Sum: '<S34>/Sum' incorporates:
 *  DiscreteIntegrator: '<S34>/Integrator'
 *  Gain: '<S34>/Proportional Gain'
 */
rtb_offset_error = (solution1_7009_CAN_P.DiscretePIDController2_P * rtb_offset_error + solution1_7009_CAN_DW.Integrator_DSTATE_g) + solution1_7009_CAN_B.FilterCoefficient;
/* End of Outputs for SubSystem: '<S4>/Control' */

/* Product: '<S4>/Product' incorporates:
 *  Product: '<S4>/Product1'
 *  UnitDelay: '<S4>/Unit Delay'
 */
rtb_Sum *= solution1_7009_CAN_DW.UnitDelay_DSTATE;
solution1_7009_CAN_B.Product = rtb_Sum;
/* Product: '<S4>/Product1' */
solution1_7009_CAN_B.Product1 = rtb_Sum;
/* Product: '<S4>/Product2' incorporates:
 *  Constant: '<S4>/Constant'
 *  Product: '<S4>/Product3'
 *  UnitDelay: '<S4>/Unit Delay'
 */
rtb_Sum = solution1_7009_CAN_P.Constant_Value_g * solution1_7009_CAN_DW.UnitDelay_DSTATE;
solution1_7009_CAN_B.Product2 = rtb_Sum;
/* Product: '<S4>/Product3' */
solution1_7009_CAN_B.Product3 = rtb_Sum;
/* RateLimiter: '<S4>/Rate Limiter' */
rtb_Sum = rtb_offset_error - solution1_7009_CAN_DW.PrevY;
if (rtb_Sum > solution1_7009_CAN_P.RateLimiter_RisingLim) {
    rtb_Sum = solution1_7009_CAN_DW.PrevY + solution1_7009_CAN_P.RateLimiter_RisingLim;
} else if (rtb_Sum < solution1_7009_CAN_P.RateLimiter_FallingLim) {
    rtb_Sum = solution1_7009_CAN_DW.PrevY + solution1_7009_CAN_P.RateLimiter_FallingLim;
} else {
    rtb_Sum = rtb_offset_error;
}
solution1_7009_CAN_DW.PrevY = rtb_Sum;
/* End of RateLimiter: '<S4>/Rate Limiter' */

/* Product: '<S4>/Product4' incorporates:
 *  UnitDelay: '<S4>/Unit Delay'
 */
solution1_7009_CAN_B.Product4 = rtb_Sum * solution1_7009_CAN_DW.UnitDelay_DSTATE;
/* Switch: '<S4>/Switch' incorporates:
 *  Constant: '<S13>/Constant'
 *  Constant: '<S4>/Constant1'
 *  Constant: '<S4>/Constant2'
 *  RelationalOperator: '<S13>/Compare'
 */
if (solution1_7009_CAN_B.SFunction1_o3_o == solution1_7009_CAN_P.CompareToConstant_const) {
    solution1_7009_CAN_B.Switch = solution1_7009_CAN_P.Constant2_Value;
} else {
    solution1_7009_CAN_B.Switch = solution1_7009_CAN_P.Constant1_Value;
}
/* End of Switch: '<S4>/Switch' */

/* InitialCondition: '<Root>/IC' */
if (solution1_7009_CAN_DW.IC_FirstOutputTime) {
    solution1_7009_CAN_DW.IC_FirstOutputTime = false;
    solution1_7009_CAN_B.IC = solution1_7009_CAN_P.IC_Value;
} else {
    solution1_7009_CAN_B.IC = solution1_7009_CAN_B.SFunction1_o3_o;
}
/* End of InitialCondition: '<Root>/IC' */
/* S-Function (rti_commonblock): '<S7>/S-Function1' */
                /* This comment workarounds a code generation problem */
      
      

  
/* dSPACE RTICAN TX Message Block: "SIMSTATE" Id:8 */
{
      UInt32 CAN_Msg[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    Float32 delayTime = 0.0;
        /* ... Read status and timestamp info (previous message) */
        can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X8]);
        /* Convert timestamp */
        if (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X8]->processed) {
          can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X8]->timestamp = rtk_dsts_time_to_simtime_convert(can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X8]->timestamp);
        }
          /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X8]->timestamp > 0.0) {
                solution1_7009_CAN_B.SFunction1 = (real_T)can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X8]->delaytime;
      }

    /* ... Encode Simulink signals of TX and RM blocks*/
    

         
         
         {
           rtican_Signal_t CAN_Sgn;
           

               /* ...... "FUNCTION_REWARD" (0|16, standard signal, unsigned int, little endian) */
                     /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( solution1_7009_CAN_B.SFunction1_o2_l - ( 0 ) ) /  0.015 + 0.5);

          CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
          CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
          CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

               /* ...... "OFFSET_LATERAL" (16|8, standard signal, signed int, little endian) */
                     /* Add or substract 0.5 in order to round to nearest integer */
        if (( solution1_7009_CAN_B.SFunction1_o1_d - ( 0 ) ) /  0.05 < -0.5)
          CAN_Sgn.SignedSgn = (Int32) (( solution1_7009_CAN_B.SFunction1_o1_d - ( 0 ) ) /  0.05 - 0.5);
        else
          CAN_Sgn.SignedSgn = (Int32) (( solution1_7009_CAN_B.SFunction1_o1_d - ( 0 ) ) /  0.05 + 0.5);

          CAN_Sgn.SignedSgn &= 0x000000FF;
          CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

               /* ...... "SIMULATION_STATE" (24|2, standard signal, signed int, little endian) */
                     /* Add or substract 0.5 in order to round to nearest integer */
        if (( solution1_7009_CAN_B.IC ) < -0.5)
          CAN_Sgn.SignedSgn = (Int32) (( solution1_7009_CAN_B.IC ) - 0.5);
        else
          CAN_Sgn.SignedSgn = (Int32) (( solution1_7009_CAN_B.IC ) + 0.5);

          CAN_Sgn.SignedSgn &= 0x00000003;
          CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte0;

           }

    

          /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
          can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X8], 5, &(CAN_Msg[0]), delayTime);
}


 
   
  
/* S-Function (rti_commonblock): '<S8>/S-Function1' */
                /* This comment workarounds a code generation problem */
      
      

  
/* dSPACE RTICAN TX Message Block: "STEERING_CMD" Id:1 */
{
      UInt32 CAN_Msg[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    Float32 delayTime = 0.0;
        /* ... Read status and timestamp info (previous message) */
        can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X1]);
        /* Convert timestamp */
        if (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X1]->processed) {
          can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X1]->timestamp = rtk_dsts_time_to_simtime_convert(can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X1]->timestamp);
        }
          /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X1]->timestamp > 0.0) {
                solution1_7009_CAN_B.SFunction1_o = (real_T)can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X1]->delaytime;
      }

    /* ... Encode Simulink signals of TX and RM blocks*/
    

         
         
         {
           rtican_Signal_t CAN_Sgn;
           

               /* ...... "STEERING_ANGLE_CMD" (0|16, standard signal, signed int, little endian) */
                     /* Add or substract 0.5 in order to round to nearest integer */
        if (( solution1_7009_CAN_B.Product4 - ( 0 ) ) /  0.0004 < -0.5)
          CAN_Sgn.SignedSgn = (Int32) (( solution1_7009_CAN_B.Product4 - ( 0 ) ) /  0.0004 - 0.5);
        else
          CAN_Sgn.SignedSgn = (Int32) (( solution1_7009_CAN_B.Product4 - ( 0 ) ) /  0.0004 + 0.5);

          CAN_Sgn.SignedSgn &= 0x0000FFFF;
          CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
          CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

           }

    

          /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
          can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X1], 2, &(CAN_Msg[0]), delayTime);
}


 
   
  
/* S-Function (rti_commonblock): '<S9>/S-Function1' */
                /* This comment workarounds a code generation problem */
      
      

  
/* dSPACE RTICAN RX Message Block: "TORQUE_ACT" Id:7 */
{
         UInt32 *CAN_Msg;
      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X7]);
      /* Convert timestamp */
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X7]->processed) {
        can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X7]->timestamp = rtk_dsts_time_to_simtime_convert(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X7]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X7]->timestamp > 0.0) {
          if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X7]->processed){
            
            CAN_Msg = can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X7]->data;
            /* ... Decode CAN Message */
            

         
         
         {
           rtican_Signal_t CAN_Sgn;
           

               /* ...... "TORQUE_FL_ACT" (0|16, standard signal, signed int, little endian) */
                         CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.SignedSgn &= 0x0000FFFF;
      if (CAN_Sgn.SignedSgn >> 15) {
         CAN_Sgn.SignedSgn |= 0xFFFF0000;
      }
    solution1_7009_CAN_B.SFunction1_o1_ht = 0.075 * ( ((real_T) CAN_Sgn.SignedSgn) );

               /* ...... "TORQUE_FR_ACT" (16|16, standard signal, signed int, little endian) */
                         CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.SignedSgn &= 0x0000FFFF;
      if (CAN_Sgn.SignedSgn >> 15) {
         CAN_Sgn.SignedSgn |= 0xFFFF0000;
      }
    solution1_7009_CAN_B.SFunction1_o2_c = 0.075 * ( ((real_T) CAN_Sgn.SignedSgn) );

               /* ...... "TORQUE_RL_ACT" (32|16, standard signal, signed int, little endian) */
                         CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.SignedSgn &= 0x0000FFFF;
      if (CAN_Sgn.SignedSgn >> 15) {
         CAN_Sgn.SignedSgn |= 0xFFFF0000;
      }
    solution1_7009_CAN_B.SFunction1_o3_oh = 0.075 * ( ((real_T) CAN_Sgn.SignedSgn) );

               /* ...... "TORQUE_RR_ACT" (48|16, standard signal, signed int, little endian) */
                         CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
          CAN_Sgn.SignedSgn &= 0x0000FFFF;
      if (CAN_Sgn.SignedSgn >> 15) {
         CAN_Sgn.SignedSgn |= 0xFFFF0000;
      }
    solution1_7009_CAN_B.SFunction1_o4_d = 0.075 * ( ((real_T) CAN_Sgn.SignedSgn) );

           }

          }
      }
}


 
   
  
/* S-Function (rti_commonblock): '<S10>/S-Function1' */
                /* This comment workarounds a code generation problem */
      
      

  
/* dSPACE RTICAN TX Message Block: "TORQUE_CMD" Id:0 */
{
      UInt32 CAN_Msg[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    Float32 delayTime = 0.0;
        /* ... Read status and timestamp info (previous message) */
        can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X0]);
        /* Convert timestamp */
        if (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X0]->processed) {
          can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X0]->timestamp = rtk_dsts_time_to_simtime_convert(can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X0]->timestamp);
        }
          /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X0]->timestamp > 0.0) {
                solution1_7009_CAN_B.SFunction1_o1_l = (real_T)can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X0]->processed;
              solution1_7009_CAN_B.SFunction1_o2_e = (real_T)can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X0]->timestamp;
              solution1_7009_CAN_B.SFunction1_o3_c = (real_T)can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X0]->deltatime;
                solution1_7009_CAN_B.SFunction1_o4_i = (real_T)can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X0]->delaytime;
      }

    /* ... Encode Simulink signals of TX and RM blocks*/
    

         
         
         {
           rtican_Signal_t CAN_Sgn;
           

               /* ...... "TORQUE_FL_CMD" (0|16, standard signal, signed int, little endian) */
                     /* Add or substract 0.5 in order to round to nearest integer */
        if (( solution1_7009_CAN_B.Product3 - ( 0 ) ) /  0.075 < -0.5)
          CAN_Sgn.SignedSgn = (Int32) (( solution1_7009_CAN_B.Product3 - ( 0 ) ) /  0.075 - 0.5);
        else
          CAN_Sgn.SignedSgn = (Int32) (( solution1_7009_CAN_B.Product3 - ( 0 ) ) /  0.075 + 0.5);

          CAN_Sgn.SignedSgn &= 0x0000FFFF;
          CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
          CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

               /* ...... "TORQUE_FR_CMD" (16|16, standard signal, signed int, little endian) */
                     /* Add or substract 0.5 in order to round to nearest integer */
        if (( solution1_7009_CAN_B.Product2 - ( 0 ) ) /  0.075 < -0.5)
          CAN_Sgn.SignedSgn = (Int32) (( solution1_7009_CAN_B.Product2 - ( 0 ) ) /  0.075 - 0.5);
        else
          CAN_Sgn.SignedSgn = (Int32) (( solution1_7009_CAN_B.Product2 - ( 0 ) ) /  0.075 + 0.5);

          CAN_Sgn.SignedSgn &= 0x0000FFFF;
          CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
          CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

               /* ...... "TORQUE_RL_CMD" (32|16, standard signal, signed int, little endian) */
                     /* Add or substract 0.5 in order to round to nearest integer */
        if (( solution1_7009_CAN_B.Product1 - ( 0 ) ) /  0.075 < -0.5)
          CAN_Sgn.SignedSgn = (Int32) (( solution1_7009_CAN_B.Product1 - ( 0 ) ) /  0.075 - 0.5);
        else
          CAN_Sgn.SignedSgn = (Int32) (( solution1_7009_CAN_B.Product1 - ( 0 ) ) /  0.075 + 0.5);

          CAN_Sgn.SignedSgn &= 0x0000FFFF;
          CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
          CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

               /* ...... "TORQUE_RR_CMD" (48|16, standard signal, signed int, little endian) */
                     /* Add or substract 0.5 in order to round to nearest integer */
        if (( solution1_7009_CAN_B.Product - ( 0 ) ) /  0.075 < -0.5)
          CAN_Sgn.SignedSgn = (Int32) (( solution1_7009_CAN_B.Product - ( 0 ) ) /  0.075 - 0.5);
        else
          CAN_Sgn.SignedSgn = (Int32) (( solution1_7009_CAN_B.Product - ( 0 ) ) /  0.075 + 0.5);

          CAN_Sgn.SignedSgn &= 0x0000FFFF;
          CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
          CAN_Msg[7] |= CAN_Sgn.SgnBytes.Byte1;

           }

    

          /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
          can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X0], 8, &(CAN_Msg[0]), delayTime);
}


 
   
  
/* S-Function (rti_commonblock): '<S12>/S-Function1' */
                /* This comment workarounds a code generation problem */
      
      

  
/* dSPACE RTICAN RX Message Block: "WHEELSPEED" Id:6 */
{
         UInt32 *CAN_Msg;
      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X6]);
      /* Convert timestamp */
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X6]->processed) {
        can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X6]->timestamp = rtk_dsts_time_to_simtime_convert(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X6]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X6]->timestamp > 0.0) {
          if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X6]->processed){
            
            CAN_Msg = can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X6]->data;
            /* ... Decode CAN Message */
            

         
         
         {
           rtican_Signal_t CAN_Sgn;
           

               /* ...... "WHEELSPEED_FL" (0|16, standard signal, signed int, little endian) */
                         CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.SignedSgn &= 0x0000FFFF;
      if (CAN_Sgn.SignedSgn >> 15) {
         CAN_Sgn.SignedSgn |= 0xFFFF0000;
      }
    solution1_7009_CAN_B.SFunction1_o1_b = 0.006 * ( ((real_T) CAN_Sgn.SignedSgn) );

               /* ...... "WHEELSPEED_FR" (16|16, standard signal, signed int, little endian) */
                         CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.SignedSgn &= 0x0000FFFF;
      if (CAN_Sgn.SignedSgn >> 15) {
         CAN_Sgn.SignedSgn |= 0xFFFF0000;
      }
    solution1_7009_CAN_B.SFunction1_o2_o = 0.006 * ( ((real_T) CAN_Sgn.SignedSgn) );

               /* ...... "WHEELSPEED_RL" (32|16, standard signal, signed int, little endian) */
                         CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.SignedSgn &= 0x0000FFFF;
      if (CAN_Sgn.SignedSgn >> 15) {
         CAN_Sgn.SignedSgn |= 0xFFFF0000;
      }
    solution1_7009_CAN_B.SFunction1_o3_i = 0.006 * ( ((real_T) CAN_Sgn.SignedSgn) );

               /* ...... "WHEELSPEED_RR" (48|16, standard signal, signed int, little endian) */
                         CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
          CAN_Sgn.SignedSgn &= 0x0000FFFF;
      if (CAN_Sgn.SignedSgn >> 15) {
         CAN_Sgn.SignedSgn |= 0xFFFF0000;
      }
    solution1_7009_CAN_B.SFunction1_o4_b = 0.006 * ( ((real_T) CAN_Sgn.SignedSgn) );

           }

          }
      }
}


 
   
  
/* S-Function (rti_commonblock): '<S3>/S-Function1' */
                /* This comment workarounds a code generation problem */
 
   
  
    
    
 






        
  

    

    
    


      
          
  

    }
    

        
    
    /* Model update function */
            void solution1_7009_CAN_update(void) 
    {
      
    
    
    
    
        
    
    
      
  

      
  

                                

    
 
    

    
 
/* Update for Atomic SubSystem: '<S4>/Control' */
/* Update for Delay: '<S36>/UD' */
solution1_7009_CAN_DW.UD_DSTATE = solution1_7009_CAN_B.TSamp;
/* Update for DiscreteIntegrator: '<S33>/Integrator' */
solution1_7009_CAN_DW.Integrator_DSTATE += solution1_7009_CAN_P.Integrator_gainval * solution1_7009_CAN_B.IntegralGain;
/* Update for DiscreteIntegrator: '<S34>/Filter' */
solution1_7009_CAN_DW.Filter_DSTATE += solution1_7009_CAN_P.Filter_gainval * solution1_7009_CAN_B.FilterCoefficient;
/* Update for DiscreteIntegrator: '<S34>/Integrator' */
solution1_7009_CAN_DW.Integrator_DSTATE_g += solution1_7009_CAN_P.Integrator_gainval_e * solution1_7009_CAN_B.IntegralGain_j;
/* End of Update for SubSystem: '<S4>/Control' */

/* Update for UnitDelay: '<S4>/Unit Delay' */
solution1_7009_CAN_DW.UnitDelay_DSTATE = solution1_7009_CAN_B.Switch;
    

    
 




          
  

      
  
  
    
    

            /* Update absolute time for base rate */
            /* The "clockTick0" counts the number of times the code of this task has 
    * been executed. The absolute time is the multiplication of "clockTick0" 
    * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not 
    * overflow during the application lifespan selected.
      * Timer of this task consists of two 32 bit unsigned integers. 
      * The two integers represent the low bits Timing.clockTick0 and the high bits 
      * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment. 
    */

    if(!(++solution1_7009_CAN_M->Timing.clockTick0)) {
 ++solution1_7009_CAN_M->Timing.clockTickH0; 
} solution1_7009_CAN_M->Timing.taskTime0 = solution1_7009_CAN_M->Timing.clockTick0 * solution1_7009_CAN_M->Timing.stepSize0 + solution1_7009_CAN_M->Timing.clockTickH0 * solution1_7009_CAN_M->Timing.stepSize0 * 4294967296.0;


        

    


    
    
  
  

    

    
    
    

      
      
    }
    




  







  /* Model initialize function */
    void solution1_7009_CAN_initialize(void)
  { 
      


    
    
    
    
        
    
    
        /* Registration code */
        
  
  


      
            
            /* initialize real-time model */
            (void) memset((void *)solution1_7009_CAN_M, 0,
sizeof(RT_MODEL_solution1_7009_CAN_T));
            
            
  
  
  

  
  
  
      
        
        
          
                solution1_7009_CAN_M->Timing.stepSize0  = 0.01;
        
        
            
  

        
      
      
      
  
  

  
  
  

    /* block I/O */
    
      
        
        (void) memset(((void *) &solution1_7009_CAN_B), 0,
sizeof(B_solution1_7009_CAN_T));
        

        

  
    
  
  
    






    /* states (dwork) */
    
        

    
        
                    (void) memset((void *)&solution1_7009_CAN_DW,  0,
 sizeof(DW_solution1_7009_CAN_T));
        
        

        
    
        
  
    

    


  

    
      

  
        {
      
    /* user code (registration function declaration) */
        /*Initialize global TRC pointers. */
    solution1_7009_CAN_rti_init_trc_pointers();

  }

      

    
    
    
        




      
        
      
  



          
  



    
                            /* Start for InitialCondition: '<Root>/IC' */
solution1_7009_CAN_B.IC = solution1_7009_CAN_P.IC_Value;
solution1_7009_CAN_DW.IC_FirstOutputTime = true;




      
  



    


      
        
  



      
  



                              

/* InitializeConditions for UnitDelay: '<S4>/Unit Delay' */
solution1_7009_CAN_DW.UnitDelay_DSTATE = solution1_7009_CAN_P.UnitDelay_InitialCondition;
/* InitializeConditions for RateLimiter: '<S4>/Rate Limiter' */
solution1_7009_CAN_DW.PrevY = solution1_7009_CAN_P.RateLimiter_IC;
/* SystemInitialize for Atomic SubSystem: '<S4>/Control' */
/* InitializeConditions for Delay: '<S36>/UD' */
solution1_7009_CAN_DW.UD_DSTATE = solution1_7009_CAN_P.UD_InitialCondition;
/* InitializeConditions for DiscreteIntegrator: '<S33>/Integrator' */
solution1_7009_CAN_DW.Integrator_DSTATE = solution1_7009_CAN_P.Integrator_IC;
/* InitializeConditions for DiscreteIntegrator: '<S34>/Filter' */
solution1_7009_CAN_DW.Filter_DSTATE = solution1_7009_CAN_P.Filter_IC;
/* InitializeConditions for DiscreteIntegrator: '<S34>/Integrator' */
solution1_7009_CAN_DW.Integrator_DSTATE_g = solution1_7009_CAN_P.Integrator_IC_k;
/* End of SystemInitialize for SubSystem: '<S4>/Control' */
        





  
  



            
    
        

  


      
  


  }




      
  


  
    
    /* Model terminate function */
        void solution1_7009_CAN_terminate(void)

    {
      

      
                                
  



          
  



                    
                      /* Terminate for S-Function (rti_commonblock): '<S1>/S-Function1' */
          
            
      /* dSPACE RTICAN RX Message Block: "ACC" Id:4 */
{
    /* ... Set the message into sleep mode */
    while((rtican_type1_tq_error[0][2] = can_tp1_msg_sleep(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X4])) == DSMCOM_BUFFER_OVERFLOW);
}





 /* Terminate for S-Function (rti_commonblock): '<S2>/S-Function1' */
          
            
      /* dSPACE RTICAN RX Message Block: "ANGRATE" Id:5 */
{
    /* ... Set the message into sleep mode */
    while((rtican_type1_tq_error[0][3] = can_tp1_msg_sleep(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X5])) == DSMCOM_BUFFER_OVERFLOW);
}





 /* Terminate for S-Function (rti_commonblock): '<S11>/S-Function1' */
          
            
      /* dSPACE RTICAN RX Message Block: "VEL" Id:3 */
{
    /* ... Set the message into sleep mode */
    while((rtican_type1_tq_error[0][1] = can_tp1_msg_sleep(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X3])) == DSMCOM_BUFFER_OVERFLOW);
}





 /* Terminate for S-Function (rti_commonblock): '<S6>/S-Function1' */
          
            
      /* dSPACE RTICAN RX Message Block: "SIMSTATE" Id:8 */
{
    /* ... Set the message into sleep mode */
    while((rtican_type1_tq_error[0][5] = can_tp1_msg_sleep(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X8])) == DSMCOM_BUFFER_OVERFLOW);
}





 /* Terminate for S-Function (rti_commonblock): '<S7>/S-Function1' */
          
            
      /* dSPACE RTICAN TX Message Block: "SIMSTATE" Id:8 */
{
    /* ... Set the message into sleep mode */
    while((rtican_type1_tq_error[0][5] = can_tp1_msg_sleep(can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X8])) == DSMCOM_BUFFER_OVERFLOW);
}





 /* Terminate for S-Function (rti_commonblock): '<S8>/S-Function1' */
          
            
      /* dSPACE RTICAN TX Message Block: "STEERING_CMD" Id:1 */
{
    /* ... Set the message into sleep mode */
    while((rtican_type1_tq_error[0][0] = can_tp1_msg_sleep(can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X1])) == DSMCOM_BUFFER_OVERFLOW);
}





 /* Terminate for S-Function (rti_commonblock): '<S9>/S-Function1' */
          
            
      /* dSPACE RTICAN RX Message Block: "TORQUE_ACT" Id:7 */
{
    /* ... Set the message into sleep mode */
    while((rtican_type1_tq_error[0][4] = can_tp1_msg_sleep(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X7])) == DSMCOM_BUFFER_OVERFLOW);
}





 /* Terminate for S-Function (rti_commonblock): '<S10>/S-Function1' */
          
            
      /* dSPACE RTICAN TX Message Block: "TORQUE_CMD" Id:0 */
{
    /* ... Set the message into sleep mode */
    while((rtican_type1_tq_error[0][0] = can_tp1_msg_sleep(can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X0])) == DSMCOM_BUFFER_OVERFLOW);
}





 /* Terminate for S-Function (rti_commonblock): '<S12>/S-Function1' */
          
            
      /* dSPACE RTICAN RX Message Block: "WHEELSPEED" Id:6 */
{
    /* ... Set the message into sleep mode */
    while((rtican_type1_tq_error[0][3] = can_tp1_msg_sleep(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X6])) == DSMCOM_BUFFER_OVERFLOW);
}





 




    

            
  



    




          
  

    }
    
  




  
  
   



  

  

  

  
