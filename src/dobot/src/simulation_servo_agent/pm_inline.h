/****************************************************************************
 ** File: pm_inline.h
 ** Abstract:
 **     Physical modeling standard header.
 ** 
 ** Copyright 2016 The MathWorks, Inc.
 ****************************************************************************/

#ifndef __pm_inline_h__
#define __pm_inline_h__

#ifdef _MSC_VER
#define PMF_DEPLOY_STATIC static __inline
#else
#define PMF_DEPLOY_STATIC static
#endif

#endif /* __pm_inline_h__ */
/* [EOF] pm_inline.h */
