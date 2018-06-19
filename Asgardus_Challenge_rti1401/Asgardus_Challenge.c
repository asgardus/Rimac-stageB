/*
 * Asgardus_Challenge.c
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

#include "Asgardus_Challenge_trc_ptr.h"
#include "Asgardus_Challenge.h"
#include "Asgardus_Challenge_private.h"

/* Block signals (auto storage) */
B_Asgardus_Challenge_T Asgardus_Challenge_B;

/* Block states (auto storage) */
DW_Asgardus_Challenge_T Asgardus_Challenge_DW;

/* Real-time model */
RT_MODEL_Asgardus_Challenge_T Asgardus_Challenge_M_;
RT_MODEL_Asgardus_Challenge_T *const Asgardus_Challenge_M =
  &Asgardus_Challenge_M_;

/* Model output function */
void Asgardus_Challenge_output(void)
{
  real_T rateLimiterRate;

  /* UnitDelay: '<S13>/Unit Delay1' */
  Asgardus_Challenge_B.UnitDelay1 = Asgardus_Challenge_DW.UnitDelay1_DSTATE;

  /* Product: '<S4>/Product3' incorporates:
   *  Constant: '<S4>/Constant'
   */
  Asgardus_Challenge_B.Product3 = Asgardus_Challenge_P.Constant_Value_k *
    Asgardus_Challenge_B.UnitDelay1;

  /* Product: '<S4>/Product2' incorporates:
   *  Constant: '<S4>/Constant'
   */
  Asgardus_Challenge_B.Product2 = Asgardus_Challenge_P.Constant_Value_k *
    Asgardus_Challenge_B.UnitDelay1;

  /* S-Function (rti_commonblock): '<S10>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "VEL" Id:3 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X3]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X3]->processed) {
      can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X3]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X3]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X3]->timestamp > 0.0) {
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X3]->processed) {
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

          Asgardus_Challenge_B.SFunction1_o1 = 0.002 * ( ((real_T)
            CAN_Sgn.SignedSgn) );

          /* ...... "VEL_Y" (16|16, standard signal, signed int, little endian) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.SignedSgn &= 0x0000FFFF;
          if (CAN_Sgn.SignedSgn >> 15) {
            CAN_Sgn.SignedSgn |= 0xFFFF0000;
          }

          Asgardus_Challenge_B.SFunction1_o2 = 0.002 * ( ((real_T)
            CAN_Sgn.SignedSgn) );

          /* ...... "VEL_Z" (32|16, standard signal, signed int, little endian) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.SignedSgn &= 0x0000FFFF;
          if (CAN_Sgn.SignedSgn >> 15) {
            CAN_Sgn.SignedSgn |= 0xFFFF0000;
          }

          Asgardus_Challenge_B.SFunction1_o3 = 0.002 * ( ((real_T)
            CAN_Sgn.SignedSgn) );

          /* ...... "POS_X" (48|16, standard signal, signed int, little endian) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
          CAN_Sgn.SignedSgn &= 0x0000FFFF;
          if (CAN_Sgn.SignedSgn >> 15) {
            CAN_Sgn.SignedSgn |= 0xFFFF0000;
          }

          Asgardus_Challenge_B.SFunction1_o4 = 0.005 * ( ((real_T)
            CAN_Sgn.SignedSgn) );
        }
      }
    }
  }

  /* RelationalOperator: '<S54>/min_relop' incorporates:
   *  Constant: '<S48>/Constant1'
   */
  Asgardus_Challenge_B.min_relop = (Asgardus_Challenge_P.Constant1_Value_c <
    Asgardus_Challenge_B.SFunction1_o4);

  /* RelationalOperator: '<S54>/max_relop' incorporates:
   *  Constant: '<S48>/Constant'
   */
  Asgardus_Challenge_B.max_relop = (Asgardus_Challenge_B.SFunction1_o4 <
    Asgardus_Challenge_P.Constant_Value_e);

  /* Logic: '<S54>/conjunction' */
  Asgardus_Challenge_B.conjunction = (Asgardus_Challenge_B.min_relop &&
    Asgardus_Challenge_B.max_relop);

  /* S-Function (rti_commonblock): '<S1>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "ACC" Id:4 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X4]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X4]->processed) {
      can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X4]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X4]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X4]->timestamp > 0.0) {
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X4]->processed) {
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

          Asgardus_Challenge_B.SFunction1_o1_p = 0.0006 * ( ((real_T)
            CAN_Sgn.SignedSgn) );

          /* ...... "ACC_Y" (16|16, standard signal, signed int, little endian) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.SignedSgn &= 0x0000FFFF;
          if (CAN_Sgn.SignedSgn >> 15) {
            CAN_Sgn.SignedSgn |= 0xFFFF0000;
          }

          Asgardus_Challenge_B.SFunction1_o2_m = 0.0006 * ( ((real_T)
            CAN_Sgn.SignedSgn) );

          /* ...... "ACC_Z" (32|16, standard signal, signed int, little endian) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.SignedSgn &= 0x0000FFFF;
          if (CAN_Sgn.SignedSgn >> 15) {
            CAN_Sgn.SignedSgn |= 0xFFFF0000;
          }

          Asgardus_Challenge_B.SFunction1_o3_k = 0.0006 * ( ((real_T)
            CAN_Sgn.SignedSgn) );

          /* ...... "POS_Y" (48|16, standard signal, signed int, little endian) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
          CAN_Sgn.SignedSgn &= 0x0000FFFF;
          if (CAN_Sgn.SignedSgn >> 15) {
            CAN_Sgn.SignedSgn |= 0xFFFF0000;
          }

          Asgardus_Challenge_B.SFunction1_o4_k = 0.005 * ( ((real_T)
            CAN_Sgn.SignedSgn) );
        }
      }
    }
  }

  /* RelationalOperator: '<S55>/min_relop' incorporates:
   *  Constant: '<S48>/Constant3'
   */
  Asgardus_Challenge_B.min_relop_p = (Asgardus_Challenge_P.Constant3_Value_k <
    Asgardus_Challenge_B.SFunction1_o4_k);

  /* RelationalOperator: '<S55>/max_relop' incorporates:
   *  Constant: '<S48>/Constant2'
   */
  Asgardus_Challenge_B.max_relop_d = (Asgardus_Challenge_B.SFunction1_o4_k <
    Asgardus_Challenge_P.Constant2_Value);

  /* Logic: '<S55>/conjunction' */
  Asgardus_Challenge_B.conjunction_b = (Asgardus_Challenge_B.min_relop_p &&
    Asgardus_Challenge_B.max_relop_d);

  /* Logic: '<S48>/Logical Operator' */
  Asgardus_Challenge_B.LogicalOperator = (Asgardus_Challenge_B.conjunction &&
    Asgardus_Challenge_B.conjunction_b);

  /* RelationalOperator: '<S60>/min_relop' incorporates:
   *  Constant: '<S51>/Constant1'
   */
  Asgardus_Challenge_B.min_relop_f = (Asgardus_Challenge_P.Constant1_Value_d <
    Asgardus_Challenge_B.SFunction1_o4);

  /* RelationalOperator: '<S60>/max_relop' incorporates:
   *  Constant: '<S51>/Constant'
   */
  Asgardus_Challenge_B.max_relop_g = (Asgardus_Challenge_B.SFunction1_o4 <
    Asgardus_Challenge_P.Constant_Value_i);

  /* Logic: '<S60>/conjunction' */
  Asgardus_Challenge_B.conjunction_bi = (Asgardus_Challenge_B.min_relop_f &&
    Asgardus_Challenge_B.max_relop_g);

  /* RelationalOperator: '<S61>/min_relop' incorporates:
   *  Constant: '<S51>/Constant3'
   */
  Asgardus_Challenge_B.min_relop_g = (Asgardus_Challenge_P.Constant3_Value_kw <
    Asgardus_Challenge_B.SFunction1_o4_k);

  /* RelationalOperator: '<S61>/max_relop' incorporates:
   *  Constant: '<S51>/Constant2'
   */
  Asgardus_Challenge_B.max_relop_o = (Asgardus_Challenge_B.SFunction1_o4_k <
    Asgardus_Challenge_P.Constant2_Value_d);

  /* Logic: '<S61>/conjunction' */
  Asgardus_Challenge_B.conjunction_n = (Asgardus_Challenge_B.min_relop_g &&
    Asgardus_Challenge_B.max_relop_o);

  /* Logic: '<S51>/Logical Operator' */
  Asgardus_Challenge_B.LogicalOperator_n = (Asgardus_Challenge_B.conjunction_bi &&
    Asgardus_Challenge_B.conjunction_n);

  /* S-Function (rti_commonblock): '<S6>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "SIMSTATE" Id:8 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X8]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X8]->processed) {
      can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X8]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X8]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X8]->timestamp > 0.0) {
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X8]->processed) {
        CAN_Msg = can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X8]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FUNCTION_REWARD" (0|16, standard signal, unsigned int, little endian) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
          Asgardus_Challenge_B.SFunction1_o1_n = 0.015 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "OFFSET_LATERAL" (16|8, standard signal, signed int, little endian) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SignedSgn &= 0x000000FF;
          if (CAN_Sgn.SignedSgn >> 7) {
            CAN_Sgn.SignedSgn |= 0xFFFFFF00;
          }

          Asgardus_Challenge_B.SFunction1_o2_n = 0.05 * ( ((real_T)
            CAN_Sgn.SignedSgn) );

          /* ...... "SIMULATION_STATE" (24|2, standard signal, signed int, little endian) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.SignedSgn &= 0x00000003;
          if (CAN_Sgn.SignedSgn >> 1) {
            CAN_Sgn.SignedSgn |= 0xFFFFFFFC;
          }

          Asgardus_Challenge_B.SFunction1_o3_m = ((real_T) CAN_Sgn.SignedSgn);
        }
      }
    }
  }

  /* Outputs for Atomic SubSystem: '<S4>/Control' */
  /* Logic: '<S25>/Logical Operator1' */
  Asgardus_Challenge_B.LogicalOperator1 =
    (Asgardus_Challenge_B.LogicalOperator_n &&
     Asgardus_Challenge_B.LogicalOperator);

  /* Switch: '<S25>/Switch1' incorporates:
   *  Constant: '<S25>/Constant'
   *  Constant: '<S25>/Constant1'
   */
  if (Asgardus_Challenge_B.LogicalOperator1) {
    Asgardus_Challenge_B.Switch1 = Asgardus_Challenge_P.Constant1_Value;
  } else {
    Asgardus_Challenge_B.Switch1 = Asgardus_Challenge_P.Constant_Value;
  }

  /* End of Switch: '<S25>/Switch1' */

  /* Sum: '<S25>/Subtract1' */
  Asgardus_Challenge_B.velocity_error = Asgardus_Challenge_B.Switch1 -
    Asgardus_Challenge_B.SFunction1_o1;

  /* Gain: '<S32>/Derivative Gain' */
  Asgardus_Challenge_B.DerivativeGain =
    Asgardus_Challenge_P.DiscretePIDController1_D *
    Asgardus_Challenge_B.velocity_error;

  /* SampleTimeMath: '<S35>/TSamp'
   *
   * About '<S35>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  Asgardus_Challenge_B.TSamp = Asgardus_Challenge_B.DerivativeGain *
    Asgardus_Challenge_P.TSamp_WtEt;

  /* Delay: '<S35>/UD' */
  Asgardus_Challenge_B.UD = Asgardus_Challenge_DW.UD_DSTATE;

  /* Sum: '<S35>/Diff' */
  Asgardus_Challenge_B.Diff = Asgardus_Challenge_B.TSamp -
    Asgardus_Challenge_B.UD;

  /* Gain: '<S32>/Integral Gain' */
  Asgardus_Challenge_B.IntegralGain =
    Asgardus_Challenge_P.DiscretePIDController1_I *
    Asgardus_Challenge_B.velocity_error;

  /* DiscreteIntegrator: '<S32>/Integrator' */
  Asgardus_Challenge_B.Integrator = Asgardus_Challenge_DW.Integrator_DSTATE;

  /* Gain: '<S32>/Proportional Gain' */
  Asgardus_Challenge_B.ProportionalGain =
    Asgardus_Challenge_P.DiscretePIDController1_P *
    Asgardus_Challenge_B.velocity_error;

  /* Sum: '<S32>/Sum' */
  Asgardus_Challenge_B.Sum = (Asgardus_Challenge_B.ProportionalGain +
    Asgardus_Challenge_B.Integrator) + Asgardus_Challenge_B.Diff;

  /* Sum: '<S25>/Subtract2' incorporates:
   *  Constant: '<S25>/Constant3'
   */
  Asgardus_Challenge_B.offset_error = Asgardus_Challenge_P.Constant3_Value -
    Asgardus_Challenge_B.SFunction1_o2_n;

  /* Gain: '<S33>/Derivative Gain' */
  Asgardus_Challenge_B.DerivativeGain_f =
    Asgardus_Challenge_P.DiscretePIDController2_D *
    Asgardus_Challenge_B.offset_error;

  /* DiscreteIntegrator: '<S33>/Filter' */
  Asgardus_Challenge_B.Filter = Asgardus_Challenge_DW.Filter_DSTATE;

  /* Sum: '<S33>/SumD' */
  Asgardus_Challenge_B.SumD = Asgardus_Challenge_B.DerivativeGain_f -
    Asgardus_Challenge_B.Filter;

  /* Gain: '<S33>/Filter Coefficient' */
  Asgardus_Challenge_B.FilterCoefficient =
    Asgardus_Challenge_P.DiscretePIDController2_N * Asgardus_Challenge_B.SumD;

  /* Gain: '<S33>/Integral Gain' */
  Asgardus_Challenge_B.IntegralGain_g =
    Asgardus_Challenge_P.DiscretePIDController2_I *
    Asgardus_Challenge_B.offset_error;

  /* DiscreteIntegrator: '<S33>/Integrator' */
  Asgardus_Challenge_B.Integrator_a = Asgardus_Challenge_DW.Integrator_DSTATE_g;

  /* Gain: '<S33>/Proportional Gain' */
  Asgardus_Challenge_B.ProportionalGain_g =
    Asgardus_Challenge_P.DiscretePIDController2_P *
    Asgardus_Challenge_B.offset_error;

  /* Sum: '<S33>/Sum' */
  Asgardus_Challenge_B.Sum_k = (Asgardus_Challenge_B.ProportionalGain_g +
    Asgardus_Challenge_B.Integrator_a) + Asgardus_Challenge_B.FilterCoefficient;

  /* End of Outputs for SubSystem: '<S4>/Control' */

  /* Product: '<S4>/Product1' */
  Asgardus_Challenge_B.Product1 = Asgardus_Challenge_B.Sum *
    Asgardus_Challenge_B.UnitDelay1;

  /* Product: '<S4>/Product' */
  Asgardus_Challenge_B.Product = Asgardus_Challenge_B.Sum *
    Asgardus_Challenge_B.UnitDelay1;

  /* S-Function (rti_commonblock): '<S9>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "TORQUE_CMD" Id:0 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X0]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X0]->processed) {
      can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X0]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X0]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X0]->timestamp > 0.0) {
      Asgardus_Challenge_B.SFunction1_o1_f = (real_T)
        can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X0]->processed;
      Asgardus_Challenge_B.SFunction1_o2_j = (real_T)
        can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X0]->timestamp;
      Asgardus_Challenge_B.SFunction1_o3_k0 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X0]->deltatime;
      Asgardus_Challenge_B.SFunction1_o4_i = (real_T)
        can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X0]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "TORQUE_FL_CMD" (0|16, standard signal, signed int, little endian) */
      /* Add or substract 0.5 in order to round to nearest integer */
      if (( Asgardus_Challenge_B.Product3 - ( 0 ) ) / 0.075 < -0.5)
        CAN_Sgn.SignedSgn = (Int32) (( Asgardus_Challenge_B.Product3 - ( 0 ) ) /
          0.075 - 0.5);
      else
        CAN_Sgn.SignedSgn = (Int32) (( Asgardus_Challenge_B.Product3 - ( 0 ) ) /
          0.075 + 0.5);
      CAN_Sgn.SignedSgn &= 0x0000FFFF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "TORQUE_FR_CMD" (16|16, standard signal, signed int, little endian) */
      /* Add or substract 0.5 in order to round to nearest integer */
      if (( Asgardus_Challenge_B.Product2 - ( 0 ) ) / 0.075 < -0.5)
        CAN_Sgn.SignedSgn = (Int32) (( Asgardus_Challenge_B.Product2 - ( 0 ) ) /
          0.075 - 0.5);
      else
        CAN_Sgn.SignedSgn = (Int32) (( Asgardus_Challenge_B.Product2 - ( 0 ) ) /
          0.075 + 0.5);
      CAN_Sgn.SignedSgn &= 0x0000FFFF;
      CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "TORQUE_RL_CMD" (32|16, standard signal, signed int, little endian) */
      /* Add or substract 0.5 in order to round to nearest integer */
      if (( Asgardus_Challenge_B.Product1 - ( 0 ) ) / 0.075 < -0.5)
        CAN_Sgn.SignedSgn = (Int32) (( Asgardus_Challenge_B.Product1 - ( 0 ) ) /
          0.075 - 0.5);
      else
        CAN_Sgn.SignedSgn = (Int32) (( Asgardus_Challenge_B.Product1 - ( 0 ) ) /
          0.075 + 0.5);
      CAN_Sgn.SignedSgn &= 0x0000FFFF;
      CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte1;

      /* ...... "TORQUE_RR_CMD" (48|16, standard signal, signed int, little endian) */
      /* Add or substract 0.5 in order to round to nearest integer */
      if (( Asgardus_Challenge_B.Product - ( 0 ) ) / 0.075 < -0.5)
        CAN_Sgn.SignedSgn = (Int32) (( Asgardus_Challenge_B.Product - ( 0 ) ) /
          0.075 - 0.5);
      else
        CAN_Sgn.SignedSgn = (Int32) (( Asgardus_Challenge_B.Product - ( 0 ) ) /
          0.075 + 0.5);
      CAN_Sgn.SignedSgn &= 0x0000FFFF;
      CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[7] |= CAN_Sgn.SgnBytes.Byte1;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X0], 8, &(CAN_Msg[0]),
                     delayTime);
  }

  /* RateLimiter: '<S4>/Rate Limiter' */
  rateLimiterRate = Asgardus_Challenge_B.Sum_k - Asgardus_Challenge_DW.PrevY;
  if (rateLimiterRate > Asgardus_Challenge_P.RateLimiter_RisingLim) {
    Asgardus_Challenge_B.steer_c = Asgardus_Challenge_DW.PrevY +
      Asgardus_Challenge_P.RateLimiter_RisingLim;
  } else if (rateLimiterRate < Asgardus_Challenge_P.RateLimiter_FallingLim) {
    Asgardus_Challenge_B.steer_c = Asgardus_Challenge_DW.PrevY +
      Asgardus_Challenge_P.RateLimiter_FallingLim;
  } else {
    Asgardus_Challenge_B.steer_c = Asgardus_Challenge_B.Sum_k;
  }

  Asgardus_Challenge_DW.PrevY = Asgardus_Challenge_B.steer_c;

  /* End of RateLimiter: '<S4>/Rate Limiter' */

  /* Product: '<S4>/Product4' */
  Asgardus_Challenge_B.Product4 = Asgardus_Challenge_B.steer_c *
    Asgardus_Challenge_B.UnitDelay1;

  /* S-Function (rti_commonblock): '<S7>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN TX Message Block: "STEERING_CMD" Id:1 */
  {
    UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    Float32 delayTime = 0.0;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X1]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X1]->processed) {
      can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X1]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X1]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X1]->timestamp > 0.0) {
      Asgardus_Challenge_B.SFunction1 = (real_T)
        can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X1]->delaytime;
    }

    /* ... Encode Simulink signals of TX and RM blocks*/
    {
      rtican_Signal_t CAN_Sgn;

      /* ...... "STEERING_ANGLE_CMD" (0|16, standard signal, signed int, little endian) */
      /* Add or substract 0.5 in order to round to nearest integer */
      if (( Asgardus_Challenge_B.Product4 - ( 0 ) ) / 0.0004 < -0.5)
        CAN_Sgn.SignedSgn = (Int32) (( Asgardus_Challenge_B.Product4 - ( 0 ) ) /
          0.0004 - 0.5);
      else
        CAN_Sgn.SignedSgn = (Int32) (( Asgardus_Challenge_B.Product4 - ( 0 ) ) /
          0.0004 + 0.5);
      CAN_Sgn.SignedSgn &= 0x0000FFFF;
      CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
      CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;
    }

    /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
    can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X1], 2, &(CAN_Msg[0]),
                     delayTime);
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
      can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X5]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X5]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X5]->timestamp > 0.0) {
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X5]->processed) {
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

          Asgardus_Challenge_B.SFunction1_o1_j = 0.001 * ( ((real_T)
            CAN_Sgn.SignedSgn) );

          /* ...... "ANGRATE_YAW" (16|16, standard signal, signed int, little endian) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.SignedSgn &= 0x0000FFFF;
          if (CAN_Sgn.SignedSgn >> 15) {
            CAN_Sgn.SignedSgn |= 0xFFFF0000;
          }

          Asgardus_Challenge_B.SFunction1_o2_p = 0.001 * ( ((real_T)
            CAN_Sgn.SignedSgn) );

          /* ...... "ANGRATE_ROLL" (32|16, standard signal, signed int, little endian) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.SignedSgn &= 0x0000FFFF;
          if (CAN_Sgn.SignedSgn >> 15) {
            CAN_Sgn.SignedSgn |= 0xFFFF0000;
          }

          Asgardus_Challenge_B.SFunction1_o3_n = 0.001 * ( ((real_T)
            CAN_Sgn.SignedSgn) );
        }
      }
    }
  }

  /* InitialCondition: '<Root>/IC' */
  if (Asgardus_Challenge_DW.IC_FirstOutputTime) {
    Asgardus_Challenge_DW.IC_FirstOutputTime = false;
    Asgardus_Challenge_B.SIMULATION_STATE = Asgardus_Challenge_P.IC_Value;
  } else {
    Asgardus_Challenge_B.SIMULATION_STATE = Asgardus_Challenge_B.SFunction1_o3_m;
  }

  /* End of InitialCondition: '<Root>/IC' */

  /* Product: '<S4>/Divide' */
  Asgardus_Challenge_B.Divide = 1.0 / Asgardus_Challenge_B.SFunction1_o1 *
    Asgardus_Challenge_B.SFunction1_o2;

  /* RelationalOperator: '<S40>/Compare' incorporates:
   *  Constant: '<S40>/Constant'
   */
  Asgardus_Challenge_B.Compare = (0.0 ==
    Asgardus_Challenge_P.CompareToConstant_const);

  /* Switch: '<S13>/Switch' incorporates:
   *  Constant: '<S13>/Constant1'
   *  Constant: '<S13>/Constant2'
   */
  if (Asgardus_Challenge_B.Compare) {
    Asgardus_Challenge_B.Switch = Asgardus_Challenge_P.Constant2_Value_e;
  } else {
    Asgardus_Challenge_B.Switch = Asgardus_Challenge_P.Constant1_Value_p;
  }

  /* End of Switch: '<S13>/Switch' */

  /* RelationalOperator: '<S52>/min_relop' incorporates:
   *  Constant: '<S47>/Constant1'
   */
  Asgardus_Challenge_B.min_relop_l = (Asgardus_Challenge_P.Constant1_Value_l <
    Asgardus_Challenge_B.SFunction1_o4);

  /* RelationalOperator: '<S52>/max_relop' incorporates:
   *  Constant: '<S47>/Constant'
   */
  Asgardus_Challenge_B.max_relop_f = (Asgardus_Challenge_B.SFunction1_o4 <
    Asgardus_Challenge_P.Constant_Value_o);

  /* Logic: '<S52>/conjunction' */
  Asgardus_Challenge_B.conjunction_h = (Asgardus_Challenge_B.min_relop_l &&
    Asgardus_Challenge_B.max_relop_f);

  /* RelationalOperator: '<S53>/min_relop' incorporates:
   *  Constant: '<S47>/Constant3'
   */
  Asgardus_Challenge_B.min_relop_d = (Asgardus_Challenge_P.Constant3_Value_ky <
    Asgardus_Challenge_B.SFunction1_o4_k);

  /* RelationalOperator: '<S53>/max_relop' incorporates:
   *  Constant: '<S47>/Constant2'
   */
  Asgardus_Challenge_B.max_relop_i = (Asgardus_Challenge_B.SFunction1_o4_k <
    Asgardus_Challenge_P.Constant2_Value_f);

  /* Logic: '<S53>/conjunction' */
  Asgardus_Challenge_B.conjunction_c = (Asgardus_Challenge_B.min_relop_d &&
    Asgardus_Challenge_B.max_relop_i);

  /* Logic: '<S47>/Logical Operator' */
  Asgardus_Challenge_B.LogicalOperator_i = (Asgardus_Challenge_B.conjunction_h &&
    Asgardus_Challenge_B.conjunction_c);

  /* RelationalOperator: '<S56>/min_relop' incorporates:
   *  Constant: '<S49>/Constant1'
   */
  Asgardus_Challenge_B.min_relop_i = (Asgardus_Challenge_P.Constant1_Value_k <
    Asgardus_Challenge_B.SFunction1_o4);

  /* RelationalOperator: '<S56>/max_relop' incorporates:
   *  Constant: '<S49>/Constant'
   */
  Asgardus_Challenge_B.max_relop_h = (Asgardus_Challenge_B.SFunction1_o4 <
    Asgardus_Challenge_P.Constant_Value_n);

  /* Logic: '<S56>/conjunction' */
  Asgardus_Challenge_B.conjunction_hp = (Asgardus_Challenge_B.min_relop_i &&
    Asgardus_Challenge_B.max_relop_h);

  /* RelationalOperator: '<S57>/min_relop' incorporates:
   *  Constant: '<S49>/Constant3'
   */
  Asgardus_Challenge_B.min_relop_n = (Asgardus_Challenge_P.Constant3_Value_l <
    Asgardus_Challenge_B.SFunction1_o4_k);

  /* RelationalOperator: '<S57>/max_relop' incorporates:
   *  Constant: '<S49>/Constant2'
   */
  Asgardus_Challenge_B.max_relop_n = (Asgardus_Challenge_B.SFunction1_o4_k <
    Asgardus_Challenge_P.Constant2_Value_n);

  /* Logic: '<S57>/conjunction' */
  Asgardus_Challenge_B.conjunction_g = (Asgardus_Challenge_B.min_relop_n &&
    Asgardus_Challenge_B.max_relop_n);

  /* Logic: '<S49>/Logical Operator' */
  Asgardus_Challenge_B.LogicalOperator_o = (Asgardus_Challenge_B.conjunction_hp &&
    Asgardus_Challenge_B.conjunction_g);

  /* RelationalOperator: '<S58>/min_relop' incorporates:
   *  Constant: '<S50>/Constant1'
   */
  Asgardus_Challenge_B.min_relop_a = (Asgardus_Challenge_P.Constant1_Value_e <
    Asgardus_Challenge_B.SFunction1_o4);

  /* RelationalOperator: '<S58>/max_relop' incorporates:
   *  Constant: '<S50>/Constant'
   */
  Asgardus_Challenge_B.max_relop_l = (Asgardus_Challenge_B.SFunction1_o4 <
    Asgardus_Challenge_P.Constant_Value_h);

  /* Logic: '<S58>/conjunction' */
  Asgardus_Challenge_B.conjunction_p = (Asgardus_Challenge_B.min_relop_a &&
    Asgardus_Challenge_B.max_relop_l);

  /* RelationalOperator: '<S59>/min_relop' incorporates:
   *  Constant: '<S50>/Constant3'
   */
  Asgardus_Challenge_B.min_relop_nf = (Asgardus_Challenge_P.Constant3_Value_k3 <
    Asgardus_Challenge_B.SFunction1_o4_k);

  /* RelationalOperator: '<S59>/max_relop' incorporates:
   *  Constant: '<S50>/Constant2'
   */
  Asgardus_Challenge_B.max_relop_dn = (Asgardus_Challenge_B.SFunction1_o4_k <
    Asgardus_Challenge_P.Constant2_Value_h);

  /* Logic: '<S59>/conjunction' */
  Asgardus_Challenge_B.conjunction_d = (Asgardus_Challenge_B.min_relop_nf &&
    Asgardus_Challenge_B.max_relop_dn);

  /* Logic: '<S50>/Logical Operator' */
  Asgardus_Challenge_B.LogicalOperator_ie = (Asgardus_Challenge_B.conjunction_p &&
    Asgardus_Challenge_B.conjunction_d);

  /* Trigonometry: '<S4>/Trigonometric Function' */
  Asgardus_Challenge_B.beta = atan(Asgardus_Challenge_B.Divide);

  /* S-Function (rti_commonblock): '<S8>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "TORQUE_ACT" Id:7 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X7]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X7]->processed) {
      can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X7]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X7]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X7]->timestamp > 0.0) {
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X7]->processed) {
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

          Asgardus_Challenge_B.SFunction1_o1_e = 0.075 * ( ((real_T)
            CAN_Sgn.SignedSgn) );

          /* ...... "TORQUE_FR_ACT" (16|16, standard signal, signed int, little endian) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.SignedSgn &= 0x0000FFFF;
          if (CAN_Sgn.SignedSgn >> 15) {
            CAN_Sgn.SignedSgn |= 0xFFFF0000;
          }

          Asgardus_Challenge_B.SFunction1_o2_d = 0.075 * ( ((real_T)
            CAN_Sgn.SignedSgn) );

          /* ...... "TORQUE_RL_ACT" (32|16, standard signal, signed int, little endian) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.SignedSgn &= 0x0000FFFF;
          if (CAN_Sgn.SignedSgn >> 15) {
            CAN_Sgn.SignedSgn |= 0xFFFF0000;
          }

          Asgardus_Challenge_B.SFunction1_o3_mx = 0.075 * ( ((real_T)
            CAN_Sgn.SignedSgn) );

          /* ...... "TORQUE_RR_ACT" (48|16, standard signal, signed int, little endian) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
          CAN_Sgn.SignedSgn &= 0x0000FFFF;
          if (CAN_Sgn.SignedSgn >> 15) {
            CAN_Sgn.SignedSgn |= 0xFFFF0000;
          }

          Asgardus_Challenge_B.SFunction1_o4_g = 0.075 * ( ((real_T)
            CAN_Sgn.SignedSgn) );
        }
      }
    }
  }

  /* S-Function (rti_commonblock): '<S11>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "WHEELSPEED" Id:6 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X6]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X6]->processed) {
      can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X6]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X6]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X6]->timestamp > 0.0) {
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X6]->processed) {
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

          Asgardus_Challenge_B.SFunction1_o1_b = 0.006 * ( ((real_T)
            CAN_Sgn.SignedSgn) );

          /* ...... "WHEELSPEED_FR" (16|16, standard signal, signed int, little endian) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.SignedSgn &= 0x0000FFFF;
          if (CAN_Sgn.SignedSgn >> 15) {
            CAN_Sgn.SignedSgn |= 0xFFFF0000;
          }

          Asgardus_Challenge_B.SFunction1_o2_l = 0.006 * ( ((real_T)
            CAN_Sgn.SignedSgn) );

          /* ...... "WHEELSPEED_RL" (32|16, standard signal, signed int, little endian) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.SignedSgn &= 0x0000FFFF;
          if (CAN_Sgn.SignedSgn >> 15) {
            CAN_Sgn.SignedSgn |= 0xFFFF0000;
          }

          Asgardus_Challenge_B.SFunction1_o3_c = 0.006 * ( ((real_T)
            CAN_Sgn.SignedSgn) );

          /* ...... "WHEELSPEED_RR" (48|16, standard signal, signed int, little endian) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
          CAN_Sgn.SignedSgn &= 0x0000FFFF;
          if (CAN_Sgn.SignedSgn >> 15) {
            CAN_Sgn.SignedSgn |= 0xFFFF0000;
          }

          Asgardus_Challenge_B.SFunction1_o4_m = 0.006 * ( ((real_T)
            CAN_Sgn.SignedSgn) );
        }
      }
    }
  }

  /* S-Function (rti_commonblock): '<S3>/S-Function1' */
  /* This comment workarounds a code generation problem */
}

