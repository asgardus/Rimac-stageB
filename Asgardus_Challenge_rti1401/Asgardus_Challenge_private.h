/*
 * Asgardus_Challenge_private.h
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

#ifndef RTW_HEADER_Asgardus_Challenge_private_h_
#define RTW_HEADER_Asgardus_Challenge_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* ...  variable for information on a CAN channel */
extern can_tp1_canChannel* can_type1_channel_M1_C1;

/* ... definition of message variable for the RTICAN blocks */
#define CANTP1_M1_NUMMSG               8

extern can_tp1_canMsg* can_type1_msg_M1[CANTP1_M1_NUMMSG];

/* ... variable for taskqueue error checking                  */
extern Int32 rtican_type1_tq_error[CAN_TYPE1_NUM_MODULES]
  [CAN_TYPE1_NUM_TASKQUEUES];

/* Declaration of user indices (CAN_Type1_M1) */
#define CANTP1_M1_C1_TX_STD_0X0        0
#define TX_C1_STD_0X0                  0
#undef TX_C1_STD_0X0
#define CANTP1_M1_C1_TX_STD_0X1        1
#define TX_C1_STD_0X1                  1
#undef TX_C1_STD_0X1
#define CANTP1_M1_C1_RX_STD_0X3        2
#define RX_C1_STD_0X3                  2
#undef RX_C1_STD_0X3
#define CANTP1_M1_C1_RX_STD_0X4        3
#define RX_C1_STD_0X4                  3
#undef RX_C1_STD_0X4
#define CANTP1_M1_C1_RX_STD_0X8        4
#define RX_C1_STD_0X8                  4
#undef RX_C1_STD_0X8
#define CANTP1_M1_C1_RX_STD_0X5        5
#define RX_C1_STD_0X5                  5
#undef RX_C1_STD_0X5
#define CANTP1_M1_C1_RX_STD_0X7        6
#define RX_C1_STD_0X7                  6
#undef RX_C1_STD_0X7
#define CANTP1_M1_C1_RX_STD_0X6        7
#define RX_C1_STD_0X6                  7
#undef RX_C1_STD_0X6

/* predefine needed TX-definition code to support TX-Custom code */
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M1_C1_STD;
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M1_C1_XTD;

#endif                                 /* RTW_HEADER_Asgardus_Challenge_private_h_ */
