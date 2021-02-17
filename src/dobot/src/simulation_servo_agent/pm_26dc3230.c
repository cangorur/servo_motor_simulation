#include "pm_std.h"
#include "pm_std.h"
#include "pm_std.h"
#include "pm_std.h"
#include "pm_std.h"
#include "math.h"
#include "float.h"
real_T pmf_get_eps(void){return DBL_EPSILON;}real_T pmf_get_real_max(void){
return DBL_MAX;}real_T pmf_get_real_min(void){return DBL_MIN;}real_T pmf_get_pi
(void){return 3.14159265358979323846;}static real_T pm_UbYMiR0RiUG68GufUBdZ11(
real_T x){real_T pm_2KXuAphrqc_TLcinUGD4E1= 0.0;if(x>0.0){
pm_2KXuAphrqc_TLcinUGD4E1= 1.0;}else if(x<0.0){pm_2KXuAphrqc_TLcinUGD4E1= -1.0
;}return pm_2KXuAphrqc_TLcinUGD4E1;}boolean_T pmf_is_nan(real_T x){return(x!=x
);}boolean_T pmf_is_inf(real_T x){double const pm_q7XOUGIh2TeS2QJmrxseq2=
pmf_get_inf();return(x==pm_q7XOUGIh2TeS2QJmrxseq2)||(-x==
pm_q7XOUGIh2TeS2QJmrxseq2);}real_T pmf_get_inf(void){return 1.0/
pm_UbYMiR0RiUG68GufUBdZ11(0.0);}void pmf_warning(const char *
pm_NnCmJnsXc51VOXM7s0_HH0,...){va_list args;va_start(args,
pm_NnCmJnsXc51VOXM7s0_HH0);pmf_printf("Warning: ");pmf_vprintf(
pm_NnCmJnsXc51VOXM7s0_HH0,args);pmf_printf("\n");va_end(args);}void
pmf_preformatted_warning(const char *id,const char *pm__ERPI7nFZcjivUhOMK8_I1)
{(void)id;pmf_printf("Warning: ");pmf_printf("%s\n",pm__ERPI7nFZcjivUhOMK8_I1)
;}int pmf_vsnprintf_message(char *buffer,size_t pm_QHNSjd8JBrVVYZAcs7Zm32,
const char *format,va_list arg){return pmf_vsnprintf(buffer,
pm_QHNSjd8JBrVVYZAcs7Zm32,format,arg);}int pmf_snprintf_message(char *buffer,
size_t pm___oCzuVa6AMVNXQEKlS5G1,const char *format,...){va_list args;int
pm_v4k0LG4l9Qk9hEXlOIKML_= 0;va_start(args,format);pm_v4k0LG4l9Qk9hEXlOIKML_=
pmf_vsnprintf_message(buffer,pm___oCzuVa6AMVNXQEKlS5G1,format,args);va_end(
args);return pm_v4k0LG4l9Qk9hEXlOIKML_;}boolean_T pm_4VpVQvq3Tw1GMWHC_vlFm_(
void){return false;}real_T pmf_asin(real_T x){return asin(x<=-1.0?-1.0:(x>=1.0
?1.0:x));}real_T pmf_acos(real_T x){return acos(x<=-1.0?-1.0:(x>=1.0?1.0:x));}
real_T pmf_log(real_T x){return log(x<=2.5e-308?2.5e-308:x);}real_T pmf_log10(
real_T x){return log10(x<=2.5e-308?2.5e-308:x);}real_T pmf_pow(real_T x,real_T
pm_ET9_5EAP116KvP5KVqsrD2){real_T pm_m_LMLAKe43GyAcJXOYoLZ2= 0;if(x<0.0&&
pm_ET9_5EAP116KvP5KVqsrD2!=floor(pm_ET9_5EAP116KvP5KVqsrD2)){
pm_m_LMLAKe43GyAcJXOYoLZ2= -pow(-x,pm_ET9_5EAP116KvP5KVqsrD2);}else{
pm_m_LMLAKe43GyAcJXOYoLZ2= pow(x,pm_ET9_5EAP116KvP5KVqsrD2);}if(
pm_m_LMLAKe43GyAcJXOYoLZ2>=1.7e+308){pm_m_LMLAKe43GyAcJXOYoLZ2= 1.7e+308;}else
if(pm_m_LMLAKe43GyAcJXOYoLZ2<=-1.7e+308){pm_m_LMLAKe43GyAcJXOYoLZ2= -1.7e+308;
}return pm_m_LMLAKe43GyAcJXOYoLZ2;}real_T pmf_sqrt(real_T x){if(x<0.0){return -
sqrt(-x);}return sqrt(x);}
#include "pm_printf_precompile.h"
