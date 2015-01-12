/*
 * secondlaw4c_api.c
 *
 * Code generation for function 'secondlaw4c_api'
 *
 * C source code generated on: Mon Jan 05 23:24:56 2015
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "secondlaw4c.h"
#include "secondlaw4c_api.h"

/* Type Definitions */
#ifndef typedef_ResolvedFunctionInfo
#define typedef_ResolvedFunctionInfo

typedef struct {
  const char * context;
  const char * name;
  const char * dominantType;
  const char * resolved;
  uint32_T fileTimeLo;
  uint32_T fileTimeHi;
  uint32_T mFileTimeLo;
  uint32_T mFileTimeHi;
} ResolvedFunctionInfo;

#endif                                 /*typedef_ResolvedFunctionInfo*/

/* Function Declarations */
static int8_T b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId);
static int8_T c_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId);
static int8_T emlrt_marshallIn(const mxArray *u, const char_T *identifier);
static const mxArray *emlrt_marshallOut(int8_T u);

/* Function Definitions */
static int8_T b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId)
{
  int8_T y;
  y = c_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static int8_T c_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId)
{
  int8_T ret;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "int8", FALSE, 0U, 0);
  ret = *(int8_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static int8_T emlrt_marshallIn(const mxArray *u, const char_T *identifier)
{
  int8_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = b_emlrt_marshallIn(emlrtAlias(u), &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *emlrt_marshallOut(int8_T u)
{
  const mxArray *y;
  const mxArray *m1;
  y = NULL;
  m1 = mxCreateNumericMatrix(1, 1, mxINT8_CLASS, mxREAL);
  *(int8_T *)mxGetData(m1) = u;
  emlrtAssign(&y, m1);
  return y;
}

const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  ResolvedFunctionInfo info[9];
  ResolvedFunctionInfo (*b_info)[9];
  ResolvedFunctionInfo u[9];
  int32_T i;
  const mxArray *y;
  int32_T iv0[1];
  ResolvedFunctionInfo *r0;
  const char * b_u;
  const mxArray *b_y;
  const mxArray *m0;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  uint32_T c_u;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  nameCaptureInfo = NULL;
  b_info = (ResolvedFunctionInfo (*)[9])info;
  (*b_info)[0].context =
    "[E]D:/work/Tutorial/Newton Lwas of Motions/secondlaw4c.m";
  (*b_info)[0].name = "mtimes";
  (*b_info)[0].dominantType = "int8";
  (*b_info)[0].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*b_info)[0].fileTimeLo = 1289503492U;
  (*b_info)[0].fileTimeHi = 0U;
  (*b_info)[0].mFileTimeLo = 0U;
  (*b_info)[0].mFileTimeHi = 0U;
  (*b_info)[1].context =
    "[E]D:/work/Tutorial/Newton Lwas of Motions/secondlaw4c.m";
  (*b_info)[1].name = "power";
  (*b_info)[1].dominantType = "int8";
  (*b_info)[1].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m";
  (*b_info)[1].fileTimeLo = 1348179330U;
  (*b_info)[1].fileTimeHi = 0U;
  (*b_info)[1].mFileTimeLo = 0U;
  (*b_info)[1].mFileTimeHi = 0U;
  (*b_info)[2].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!intpower";
  (*b_info)[2].name = "eml_scalar_eg";
  (*b_info)[2].dominantType = "int8";
  (*b_info)[2].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  (*b_info)[2].fileTimeLo = 1286806196U;
  (*b_info)[2].fileTimeHi = 0U;
  (*b_info)[2].mFileTimeLo = 0U;
  (*b_info)[2].mFileTimeHi = 0U;
  (*b_info)[3].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!intpower";
  (*b_info)[3].name = "eml_scalexp_alloc";
  (*b_info)[3].dominantType = "int8";
  (*b_info)[3].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  (*b_info)[3].fileTimeLo = 1352408660U;
  (*b_info)[3].fileTimeHi = 0U;
  (*b_info)[3].mFileTimeLo = 0U;
  (*b_info)[3].mFileTimeHi = 0U;
  (*b_info)[4].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!intpower";
  (*b_info)[4].name = "eml_unsigned_class";
  (*b_info)[4].dominantType = "char";
  (*b_info)[4].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_unsigned_class.m";
  (*b_info)[4].fileTimeLo = 1323154380U;
  (*b_info)[4].fileTimeHi = 0U;
  (*b_info)[4].mFileTimeLo = 0U;
  (*b_info)[4].mFileTimeHi = 0U;
  (*b_info)[5].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!intpower";
  (*b_info)[5].name = "floor";
  (*b_info)[5].dominantType = "double";
  (*b_info)[5].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  (*b_info)[5].fileTimeLo = 1343817780U;
  (*b_info)[5].fileTimeHi = 0U;
  (*b_info)[5].mFileTimeLo = 0U;
  (*b_info)[5].mFileTimeHi = 0U;
  (*b_info)[6].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  (*b_info)[6].name = "eml_scalar_floor";
  (*b_info)[6].dominantType = "double";
  (*b_info)[6].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m";
  (*b_info)[6].fileTimeLo = 1286806126U;
  (*b_info)[6].fileTimeHi = 0U;
  (*b_info)[6].mFileTimeLo = 0U;
  (*b_info)[6].mFileTimeHi = 0U;
  (*b_info)[7].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!intpower";
  (*b_info)[7].name = "mtimes";
  (*b_info)[7].dominantType = "int8";
  (*b_info)[7].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*b_info)[7].fileTimeLo = 1289503492U;
  (*b_info)[7].fileTimeHi = 0U;
  (*b_info)[7].mFileTimeLo = 0U;
  (*b_info)[7].mFileTimeHi = 0U;
  (*b_info)[8].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!intpower";
  (*b_info)[8].name = "intmax";
  (*b_info)[8].dominantType = "char";
  (*b_info)[8].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  (*b_info)[8].fileTimeLo = 1311242716U;
  (*b_info)[8].fileTimeHi = 0U;
  (*b_info)[8].mFileTimeLo = 0U;
  (*b_info)[8].mFileTimeHi = 0U;
  for (i = 0; i < 9; i++) {
    u[i] = info[i];
  }

  y = NULL;
  iv0[0] = 9;
  emlrtAssign(&y, mxCreateStructArray(1, iv0, 0, NULL));
  for (i = 0; i < 9; i++) {
    r0 = &u[i];
    b_u = r0->context;
    b_y = NULL;
    m0 = mxCreateString(b_u);
    emlrtAssign(&b_y, m0);
    emlrtAddField(y, b_y, "context", i);
    b_u = r0->name;
    c_y = NULL;
    m0 = mxCreateString(b_u);
    emlrtAssign(&c_y, m0);
    emlrtAddField(y, c_y, "name", i);
    b_u = r0->dominantType;
    d_y = NULL;
    m0 = mxCreateString(b_u);
    emlrtAssign(&d_y, m0);
    emlrtAddField(y, d_y, "dominantType", i);
    b_u = r0->resolved;
    e_y = NULL;
    m0 = mxCreateString(b_u);
    emlrtAssign(&e_y, m0);
    emlrtAddField(y, e_y, "resolved", i);
    c_u = r0->fileTimeLo;
    f_y = NULL;
    m0 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m0) = c_u;
    emlrtAssign(&f_y, m0);
    emlrtAddField(y, f_y, "fileTimeLo", i);
    c_u = r0->fileTimeHi;
    g_y = NULL;
    m0 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m0) = c_u;
    emlrtAssign(&g_y, m0);
    emlrtAddField(y, g_y, "fileTimeHi", i);
    c_u = r0->mFileTimeLo;
    h_y = NULL;
    m0 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m0) = c_u;
    emlrtAssign(&h_y, m0);
    emlrtAddField(y, h_y, "mFileTimeLo", i);
    c_u = r0->mFileTimeHi;
    i_y = NULL;
    m0 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m0) = c_u;
    emlrtAssign(&i_y, m0);
    emlrtAddField(y, i_y, "mFileTimeHi", i);
  }

  emlrtAssign(&nameCaptureInfo, y);
  emlrtNameCapturePostProcessR2012a(emlrtAlias(nameCaptureInfo));
  return nameCaptureInfo;
}

void secondlaw4c_api(const mxArray * const prhs[3], const mxArray *plhs[1])
{
  int8_T u;
  int8_T a;
  int8_T t;

  /* Marshall function inputs */
  u = emlrt_marshallIn(emlrtAliasP(prhs[0]), "u");
  a = emlrt_marshallIn(emlrtAliasP(prhs[1]), "a");
  t = emlrt_marshallIn(emlrtAliasP(prhs[2]), "t");

  /* Invoke the target function */
  u = secondlaw4c(u, a, t);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(u);
}

/* End of code generation (secondlaw4c_api.c) */
