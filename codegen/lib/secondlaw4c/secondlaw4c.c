/*
 * secondlaw4c.c
 *
 * Code generation for function 'secondlaw4c'
 *
 * C source code generated on: Tue Jan 06 15:45:17 2015
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "secondlaw4c.h"

/* Function Declarations */
static real_T rt_roundd_snf(real_T u);

/* Function Definitions */
static real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

int8_T secondlaw4c(int8_T u, int8_T a, int8_T t)
{
  int8_T ak;
  int8_T y;
  uint8_T bku;
  int32_T exitg1;
  int32_T i0;
  int32_T i1;

  /* % Newton Second Law  */
  /*  x = ut+ 1/2 at^2; */
  /* UNTITLED3 Summary of this function goes here */
  /*    Detailed explanation goes here */
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

  i0 = u * t;
  if (i0 > 127) {
    i0 = 127;
  } else {
    if (i0 < -128) {
      i0 = -128;
    }
  }

  i1 = (int32_T)rt_roundd_snf(0.5 * (real_T)a);
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

  return (int8_T)i0;
}

/* End of code generation (secondlaw4c.c) */
