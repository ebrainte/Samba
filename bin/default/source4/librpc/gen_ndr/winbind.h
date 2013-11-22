/* header auto-generated by pidl */

#ifndef _PIDL_HEADER_winbind
#define _PIDL_HEADER_winbind

#include <stdint.h>

#include "libcli/util/ntstatus.h"

#include "librpc/gen_ndr/netlogon.h"
#include "librpc/gen_ndr/lsa.h"
#include "librpc/gen_ndr/security.h"
#include "librpc/gen_ndr/idmap.h"
#ifndef _HEADER_winbind
#define _HEADER_winbind

union netr_LogonLevel;

union netr_Validation;

enum winbind_get_idmap_level
#ifndef USE_UINT_ENUMS
 {
	WINBIND_IDMAP_LEVEL_SIDS_TO_XIDS=(int)(1),
	WINBIND_IDMAP_LEVEL_XIDS_TO_SIDS=(int)(2)
}
#else
 { __donnot_use_enum_winbind_get_idmap_level=0x7FFFFFFF}
#define WINBIND_IDMAP_LEVEL_SIDS_TO_XIDS ( 1 )
#define WINBIND_IDMAP_LEVEL_XIDS_TO_SIDS ( 2 )
#endif
;


struct winbind_information {
	int _dummy_element;
};


struct winbind_remote_control {
	struct {
		NTSTATUS result;
	} out;

};


struct winbind_SamLogon {
	struct {
		uint16_t logon_level;
		union netr_LogonLevel logon;/* [switch_is(logon_level)] */
		uint16_t validation_level;
	} in;

	struct {
		union netr_Validation validation;/* [switch_is(validation_level)] */
		uint8_t authoritative;
		NTSTATUS result;
	} out;

};


struct winbind_get_idmap {
	struct {
		enum winbind_get_idmap_level level;
		uint32_t count;
		struct id_map *ids;/* [size_is(count)] */
	} in;

	struct {
		struct id_map *ids;/* [size_is(count)] */
		NTSTATUS result;
	} out;

};


struct winbind_DsrUpdateReadOnlyServerDnsRecords {
	struct {
		const char *site_name;/* [unique,charset(UTF16)] */
		uint32_t dns_ttl;
		struct NL_DNS_NAME_INFO_ARRAY *dns_names;/* [ref] */
	} in;

	struct {
		struct NL_DNS_NAME_INFO_ARRAY *dns_names;/* [ref] */
		NTSTATUS result;
	} out;

};

#endif /* _HEADER_winbind */
#endif /* _PIDL_HEADER_winbind */