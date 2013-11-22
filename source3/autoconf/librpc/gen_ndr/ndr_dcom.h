/* header auto-generated by pidl */

#include "librpc/ndr/libndr.h"
#include "autoconf/librpc/gen_ndr/dcom.h"

#ifndef _HEADER_NDR_dcom_Unknown
#define _HEADER_NDR_dcom_Unknown

#define NDR_DCOM_UNKNOWN_UUID "18f70770-8e64-11cf-9af1-0020af6e72f4"
#define NDR_DCOM_UNKNOWN_VERSION 0.0
#define NDR_DCOM_UNKNOWN_NAME "dcom_Unknown"
#define NDR_DCOM_UNKNOWN_HELPSTRING NULL
extern const struct ndr_interface_table ndr_table_dcom_Unknown;
#define NDR_USEPROTSEQ (0x00)

#define NDR_GETCUSTOMPROTSEQINFO (0x01)

#define NDR_UPDATERESOLVERBINDINGS (0x02)

#define NDR_DCOM_UNKNOWN_CALL_COUNT (3)
void ndr_print_UseProtSeq(struct ndr_print *ndr, const char *name, int flags, const struct UseProtSeq *r);
void ndr_print_GetCustomProtseqInfo(struct ndr_print *ndr, const char *name, int flags, const struct GetCustomProtseqInfo *r);
void ndr_print_UpdateResolverBindings(struct ndr_print *ndr, const char *name, int flags, const struct UpdateResolverBindings *r);
#endif /* _HEADER_NDR_dcom_Unknown */
#ifndef _HEADER_NDR_IUnknown
#define _HEADER_NDR_IUnknown

#define NDR_IUNKNOWN_UUID "00000000-0000-0000-c000-000000000046"
#define NDR_IUNKNOWN_VERSION 0.0
#define NDR_IUNKNOWN_NAME "IUnknown"
#define NDR_IUNKNOWN_HELPSTRING "Base interface for all COM interfaces"
extern const struct ndr_interface_table ndr_table_IUnknown;
#define NDR_QUERYINTERFACE (0x00)

#define NDR_ADDREF (0x01)

#define NDR_RELEASE (0x02)

#define NDR_IUNKNOWN_CALL_COUNT (3)
void ndr_print_QueryInterface(struct ndr_print *ndr, const char *name, int flags, const struct QueryInterface *r);
void ndr_print_AddRef(struct ndr_print *ndr, const char *name, int flags, const struct AddRef *r);
void ndr_print_Release(struct ndr_print *ndr, const char *name, int flags, const struct Release *r);
#endif /* _HEADER_NDR_IUnknown */
#ifndef _HEADER_NDR_IClassFactory
#define _HEADER_NDR_IClassFactory

#define NDR_ICLASSFACTORY_UUID "00000001-0000-0000-c000-000000000046"
#define NDR_ICLASSFACTORY_VERSION 0.0
#define NDR_ICLASSFACTORY_NAME "IClassFactory"
#define NDR_ICLASSFACTORY_HELPSTRING NULL
extern const struct ndr_interface_table ndr_table_IClassFactory;
#define NDR_CREATEINSTANCE (0x00)

#define NDR_REMOTECREATEINSTANCE (0x01)

#define NDR_LOCKSERVER (0x02)

#define NDR_REMOTELOCKSERVER (0x03)

#define NDR_ICLASSFACTORY_CALL_COUNT (4)
void ndr_print_CreateInstance(struct ndr_print *ndr, const char *name, int flags, const struct CreateInstance *r);
void ndr_print_RemoteCreateInstance(struct ndr_print *ndr, const char *name, int flags, const struct RemoteCreateInstance *r);
void ndr_print_LockServer(struct ndr_print *ndr, const char *name, int flags, const struct LockServer *r);
void ndr_print_RemoteLockServer(struct ndr_print *ndr, const char *name, int flags, const struct RemoteLockServer *r);
#endif /* _HEADER_NDR_IClassFactory */
#ifndef _HEADER_NDR_IRemUnknown
#define _HEADER_NDR_IRemUnknown

