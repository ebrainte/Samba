/* header auto-generated by pidl */

#ifndef _PIDL_HEADER_winsif
#define _PIDL_HEADER_winsif

#include <stdint.h>

#include "libcli/util/ntstatus.h"

#include "librpc/gen_ndr/nbt.h"
#ifndef _HEADER_winsif
#define _HEADER_winsif

struct winsif_Address {
	uint8_t type;
	uint32_t length;
	const char * addr;
};

enum winsif_Action
#ifndef USE_UINT_ENUMS
 {
	WINSIF_ACTION_INSERT=(int)(0x0000),
	WINSIF_ACTION_DELETE=(int)(0x0001),
	WINSIF_ACTION_RELEASE=(int)(0x0002),
	WINSIF_ACTION_MODIFY=(int)(0x0003),
	WINSIF_ACTION_QUERY=(int)(0x0004)
}
#else
 { __donnot_use_enum_winsif_Action=0x7FFFFFFF}
#define WINSIF_ACTION_INSERT ( 0x0000 )
#define WINSIF_ACTION_DELETE ( 0x0001 )
#define WINSIF_ACTION_RELEASE ( 0x0002 )
#define WINSIF_ACTION_MODIFY ( 0x0003 )
#define WINSIF_ACTION_QUERY ( 0x0004 )
#endif
;

enum winsif_RecordType
#ifndef USE_UINT_ENUMS
 {
	WINSIF_RECORD_UNIQUE_NAME=(int)(0x0000),
	WINSIF_RECORD_GROUP_NAME=(int)(0x0001),
	WINSIF_RECORD_SGROUP_NAME=(int)(0x0002),
	WINSIF_RECORD_MHOMED_NAME=(int)(0x0003)
}
#else
 { __donnot_use_enum_winsif_RecordType=0x7FFFFFFF}
#define WINSIF_RECORD_UNIQUE_NAME ( 0x0000 )
#define WINSIF_RECORD_GROUP_NAME ( 0x0001 )
#define WINSIF_RECORD_SGROUP_NAME ( 0x0002 )
#define WINSIF_RECORD_MHOMED_NAME ( 0x0003 )
#endif
;

enum winsif_NodeType
#ifndef USE_UINT_ENUMS
 {
	WINSIF_NODE_B=(int)(0x00),
	WINSIF_NODE_P=(int)(0x01),
	WINSIF_NODE_H=(int)(0x03)
}
#else
 { __donnot_use_enum_winsif_NodeType=0x7FFFFFFF}
#define WINSIF_NODE_B ( 0x00 )
#define WINSIF_NODE_P ( 0x01 )
#define WINSIF_NODE_H ( 0x03 )
#endif
;

enum winsif_RecordState
#ifndef USE_UINT_ENUMS
 {
	WINSIF_RECORD_ACTIVE=(int)(0x00000000),
	WINSIF_RECORD_RELEASED=(int)(0x00000001),
	WINSIF_RECORD_TOMBSTONE=(int)(0x00000002),
	WINSIF_RECORD_DELETED=(int)(0x00000003)
}
#else
 { __donnot_use_enum_winsif_RecordState=0x7FFFFFFF}
#define WINSIF_RECORD_ACTIVE ( 0x00000000 )
#define WINSIF_RECORD_RELEASED ( 0x00000001 )
#define WINSIF_RECORD_TOMBSTONE ( 0x00000002 )
#define WINSIF_RECORD_DELETED ( 0x00000003 )
#endif
;

struct winsif_RecordAction {
	enum winsif_Action cmd;
	struct nbt_name * name;/* [unique] */
	uint32_t name_len;/* [value(name?16:0)] */
	enum winsif_RecordType record_type;
	uint32_t num_of_addresses;
	struct winsif_Address *addresses;/* [unique,size_is(num_of_addresses)] */
	struct winsif_Address address;
	uint64_t version_number;
	enum winsif_NodeType node_type;
	const char * owner_address;
	enum winsif_RecordState record_state;
	uint32_t is_static;
	time_t expire_time;
};

struct winsif_AddressVersionMap {
	struct winsif_Address address;
	uint64_t version_number;
};

enum winsif_PriorityClass
#ifndef USE_UINT_ENUMS
 {
	WINSIF_PRIORITY_NORMAL=(int)(0x0000),
	WINSIF_PRIORITY_HIGH=(int)(0x0001)
}
#else
 { __donnot_use_enum_winsif_PriorityClass=0x7FFFFFFF}
#define WINSIF_PRIORITY_NORMAL ( 0x0000 )
#define WINSIF_PRIORITY_HIGH ( 0x0001 )
#endif
;

struct winsif_ReplCounter {
	struct winsif_Address address;
	uint32_t num_replications;
	uint32_t num_communication_failures;
};

