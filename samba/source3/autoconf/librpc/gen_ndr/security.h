/* header auto-generated by pidl */

#ifndef _PIDL_HEADER_security
#define _PIDL_HEADER_security

#include <stdint.h>

#include "libcli/util/ntstatus.h"

#include "librpc/gen_ndr/misc.h"
#define dom_sid2 dom_sid
#define dom_sid28 dom_sid
#define dom_sid0 dom_sid
#ifndef _HEADER_security
#define _HEADER_security

#define SEC_MASK_GENERIC	( 0xF0000000 )
#define SEC_MASK_FLAGS	( 0x0F000000 )
#define SEC_MASK_STANDARD	( 0x00FF0000 )
#define SEC_MASK_SPECIFIC	( 0x0000FFFF )
#define SEC_GENERIC_ALL	( 0x10000000 )
#define SEC_GENERIC_EXECUTE	( 0x20000000 )
#define SEC_GENERIC_WRITE	( 0x40000000 )
#define SEC_GENERIC_READ	( 0x80000000 )
#define SEC_FLAG_SYSTEM_SECURITY	( 0x01000000 )
#define SEC_FLAG_MAXIMUM_ALLOWED	( 0x02000000 )
#define SEC_STD_DELETE	( 0x00010000 )
#define SEC_STD_READ_CONTROL	( 0x00020000 )
#define SEC_STD_WRITE_DAC	( 0x00040000 )
#define SEC_STD_WRITE_OWNER	( 0x00080000 )
#define SEC_STD_SYNCHRONIZE	( 0x00100000 )
#define SEC_STD_REQUIRED	( 0x000F0000 )
#define SEC_STD_ALL	( 0x001F0000 )
#define SEC_FILE_READ_DATA	( 0x00000001 )
#define SEC_FILE_WRITE_DATA	( 0x00000002 )
#define SEC_FILE_APPEND_DATA	( 0x00000004 )
#define SEC_FILE_READ_EA	( 0x00000008 )
#define SEC_FILE_WRITE_EA	( 0x00000010 )
#define SEC_FILE_EXECUTE	( 0x00000020 )
#define SEC_FILE_READ_ATTRIBUTE	( 0x00000080 )
#define SEC_FILE_WRITE_ATTRIBUTE	( 0x00000100 )
#define SEC_FILE_ALL	( 0x000001ff )
#define SEC_DIR_LIST	( 0x00000001 )
#define SEC_DIR_ADD_FILE	( 0x00000002 )
#define SEC_DIR_ADD_SUBDIR	( 0x00000004 )
#define SEC_DIR_READ_EA	( 0x00000008 )
#define SEC_DIR_WRITE_EA	( 0x00000010 )
#define SEC_DIR_TRAVERSE	( 0x00000020 )
#define SEC_DIR_DELETE_CHILD	( 0x00000040 )
#define SEC_DIR_READ_ATTRIBUTE	( 0x00000080 )
#define SEC_DIR_WRITE_ATTRIBUTE	( 0x00000100 )
#define SEC_REG_QUERY_VALUE	( 0x00000001 )
#define SEC_REG_SET_VALUE	( 0x00000002 )
#define SEC_REG_CREATE_SUBKEY	( 0x00000004 )
#define SEC_REG_ENUM_SUBKEYS	( 0x00000008 )
#define SEC_REG_NOTIFY	( 0x00000010 )
#define SEC_REG_CREATE_LINK	( 0x00000020 )
#define SEC_ADS_CREATE_CHILD	( 0x00000001 )
#define SEC_ADS_DELETE_CHILD	( 0x00000002 )
#define SEC_ADS_LIST	( 0x00000004 )
#define SEC_ADS_SELF_WRITE	( 0x00000008 )
#define SEC_ADS_READ_PROP	( 0x00000010 )
#define SEC_ADS_WRITE_PROP	( 0x00000020 )
#define SEC_ADS_DELETE_TREE	( 0x00000040 )
#define SEC_ADS_LIST_OBJECT	( 0x00000080 )
#define SEC_ADS_CONTROL_ACCESS	( 0x00000100 )
#define SEC_MASK_INVALID	( 0x0ce0fe00 )
#define SEC_RIGHTS_FILE_READ	( SEC_STD_READ_CONTROL|SEC_STD_SYNCHRONIZE|SEC_FILE_READ_DATA|SEC_FILE_READ_ATTRIBUTE|SEC_FILE_READ_EA )
#define SEC_RIGHTS_FILE_WRITE	( SEC_STD_READ_CONTROL|SEC_STD_SYNCHRONIZE|SEC_FILE_WRITE_DATA|SEC_FILE_WRITE_ATTRIBUTE|SEC_FILE_WRITE_EA|SEC_FILE_APPEND_DATA )
#define SEC_RIGHTS_FILE_EXECUTE	( SEC_STD_SYNCHRONIZE|SEC_STD_READ_CONTROL|SEC_FILE_READ_ATTRIBUTE|SEC_FILE_EXECUTE )
#define SEC_RIGHTS_FILE_ALL	( SEC_STD_ALL|SEC_FILE_ALL )
#define SEC_RIGHTS_DIR_READ	( SEC_RIGHTS_FILE_READ )
#define SEC_RIGHTS_DIR_WRITE	( SEC_RIGHTS_FILE_WRITE )
#define SEC_RIGHTS_DIR_EXECUTE	( SEC_RIGHTS_FILE_EXECUTE )
#define SEC_RIGHTS_DIR_ALL	( SEC_RIGHTS_FILE_ALL )
#define SEC_RIGHTS_PRIV_BACKUP	( SEC_STD_READ_CONTROL|SEC_FLAG_SYSTEM_SECURITY|SEC_RIGHTS_FILE_READ|SEC_DIR_TRAVERSE )
#define SEC_RIGHTS_PRIV_RESTORE	( SEC_STD_WRITE_DAC|SEC_STD_WRITE_OWNER|SEC_FLAG_SYSTEM_SECURITY|SEC_RIGHTS_FILE_WRITE|SEC_DIR_ADD_FILE|SEC_DIR_ADD_SUBDIR|SEC_STD_DELETE )
#define STANDARD_RIGHTS_ALL_ACCESS	( SEC_STD_ALL )
#define STANDARD_RIGHTS_MODIFY_ACCESS	( SEC_STD_READ_CONTROL )
#define STANDARD_RIGHTS_EXECUTE_ACCESS	( SEC_STD_READ_CONTROL )
#define STANDARD_RIGHTS_READ_ACCESS	( SEC_STD_READ_CONTROL )
#define STANDARD_RIGHTS_WRITE_ACCESS	( (SEC_STD_WRITE_OWNER|SEC_STD_WRITE_DAC|SEC_STD_DELETE) )
#define STANDARD_RIGHTS_REQUIRED_ACCESS	( (SEC_STD_DELETE|SEC_STD_READ_CONTROL|SEC_STD_WRITE_DAC|SEC_STD_WRITE_OWNER) )
#define SEC_ADS_GENERIC_ALL_DS	( (SEC_STD_DELETE|SEC_STD_WRITE_DAC|SEC_STD_WRITE_OWNER|SEC_ADS_CREATE_CHILD|SEC_ADS_DELETE_CHILD|SEC_ADS_DELETE_TREE|SEC_ADS_CONTROL_ACCESS) )
#define SEC_ADS_GENERIC_EXECUTE	( SEC_STD_READ_CONTROL|SEC_ADS_LIST )
#define SEC_ADS_GENERIC_WRITE	( (SEC_STD_READ_CONTROL|SEC_ADS_SELF_WRITE|SEC_ADS_WRITE_PROP) )
#define SEC_ADS_GENERIC_READ	( (SEC_STD_READ_CONTROL|SEC_ADS_LIST|SEC_ADS_READ_PROP|SEC_ADS_LIST_OBJECT) )
#define SEC_ADS_GENERIC_ALL	( (SEC_ADS_GENERIC_EXECUTE|SEC_ADS_GENERIC_WRITE|SEC_ADS_GENERIC_READ|SEC_ADS_GENERIC_ALL_DS) )
#define SID_NULL	( "S-1-0-0" )
#define NAME_WORLD	( "WORLD" )
#define SID_WORLD_DOMAIN	( "S-1-1" )
#define SID_WORLD	( "S-1-1-0" )
#define SID_CREATOR_OWNER_DOMAIN	( "S-1-3" )
#define SID_CREATOR_OWNER	( "S-1-3-0" )
#define SID_CREATOR_GROUP	( "S-1-3-1" )
#define SID_OWNER_RIGHTS	( "S-1-3-4" )
#define NAME_NT_AUTHORITY	( "NT AUTHORITY" )
#define SID_NT_AUTHORITY	( "S-1-5" )
#define SID_NT_DIALUP	( "S-1-5-1" )
#define SID_NT_NETWORK	( "S-1-5-2" )
#define SID_NT_BATCH	( "S-1-5-3" )
#define SID_NT_INTERACTIVE	( "S-1-5-4" )
#define SID_NT_SERVICE	( "S-1-5-6" )
#define SID_NT_ANONYMOUS	( "S-1-5-7" )
#define SID_NT_PROXY	( "S-1-5-8" )
#define SID_NT_ENTERPRISE_DCS	( "S-1-5-9" )
#define SID_NT_SELF	( "S-1-5-10" )
#define SID_NT_AUTHENTICATED_USERS	( "S-1-5-11" )
#define SID_NT_RESTRICTED	( "S-1-5-12" )
#define SID_NT_TERMINAL_SERVER_USERS	( "S-1-5-13" )
#define SID_NT_REMOTE_INTERACTIVE	( "S-1-5-14" )
#define SID_NT_THIS_ORGANISATION	( "S-1-5-15" )
#define SID_NT_IUSR	( "S-1-5-17" )
#define SID_NT_SYSTEM	( "S-1-5-18" )
#define SID_NT_LOCAL_SERVICE	( "S-1-5-19" )
#define SID_NT_NETWORK_SERVICE	( "S-1-5-20" )
#define SID_NT_DIGEST_AUTHENTICATION	( "S-1-5-64-21" )
#define SID_NT_NTLM_AUTHENTICATION	( "S-1-5-64-10" )
#define SID_NT_SCHANNEL_AUTHENTICATION	( "S-1-5-64-14" )
#define SID_NT_OTHER_ORGANISATION	( "S-1-5-1000" )
#define NAME_BUILTIN	( "BUILTIN" )
#define SID_BUILTIN	( "S-1-5-32" )
#define SID_BUILTIN_ADMINISTRATORS	( "S-1-5-32-544" )
#define SID_BUILTIN_USERS	( "S-1-5-32-545" )
#define SID_BUILTIN_GUESTS	( "S-1-5-32-546" )
#define SID_BUILTIN_POWER_USERS	( "S-1-5-32-547" )
#define SID_BUILTIN_ACCOUNT_OPERATORS	( "S-1-5-32-548" )
#define SID_BUILTIN_SERVER_OPERATORS	( "S-1-5-32-549" )
#define SID_BUILTIN_PRINT_OPERATORS	( "S-1-5-32-550" )
#define SID_BUILTIN_BACKUP_OPERATORS	( "S-1-5-32-551" )
#define SID_BUILTIN_REPLICATOR	( "S-1-5-32-552" )
#define SID_BUILTIN_RAS_SERVERS	( "S-1-5-32-553" )
#define SID_BUILTIN_PREW2K	( "S-1-5-32-554" )
#define SID_BUILTIN_REMOTE_DESKTOP_USERS	( "S-1-5-32-555" )
#define SID_BUILTIN_NETWORK_CONF_OPERATORS	( "S-1-5-32-556" )
#define SID_BUILTIN_INCOMING_FOREST_TRUST	( "S-1-5-32-557" )
#define SID_BUILTIN_PERFMON_USERS	( "S-1-5-32-558" )
#define SID_BUILTIN_PERFLOG_USERS	( "S-1-5-32-559" )
#define SID_BUILTIN_AUTH_ACCESS	( "S-1-5-32-560" )
#define SID_BUILTIN_TS_LICENSE_SERVERS	( "S-1-5-32-561" )
#define SID_BUILTIN_DISTRIBUTED_COM_USERS	( "S-1-5-32-562" )
#define SID_BUILTIN_CRYPTO_OPERATORS	( "S-1-5-32-569" )
#define SID_BUILTIN_EVENT_LOG_READERS	( "S-1-5-32-573" )
#define SID_BUILTIN_CERT_SERV_DCOM_ACCESS	( "S-1-5-32-574" )
#define NAME_NT_SERVICE	( "NT SERVICE" )
#define SID_NT_NT_SERVICE	( "S-1-5-80" )
#define SID_NT_TRUSTED_INSTALLER	( "S-1-5-80-956008885-3418522649-1831038044-1853292631-2271478464" )
#define DOMAIN_RID_LOGON	( 9 )
#define DOMAIN_RID_ENTERPRISE_READONLY_DCS	( 498 )
#define DOMAIN_RID_ADMINISTRATOR	( 500 )
#define DOMAIN_RID_GUEST	( 501 )
#define DOMAIN_RID_KRBTGT	( 502 )
#define DOMAIN_RID_ADMINS	( 512 )
#define DOMAIN_RID_USERS	( 513 )
#define DOMAIN_RID_GUESTS	( 514 )
#define DOMAIN_RID_DOMAIN_MEMBERS	( 515 )
#define DOMAIN_RID_DCS	( 516 )
#define DOMAIN_RID_CERT_ADMINS	( 517 )
#define DOMAIN_RID_SCHEMA_ADMINS	( 518 )
#define DOMAIN_RID_ENTERPRISE_ADMINS	( 519 )
#define DOMAIN_RID_POLICY_ADMINS	( 520 )
#define DOMAIN_RID_READONLY_DCS	( 521 )
#define DOMAIN_RID_RAS_SERVERS	( 553 )
#define DOMAIN_RID_RODC_ALLOW	( 571 )
#define DOMAIN_RID_RODC_DENY	( 572 )
#define BUILTIN_RID_ADMINISTRATORS	( 544 )
#define BUILTIN_RID_USERS	( 545 )
#define BUILTIN_RID_GUESTS	( 546 )
#define BUILTIN_RID_POWER_USERS	( 547 )
#define BUILTIN_RID_ACCOUNT_OPERATORS	( 548 )
#define BUILTIN_RID_SERVER_OPERATORS	( 549 )
#define BUILTIN_RID_PRINT_OPERATORS	( 550 )
#define BUILTIN_RID_BACKUP_OPERATORS	( 551 )
#define BUILTIN_RID_REPLICATOR	( 552 )
#define BUILTIN_RID_RAS_SERVERS	( 553 )
#define BUILTIN_RID_PRE_2K_ACCESS	( 554 )
#define BUILTIN_RID_REMOTE_DESKTOP_USERS	( 555 )
#define BUILTIN_RID_NETWORK_CONF_OPERATORS	( 556 )
#define BUILTIN_RID_INCOMING_FOREST_TRUST	( 557 )
#define BUILTIN_RID_PERFMON_USERS	( 558 )
#define BUILTIN_RID_PERFLOG_USERS	( 559 )
#define BUILTIN_RID_AUTH_ACCESS	( 560 )
#define BUILTIN_RID_TS_LICENSE_SERVERS	( 561 )
#define BUILTIN_RID_DISTRIBUTED_COM_USERS	( 562 )
#define BUILTIN_RID_CRYPTO_OPERATORS	( 569 )
#define BUILTIN_RID_EVENT_LOG_READERS	( 573 )
#define BUILTIN_RID_CERT_SERV_DCOM_ACCESS	( 574 )
#define NT4_ACL_REVISION	( SECURITY_ACL_REVISION_NT4 )
#define SD_REVISION	( SECURITY_DESCRIPTOR_REVISION_1 )
#define GUID_DRS_ALLOCATE_RIDS	( "1abd7cf8-0a99-11d1-adbb-00c04fd8d5cd" )
#define GUID_DRS_CHANGE_DOMAIN_MASTER	( "014bf69c-7b3b-11d1-85f6-08002be74fab" )
#define GUID_DRS_CHANGE_INFR_MASTER	( "cc17b1fb-33d9-11d2-97d4-00c04fd8d5cd" )
#define GUID_DRS_CHANGE_PDC	( "bae50096-4752-11d1-9052-00c04fc2d4cf" )
#define GUID_DRS_CHANGE_RID_MASTER	( "d58d5f36-0a98-11d1-adbb-00c04fd8d5cd" )
#define GUID_DRS_CHANGE_SCHEMA_MASTER	( "e12b56b6-0a95-11d1-adbb-00c04fd8d5cd" )
#define GUID_DRS_GET_CHANGES	( "1131f6aa-9c07-11d1-f79f-00c04fc2dcd2" )
#define GUID_DRS_GET_ALL_CHANGES	( "1131f6ad-9c07-11d1-f79f-00c04fc2dcd2" )
#define GUID_DRS_GET_FILTERED_ATTRIBUTES	( "89e95b76-444d-4c62-991a-0facbeda640c" )
#define GUID_DRS_MANAGE_TOPOLOGY	( "1131f6ac-9c07-11d1-f79f-00c04fc2dcd2" )
#define GUID_DRS_MONITOR_TOPOLOGY	( "f98340fb-7c5b-4cdb-a00b-2ebdfa115a96" )
#define GUID_DRS_REPL_SYNCRONIZE	( "1131f6ab-9c07-11d1-f79f-00c04fc2dcd2" )
#define GUID_DRS_RO_REPL_SECRET_SYNC	( "1131f6ae-9c07-11d1-f79f-00c04fc2dcd2" )
#define GUID_DRS_USER_CHANGE_PASSWORD	( "ab721a53-1e2f-11d0-9819-00aa0040529b" )
#define GUID_DRS_FORCE_CHANGE_PASSWORD	( "00299570-246d-11d0-a768-00aa006e0529" )
#define GUID_DRS_VALIDATE_SPN	( "f3a64788-5306-11d1-a9c5-0000f80367c1" )
#define GUID_DRS_SELF_MEMBERSHIP	( "bf9679c0-0de6-11d0-a285-00aa003049e2" )
#define GUID_DRS_DNS_HOST_NAME	( "72e39547-7b18-11d1-adef-00c04fd8d5cd" )
#define GUID_DRS_ADD_DNS_HOST_NAME	( "80863791-dbe9-4eb8-837e-7f0ab55d9ac7" )
#define GUID_DRS_BEHAVIOR_VERSION	( "d31a8757-2447-4545-8081-3bb610cacbf2" )
struct dom_sid {
	uint8_t sid_rev_num;
	int8_t num_auths;/* [range(0,15)] */
	uint8_t id_auth[6];
	uint32_t sub_auths[15];
}/* [noprint,gensize,nopull,public,nopush,nosize] */;

