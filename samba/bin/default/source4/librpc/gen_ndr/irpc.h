/* header auto-generated by pidl */

#ifndef _PIDL_HEADER_irpc
#define _PIDL_HEADER_irpc

#include <stdint.h>

#include "libcli/util/ntstatus.h"

#include "librpc/gen_ndr/misc.h"
#include "librpc/gen_ndr/security.h"
#include "librpc/gen_ndr/nbt.h"
#include "librpc/gen_ndr/netlogon.h"
#include "librpc/gen_ndr/server_id.h"
#ifndef _HEADER_irpc
#define _HEADER_irpc

/* bitmap irpc_flags */
#define IRPC_FLAG_REPLY ( 0x0001 )

struct irpc_creds {
	struct security_token *token;/* [unique] */
};

struct irpc_header {
	struct GUID uuid;
	uint32_t if_version;
	uint32_t callnum;
	uint32_t callid;
	uint32_t flags;
	NTSTATUS status;
	struct irpc_creds creds;/* [subcontext(4)] */
	DATA_BLOB _pad;/* [flag(LIBNDR_FLAG_ALIGN8)] */
}/* [public] */;

struct irpc_name_record {
	const char * name;/* [flag(LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM)] */
	uint32_t count;
	struct server_id *ids;/* [size_is(count)] */
}/* [public] */;

struct irpc_name_records {
	struct irpc_name_record **names;/* [unique,size_is(num_records)] */
	uint32_t num_records;
}/* [public] */;

enum nbtd_info_level
#ifndef USE_UINT_ENUMS
 {
	NBTD_INFO_STATISTICS
}
#else
 { __donnot_use_enum_nbtd_info_level=0x7FFFFFFF}
#define NBTD_INFO_STATISTICS ( 0 )
#endif
;

struct nbtd_statistics {
	uint64_t total_received;
	uint64_t total_sent;
	uint64_t query_count;
	uint64_t register_count;
	uint64_t release_count;
};

union nbtd_info {
	struct nbtd_statistics *stats;/* [unique,case(NBTD_INFO_STATISTICS)] */
}/* [switch_type(nbtd_info_level)] */;

struct nbtd_proxy_wins_addr {
	const char * addr;
};

enum smbsrv_info_level
#ifndef USE_UINT_ENUMS
 {
	SMBSRV_INFO_SESSIONS,
	SMBSRV_INFO_TCONS
}
#else
 { __donnot_use_enum_smbsrv_info_level=0x7FFFFFFF}
#define SMBSRV_INFO_SESSIONS ( 0 )
#define SMBSRV_INFO_TCONS ( 1 )
#endif
;

struct smbsrv_session_info {
	uint64_t vuid;
	const char * account_name;/* [flag(LIBNDR_FLAG_STR_ASCII|LIBNDR_FLAG_STR_NULLTERM)] */
	const char * domain_name;/* [flag(LIBNDR_FLAG_STR_ASCII|LIBNDR_FLAG_STR_NULLTERM)] */
	const char * client_ip;/* [flag(LIBNDR_FLAG_STR_ASCII|LIBNDR_FLAG_STR_NULLTERM)] */
	NTTIME connect_time;
	NTTIME auth_time;
	NTTIME last_use_time;
};

struct smbsrv_sessions {
	uint32_t num_sessions;
	struct smbsrv_session_info *sessions;/* [unique,size_is(num_sessions)] */
};

struct smbsrv_tcon_info {
	uint32_t tid;
	const char * share_name;/* [flag(LIBNDR_FLAG_STR_ASCII|LIBNDR_FLAG_STR_NULLTERM)] */
	const char * client_ip;/* [flag(LIBNDR_FLAG_STR_ASCII|LIBNDR_FLAG_STR_NULLTERM)] */
	NTTIME connect_time;
	NTTIME last_use_time;
};

struct smbsrv_tcons {
	uint32_t num_tcons;
	struct smbsrv_tcon_info *tcons;/* [unique,size_is(num_tcons)] */
};

union smbsrv_info {
	struct smbsrv_sessions sessions;/* [case(SMBSRV_INFO_SESSIONS)] */
	struct smbsrv_tcons tcons;/* [case(SMBSRV_INFO_TCONS)] */
}/* [switch_type(smbsrv_info_level)] */;

