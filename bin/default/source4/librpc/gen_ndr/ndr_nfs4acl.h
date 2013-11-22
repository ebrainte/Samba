/* header auto-generated by pidl */

#include "librpc/ndr/libndr.h"
#include "bin/default/source4/librpc/gen_ndr/nfs4acl.h"

#ifndef _HEADER_NDR_nfs4acl
#define _HEADER_NDR_nfs4acl

#define NDR_NFS4ACL_UUID "18763978-8625-abc3-54ca-9892bacdf321"
#define NDR_NFS4ACL_VERSION 1.0
#define NDR_NFS4ACL_NAME "nfs4acl"
#define NDR_NFS4ACL_HELPSTRING NULL
extern const struct ndr_interface_table ndr_table_nfs4acl;
#define NDR_NFS4ACL_TEST (0x00)

#define NDR_NFS4ACL_CALL_COUNT (1)
void ndr_print_nfs4ace(struct ndr_print *ndr, const char *name, const struct nfs4ace *r);
enum ndr_err_code ndr_push_nfs4acl(struct ndr_push *ndr, int ndr_flags, const struct nfs4acl *r);
enum ndr_err_code ndr_pull_nfs4acl(struct ndr_pull *ndr, int ndr_flags, struct nfs4acl *r);
void ndr_print_nfs4acl(struct ndr_print *ndr, const char *name, const struct nfs4acl *r);
void ndr_print_nfs4acl_test(struct ndr_print *ndr, const char *name, int flags, const struct nfs4acl_test *r);
#endif /* _HEADER_NDR_nfs4acl */