enum sec_privilege
#ifndef USE_UINT_ENUMS
 {
	SEC_PRIV_INVALID=(int)(0x0),
	SEC_PRIV_INCREASE_QUOTA=(int)(0x5),
	SEC_PRIV_MACHINE_ACCOUNT=(int)(0x6),
	SEC_PRIV_SECURITY=(int)(0x8),
	SEC_PRIV_TAKE_OWNERSHIP=(int)(0x09),
	SEC_PRIV_LOAD_DRIVER=(int)(0x0a),
	SEC_PRIV_SYSTEM_PROFILE=(int)(0x0b),
	SEC_PRIV_SYSTEMTIME=(int)(0x0c),
	SEC_PRIV_PROFILE_SINGLE_PROCESS=(int)(0x0d),
	SEC_PRIV_INCREASE_BASE_PRIORITY=(int)(0x0e),
	SEC_PRIV_CREATE_PAGEFILE=(int)(0x0f),
	SEC_PRIV_BACKUP=(int)(0x11),
	SEC_PRIV_RESTORE=(int)(0x12),
	SEC_PRIV_SHUTDOWN=(int)(0x13),
	SEC_PRIV_DEBUG=(int)(0x14),
	SEC_PRIV_SYSTEM_ENVIRONMENT=(int)(0x16),
	SEC_PRIV_CHANGE_NOTIFY=(int)(0x17),
	SEC_PRIV_REMOTE_SHUTDOWN=(int)(0x18),
	SEC_PRIV_UNDOCK=(int)(0x19),
	SEC_PRIV_ENABLE_DELEGATION=(int)(0x1b),
	SEC_PRIV_MANAGE_VOLUME=(int)(0x1c),
	SEC_PRIV_IMPERSONATE=(int)(0x1d),
	SEC_PRIV_CREATE_GLOBAL=(int)(0x1e),
	SEC_PRIV_PRINT_OPERATOR=(int)(0x1001),
	SEC_PRIV_ADD_USERS=(int)(0x1002),
	SEC_PRIV_DISK_OPERATOR=(int)(0x1003)
}
#else
 { __donnot_use_enum_sec_privilege=0x7FFFFFFF}
