/* header auto-generated by pidl */

#include "librpc/ndr/libndr.h"
#include "autoconf/librpc/gen_ndr/misc.h"

#ifndef _HEADER_NDR_misc
#define _HEADER_NDR_misc

#define NDR_MISC_CALL_COUNT (0)
enum ndr_err_code ndr_push_GUID(struct ndr_push *ndr, int ndr_flags, const struct GUID *r);
enum ndr_err_code ndr_pull_GUID(struct ndr_pull *ndr, int ndr_flags, struct GUID *r);
void ndr_print_GUID(struct ndr_print *ndr, const char *name, const struct GUID *r);
size_t ndr_size_GUID(const struct GUID *r, int flags);
enum ndr_err_code ndr_push_ndr_syntax_id(struct ndr_push *ndr, int ndr_flags, const struct ndr_syntax_id *r);
enum ndr_err_code ndr_pull_ndr_syntax_id(struct ndr_pull *ndr, int ndr_flags, struct ndr_syntax_id *r);
void ndr_print_ndr_syntax_id(struct ndr_print *ndr, const char *name, const struct ndr_syntax_id *r);
enum ndr_err_code ndr_push_policy_handle(struct ndr_push *ndr, int ndr_flags, const struct policy_handle *r);
enum ndr_err_code ndr_pull_policy_handle(struct ndr_pull *ndr, int ndr_flags, struct policy_handle *r);
void ndr_print_policy_handle(struct ndr_print *ndr, const char *name, const struct policy_handle *r);
enum ndr_err_code ndr_push_netr_SchannelType(struct ndr_push *ndr, int ndr_flags, enum netr_SchannelType r);
enum ndr_err_code ndr_pull_netr_SchannelType(struct ndr_pull *ndr, int ndr_flags, enum netr_SchannelType *r);
void ndr_print_netr_SchannelType(struct ndr_print *ndr, const char *name, enum netr_SchannelType r);
enum ndr_err_code ndr_push_KRB5_EDATA_NTSTATUS(struct ndr_push *ndr, int ndr_flags, const struct KRB5_EDATA_NTSTATUS *r);
enum ndr_err_code ndr_pull_KRB5_EDATA_NTSTATUS(struct ndr_pull *ndr, int ndr_flags, struct KRB5_EDATA_NTSTATUS *r);
void ndr_print_KRB5_EDATA_NTSTATUS(struct ndr_print *ndr, const char *name, const struct KRB5_EDATA_NTSTATUS *r);
enum ndr_err_code ndr_push_winreg_Type(struct ndr_push *ndr, int ndr_flags, enum winreg_Type r);
enum ndr_err_code ndr_pull_winreg_Type(struct ndr_pull *ndr, int ndr_flags, enum winreg_Type *r);
void ndr_print_winreg_Type(struct ndr_print *ndr, const char *name, enum winreg_Type r);
enum ndr_err_code ndr_push_winreg_Data(struct ndr_push *ndr, int ndr_flags, const union winreg_Data *r);
enum ndr_err_code ndr_pull_winreg_Data(struct ndr_pull *ndr, int ndr_flags, union winreg_Data *r);
void ndr_print_winreg_Data(struct ndr_print *ndr, const char *name, const union winreg_Data *r);
enum ndr_err_code ndr_push_netr_SamDatabaseID(struct ndr_push *ndr, int ndr_flags, enum netr_SamDatabaseID r);
enum ndr_err_code ndr_pull_netr_SamDatabaseID(struct ndr_pull *ndr, int ndr_flags, enum netr_SamDatabaseID *r);
void ndr_print_netr_SamDatabaseID(struct ndr_print *ndr, const char *name, enum netr_SamDatabaseID r);
enum ndr_err_code ndr_push_svcctl_ServerType(struct ndr_push *ndr, int ndr_flags, uint32_t r);
enum ndr_err_code ndr_pull_svcctl_ServerType(struct ndr_pull *ndr, int ndr_flags, uint32_t *r);
void ndr_print_svcctl_ServerType(struct ndr_print *ndr, const char *name, uint32_t r);
#endif /* _HEADER_NDR_misc */