struct winsif_StatCounters {
	uint32_t num_unique_registrations;
	uint32_t num_group_registrations;
	uint32_t num_queries;
	uint32_t num_successful_queries;
	uint32_t num_failed_queries;
	uint32_t num_unique_refreshes;
	uint32_t num_group_refreshes;
	uint32_t num_releases;
	uint32_t num_successful_releases;
	uint32_t num_failed_releases;
	uint32_t num_unique_conflicts;
	uint32_t num_group_conflicts;
};

struct winsif_StatTimeStamps {
	time_t wins_start_time;
	time_t last_periodic_scavenging;
	time_t last_triggered_scavenging;
	time_t last_tombstone_scavenging;
	time_t last_verification_scavenging;
	time_t last_periodic_pull_replication;
	time_t last_triggered_pull_replication;
	time_t ignore_last_ntrepl;
	time_t ignore_last_actrepl;
	time_t last_init_db;
	time_t counter_reset;
};

struct winsif_Stat {
	struct winsif_StatCounters counters;
	struct winsif_StatTimeStamps time_stamps;
	uint32_t num_partners;
	struct winsif_ReplCounter *partners;/* [unique,size_is(num_partners)] */
};

struct winsif_Results {
	uint32_t num_owners;
	struct winsif_AddressVersionMap address_version_maps[25];
	uint64_t my_max_version_number;
	uint32_t refresh_interval;
	uint32_t tombstone_interval;
	uint32_t tombstone_timeout;
	uint32_t verify_interval;
	enum winsif_PriorityClass prioritiy_class;
	uint32_t num_worker_threads;
	struct winsif_Stat wstat;
};

enum winsif_StatusCmd
#ifndef USE_UINT_ENUMS
 {
	WINSIF_STATUS_CMD_ADDRESS_VERSION_MAP=(int)(0x0000),
	WINSIF_STATUS_CMD_CONFIG=(int)(0x0001),
	WINSIF_STATUS_CMD_STAT=(int)(0x0002),
	WINSIF_STATUS_CMD_ALL_MAPS=(int)(0x0003)
}
#else
 { __donnot_use_enum_winsif_StatusCmd=0x7FFFFFFF}
#define WINSIF_STATUS_CMD_ADDRESS_VERSION_MAP ( 0x0000 )
#define WINSIF_STATUS_CMD_CONFIG ( 0x0001 )
#define WINSIF_STATUS_CMD_STAT ( 0x0002 )
#define WINSIF_STATUS_CMD_ALL_MAPS ( 0x0003 )
#endif
;

enum winsif_TriggerType
#ifndef USE_UINT_ENUMS
 {
	WINSIF_TRIGGER_PULL=(int)(0x0000),
	WINSIF_TRIGGER_PUSH=(int)(0x0001),
	WINSIF_TRIGGER_PUSH_PROP=(int)(0x0002)
}
#else
 { __donnot_use_enum_winsif_TriggerType=0x7FFFFFFF}
#define WINSIF_TRIGGER_PULL ( 0x0000 )
#define WINSIF_TRIGGER_PUSH ( 0x0001 )
#define WINSIF_TRIGGER_PUSH_PROP ( 0x0002 )
#endif
;

struct winsif_Records {
	uint32_t buffer_size;
	struct winsif_RecordAction *row;/* [unique,size_is(num_records)] */
	uint32_t num_records;
	uint32_t total_num_records;
};

struct winsif_BrowserInfo {
	uint32_t name_len;
	const char *name;/* [unique,charset(DOS)] */
};

struct winsif_BrowserNames {
	uint32_t num_entries;
	struct winsif_BrowserInfo *info;/* [unique,size_is(num_entries)] */
};

struct winsif_BindData {
	uint32_t tcp_ip;
	const char *server_address;/* [unique,charset(DOS)] */
	const char *pipe_name;/* [unique,charset(DOS)] */
};

struct winsif_ResultsNew {
	uint32_t num_owners;
	struct winsif_AddressVersionMap *address_version_maps;/* [unique,size_is(num_owners)] */
	uint64_t my_max_version_number;
	uint32_t refresh_interval;
	uint32_t tombstone_interval;
	uint32_t tombstone_timeout;
	uint32_t verify_interval;
	enum winsif_PriorityClass prioritiy_class;
	uint32_t num_worker_threads;
	struct winsif_Stat wstat;
};

enum winsif_ScavengingOpcode
#ifndef USE_UINT_ENUMS
 {
	WINSIF_SCAVENGING_GENERAL=(int)(0x0000),
	WINSIF_SCAVENGING_VERIFY=(int)(0x0001)
}
#else
 { __donnot_use_enum_winsif_ScavengingOpcode=0x7FFFFFFF}
#define WINSIF_SCAVENGING_GENERAL ( 0x0000 )
#define WINSIF_SCAVENGING_VERIFY ( 0x0001 )
#endif
;

struct winsif_ScavengingRequest {
	enum winsif_ScavengingOpcode opcode;
	uint32_t age;
	uint32_t force;
};