#define SEC_PRIV_INVALID ( 0x0 )
#define SEC_PRIV_INCREASE_QUOTA ( 0x5 )
#define SEC_PRIV_MACHINE_ACCOUNT ( 0x6 )
#define SEC_PRIV_SECURITY ( 0x8 )
#define SEC_PRIV_TAKE_OWNERSHIP ( 0x09 )
#define SEC_PRIV_LOAD_DRIVER ( 0x0a )
#define SEC_PRIV_SYSTEM_PROFILE ( 0x0b )
#define SEC_PRIV_SYSTEMTIME ( 0x0c )
#define SEC_PRIV_PROFILE_SINGLE_PROCESS ( 0x0d )
#define SEC_PRIV_INCREASE_BASE_PRIORITY ( 0x0e )
#define SEC_PRIV_CREATE_PAGEFILE ( 0x0f )
#define SEC_PRIV_BACKUP ( 0x11 )
#define SEC_PRIV_RESTORE ( 0x12 )
#define SEC_PRIV_SHUTDOWN ( 0x13 )
#define SEC_PRIV_DEBUG ( 0x14 )
#define SEC_PRIV_SYSTEM_ENVIRONMENT ( 0x16 )
#define SEC_PRIV_CHANGE_NOTIFY ( 0x17 )
#define SEC_PRIV_REMOTE_SHUTDOWN ( 0x18 )
#define SEC_PRIV_UNDOCK ( 0x19 )
#define SEC_PRIV_ENABLE_DELEGATION ( 0x1b )
#define SEC_PRIV_MANAGE_VOLUME ( 0x1c )
#define SEC_PRIV_IMPERSONATE ( 0x1d )
#define SEC_PRIV_CREATE_GLOBAL ( 0x1e )
#define SEC_PRIV_PRINT_OPERATOR ( 0x1001 )
#define SEC_PRIV_ADD_USERS ( 0x1002 )
#define SEC_PRIV_DISK_OPERATOR ( 0x1003 )
#endif
;

