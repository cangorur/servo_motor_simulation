/*****************************************************************************
 ** File : pm_printf.h
 ** Abstract :
 **
 **    Implement wrappers for printf functions.  Factored out for VS 15
 **    compatibility.
 **
 ** Copyright 2015 The MathWorks, Inc.
 *******************************************************************************/

#include <stdio.h>
#include <stdarg.h>

void pmf_vprintf(char const* format, va_list args)
{
    vprintf(format, args);
}

void pmf_printf(char const* format, ...)
{
    va_list args;
    va_start(args, format);
    pmf_vprintf(format, args);
    va_end(args);
}

int pmf_vsnprintf(char* buffer, size_t l, char const* format, va_list args)
{
    (void) l; /* note C89 does not support vs*n*printf */
    return vsprintf(buffer, format, args);
}

int pmf_snprintf(char* buffer, size_t l, char const* format, ...)
{
    int res = 0;
    va_list args;
    va_start(args, format);
    res = pmf_vsnprintf(buffer, l, format, args);
    va_end(args);
    return res;
}
