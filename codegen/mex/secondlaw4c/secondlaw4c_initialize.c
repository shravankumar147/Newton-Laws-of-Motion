/*
 * secondlaw4c_initialize.c
 *
 * Code generation for function 'secondlaw4c_initialize'
 *
 * C source code generated on: Mon Jan 05 23:24:56 2015
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "secondlaw4c.h"
#include "secondlaw4c_initialize.h"

/* Variable Definitions */
static const volatile char_T *emlrtBreakCheckR2012bFlagVar;

/* Function Definitions */
void secondlaw4c_initialize(emlrtContext *aContext)
{
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, aContext, NULL, 1);
  emlrtClearAllocCountR2012b(emlrtRootTLSGlobal, FALSE, 0U, 0);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (secondlaw4c_initialize.c) */