/* bitmap se_privilege */
#define SEC_PRIV_MACHINE_ACCOUNT_BIT ( 0x00000010 )
#define SEC_PRIV_PRINT_OPERATOR_BIT ( 0x00000020 )
#define SEC_PRIV_ADD_USERS_BIT ( 0x00000040 )
#define SEC_PRIV_DISK_OPERATOR_BIT ( 0x00000080 )
#define SEC_PRIV_REMOTE_SHUTDOWN_BIT ( 0x00000100 )
#define SEC_PRIV_BACKUP_BIT ( 0x00000200 )
#define SEC_PRIV_RESTORE_BIT ( 0x00000400 )
#define SEC_PRIV_TAKE_OWNERSHIP_BIT ( 0x00000800 )
#define SEC_PRIV_INCREASE_QUOTA_BIT ( 0x00001000 )
#define SEC_PRIV_SECURITY_BIT ( 0x00002000 )
#define SEC_PRIV_LOAD_DRIVER_BIT ( 0x00004000 )
#define SEC_PRIV_SYSTEM_PROFILE_BIT ( 0x00008000 )
#define SEC_PRIV_SYSTEMTIME_BIT ( 0x00010000 )
#define SEC_PRIV_PROFILE_SINGLE_PROCESS_BIT ( 0x00020000 )
#define SEC_PRIV_INCREASE_BASE_PRIORITY_BIT ( 0x00040000 )
#define SEC_PRIV_CREATE_PAGEFILE_BIT ( 0x00080000 )
#define SEC_PRIV_SHUTDOWN_BIT ( 0x00100000 )
#define SEC_PRIV_DEBUG_BIT ( 0x00200000 )
#define SEC_PRIV_SYSTEM_ENVIRONMENT_BIT ( 0x00400000 )
#define SEC_PRIV_CHANGE_NOTIFY_BIT ( 0x00800000 )
#define SEC_PRIV_UNDOCK_BIT ( 0x01000000 )
#define SEC_PRIV_ENABLE_DELEGATION_BIT ( 0x02000000 )
#define SEC_PRIV_MANAGE_VOLUME_BIT ( 0x04000000 )
#define SEC_PRIV_IMPERSONATE_BIT ( 0x08000000 )
#define SEC_PRIV_CREATE_GLOBAL_BIT ( 0x10000000 )