#define NDR_IREMUNKNOWN_UUID "00000131-0000-0000-c000-000000000046"
#define NDR_IREMUNKNOWN_VERSION 0.0
#define NDR_IREMUNKNOWN_NAME "IRemUnknown"
#define NDR_IREMUNKNOWN_HELPSTRING "Remote version of IUnknown"
extern const struct ndr_interface_table ndr_table_IRemUnknown;
#define NDR_REMQUERYINTERFACE (0x00)

#define NDR_REMADDREF (0x01)

#define NDR_REMRELEASE (0x02)

#define NDR_IREMUNKNOWN_CALL_COUNT (3)
enum ndr_err_code ndr_push_REMQIRESULT(struct ndr_push *ndr, int ndr_flags, const struct REMQIRESULT *r);
enum ndr_err_code ndr_pull_REMQIRESULT(struct ndr_pull *ndr, int ndr_flags, struct REMQIRESULT *r);
void ndr_print_REMQIRESULT(struct ndr_print *ndr, const char *name, const struct REMQIRESULT *r);
void ndr_print_REMINTERFACEREF(struct ndr_print *ndr, const char *name, const struct REMINTERFACEREF *r);
void ndr_print_RemQueryInterface(struct ndr_print *ndr, const char *name, int flags, const struct RemQueryInterface *r);
void ndr_print_RemAddRef(struct ndr_print *ndr, const char *name, int flags, const struct RemAddRef *r);
void ndr_print_RemRelease(struct ndr_print *ndr, const char *name, int flags, const struct RemRelease *r);
#endif /* _HEADER_NDR_IRemUnknown */
#ifndef _HEADER_NDR_IClassActivator
#define _HEADER_NDR_IClassActivator

#define NDR_ICLASSACTIVATOR_UUID "00000140-0000-0000-c000-000000000046"
#define NDR_ICLASSACTIVATOR_VERSION 0.0
#define NDR_ICLASSACTIVATOR_NAME "IClassActivator"
#define NDR_ICLASSACTIVATOR_HELPSTRING NULL
extern const struct ndr_interface_table ndr_table_IClassActivator;
#define NDR_GETCLASSOBJECT (0x00)

#define NDR_ICLASSACTIVATOR_CALL_COUNT (1)
void ndr_print_GetClassObject(struct ndr_print *ndr, const char *name, int flags, const struct GetClassObject *r);
#endif /* _HEADER_NDR_IClassActivator */
#ifndef _HEADER_NDR_ISCMLocalActivator
#define _HEADER_NDR_ISCMLocalActivator

#define NDR_ISCMLOCALACTIVATOR_UUID "00000136-0000-0000-c000-000000000046"
#define NDR_ISCMLOCALACTIVATOR_VERSION 0.0
#define NDR_ISCMLOCALACTIVATOR_NAME "ISCMLocalActivator"
#define NDR_ISCMLOCALACTIVATOR_HELPSTRING NULL
extern const struct ndr_interface_table ndr_table_ISCMLocalActivator;
#define NDR_ISCMLOCALACTIVATOR_CREATEINSTANCE (0x00)

#define NDR_ISCMLOCALACTIVATOR_CALL_COUNT (1)
void ndr_print_ISCMLocalActivator_CreateInstance(struct ndr_print *ndr, const char *name, int flags, const struct ISCMLocalActivator_CreateInstance *r);
#endif /* _HEADER_NDR_ISCMLocalActivator */
#ifndef _HEADER_NDR_IMachineLocalActivator
#define _HEADER_NDR_IMachineLocalActivator