struct winsif_WinsRecordAction {
	struct {
		struct winsif_RecordAction **record_action;/* [ref] */
	} in;

	struct {
		struct winsif_RecordAction **record_action;/* [ref] */
		WERROR result;
	} out;

};


struct winsif_WinsStatus {
	struct {
		enum winsif_StatusCmd cmd;
		struct winsif_Results *results;/* [ref] */
	} in;

	struct {
		struct winsif_Results *results;/* [ref] */
		WERROR result;
	} out;

};


struct winsif_WinsTrigger {
	struct {
		struct winsif_Address *owner_address;/* [ref] */
		enum winsif_TriggerType trigger_type;
	} in;

	struct {
		WERROR result;
	} out;

};


struct winsif_WinsDoStaticInit {
	struct {
		const char *data_file_path;/* [unique,charset(UTF16)] */
		uint32_t delete_file;
	} in;

	struct {
		WERROR result;
	} out;

};


struct winsif_WinsDoScavenging {
	struct {
		WERROR result;
	} out;

};


struct winsif_WinsGetDbRecs {
	struct {
		struct winsif_Address *owner_address;/* [unique] */
		uint64_t min_version_number;
		uint64_t max_version_number;
	} in;

	struct {
		struct winsif_Records *records;/* [ref] */
		WERROR result;
	} out;

};


struct winsif_WinsTerm {
	struct {
		uint16_t abrupt_termination;
	} in;

	struct {
		WERROR result;
	} out;

};


struct winsif_WinsBackup {
	struct {
		const char *backup_path;/* [ref,charset(DOS)] */
		uint16_t incremental;
	} in;

	struct {
		WERROR result;
	} out;

};


struct winsif_WinsDelDbRecs {
	struct {
		struct winsif_Address *owner_address;/* [ref] */
		uint64_t min_version_number;
		uint64_t max_version_number;
	} in;

	struct {
		WERROR result;
	} out;

};


struct winsif_WinsPullRange {
	struct {
		struct winsif_Address *server_address;/* [ref] */
		struct winsif_Address *owner_address;/* [ref] */
		uint64_t min_version_number;
		uint64_t max_version_number;
	} in;

	struct {
		WERROR result;
	} out;

};


struct winsif_WinsSetPriorityClass {
	struct {
		enum winsif_PriorityClass prioritiy_class;
	} in;

	struct {
		WERROR result;
	} out;

};


struct winsif_WinsResetCounters {
	struct {
		WERROR result;
	} out;

};


struct winsif_WinsWorkerThreadUpdate {
	struct {
		uint32_t num_of_threads;
	} in;

	struct {
		WERROR result;
	} out;

};


struct winsif_WinsGetNameAndAdd {
	struct {
		struct winsif_Address *server_address;/* [ref] */
		const char *unc_name;/* [ref,charset(DOS),size_is(80)] */
		WERROR result;
	} out;

};


struct winsif_WinsGetBrowserNames_Old {
	struct {
		struct winsif_BrowserNames *names;/* [ref] */
		WERROR result;
	} out;

};


struct winsif_WinsDeleteWins {
	struct {
		struct winsif_Address *owner_address;/* [ref] */
	} in;

	struct {
		WERROR result;
	} out;

};


struct winsif_WinsSetFlags {
	struct {
		uint32_t flags;
	} in;

	struct {
		WERROR result;
	} out;

};


struct winsif_WinsGetBrowserNames {
	struct {
		struct winsif_BindData *server_handle;/* [ref] */
	} in;

	struct {
		struct winsif_BrowserNames *names;/* [ref] */
		WERROR result;
	} out;

};


struct winsif_WinsGetDbRecsByName {
	struct {
		struct winsif_Address *owner_address;/* [unique] */
		uint32_t search_backward;
		struct nbt_name * name;/* [unique] */
		uint32_t name_len;/* [value(name?16:0),range(0,16)] */
		uint32_t num_records_desired;
		uint32_t only_statics;
	} in;

	struct {
		struct winsif_Records *records;/* [ref] */
		WERROR result;
	} out;

};


struct winsif_WinsStatusNew {
	struct {
		enum winsif_StatusCmd cmd;
	} in;

	struct {
		struct winsif_ResultsNew *results;/* [ref] */
		WERROR result;
	} out;

};


struct winsif_WinsStatusWHdl {
	struct {
		struct winsif_BindData *server_handle;/* [ref] */
		enum winsif_StatusCmd cmd;
		struct winsif_ResultsNew *results;/* [ref] */
	} in;

	struct {
		struct winsif_ResultsNew *results;/* [ref] */
		WERROR result;
	} out;

};


struct winsif_WinsDoScanvengingNew {
	struct {
		struct winsif_ScavengingRequest *request;/* [ref] */
	} in;

	struct {
		WERROR result;
	} out;

};

#endif /* _HEADER_winsif */
#endif /* _PIDL_HEADER_winsif */