/* bitmap lsa_SystemAccessModeFlags */
#define LSA_POLICY_MODE_INTERACTIVE ( 0x00000001 )
#define LSA_POLICY_MODE_NETWORK ( 0x00000002 )
#define LSA_POLICY_MODE_BATCH ( 0x00000004 )
#define LSA_POLICY_MODE_SERVICE ( 0x00000010 )
#define LSA_POLICY_MODE_PROXY ( 0x00000020 )
#define LSA_POLICY_MODE_DENY_INTERACTIVE ( 0x00000040 )
#define LSA_POLICY_MODE_DENY_NETWORK ( 0x00000080 )
#define LSA_POLICY_MODE_DENY_BATCH ( 0x00000100 )
#define LSA_POLICY_MODE_DENY_SERVICE ( 0x00000200 )
#define LSA_POLICY_MODE_REMOTE_INTERACTIVE ( 0x00000400 )
#define LSA_POLICY_MODE_DENY_REMOTE_INTERACTIVE ( 0x00000800 )
#define LSA_POLICY_MODE_ALL ( 0x00000FF7 )
#define LSA_POLICY_MODE_ALL_NT4 ( 0x00000037 )

/* bitmap security_ace_flags */
#define SEC_ACE_FLAG_OBJECT_INHERIT ( 0x01 )
#define SEC_ACE_FLAG_CONTAINER_INHERIT ( 0x02 )
#define SEC_ACE_FLAG_NO_PROPAGATE_INHERIT ( 0x04 )
#define SEC_ACE_FLAG_INHERIT_ONLY ( 0x08 )
#define SEC_ACE_FLAG_INHERITED_ACE ( 0x10 )
#define SEC_ACE_FLAG_VALID_INHERIT ( 0x0f )
#define SEC_ACE_FLAG_SUCCESSFUL_ACCESS ( 0x40 )
#define SEC_ACE_FLAG_FAILED_ACCESS ( 0x80 )

