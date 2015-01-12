###########################################################################
## File : secondlaw4c_rtw_tools.mk
## 
## Makefile generated for MATLAB file/project 'secondlaw4c'. 
## 
## Makefile Info:
## 
## Toolchain Name:          Microsoft Windows SDK v7.1 | nmake (64-bit Windows)
## Supported Version(s):    7.1
## ToolchainInfo Version:   R2013a
## Specification Revision:  1.0
## 
## MATLAB Coder version: 2.4 (R2013a)
## 
###########################################################################


!include <ntwin32.mak>


#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# NODEBUG
# cvarsdll
# cvarsmt
# conlibsmt
# ldebug
# conflags
# cflags

#-----------
# MACROS
#-----------

MEX_OPTS_FILE       = $(MATLAB_ROOT)\bin\$(ARCH)\mexopts\mssdk71opts.bat
MW_EXTERNLIB_DIR    = $(MATLAB_ROOT)\extern\lib\win64\microsoft
MW_LIB_DIR          = $(MATLAB_ROOT)\lib\win64
MEX_ARCH            = -win64
CPU                 = AMD64
APPVER              = 5.02
CVARSFLAG           = $(cvarsmt)
CFLAGS_ADDITIONAL   = -D_CRT_SECURE_NO_WARNINGS
CPPFLAGS_ADDITIONAL = -EHs -D_CRT_SECURE_NO_WARNINGS
LIBS_TOOLCHAIN      = $(conlibs)

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = 

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# C Compiler: Microsoft Visual C Compiler
CC = cl

# C++ Compiler: Microsoft Visual C++ Compiler
CPP = cl

# Archiver: Microsoft Visual C/C++ Archiver
AR = lib

# Linker: Microsoft Visual C/C++ Linker
LD = link

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_BIN)
MEX = $(MEX_PATH)\mex

# Download: Download
DOWNLOAD =

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder Application: NMAKE Utility
MAKE = nmake


#-------------------------
# Directives/Utilities
#-------------------------

CDEBUG              = -Zi
C_OUTPUT_FLAG       = -Fo
CPPDEBUG            = -Zi
CPP_OUTPUT_FLAG     = -Fo
ARDEBUG             =
STATICLIB_OUTPUT_FLAG = -out:
LDDEBUG             =
OUTPUT_FLAG         = -out:
MEX_DEBUG           = -g
RM                  = @del
ECHO                = @echo
MV                  = @mv
RUN                 = @cmd /C

#----------------------------------------
# "Faster Builds" Build Configuration
#----------------------------------------

ARFLAGS              = /nologo
CFLAGS               = $(cflags) $(CVARSFLAG) $(CFLAGS_ADDITIONAL) \
                       /Od /Oy-
CPPFLAGS             = $(cflags) $(CVARSFLAG) $(CPPFLAGS_ADDITIONAL) \
                       /Od /Oy-
DOWNLOAD_FLAGS       =
EXECUTE_FLAGS        =
LDFLAGS              = $(ldebug) $(conflags) $(LIBS_TOOLCHAIN)
MEX_CFLAGS           = $(MEX_ARCH) OPTIMFLAGS="/Od /Oy- $(MDFLAG) $(DEFINES)" $(MEX_OPTS_FLAG)
MEX_LDFLAGS          = LDFLAGS=='$$LDFLAGS'
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    = $(ldebug) $(conflags) $(LIBS_TOOLCHAIN) \
                       -dll -def:$(DEF_FILE)

#--------------------
# File extensions
#--------------------

H_EXT               = .h
OBJ_EXT             = .obj
C_EXT               = .c
HPP_EXT             = .hpp
OBJ_EXT             = .obj
CPP_EXT             = .cpp
STATICLIB_EXT       = .lib
EXE_EXT             = .exe
SHAREDLIB_EXT       = .dll
MEX_EXT             = .mexw64
MAKE_EXT            = .mk

