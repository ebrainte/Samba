/* header auto-generated by pidl */

#ifndef _PIDL_HEADER_nfs4acl
#define _PIDL_HEADER_nfs4acl

#include <stdint.h>

#include "libcli/util/ntstatus.h"

#include "librpc/gen_ndr/misc.h"
#include "librpc/gen_ndr/security.h"
#ifndef _HEADER_nfs4acl
#define _HEADER_nfs4acl

#define NFS4ACL_XATTR_NAME	( "system.nfs4acl" )
struct nfs4ace {
	uint16_t e_type;
	uint16_t e_flags;
	uint32_t e_mask;
	uint32_t e_id;
	const char * e_who;/* [flag(LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM)] */
	DATA_BLOB _pad;/* [flag(LIBNDR_FLAG_ALIGN4)] */
}/* [flag(LIBNDR_FLAG_BIGENDIAN)] */;

struct nfs4acl {
	uint8_t a_version;
	uint8_t a_flags;
	uint16_t a_count;
	uint32_t a_owner_mask;
	uint32_t a_group_mask;
	uint32_t a_other_mask;
	struct nfs4ace *ace;
}/* [public,flag(LIBNDR_FLAG_BIGENDIAN)] */;


struct nfs4acl_test {
	struct {
		struct nfs4acl acl;
	} in;

	struct {
		NTSTATUS result;
	} out;

};

#endif /* _HEADER_nfs4acl */
#endif /* _PIDL_HEADER_nfs4acl */