enum security_ace_type
#ifndef USE_UINT_ENUMS
 {
	SEC_ACE_TYPE_ACCESS_ALLOWED=(int)(0),
	SEC_ACE_TYPE_ACCESS_DENIED=(int)(1),
	SEC_ACE_TYPE_SYSTEM_AUDIT=(int)(2),
	SEC_ACE_TYPE_SYSTEM_ALARM=(int)(3),
	SEC_ACE_TYPE_ALLOWED_COMPOUND=(int)(4),
	SEC_ACE_TYPE_ACCESS_ALLOWED_OBJECT=(int)(5),
	SEC_ACE_TYPE_ACCESS_DENIED_OBJECT=(int)(6),
	SEC_ACE_TYPE_SYSTEM_AUDIT_OBJECT=(int)(7),
	SEC_ACE_TYPE_SYSTEM_ALARM_OBJECT=(int)(8)
}
#else
 { __donnot_use_enum_security_ace_type=0x7FFFFFFF}
#define SEC_ACE_TYPE_ACCESS_ALLOWED ( 0 )
#define SEC_ACE_TYPE_ACCESS_DENIED ( 1 )
#define SEC_ACE_TYPE_SYSTEM_AUDIT ( 2 )
#define SEC_ACE_TYPE_SYSTEM_ALARM ( 3 )
#define SEC_ACE_TYPE_ALLOWED_COMPOUND ( 4 )
#define SEC_ACE_TYPE_ACCESS_ALLOWED_OBJECT ( 5 )
#define SEC_ACE_TYPE_ACCESS_DENIED_OBJECT ( 6 )
#define SEC_ACE_TYPE_SYSTEM_AUDIT_OBJECT ( 7 )
#define SEC_ACE_TYPE_SYSTEM_ALARM_OBJECT ( 8 )
#endif
;

