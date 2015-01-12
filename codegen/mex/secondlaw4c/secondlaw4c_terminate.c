/*
 * secondlaw4c_terminate.c
 *
 * Code generation for function 'secondlaw4c_terminate'
 *
 * C source code generated on: Mon Jan 05 23:24:56 2015
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "secondlaw4c.h"
#include "secondlaw4c_terminate.h"

/* Function Definitions */
void secondlaw4c_atexit(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emlrtLeaveRtStackR2012b(emlrtRootTLSGlobal);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void secondlaw4c_terminate(void)
{
  emlrtLeaveRtStackR2012b(emlrtRootTLSGlobal);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (secondlaw4c_terminate.c) */
