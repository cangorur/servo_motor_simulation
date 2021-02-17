/****************************************************************************
 ** File: pm_std.h
 ** Abstract:
 **     Physical modeling standard header.
 **
 ** Copyright 2009-2014 The MathWorks, Inc.
 ****************************************************************************/

#ifndef __pm_std_h__
#define __pm_std_h__

#ifdef MATLAB_MEX_FILE
#include "tmwtypes.h"
#else
#include "rtwtypes.h"
#endif

#include "pm_types.h"
#include "pm_inline.h"

#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>

#define pmf_strcpy         strcpy
#define pmf_calloc         calloc
#define pmf_free           free
#define pmf_malloc         malloc

void pmf_printf(char const*, ...);

void pmf_vprintf(char const*, va_list);

int pmf_snprintf(char*, size_t, char const*, ...);

int pmf_vsnprintf(char*, size_t, char const*, va_list);

real_T pmf_get_eps(void);

boolean_T pmf_is_nan(real_T x);

boolean_T pmf_is_inf(real_T x);

real_T pmf_get_real_max(void);

real_T pmf_get_real_min(void);

real_T pmf_get_pi(void);

real_T pmf_get_inf(void);

void pmf_warning( const char *w, ...);

void pmf_preformatted_warning(const char *id,
                              const char *msg);

int pmf_vsnprintf_message(char       *buffer,
                          size_t      l,
                          const char *format,
                          va_list     arg);

int pmf_snprintf_message(char       *buffer,
                         size_t      length,
                         const char *format,
                         ...);

boolean_T pmf_is_interrupt_pending(void);

real_T pmf_asin( real_T x );

real_T pmf_acos( real_T x );

real_T pmf_log( real_T x );

real_T pmf_log10( real_T x );

real_T pmf_pow( real_T x, real_T y );

real_T pmf_sqrt( real_T x );

#ifndef TRUE
#define TRUE                          (1U)
#endif

#ifndef FALSE
#define FALSE                         (0U)
#endif

typedef const char    *PmfMessageId;

#endif /* __pm_std_h__ */
/* [EOF] pm_std.h */