/* bitmap security_ace_object_flags */
#define SEC_ACE_OBJECT_TYPE_PRESENT ( 0x00000001 )
#define SEC_ACE_INHERITED_OBJECT_TYPE_PRESENT ( 0x00000002 )

union security_ace_object_type {
	struct GUID type;/* [case(SEC_ACE_OBJECT_TYPE_PRESENT)] */
}/* [nodiscriminant] */;

union security_ace_object_inherited_type {
	struct GUID inherited_type;/* [case(SEC_ACE_INHERITED_OBJECT_TYPE_PRESENT)] */
}/* [nodiscriminant] */;

struct security_ace_object {
	uint32_t flags;
	union security_ace_object_type type;/* [switch_is(flags&SEC_ACE_OBJECT_TYPE_PRESENT)] */
	union security_ace_object_inherited_type inherited_type;/* [switch_is(flags&SEC_ACE_INHERITED_OBJECT_TYPE_PRESENT)] */
};

union security_ace_object_ctr {
	struct security_ace_object object;/* [case(SEC_ACE_TYPE_ACCESS_ALLOWED_OBJECT)] */
}/* [public,nodiscriminant] */;

struct security_ace {
	enum security_ace_type type;
	uint8_t flags;
	uint16_t size;/* [value(ndr_size_security_ace(r,ndr->flags))] */
	uint32_t access_mask;
	union security_ace_object_ctr object;/* [switch_is(type)] */
	struct dom_sid trustee;
}/* [gensize,public,nopull,nosize] */;

enum security_acl_revision
#ifndef USE_UINT_ENUMS
 {
	SECURITY_ACL_REVISION_NT4=(int)(2),
	SECURITY_ACL_REVISION_ADS=(int)(4)
}
#else
 { __donnot_use_enum_security_acl_revision=0x7FFFFFFF}
#define SECURITY_ACL_REVISION_NT4 ( 2 )
#define SECURITY_ACL_REVISION_ADS ( 4 )
#endif
;

struct security_acl {
	enum security_acl_revision revision;
	uint16_t size;/* [value(ndr_size_security_acl(r,ndr->flags))] */
	uint32_t num_aces;/* [range(0,1000)] */
	struct security_ace *aces;
}/* [gensize,public,nosize] */;

enum security_descriptor_revision
#ifndef USE_UINT_ENUMS
 {
	SECURITY_DESCRIPTOR_REVISION_1=(int)(1)
}
#else
 { __donnot_use_enum_security_descriptor_revision=0x7FFFFFFF}
#define SECURITY_DESCRIPTOR_REVISION_1 ( 1 )
#endif
;

