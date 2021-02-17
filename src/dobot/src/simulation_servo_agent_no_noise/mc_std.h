#ifndef __mc_std_h__
#define __mc_std_h__
#include "pm_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef struct McLinearAlgebraTag McLinearAlgebra;typedef struct
McRealFunctionTag McRealFunction;typedef struct McIntFunctionTag McIntFunction
;typedef struct McMatrixFunctionTag McMatrixFunction;typedef enum
McLinearAlgebraStatusTag{MC_LA_INVALID= -1,MC_LA_ERROR,MC_LA_OK}
McLinearAlgebraStatus;typedef struct McLinearAlgebraDataTag McLinearAlgebraData
;typedef McLinearAlgebraData *(*McLinearAlgebraConstructor)(PmAllocator *,
const PmSparsityPattern *);typedef McLinearAlgebraStatus(*
McLinearAlgebraSymbolic)(McLinearAlgebraData *);typedef McLinearAlgebraStatus(
*McLinearAlgebraNumeric)(McLinearAlgebraData *,const real_T *);typedef
McLinearAlgebraStatus(*McLinearAlgebraSolve)(McLinearAlgebraData *,const real_T
*,real_T *,const real_T *);typedef void(*McLinearAlgebraNumericDestroy)(
McLinearAlgebraData *);typedef void(*McLinearAlgebraSymbolicDestroy)(
McLinearAlgebraData *);typedef void(*McLinearAlgebraDestructor)(PmAllocator *,
McLinearAlgebraData *);struct McLinearAlgebraTag{McLinearAlgebraConstructor
mConstructor;McLinearAlgebraSymbolic mSymbolic;McLinearAlgebraNumeric mNumeric
;McLinearAlgebraSolve mSolve;McLinearAlgebraNumericDestroy mNumericDestroy;
McLinearAlgebraSymbolicDestroy mSymbolicDestroy;McLinearAlgebraDestructor
mDestructor;};
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __mc_std_h__ */
