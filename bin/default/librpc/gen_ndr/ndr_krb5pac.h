/* header auto-generated by pidl */

#include "librpc/ndr/libndr.h"
#include "bin/default/librpc/gen_ndr/krb5pac.h"

#ifndef _HEADER_NDR_krb5pac
#define _HEADER_NDR_krb5pac

#define NDR_KRB5PAC_UUID "12345778-1234-abcd-0000-00000000"
#define NDR_KRB5PAC_VERSION 0.0
#define NDR_KRB5PAC_NAME "krb5pac"
#define NDR_KRB5PAC_HELPSTRING "Active Directory KRB5 PAC"
extern const struct ndr_interface_table ndr_table_krb5pac;
#define NDR_DECODE_PAC (0x00)

#define NDR_DECODE_PAC_RAW (0x01)

#define NDR_DECODE_LOGIN_INFO (0x02)

#define NDR_DECODE_LOGIN_INFO_CTR (0x03)

#define NDR_DECODE_PAC_VALIDATE (0x04)

#define NDR_KRB5PAC_CALL_COUNT (5)
void ndr_print_PAC_LOGON_NAME(struct ndr_print *ndr, const char *name, const struct PAC_LOGON_NAME *r);
enum ndr_err_code ndr_push_PAC_SIGNATURE_DATA(struct ndr_push *ndr, int ndr_flags, const struct PAC_SIGNATURE_DATA *r);
enum ndr_err_code ndr_pull_PAC_SIGNATURE_DATA(struct ndr_pull *ndr, int ndr_flags, struct PAC_SIGNATURE_DATA *r);
void ndr_print_PAC_SIGNATURE_DATA(struct ndr_print *ndr, const char *name, const struct PAC_SIGNATURE_DATA *r);
void ndr_print_PAC_LOGON_INFO(struct ndr_print *ndr, const char *name, const struct PAC_LOGON_INFO *r);
void ndr_print_PAC_CONSTRAINED_DELEGATION(struct ndr_print *ndr, const char *name, const struct PAC_CONSTRAINED_DELEGATION *r);
enum ndr_err_code ndr_push_PAC_LOGON_INFO_CTR(struct ndr_push *ndr, int ndr_flags, const struct PAC_LOGON_INFO_CTR *r);
enum ndr_err_code ndr_pull_PAC_LOGON_INFO_CTR(struct ndr_pull *ndr, int ndr_flags, struct PAC_LOGON_INFO_CTR *r);
void ndr_print_PAC_LOGON_INFO_CTR(struct ndr_print *ndr, const char *name, const struct PAC_LOGON_INFO_CTR *r);
enum ndr_err_code ndr_push_PAC_CONSTRAINED_DELEGATION_CTR(struct ndr_push *ndr, int ndr_flags, const struct PAC_CONSTRAINED_DELEGATION_CTR *r);
enum ndr_err_code ndr_pull_PAC_CONSTRAINED_DELEGATION_CTR(struct ndr_pull *ndr, int ndr_flags, struct PAC_CONSTRAINED_DELEGATION_CTR *r);
void ndr_print_PAC_CONSTRAINED_DELEGATION_CTR(struct ndr_print *ndr, const char *name, const struct PAC_CONSTRAINED_DELEGATION_CTR *r);
enum ndr_err_code ndr_push_PAC_TYPE(struct ndr_push *ndr, int ndr_flags, enum PAC_TYPE r);
enum ndr_err_code ndr_pull_PAC_TYPE(struct ndr_pull *ndr, int ndr_flags, enum PAC_TYPE *r);
void ndr_print_PAC_TYPE(struct ndr_print *ndr, const char *name, enum PAC_TYPE r);
void ndr_print_DATA_BLOB_REM(struct ndr_print *ndr, const char *name, const struct DATA_BLOB_REM *r);
enum ndr_err_code ndr_push_PAC_INFO(struct ndr_push *ndr, int ndr_flags, const union PAC_INFO *r);
enum ndr_err_code ndr_pull_PAC_INFO(struct ndr_pull *ndr, int ndr_flags, union PAC_INFO *r);
void ndr_print_PAC_INFO(struct ndr_print *ndr, const char *name, const union PAC_INFO *r);
size_t ndr_size_PAC_INFO(const union PAC_INFO *r, uint32_t level, int flags);
enum ndr_err_code ndr_push_PAC_BUFFER(struct ndr_push *ndr, int ndr_flags, const struct PAC_BUFFER *r);
enum ndr_err_code ndr_pull_PAC_BUFFER(struct ndr_pull *ndr, int ndr_flags, struct PAC_BUFFER *r);
void ndr_print_PAC_BUFFER(struct ndr_print *ndr, const char *name, const struct PAC_BUFFER *r);
enum ndr_err_code ndr_push_PAC_DATA(struct ndr_push *ndr, int ndr_flags, const struct PAC_DATA *r);
enum ndr_err_code ndr_pull_PAC_DATA(struct ndr_pull *ndr, int ndr_flags, struct PAC_DATA *r);
void ndr_print_PAC_DATA(struct ndr_print *ndr, const char *name, const struct PAC_DATA *r);
enum ndr_err_code ndr_push_PAC_BUFFER_RAW(struct ndr_push *ndr, int ndr_flags, const struct PAC_BUFFER_RAW *r);
enum ndr_err_code ndr_pull_PAC_BUFFER_RAW(struct ndr_pull *ndr, int ndr_flags, struct PAC_BUFFER_RAW *r);
void ndr_print_PAC_BUFFER_RAW(struct ndr_print *ndr, const char *name, const struct PAC_BUFFER_RAW *r);
enum ndr_err_code ndr_push_PAC_DATA_RAW(struct ndr_push *ndr, int ndr_flags, const struct PAC_DATA_RAW *r);
enum ndr_err_code ndr_pull_PAC_DATA_RAW(struct ndr_pull *ndr, int ndr_flags, struct PAC_DATA_RAW *r);
void ndr_print_PAC_DATA_RAW(struct ndr_print *ndr, const char *name, const struct PAC_DATA_RAW *r);
enum ndr_err_code ndr_push_PAC_Validate(struct ndr_push *ndr, int ndr_flags, const struct PAC_Validate *r);
enum ndr_err_code ndr_pull_PAC_Validate(struct ndr_pull *ndr, int ndr_flags, struct PAC_Validate *r);
void ndr_print_PAC_Validate(struct ndr_print *ndr, const char *name, const struct PAC_Validate *r);
enum ndr_err_code ndr_push_netsamlogoncache_entry(struct ndr_push *ndr, int ndr_flags, const struct netsamlogoncache_entry *r);
enum ndr_err_code ndr_pull_netsamlogoncache_entry(struct ndr_pull *ndr, int ndr_flags, struct netsamlogoncache_entry *r);
void ndr_print_netsamlogoncache_entry(struct ndr_print *ndr, const char *name, const struct netsamlogoncache_entry *r);
void ndr_print_decode_pac(struct ndr_print *ndr, const char *name, int flags, const struct decode_pac *r);
void ndr_print_decode_pac_raw(struct ndr_print *ndr, const char *name, int flags, const struct decode_pac_raw *r);
void ndr_print_decode_login_info(struct ndr_print *ndr, const char *name, int flags, const struct decode_login_info *r);
void ndr_print_decode_login_info_ctr(struct ndr_print *ndr, const char *name, int flags, const struct decode_login_info_ctr *r);
void ndr_print_decode_pac_validate(struct ndr_print *ndr, const char *name, int flags, const struct decode_pac_validate *r);
#endif /* _HEADER_NDR_krb5pac */
