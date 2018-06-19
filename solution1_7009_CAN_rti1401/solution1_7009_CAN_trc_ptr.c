   /***************************************************************************

   Source file solution1_7009_CAN_trc_ptr.c:

   Definition of function that initializes the global TRC pointers

   RTI1401 7.9 (02-Nov-2017)
   Tue Jun 19 13:11:40 2018

   Copyright 2018, dSPACE GmbH. All rights reserved.

  *****************************************************************************/

  /* Include header file. */
  #include "solution1_7009_CAN_trc_ptr.h"
  #include "solution1_7009_CAN.h"
  #include "solution1_7009_CAN_private.h"
 
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
              volatile  real_T *p_0_solution1_7009_CAN_real_T_0 = NULL;
              
              volatile  real_T *p_1_solution1_7009_CAN_real_T_0 = NULL;
              
              volatile  uint32_T *p_1_solution1_7009_CAN_uint32_T_1 = NULL;
              
              volatile  real_T *p_2_solution1_7009_CAN_real_T_0 = NULL;
              
              volatile  int_T *p_2_solution1_7009_CAN_int_T_1 = NULL;
              
              volatile  boolean_T *p_2_solution1_7009_CAN_boolean_T_2 = NULL;
              

  /*
   *  Declare the functions, that initially assign TRC pointers
   */
  static void rti_init_trc_pointers_0(void);
  /* Global pointers to data type transitions are separated in different functions to avoid overloading */
    static void rti_init_trc_pointers_0(void)
    {
    p_0_solution1_7009_CAN_real_T_0 = &solution1_7009_CAN_B.SFunction1_o1;
p_1_solution1_7009_CAN_real_T_0 = &solution1_7009_CAN_P.DiscretePIDController1_D;
p_1_solution1_7009_CAN_uint32_T_1 = &solution1_7009_CAN_P.UD_DelayLength;
p_2_solution1_7009_CAN_real_T_0 = &solution1_7009_CAN_DW.UnitDelay_DSTATE;
p_2_solution1_7009_CAN_int_T_1 = &solution1_7009_CAN_DW.SFunction1_IWORK[0];
p_2_solution1_7009_CAN_boolean_T_2 = &solution1_7009_CAN_DW.IC_FirstOutputTime;

    }
    void solution1_7009_CAN_rti_init_trc_pointers(void)
    {
     rti_init_trc_pointers_0();
    }