#define NDR_IMACHINELOCALACTIVATOR_UUID "c6f3ee72-ce7e-11d1-b71e-00c04fc3111a"
#define NDR_IMACHINELOCALACTIVATOR_VERSION 0.0
#define NDR_IMACHINELOCALACTIVATOR_NAME "IMachineLocalActivator"
#define NDR_IMACHINELOCALACTIVATOR_HELPSTRING NULL
extern const struct ndr_interface_table ndr_table_IMachineLocalActivator;
#define NDR_IMACHINELOCALACTIVATOR_FOO (0x00)

#define NDR_IMACHINELOCALACTIVATOR_CALL_COUNT (1)
void ndr_print_IMachineLocalActivator_foo(struct ndr_print *ndr, const char *name, int flags, const struct IMachineLocalActivator_foo *r);
#endif /* _HEADER_NDR_IMachineLocalActivator */
#ifndef _HEADER_NDR_ILocalObjectExporter
#define _HEADER_NDR_ILocalObjectExporter

#define NDR_ILOCALOBJECTEXPORTER_UUID "e60c73e6-88f9-11cf-9af1-0020af6e72f4"
#define NDR_ILOCALOBJECTEXPORTER_VERSION 0.0
#define NDR_ILOCALOBJECTEXPORTER_NAME "ILocalObjectExporter"
#define NDR_ILOCALOBJECTEXPORTER_HELPSTRING NULL
extern const struct ndr_interface_table ndr_table_ILocalObjectExporter;
#define NDR_ILOCALOBJECTEXPORTER_FOO (0x00)

#define NDR_ILOCALOBJECTEXPORTER_CALL_COUNT (1)
void ndr_print_ILocalObjectExporter_Foo(struct ndr_print *ndr, const char *name, int flags, const struct ILocalObjectExporter_Foo *r);
#endif /* _HEADER_NDR_ILocalObjectExporter */
#ifndef _HEADER_NDR_ISystemActivator
#define _HEADER_NDR_ISystemActivator

#define NDR_ISYSTEMACTIVATOR_UUID "000001a0-0000-0000-c000-000000000046"
#define NDR_ISYSTEMACTIVATOR_VERSION 0.0
#define NDR_ISYSTEMACTIVATOR_NAME "ISystemActivator"
#define NDR_ISYSTEMACTIVATOR_HELPSTRING NULL
extern const struct ndr_interface_table ndr_table_ISystemActivator;
#define NDR_ISYSTEMACTIVATORREMOTECREATEINSTANCE (0x00)

#define NDR_ISYSTEMACTIVATOR_CALL_COUNT (1)
void ndr_print_ISystemActivatorRemoteCreateInstance(struct ndr_print *ndr, const char *name, int flags, const struct ISystemActivatorRemoteCreateInstance *r);
#endif /* _HEADER_NDR_ISystemActivator */
#ifndef _HEADER_NDR_IRemUnknown2
#define _HEADER_NDR_IRemUnknown2

#define NDR_IREMUNKNOWN2_UUID "00000143-0000-0000-c000-000000000046"
#define NDR_IREMUNKNOWN2_VERSION 0.0
#define NDR_IREMUNKNOWN2_NAME "IRemUnknown2"
#define NDR_IREMUNKNOWN2_HELPSTRING NULL
extern const struct ndr_interface_table ndr_table_IRemUnknown2;
#define NDR_REMQUERYINTERFACE2 (0x00)

#define NDR_IREMUNKNOWN2_CALL_COUNT (1)
void ndr_print_RemQueryInterface2(struct ndr_print *ndr, const char *name, int flags, const struct RemQueryInterface2 *r);
#endif /* _HEADER_NDR_IRemUnknown2 */
#ifndef _HEADER_NDR_IDispatch
#define _HEADER_NDR_IDispatch

#define NDR_IDISPATCH_UUID "00020400-0000-0000-c000-000000000046"
#define NDR_IDISPATCH_VERSION 0.0
#define NDR_IDISPATCH_NAME "IDispatch"
#define NDR_IDISPATCH_HELPSTRING NULL
extern const struct ndr_interface_table ndr_table_IDispatch;
#define NDR_GETTYPEINFOCOUNT (0x00)

