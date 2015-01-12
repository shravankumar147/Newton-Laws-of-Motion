@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2013a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2013a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=secondlaw4c_mex
set MEX_NAME=secondlaw4c_mex
set MEX_EXT=.mexw64
call mexopts.bat
echo # Make settings for secondlaw4c > secondlaw4c_mex.mki
echo COMPILER=%COMPILER%>> secondlaw4c_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> secondlaw4c_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> secondlaw4c_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> secondlaw4c_mex.mki
echo LINKER=%LINKER%>> secondlaw4c_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> secondlaw4c_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> secondlaw4c_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> secondlaw4c_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> secondlaw4c_mex.mki
echo BORLAND=%BORLAND%>> secondlaw4c_mex.mki
echo OMPFLAGS= >> secondlaw4c_mex.mki
echo OMPLINKFLAGS= >> secondlaw4c_mex.mki
echo EMC_COMPILER=msvcsdk>> secondlaw4c_mex.mki
echo EMC_CONFIG=optim>> secondlaw4c_mex.mki
"C:\Program Files\MATLAB\R2013a\bin\win64\gmake" -B -f secondlaw4c_mex.mk
