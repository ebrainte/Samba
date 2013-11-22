/* header auto-generated by pidl */

#include "librpc/ndr/libndr.h"
#include "bin/default/librpc/gen_ndr/schannel.h"

#ifndef _HEADER_NDR_schannel
#define _HEADER_NDR_schannel

#include "../librpc/ndr/ndr_schannel.h"
#include "../librpc/ndr/ndr_nbt.h"
#define NDR_SCHANNEL_CALL_COUNT (0)
enum ndr_err_code ndr_push_netlogon_creds_CredentialState(struct ndr_push *ndr, int ndr_flags, const struct netlogon_creds_CredentialState *r);
enum ndr_err_code ndr_pull_netlogon_creds_CredentialState(struct ndr_pull *ndr, int ndr_flags, struct netlogon_creds_CredentialState *r);
void ndr_print_netlogon_creds_CredentialState(struct ndr_print *ndr, const char *name, const struct netlogon_creds_CredentialState *r);
void ndr_print_NL_AUTH_MESSAGE_TYPE(struct ndr_print *ndr, const char *name, enum NL_AUTH_MESSAGE_TYPE r);
void ndr_print_NL_AUTH_MESSAGE_FLAGS(struct ndr_print *ndr, const char *name, uint32_t r);
enum ndr_err_code ndr_push_NL_AUTH_MESSAGE_BUFFER(struct ndr_push *ndr, int ndr_flags, const union NL_AUTH_MESSAGE_BUFFER *r);
enum ndr_err_code ndr_pull_NL_AUTH_MESSAGE_BUFFER(struct ndr_pull *ndr, int ndr_flags, union NL_AUTH_MESSAGE_BUFFER *r);
void ndr_print_NL_AUTH_MESSAGE_BUFFER(struct ndr_print *ndr, const char *name, const union NL_AUTH_MESSAGE_BUFFER *r);
enum ndr_err_code ndr_push_NL_AUTH_MESSAGE_BUFFER_REPLY(struct ndr_push *ndr, int ndr_flags, const union NL_AUTH_MESSAGE_BUFFER_REPLY *r);
enum ndr_err_code ndr_pull_NL_AUTH_MESSAGE_BUFFER_REPLY(struct ndr_pull *ndr, int ndr_flags, union NL_AUTH_MESSAGE_BUFFER_REPLY *r);
void ndr_print_NL_AUTH_MESSAGE_BUFFER_REPLY(struct ndr_print *ndr, const char *name, const union NL_AUTH_MESSAGE_BUFFER_REPLY *r);
enum ndr_err_code ndr_push_NL_AUTH_MESSAGE(struct ndr_push *ndr, int ndr_flags, const struct NL_AUTH_MESSAGE *r);
enum ndr_err_code ndr_pull_NL_AUTH_MESSAGE(struct ndr_pull *ndr, int ndr_flags, struct NL_AUTH_MESSAGE *r);
void ndr_print_NL_AUTH_MESSAGE(struct ndr_print *ndr, const char *name, const struct NL_AUTH_MESSAGE *r);
void ndr_print_NL_SIGNATURE_ALGORITHM(struct ndr_print *ndr, const char *name, enum NL_SIGNATURE_ALGORITHM r);
void ndr_print_NL_SEAL_ALGORITHM(struct ndr_print *ndr, const char *name, enum NL_SEAL_ALGORITHM r);
enum ndr_err_code ndr_push_NL_AUTH_SIGNATURE(struct ndr_push *ndr, int ndr_flags, const struct NL_AUTH_SIGNATURE *r);
enum ndr_err_code ndr_pull_NL_AUTH_SIGNATURE(struct ndr_pull *ndr, int ndr_flags, struct NL_AUTH_SIGNATURE *r);
void ndr_print_NL_AUTH_SIGNATURE(struct ndr_print *ndr, const char *name, const struct NL_AUTH_SIGNATURE *r);
enum ndr_err_code ndr_push_NL_AUTH_SHA2_SIGNATURE(struct ndr_push *ndr, int ndr_flags, const struct NL_AUTH_SHA2_SIGNATURE *r);
enum ndr_err_code ndr_pull_NL_AUTH_SHA2_SIGNATURE(struct ndr_pull *ndr, int ndr_flags, struct NL_AUTH_SHA2_SIGNATURE *r);
void ndr_print_NL_AUTH_SHA2_SIGNATURE(struct ndr_print *ndr, const char *name, const struct NL_AUTH_SHA2_SIGNATURE *r);
#endif /* _HEADER_NDR_schannel */
