  /*********************** dSPACE target specific file *************************

   Header file solution1_7009_CAN_trc_ptr.h:

   Declaration of function that initializes the global TRC pointers

   RTI1401 7.9 (02-Nov-2017)
   Tue Jun 19 13:11:40 2018

   Copyright 2018, dSPACE GmbH. All rights reserved.

  *****************************************************************************/
  #ifndef RTI_HEADER_solution1_7009_CAN_trc_ptr_h_
  #define RTI_HEADER_solution1_7009_CAN_trc_ptr_h_
  /* Include the model header file. */
  #include "solution1_7009_CAN.h"
  #include "solution1_7009_CAN_private.h"

  #ifdef EXTERN_C
  #undef EXTERN_C
  #endif

  #ifdef __cplusplus
  #define EXTERN_C                       extern "C"
  #else
  #define EXTERN_C                       extern
  #endif

  /*
   *  Declare the global TRC pointers
   */
              EXTERN_C volatile  real_T *p_0_solution1_7009_CAN_real_T_0;
              EXTERN_C volatile  real_T *p_1_solution1_7009_CAN_real_T_0;
              EXTERN_C volatile  uint32_T *p_1_solution1_7009_CAN_uint32_T_1;
              EXTERN_C volatile  real_T *p_2_solution1_7009_CAN_real_T_0;
              EXTERN_C volatile  int_T *p_2_solution1_7009_CAN_int_T_1;
              EXTERN_C volatile  boolean_T *p_2_solution1_7009_CAN_boolean_T_2;

  /*
   *  Declare the general function for TRC pointer initialization
   */
  EXTERN_C void solution1_7009_CAN_rti_init_trc_pointers(void);
   #endif                       /* RTI_HEADER_solution1_7009_CAN_trc_ptr_h_ */