enum drepl_role_master
#ifndef USE_UINT_ENUMS
 {
	DREPL_SCHEMA_MASTER,
	DREPL_RID_MASTER,
	DREPL_INFRASTRUCTURE_MASTER,
	DREPL_NAMING_MASTER,
	DREPL_PDC_MASTER
}
#else
 { __donnot_use_enum_drepl_role_master=0x7FFFFFFF}
#define DREPL_SCHEMA_MASTER ( 0 )
#define DREPL_RID_MASTER ( 1 )
#define DREPL_INFRASTRUCTURE_MASTER ( 2 )
#define DREPL_NAMING_MASTER ( 3 )
#define DREPL_PDC_MASTER ( 4 )
#endif
;


struct irpc_uptime {
	struct {
		NTTIME *start_time;/* [ref] */
	} out;

};


struct nbtd_information {
	struct {
		enum nbtd_info_level level;
	} in;

	struct {
		union nbtd_info info;/* [switch_is(level)] */
	} out;

};


struct nbtd_getdcname {
	struct {
		const char * domainname;/* [flag(LIBNDR_FLAG_STR_ASCII|LIBNDR_FLAG_STR_NULLTERM)] */
		const char * ip_address;/* [flag(LIBNDR_FLAG_STR_ASCII|LIBNDR_FLAG_STR_NULLTERM)] */
		const char * my_computername;/* [flag(LIBNDR_FLAG_STR_ASCII|LIBNDR_FLAG_STR_NULLTERM)] */
		const char * my_accountname;/* [flag(LIBNDR_FLAG_STR_ASCII|LIBNDR_FLAG_STR_NULLTERM)] */
		uint32_t account_control;
		struct dom_sid *domain_sid;/* [ref] */
	} in;

	struct {
		const char * dcname;/* [unique,flag(LIBNDR_FLAG_STR_ASCII|LIBNDR_FLAG_STR_NULLTERM)] */
	} out;

};


struct nbtd_proxy_wins_challenge {
	struct {
		struct nbt_name name;
		uint32_t num_addrs;
		struct nbtd_proxy_wins_addr *addrs;
	} in;

	struct {
		uint32_t num_addrs;
		struct nbtd_proxy_wins_addr *addrs;
	} out;

};


struct nbtd_proxy_wins_release_demand {
	struct {
		struct nbt_name name;
		uint32_t num_addrs;
		struct nbtd_proxy_wins_addr *addrs;
	} in;

};


struct kdc_check_generic_kerberos {
	struct {
		DATA_BLOB generic_request;
	} in;

	struct {
		DATA_BLOB generic_reply;
	} out;

};


struct smbsrv_information {
	struct {
		enum smbsrv_info_level level;
	} in;

	struct {
		union smbsrv_info info;/* [switch_is(level)] */
	} out;

};


struct samba_terminate {
	struct {
		const char * reason;/* [flag(LIBNDR_FLAG_STR_ASCII|LIBNDR_FLAG_STR_NULLTERM)] */
	} in;

};


struct dreplsrv_refresh {
	struct {
		WERROR result;
	} out;

};


struct drepl_takeFSMORole {
	struct {
		enum drepl_role_master role;
	} in;

	struct {
		WERROR result;
	} out;

};


struct drepl_trigger_repl_secret {
	struct {
		const char * user_dn;/* [flag(LIBNDR_FLAG_STR_ASCII|LIBNDR_FLAG_STR_NULLTERM)] */
	} in;

};


struct dnsupdate_RODC {
	struct {
		struct dom_sid *dom_sid;/* [unique] */
		const char *site_name;/* [unique,charset(UTF16)] */
		uint32_t dns_ttl;
		struct NL_DNS_NAME_INFO_ARRAY *dns_names;/* [ref] */
	} in;

	struct {
		struct NL_DNS_NAME_INFO_ARRAY *dns_names;/* [ref] */
		NTSTATUS result;
	} out;

};

#endif /* _HEADER_irpc */
#endif /* _PIDL_HEADER_irpc */
