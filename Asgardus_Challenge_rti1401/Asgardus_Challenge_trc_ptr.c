/***************************************************************************

   Source file Asgardus_Challenge_trc_ptr.c:

   Definition of function that initializes the global TRC pointers

   RTI1401 7.9 (02-Nov-2017)
   Tue Jun 19 14:46:54 2018

   Copyright 2018, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

/* Include header file. */
#include "Asgardus_Challenge_trc_ptr.h"
#include "Asgardus_Challenge.h"
#include "Asgardus_Challenge_private.h"

/* Compiler options to turn off optimization. */
#if !defined(DS_OPTIMIZE_INIT_TRC_POINTERS)
#ifdef _MCCPPC

#pragma options -nOt -nOr -nOi -nOx

#endif

#ifdef __GNUC__

#pragma GCC optimize ("O0")

#endif

#ifdef _MSC_VER

#pragma optimize ("", off)

#endif
#endif

/* Definition of Global pointers to data type transitions (for TRC-file access) */
volatile real_T *p_0_Asgardus_Challenge_real_T_0 = NULL;
volatile boolean_T *p_0_Asgardus_Challenge_boolean_T_1 = NULL;
volatile real_T *p_1_Asgardus_Challenge_real_T_0 = NULL;
volatile uint32_T *p_1_Asgardus_Challenge_uint32_T_1 = NULL;
volatile real_T *p_2_Asgardus_Challenge_real_T_0 = NULL;
volatile int_T *p_2_Asgardus_Challenge_int_T_2 = NULL;
volatile boolean_T *p_2_Asgardus_Challenge_boolean_T_3 = NULL;

/*
 *  Declare the functions, that initially assign TRC pointers
 */
static void rti_init_trc_pointers_0(void);

/* Global pointers to data type transitions are separated in different functions to avoid overloading */
static void rti_init_trc_pointers_0(void)
{
  p_0_Asgardus_Challenge_real_T_0 = &Asgardus_Challenge_B.UnitDelay1;
  p_0_Asgardus_Challenge_boolean_T_1 = &Asgardus_Challenge_B.min_relop;
  p_1_Asgardus_Challenge_real_T_0 =
    &Asgardus_Challenge_P.DiscretePIDController1_D;
  p_1_Asgardus_Challenge_uint32_T_1 = &Asgardus_Challenge_P.UD_DelayLength;
  p_2_Asgardus_Challenge_real_T_0 = &Asgardus_Challenge_DW.UnitDelay1_DSTATE;
  p_2_Asgardus_Challenge_int_T_2 = &Asgardus_Challenge_DW.SFunction1_IWORK[0];
  p_2_Asgardus_Challenge_boolean_T_3 = &Asgardus_Challenge_DW.IC_FirstOutputTime;
}

void Asgardus_Challenge_rti_init_trc_pointers(void)
{
  rti_init_trc_pointers_0();
}
