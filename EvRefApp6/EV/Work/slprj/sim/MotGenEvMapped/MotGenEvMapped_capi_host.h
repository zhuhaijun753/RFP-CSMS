#include "__cf_MotGenEvMapped.h"
#ifndef RTW_HEADER_MotGenEvMapped_cap_host_h_
#define RTW_HEADER_MotGenEvMapped_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
MotGenEvMapped_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void MotGenEvMapped_host_InitializeDataMapInfo (
MotGenEvMapped_host_DataMapInfo_T * dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