#define NDR_GETTYPEINFO (0x01)

#define NDR_GETIDSOFNAMES (0x02)

#define NDR_INVOKE (0x03)

#define NDR_IDISPATCH_CALL_COUNT (4)
void ndr_print_REF_ITypeInfo(struct ndr_print *ndr, const char *name, const struct REF_ITypeInfo *r);
void ndr_print_VARIANT(struct ndr_print *ndr, const char *name, const struct VARIANT *r);
void ndr_print_DISPPARAMS(struct ndr_print *ndr, const char *name, const struct DISPPARAMS *r);
void ndr_print_EXCEPINFO(struct ndr_print *ndr, const char *name, const struct EXCEPINFO *r);
void ndr_print_GetTypeInfoCount(struct ndr_print *ndr, const char *name, int flags, const struct GetTypeInfoCount *r);
void ndr_print_GetTypeInfo(struct ndr_print *ndr, const char *name, int flags, const struct GetTypeInfo *r);
void ndr_print_GetIDsOfNames(struct ndr_print *ndr, const char *name, int flags, const struct GetIDsOfNames *r);
void ndr_print_Invoke(struct ndr_print *ndr, const char *name, int flags, const struct Invoke *r);
#endif /* _HEADER_NDR_IDispatch */
#ifndef _HEADER_NDR_IMarshal
#define _HEADER_NDR_IMarshal

#define NDR_IMARSHAL_UUID "00000003-0000-0000-c000-000000000046"
#define NDR_IMARSHAL_VERSION 0.0
#define NDR_IMARSHAL_NAME "IMarshal"
#define NDR_IMARSHAL_HELPSTRING NULL
extern const struct ndr_interface_table ndr_table_IMarshal;
#define NDR_MARSHALINTERFACE (0x00)

#define NDR_UNMARSHALINTERFACE (0x01)

#define NDR_IMARSHAL_CALL_COUNT (2)
void ndr_print_MarshalInterface(struct ndr_print *ndr, const char *name, int flags, const struct MarshalInterface *r);
void ndr_print_UnMarshalInterface(struct ndr_print *ndr, const char *name, int flags, const struct UnMarshalInterface *r);
#endif /* _HEADER_NDR_IMarshal */
#ifndef _HEADER_NDR_ICoffeeMachine
#define _HEADER_NDR_ICoffeeMachine

#define NDR_ICOFFEEMACHINE_UUID "da23f6db-6f45-466c-9eed-0b65286f2d78"
#define NDR_ICOFFEEMACHINE_VERSION 0.0
#define NDR_ICOFFEEMACHINE_NAME "ICoffeeMachine"
#define NDR_ICOFFEEMACHINE_HELPSTRING "ICoffeeMachine Interface"
extern const struct ndr_interface_table ndr_table_ICoffeeMachine;
#define NDR_MAKECOFFEE (0x00)

#define NDR_ICOFFEEMACHINE_CALL_COUNT (1)
void ndr_print_MakeCoffee(struct ndr_print *ndr, const char *name, int flags, const struct MakeCoffee *r);
#endif /* _HEADER_NDR_ICoffeeMachine */
#ifndef _HEADER_NDR_IStream
#define _HEADER_NDR_IStream

#define NDR_ISTREAM_UUID "0000000c-0000-0000-c000-000000000046"
#define NDR_ISTREAM_VERSION 0.0
#define NDR_ISTREAM_NAME "IStream"
#define NDR_ISTREAM_HELPSTRING "Stream"
extern const struct ndr_interface_table ndr_table_IStream;
#define NDR_READ (0x00)

#define NDR_WRITE (0x01)

#define NDR_ISTREAM_CALL_COUNT (2)
void ndr_print_Read(struct ndr_print *ndr, const char *name, int flags, const struct Read *r);
void ndr_print_Write(struct ndr_print *ndr, const char *name, int flags, const struct Write *r);
#endif /* _HEADER_NDR_IStream */
