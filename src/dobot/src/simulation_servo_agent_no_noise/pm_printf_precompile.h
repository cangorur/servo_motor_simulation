/*****************************************************************************
 ** File : pm_printf_precompile.h
 ** Abstract :
 **
 **    Determine whether to include implementations of pm_*printf in the
 **    precompiled library or defer their compilation until model build time.
 **
 **    This mechanism is to address an incompatibility between VS 15 and
 **    previous versions with respect to the printf functions.
 **
 ** Copyright 2015 The MathWorks, Inc.
 *******************************************************************************/

/* on Visual do *not* precompile the printf implementations */

#if !defined(_MSC_VER)
#include <pm_printf.h>
#endif
