#include "pm_std.h"
#include "pm_std.h"
PmAllocator *pm_default_allocator(void);
#include "pm_std.h"
static void *pm_gTa_xCKSTvzVW9Tp7ZZem_(PmAllocator *a,size_t
pm_gN74BbsU5wqNjkJbC9b672,size_t n){(void)a;return pmf_calloc(
pm_gN74BbsU5wqNjkJbC9b672,n);}static void pm_KioHHCfRqxi4PiccNffvM2(
PmAllocator *a,void *ptr){(void)a;pmf_free(ptr);}PmAllocator *
pm_default_allocator(void){static PmAllocator pm_52aneRmLayFNIRbh0hCWa1={
pm_gTa_xCKSTvzVW9Tp7ZZem_,pm_KioHHCfRqxi4PiccNffvM2};return &
pm_52aneRmLayFNIRbh0hCWa1;}