/* Model update function */
void Asgardus_Challenge_update(void)
{
  /* Update for UnitDelay: '<S13>/Unit Delay1' */
  Asgardus_Challenge_DW.UnitDelay1_DSTATE = Asgardus_Challenge_B.Switch;

  /* Update for Atomic SubSystem: '<S4>/Control' */
  /* Update for Delay: '<S35>/UD' */
  Asgardus_Challenge_DW.UD_DSTATE = Asgardus_Challenge_B.TSamp;

  /* Update for DiscreteIntegrator: '<S32>/Integrator' */
  Asgardus_Challenge_DW.Integrator_DSTATE +=
    Asgardus_Challenge_P.Integrator_gainval * Asgardus_Challenge_B.IntegralGain;

  /* Update for DiscreteIntegrator: '<S33>/Filter' */
  Asgardus_Challenge_DW.Filter_DSTATE += Asgardus_Challenge_P.Filter_gainval *
    Asgardus_Challenge_B.FilterCoefficient;

  /* Update for DiscreteIntegrator: '<S33>/Integrator' */
  Asgardus_Challenge_DW.Integrator_DSTATE_g +=
    Asgardus_Challenge_P.Integrator_gainval_g *
    Asgardus_Challenge_B.IntegralGain_g;

  /* End of Update for SubSystem: '<S4>/Control' */

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Asgardus_Challenge_M->Timing.clockTick0)) {
    ++Asgardus_Challenge_M->Timing.clockTickH0;
  }

  Asgardus_Challenge_M->Timing.taskTime0 =
    Asgardus_Challenge_M->Timing.clockTick0 *
    Asgardus_Challenge_M->Timing.stepSize0 +
    Asgardus_Challenge_M->Timing.clockTickH0 *
    Asgardus_Challenge_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void Asgardus_Challenge_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)Asgardus_Challenge_M, 0,
                sizeof(RT_MODEL_Asgardus_Challenge_T));
  Asgardus_Challenge_M->Timing.stepSize0 = 0.01;

  /* block I/O */
  (void) memset(((void *) &Asgardus_Challenge_B), 0,
                sizeof(B_Asgardus_Challenge_T));

  /* states (dwork) */
  (void) memset((void *)&Asgardus_Challenge_DW, 0,
                sizeof(DW_Asgardus_Challenge_T));

  {
    /* user code (registration function declaration) */
    /*Initialize global TRC pointers. */
    Asgardus_Challenge_rti_init_trc_pointers();
  }

  /* Start for InitialCondition: '<Root>/IC' */
  Asgardus_Challenge_DW.IC_FirstOutputTime = true;

  /* InitializeConditions for UnitDelay: '<S13>/Unit Delay1' */
  Asgardus_Challenge_DW.UnitDelay1_DSTATE =
    Asgardus_Challenge_P.UnitDelay1_InitialCondition;

  /* InitializeConditions for RateLimiter: '<S4>/Rate Limiter' */
  Asgardus_Challenge_DW.PrevY = Asgardus_Challenge_P.RateLimiter_IC;

  /* SystemInitialize for Atomic SubSystem: '<S4>/Control' */
  /* InitializeConditions for Delay: '<S35>/UD' */
  Asgardus_Challenge_DW.UD_DSTATE = Asgardus_Challenge_P.UD_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S32>/Integrator' */
  Asgardus_Challenge_DW.Integrator_DSTATE = Asgardus_Challenge_P.Integrator_IC;

  /* InitializeConditions for DiscreteIntegrator: '<S33>/Filter' */
  Asgardus_Challenge_DW.Filter_DSTATE = Asgardus_Challenge_P.Filter_IC;

  /* InitializeConditions for DiscreteIntegrator: '<S33>/Integrator' */
  Asgardus_Challenge_DW.Integrator_DSTATE_g =
    Asgardus_Challenge_P.Integrator_IC_e;

  /* End of SystemInitialize for SubSystem: '<S4>/Control' */
}

/* Model terminate function */
void Asgardus_Challenge_terminate(void)
{
  /* Terminate for S-Function (rti_commonblock): '<S10>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "VEL" Id:3 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][1] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X3])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S1>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "ACC" Id:4 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][2] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X4])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S6>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "SIMSTATE" Id:8 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][5] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X8])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S9>/S-Function1' */

  /* dSPACE RTICAN TX Message Block: "TORQUE_CMD" Id:0 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][0] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X0])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S7>/S-Function1' */

  /* dSPACE RTICAN TX Message Block: "STEERING_CMD" Id:1 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][0] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X1])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S2>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "ANGRATE" Id:5 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][3] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X5])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S8>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "TORQUE_ACT" Id:7 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][4] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X7])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S11>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "WHEELSPEED" Id:6 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][3] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X6])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }
}
