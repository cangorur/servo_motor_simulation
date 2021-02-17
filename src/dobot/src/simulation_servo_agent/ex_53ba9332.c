#include "pm_std.h"
#include "lang_std.h"
size_t ex_L5fur6LFRji_Faer_7yzJ1(const real_T x,const real_T *
ex_kqTQ1epcuYM_DyDj2jQ1y1,const size_t n){size_t ex_SmSSPSQfR1qEYWsVj5ELF0;if(
x<ex_kqTQ1epcuYM_DyDj2jQ1y1[0]){ex_SmSSPSQfR1qEYWsVj5ELF0= 0;}else if(x>
ex_kqTQ1epcuYM_DyDj2jQ1y1[n -1]){ex_SmSSPSQfR1qEYWsVj5ELF0= n +1;}else{for(
ex_SmSSPSQfR1qEYWsVj5ELF0= 1;((ex_SmSSPSQfR1qEYWsVj5ELF0<=n)&&(
ex_kqTQ1epcuYM_DyDj2jQ1y1[ex_SmSSPSQfR1qEYWsVj5ELF0 -1]<x));++
ex_SmSSPSQfR1qEYWsVj5ELF0);}return ex_SmSSPSQfR1qEYWsVj5ELF0;}boolean_T
ex_0GHZIgf9eIkm4JLO26S3l_(const size_t n,const real_T *
ex_OI6G61_JNe4A2dfwPtv0e1){size_t ex_SmSSPSQfR1qEYWsVj5ELF0;for(
ex_SmSSPSQfR1qEYWsVj5ELF0= 0;ex_SmSSPSQfR1qEYWsVj5ELF0<n -1;++
ex_SmSSPSQfR1qEYWsVj5ELF0){if(ex_OI6G61_JNe4A2dfwPtv0e1[
ex_SmSSPSQfR1qEYWsVj5ELF0]>=ex_OI6G61_JNe4A2dfwPtv0e1[
ex_SmSSPSQfR1qEYWsVj5ELF0 +1]){return false;}}return true;};void
ex_88fZfZQUB5GeldICfHd5W0(const size_t n,real_T *ex_OI6G61_JNe4A2dfwPtv0e1){
size_t ex_SmSSPSQfR1qEYWsVj5ELF0;size_t ex_PIqWtbzrbQqv_KS_31HnE2= n -1;for(
ex_SmSSPSQfR1qEYWsVj5ELF0= 0;ex_SmSSPSQfR1qEYWsVj5ELF0<(n/ 2);++
ex_SmSSPSQfR1qEYWsVj5ELF0){real_T ex_U938Ucreg_Pd41Eh8sAbX1=
ex_OI6G61_JNe4A2dfwPtv0e1[ex_SmSSPSQfR1qEYWsVj5ELF0];ex_OI6G61_JNe4A2dfwPtv0e1
[ex_SmSSPSQfR1qEYWsVj5ELF0]= ex_OI6G61_JNe4A2dfwPtv0e1[
ex_PIqWtbzrbQqv_KS_31HnE2];ex_OI6G61_JNe4A2dfwPtv0e1[ex_PIqWtbzrbQqv_KS_31HnE2
]= ex_U938Ucreg_Pd41Eh8sAbX1;--ex_PIqWtbzrbQqv_KS_31HnE2;}};
