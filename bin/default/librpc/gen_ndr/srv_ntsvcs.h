#include "bin/default/librpc/gen_ndr/ndr_ntsvcs.h"
#ifndef __SRV_NTSVCS__
#define __SRV_NTSVCS__
WERROR _PNP_Disconnect(struct pipes_struct *p, struct PNP_Disconnect *r);
WERROR _PNP_Connect(struct pipes_struct *p, struct PNP_Connect *r);
WERROR _PNP_GetVersion(struct pipes_struct *p, struct PNP_GetVersion *r);
WERROR _PNP_GetGlobalState(struct pipes_struct *p, struct PNP_GetGlobalState *r);
WERROR _PNP_InitDetection(struct pipes_struct *p, struct PNP_InitDetection *r);
WERROR _PNP_ReportLogOn(struct pipes_struct *p, struct PNP_ReportLogOn *r);
WERROR _PNP_ValidateDeviceInstance(struct pipes_struct *p, struct PNP_ValidateDeviceInstance *r);
WERROR _PNP_GetRootDeviceInstance(struct pipes_struct *p, struct PNP_GetRootDeviceInstance *r);
WERROR _PNP_GetRelatedDeviceInstance(struct pipes_struct *p, struct PNP_GetRelatedDeviceInstance *r);
WERROR _PNP_EnumerateSubKeys(struct pipes_struct *p, struct PNP_EnumerateSubKeys *r);
WERROR _PNP_GetDeviceList(struct pipes_struct *p, struct PNP_GetDeviceList *r);
WERROR _PNP_GetDeviceListSize(struct pipes_struct *p, struct PNP_GetDeviceListSize *r);
WERROR _PNP_GetDepth(struct pipes_struct *p, struct PNP_GetDepth *r);
WERROR _PNP_GetDeviceRegProp(struct pipes_struct *p, struct PNP_GetDeviceRegProp *r);
WERROR _PNP_SetDeviceRegProp(struct pipes_struct *p, struct PNP_SetDeviceRegProp *r);
WERROR _PNP_GetClassInstance(struct pipes_struct *p, struct PNP_GetClassInstance *r);
WERROR _PNP_CreateKey(struct pipes_struct *p, struct PNP_CreateKey *r);
WERROR _PNP_DeleteRegistryKey(struct pipes_struct *p, struct PNP_DeleteRegistryKey *r);
WERROR _PNP_GetClassCount(struct pipes_struct *p, struct PNP_GetClassCount *r);
WERROR _PNP_GetClassName(struct pipes_struct *p, struct PNP_GetClassName *r);
WERROR _PNP_DeleteClassKey(struct pipes_struct *p, struct PNP_DeleteClassKey *r);
WERROR _PNP_GetInterfaceDeviceAlias(struct pipes_struct *p, struct PNP_GetInterfaceDeviceAlias *r);
WERROR _PNP_GetInterfaceDeviceList(struct pipes_struct *p, struct PNP_GetInterfaceDeviceList *r);
WERROR _PNP_GetInterfaceDeviceListSize(struct pipes_struct *p, struct PNP_GetInterfaceDeviceListSize *r);
WERROR _PNP_RegisterDeviceClassAssociation(struct pipes_struct *p, struct PNP_RegisterDeviceClassAssociation *r);
WERROR _PNP_UnregisterDeviceClassAssociation(struct pipes_struct *p, struct PNP_UnregisterDeviceClassAssociation *r);
WERROR _PNP_GetClassRegProp(struct pipes_struct *p, struct PNP_GetClassRegProp *r);
WERROR _PNP_SetClassRegProp(struct pipes_struct *p, struct PNP_SetClassRegProp *r);
WERROR _PNP_CreateDevInst(struct pipes_struct *p, struct PNP_CreateDevInst *r);
WERROR _PNP_DeviceInstanceAction(struct pipes_struct *p, struct PNP_DeviceInstanceAction *r);
WERROR _PNP_GetDeviceStatus(struct pipes_struct *p, struct PNP_GetDeviceStatus *r);
WERROR _PNP_SetDeviceProblem(struct pipes_struct *p, struct PNP_SetDeviceProblem *r);
WERROR _PNP_DisableDevInst(struct pipes_struct *p, struct PNP_DisableDevInst *r);
WERROR _PNP_UninstallDevInst(struct pipes_struct *p, struct PNP_UninstallDevInst *r);
WERROR _PNP_AddID(struct pipes_struct *p, struct PNP_AddID *r);
WERROR _PNP_RegisterDriver(struct pipes_struct *p, struct PNP_RegisterDriver *r);
WERROR _PNP_QueryRemove(struct pipes_struct *p, struct PNP_QueryRemove *r);
WERROR _PNP_RequestDeviceEject(struct pipes_struct *p, struct PNP_RequestDeviceEject *r);
WERROR _PNP_IsDockStationPresent(struct pipes_struct *p, struct PNP_IsDockStationPresent *r);
WERROR _PNP_RequestEjectPC(struct pipes_struct *p, struct PNP_RequestEjectPC *r);
WERROR _PNP_HwProfFlags(struct pipes_struct *p, struct PNP_HwProfFlags *r);
WERROR _PNP_GetHwProfInfo(struct pipes_struct *p, struct PNP_GetHwProfInfo *r);
WERROR _PNP_AddEmptyLogConf(struct pipes_struct *p, struct PNP_AddEmptyLogConf *r);
WERROR _PNP_FreeLogConf(struct pipes_struct *p, struct PNP_FreeLogConf *r);
WERROR _PNP_GetFirstLogConf(struct pipes_struct *p, struct PNP_GetFirstLogConf *r);
WERROR _PNP_GetNextLogConf(struct pipes_struct *p, struct PNP_GetNextLogConf *r);
WERROR _PNP_GetLogConfPriority(struct pipes_struct *p, struct PNP_GetLogConfPriority *r);
WERROR _PNP_AddResDes(struct pipes_struct *p, struct PNP_AddResDes *r);
WERROR _PNP_FreeResDes(struct pipes_struct *p, struct PNP_FreeResDes *r);
WERROR _PNP_GetNextResDes(struct pipes_struct *p, struct PNP_GetNextResDes *r);
WERROR _PNP_GetResDesData(struct pipes_struct *p, struct PNP_GetResDesData *r);
WERROR _PNP_GetResDesDataSize(struct pipes_struct *p, struct PNP_GetResDesDataSize *r);
WERROR _PNP_ModifyResDes(struct pipes_struct *p, struct PNP_ModifyResDes *r);
WERROR _PNP_DetectResourceLimit(struct pipes_struct *p, struct PNP_DetectResourceLimit *r);
WERROR _PNP_QueryResConfList(struct pipes_struct *p, struct PNP_QueryResConfList *r);
WERROR _PNP_SetHwProf(struct pipes_struct *p, struct PNP_SetHwProf *r);
WERROR _PNP_QueryArbitratorFreeData(struct pipes_struct *p, struct PNP_QueryArbitratorFreeData *r);
WERROR _PNP_QueryArbitratorFreeSize(struct pipes_struct *p, struct PNP_QueryArbitratorFreeSize *r);
WERROR _PNP_RunDetection(struct pipes_struct *p, struct PNP_RunDetection *r);
WERROR _PNP_RegisterNotification(struct pipes_struct *p, struct PNP_RegisterNotification *r);
WERROR _PNP_UnregisterNotification(struct pipes_struct *p, struct PNP_UnregisterNotification *r);
WERROR _PNP_GetCustomDevProp(struct pipes_struct *p, struct PNP_GetCustomDevProp *r);
WERROR _PNP_GetVersionInternal(struct pipes_struct *p, struct PNP_GetVersionInternal *r);
WERROR _PNP_GetBlockedDriverInfo(struct pipes_struct *p, struct PNP_GetBlockedDriverInfo *r);
WERROR _PNP_GetServerSideDeviceInstallFlags(struct pipes_struct *p, struct PNP_GetServerSideDeviceInstallFlags *r);
void ntsvcs_get_pipe_fns(struct api_struct **fns, int *n_fns);
struct rpc_srv_callbacks;
NTSTATUS rpc_ntsvcs_init(const struct rpc_srv_callbacks *rpc_srv_cb);
NTSTATUS rpc_ntsvcs_shutdown(void);
#endif /* __SRV_NTSVCS__ */