/* bitmap security_descriptor_type */
#define SEC_DESC_OWNER_DEFAULTED ( 0x0001 )
#define SEC_DESC_GROUP_DEFAULTED ( 0x0002 )
#define SEC_DESC_DACL_PRESENT ( 0x0004 )
#define SEC_DESC_DACL_DEFAULTED ( 0x0008 )
#define SEC_DESC_SACL_PRESENT ( 0x0010 )
#define SEC_DESC_SACL_DEFAULTED ( 0x0020 )
#define SEC_DESC_DACL_TRUSTED ( 0x0040 )
#define SEC_DESC_SERVER_SECURITY ( 0x0080 )
#define SEC_DESC_DACL_AUTO_INHERIT_REQ ( 0x0100 )
#define SEC_DESC_SACL_AUTO_INHERIT_REQ ( 0x0200 )
#define SEC_DESC_DACL_AUTO_INHERITED ( 0x0400 )
#define SEC_DESC_SACL_AUTO_INHERITED ( 0x0800 )
#define SEC_DESC_DACL_PROTECTED ( 0x1000 )
#define SEC_DESC_SACL_PROTECTED ( 0x2000 )
#define SEC_DESC_RM_CONTROL_VALID ( 0x4000 )
#define SEC_DESC_SELF_RELATIVE ( 0x8000 )

struct security_descriptor {
	enum security_descriptor_revision revision;
	uint16_t type;
	struct dom_sid *owner_sid;/* [relative] */
	struct dom_sid *group_sid;/* [relative] */
	struct security_acl *sacl;/* [relative] */
	struct security_acl *dacl;/* [relative] */
}/* [gensize,public,flag(LIBNDR_FLAG_LITTLE_ENDIAN),nosize] */;

struct sec_desc_buf {
	uint32_t sd_size;/* [value(ndr_size_security_descriptor(sd,ndr->flags)),range(0,0x40000)] */
	struct security_descriptor *sd;/* [unique,subcontext(4)] */
}/* [public] */;

struct security_token {
	uint32_t num_sids;
	struct dom_sid *sids;/* [size_is(num_sids)] */
	uint64_t privilege_mask;
	uint32_t rights_mask;
}/* [public] */;

struct security_unix_token {
	uid_t uid;
	gid_t gid;
	uint32_t ngroups;
	gid_t *groups;/* [size_is(ngroups)] */
}/* [public] */;

/* bitmap security_secinfo */
#define SECINFO_OWNER ( 0x00000001 )
#define SECINFO_GROUP ( 0x00000002 )
#define SECINFO_DACL ( 0x00000004 )
#define SECINFO_SACL ( 0x00000008 )
#define SECINFO_LABEL ( 0x00000010 )
#define SECINFO_ATTRIBUTE ( 0x00000020 )
#define SECINFO_SCOPE ( 0x00000040 )
#define SECINFO_BACKUP ( 0x00010000 )
#define SECINFO_UNPROTECTED_SACL ( 0x10000000 )
#define SECINFO_UNPROTECTED_DACL ( 0x20000000 )
#define SECINFO_PROTECTED_SACL ( 0x40000000 )
#define SECINFO_PROTECTED_DACL ( 0x80000000 )

/* bitmap kerb_EncTypes */
#define KERB_ENCTYPE_DES_CBC_CRC ( 0x00000001 )
#define KERB_ENCTYPE_DES_CBC_MD5 ( 0x00000002 )
#define KERB_ENCTYPE_RC4_HMAC_MD5 ( 0x00000004 )
#define KERB_ENCTYPE_AES128_CTS_HMAC_SHA1_96 ( 0x00000008 )
#define KERB_ENCTYPE_AES256_CTS_HMAC_SHA1_96 ( 0x00000010 )

/* bitmap security_autoinherit */
#define SEC_DACL_AUTO_INHERIT ( 0x00000001 )
#define SEC_SACL_AUTO_INHERIT ( 0x00000002 )
#define SEC_DEFAULT_DESCRIPTOR ( 0x00000004 )
#define SEC_OWNER_FROM_PARENT ( 0x00000008 )
#define SEC_GROUP_FROM_PARENT ( 0x00000010 )

struct generic_mapping {
	uint32_t generic_read;
	uint32_t generic_write;
	uint32_t generic_execute;
	uint32_t generic_all;
};

struct standard_mapping {
	uint32_t std_read;
	uint32_t std_write;
	uint32_t std_execute;
	uint32_t std_all;
};

#endif /* _HEADER_security */
#endif /* _PIDL_HEADER_security */
