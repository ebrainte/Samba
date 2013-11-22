/* header auto-generated by pidl */

#ifndef _PIDL_HEADER_krb5pac
#define _PIDL_HEADER_krb5pac

#include <stdint.h>

#include "libcli/util/ntstatus.h"

#include "librpc/gen_ndr/security.h"
#include "librpc/gen_ndr/lsa.h"
#include "librpc/gen_ndr/netlogon.h"
#include "librpc/gen_ndr/samr.h"
#ifndef _HEADER_krb5pac
#define _HEADER_krb5pac

#define NETLOGON_GENERIC_KRB5_PAC_VALIDATE	( 3 )
struct PAC_LOGON_NAME {
	NTTIME logon_time;
	uint16_t size;/* [value(2*strlen_m(account_name))] */
	const char *account_name;/* [charset(UTF16)] */
};

struct PAC_SIGNATURE_DATA {
	uint32_t type;
	DATA_BLOB signature;/* [flag(LIBNDR_FLAG_REMAINING)] */
}/* [public,flag(LIBNDR_PRINT_ARRAY_HEX)] */;

struct PAC_LOGON_INFO {
	struct netr_SamInfo3 info3;
	struct dom_sid2 *res_group_dom_sid;/* [unique] */
	struct samr_RidWithAttributeArray res_groups;
};

struct PAC_CONSTRAINED_DELEGATION {
	struct lsa_String proxy_target;
	uint32_t num_transited_services;
	struct lsa_String *transited_services;/* [unique,size_is(num_transited_services)] */
};

struct PAC_UNKNOWN_12 {
	uint16_t upn_size;/* [value(2*strlen_m(upn_name))] */
	uint16_t upn_offset;
	uint16_t domain_size;/* [value(2*strlen_m(domain_name))] */
	uint16_t domain_offset;
	uint16_t unknown3;
	uint16_t unknown4;
	uint32_t unknown5;
	const char *upn_name;/* [charset(UTF16)] */
	const char *domain_name;/* [charset(UTF16)] */
	uint32_t unknown6;
};

struct PAC_LOGON_INFO_CTR {
	struct PAC_LOGON_INFO *info;/* [unique] */
}/* [public] */;

struct PAC_CONSTRAINED_DELEGATION_CTR {
	struct PAC_CONSTRAINED_DELEGATION *info;/* [unique] */
}/* [public] */;

enum PAC_TYPE
#ifndef USE_UINT_ENUMS
 {
	PAC_TYPE_LOGON_INFO=(int)(1),
	PAC_TYPE_SRV_CHECKSUM=(int)(6),
	PAC_TYPE_KDC_CHECKSUM=(int)(7),
	PAC_TYPE_LOGON_NAME=(int)(10),
	PAC_TYPE_CONSTRAINED_DELEGATION=(int)(11),
	PAC_TYPE_UNKNOWN_12=(int)(12)
}
#else
 { __donnot_use_enum_PAC_TYPE=0x7FFFFFFF}
#define PAC_TYPE_LOGON_INFO ( 1 )
#define PAC_TYPE_SRV_CHECKSUM ( 6 )
#define PAC_TYPE_KDC_CHECKSUM ( 7 )
#define PAC_TYPE_LOGON_NAME ( 10 )
#define PAC_TYPE_CONSTRAINED_DELEGATION ( 11 )
#define PAC_TYPE_UNKNOWN_12 ( 12 )
#endif
;

struct DATA_BLOB_REM {
	DATA_BLOB remaining;/* [flag(LIBNDR_FLAG_REMAINING)] */
};

union PAC_INFO {
	struct PAC_LOGON_INFO_CTR logon_info;/* [subcontext(0xFFFFFC01),case(PAC_TYPE_LOGON_INFO)] */
	struct PAC_SIGNATURE_DATA srv_cksum;/* [case(PAC_TYPE_SRV_CHECKSUM)] */
	struct PAC_SIGNATURE_DATA kdc_cksum;/* [case(PAC_TYPE_KDC_CHECKSUM)] */
	struct PAC_LOGON_NAME logon_name;/* [case(PAC_TYPE_LOGON_NAME)] */
	struct PAC_CONSTRAINED_DELEGATION_CTR constrained_delegation;/* [subcontext(0xFFFFFC01),case(PAC_TYPE_CONSTRAINED_DELEGATION)] */
	struct DATA_BLOB_REM unknown;/* [subcontext(0),default] */
}/* [gensize,nodiscriminant,public] */;

struct PAC_BUFFER {
	enum PAC_TYPE type;
	uint32_t _ndr_size;/* [value(_ndr_size_PAC_INFO(info,type,0))] */
	union PAC_INFO *info;/* [relative,subcontext_size(_subcontext_size_PAC_INFO(r,ndr->flags)),subcontext(0),switch_is(type),flag(LIBNDR_FLAG_ALIGN8)] */
	uint32_t _pad;/* [value(0)] */
}/* [noprint,nopull,public,nopush] */;

struct PAC_DATA {
	uint32_t num_buffers;
	uint32_t version;
	struct PAC_BUFFER *buffers;
}/* [public] */;

struct PAC_BUFFER_RAW {
	enum PAC_TYPE type;
	uint32_t ndr_size;
	struct DATA_BLOB_REM *info;/* [relative,subcontext_size(NDR_ROUND(ndr_size,8)),subcontext(0),flag(LIBNDR_FLAG_ALIGN8)] */
	uint32_t _pad;/* [value(0)] */
}/* [public] */;

struct PAC_DATA_RAW {
	uint32_t num_buffers;
	uint32_t version;
	struct PAC_BUFFER_RAW *buffers;
}/* [public] */;

struct PAC_Validate {
	uint32_t MessageType;/* [value(NETLOGON_GENERIC_KRB5_PAC_VALIDATE)] */
	uint32_t ChecksumLength;
	int32_t SignatureType;
	uint32_t SignatureLength;
	DATA_BLOB ChecksumAndSignature;/* [flag(LIBNDR_FLAG_REMAINING)] */
}/* [public] */;

struct netsamlogoncache_entry {
	time_t timestamp;
	struct netr_SamInfo3 info3;
}/* [public] */;


struct decode_pac {
	struct {
		struct PAC_DATA pac;
	} in;

};


struct decode_pac_raw {
	struct {
		struct PAC_DATA_RAW pac;
	} in;

};


struct decode_login_info {
	struct {
		struct PAC_LOGON_INFO logon_info;
	} in;

};


struct decode_login_info_ctr {
	struct {
		struct PAC_LOGON_INFO_CTR logon_info_ctr;
	} in;

};


struct decode_pac_validate {
	struct {
		struct PAC_Validate pac_validate;
	} in;

};

#endif /* _HEADER_krb5pac */
#endif /* _PIDL_HEADER_krb5pac */
