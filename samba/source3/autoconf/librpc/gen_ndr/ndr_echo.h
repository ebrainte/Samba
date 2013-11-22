/* header auto-generated by pidl */

#include "librpc/ndr/libndr.h"
#include "autoconf/librpc/gen_ndr/echo.h"

#ifndef _HEADER_NDR_rpcecho
#define _HEADER_NDR_rpcecho

#define NDR_RPCECHO_UUID "60a15ec5-4de8-11d7-a637-005056a20182"
#define NDR_RPCECHO_VERSION 1.0
#define NDR_RPCECHO_NAME "rpcecho"
#define NDR_RPCECHO_HELPSTRING "Simple echo pipe"
extern const struct ndr_interface_table ndr_table_rpcecho;
#define NDR_ECHO_ADDONE (0x00)

#define NDR_ECHO_ECHODATA (0x01)

#define NDR_ECHO_SINKDATA (0x02)

#define NDR_ECHO_SOURCEDATA (0x03)

#define NDR_ECHO_TESTCALL (0x04)

#define NDR_ECHO_TESTCALL2 (0x05)

#define NDR_ECHO_TESTSLEEP (0x06)

#define NDR_ECHO_TESTENUM (0x07)

#define NDR_ECHO_TESTSURROUNDING (0x08)

#define NDR_ECHO_TESTDOUBLEPOINTER (0x09)

#define NDR_RPCECHO_CALL_COUNT (10)
enum ndr_err_code ndr_push_echo_info1(struct ndr_push *ndr, int ndr_flags, const struct echo_info1 *r);
enum ndr_err_code ndr_pull_echo_info1(struct ndr_pull *ndr, int ndr_flags, struct echo_info1 *r);
void ndr_print_echo_info1(struct ndr_print *ndr, const char *name, const struct echo_info1 *r);
void ndr_print_echo_info2(struct ndr_print *ndr, const char *name, const struct echo_info2 *r);
void ndr_print_echo_info3(struct ndr_print *ndr, const char *name, const struct echo_info3 *r);
void ndr_print_STRUCT_echo_info4(struct ndr_print *ndr, const char *name, const struct echo_info4 *r);
void ndr_print_echo_info5(struct ndr_print *ndr, const char *name, const struct echo_info5 *r);
void ndr_print_echo_info6(struct ndr_print *ndr, const char *name, const struct echo_info6 *r);
void ndr_print_echo_info7(struct ndr_print *ndr, const char *name, const struct echo_info7 *r);
void ndr_print_echo_Info(struct ndr_print *ndr, const char *name, const union echo_Info *r);
void ndr_print_echo_Enum1(struct ndr_print *ndr, const char *name, enum echo_Enum1 r);
void ndr_print_echo_Enum1_32(struct ndr_print *ndr, const char *name, enum echo_Enum1_32 r);
void ndr_print_echo_Enum2(struct ndr_print *ndr, const char *name, const struct echo_Enum2 *r);
void ndr_print_echo_Enum3(struct ndr_print *ndr, const char *name, const union echo_Enum3 *r);
void ndr_print_echo_Surrounding(struct ndr_print *ndr, const char *name, const struct echo_Surrounding *r);
void ndr_print_echo_AddOne(struct ndr_print *ndr, const char *name, int flags, const struct echo_AddOne *r);
void ndr_print_echo_EchoData(struct ndr_print *ndr, const char *name, int flags, const struct echo_EchoData *r);
void ndr_print_echo_SinkData(struct ndr_print *ndr, const char *name, int flags, const struct echo_SinkData *r);
void ndr_print_echo_SourceData(struct ndr_print *ndr, const char *name, int flags, const struct echo_SourceData *r);
void ndr_print_echo_TestCall(struct ndr_print *ndr, const char *name, int flags, const struct echo_TestCall *r);
void ndr_print_echo_TestCall2(struct ndr_print *ndr, const char *name, int flags, const struct echo_TestCall2 *r);
void ndr_print_echo_TestSleep(struct ndr_print *ndr, const char *name, int flags, const struct echo_TestSleep *r);
void ndr_print_echo_TestEnum(struct ndr_print *ndr, const char *name, int flags, const struct echo_TestEnum *r);
void ndr_print_echo_TestSurrounding(struct ndr_print *ndr, const char *name, int flags, const struct echo_TestSurrounding *r);
void ndr_print_echo_TestDoublePointer(struct ndr_print *ndr, const char *name, int flags, const struct echo_TestDoublePointer *r);
#endif /* _HEADER_NDR_rpcecho */
