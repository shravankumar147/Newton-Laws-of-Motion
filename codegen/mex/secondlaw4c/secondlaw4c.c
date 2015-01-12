/*
 * secondlaw4c.c
 *
 * Code generation for function 'secondlaw4c'
 *
 * C source code generated on: Mon Jan 05 23:24:56 2015
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "secondlaw4c.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 4, "secondlaw4c",
  "D:/work/Tutorial/Newton Lwas of Motions/secondlaw4c.m" };

static emlrtRSInfo b_emlrtRSI = { 39, "power",
  "C:/Program Files/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/power.m" };

/* Function Definitions */
int8_T secondlaw4c(int8_T u, int8_T a, int8_T t)
{
  int8_T x;
  int8_T ak;
  int8_T y;
  uint8_T bku;
  int32_T exitg1;
  int32_T i0;
  int32_T i1;

  /* UNTITLED3 Summary of this function goes here */
  /*    Detailed explanation goes here */
  emlrtPushRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
  ak = t;
  y = 1;
  bku = 2;
  do {
    exitg1 = 0;
    if ((bku & 1) != 0) {
      i0 = ak * y;
      if (i0 > 127) {
        i0 = 127;
      } else {
        if (i0 < -128) {
          i0 = -128;
        }
      }

      y = (int8_T)i0;
    }

    bku = (uint8_T)((uint32_T)bku >> 1);
    if (bku == 0) {
      exitg1 = 1;
    } else {
      i0 = ak * ak;
      if (i0 > 127) {
        i0 = 127;
      } else {
        if (i0 < -128) {
          i0 = -128;
        }
      }

      ak = (int8_T)i0;
    }
  } while (exitg1 == 0);

  emlrtPopRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
  i0 = u * t;
  if (i0 > 127) {
    i0 = 127;
  } else {
    if (i0 < -128) {
      i0 = -128;
    }
  }

  i1 = (int32_T)muDoubleScalarRound(0.5 * (real_T)a);
  ak = (int8_T)i1;
  i1 = ak * y;
  if (i1 > 127) {
    i1 = 127;
  } else {
    if (i1 < -128) {
      i1 = -128;
    }
  }

  i0 += i1;
  if (i0 > 127) {
    i0 = 127;
  } else {
    if (i0 < -128) {
      i0 = -128;
    }
  }

  x = (int8_T)i0;
  emlrtPopRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
  return x;
}

/* End of code generation (secondlaw4c.c) */
