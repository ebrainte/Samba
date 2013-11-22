/* header auto-generated by pidl */

#ifndef _PIDL_HEADER_frstrans
#define _PIDL_HEADER_frstrans

#include <stdint.h>

#include "libcli/util/ntstatus.h"

#include "librpc/gen_ndr/misc.h"
#ifndef _HEADER_frstrans
#define _HEADER_frstrans

enum frstrans_ProtocolVersion
#ifndef USE_UINT_ENUMS
 {
	FRSTRANS_PROTOCOL_VERSION_W2K3R2=(int)(0x00050000),
	FRSTRANS_PROTOCOL_VERSION_LONGHORN_SERVER=(int)(0x00050002)
}
#else
 { __donnot_use_enum_frstrans_ProtocolVersion=0x7FFFFFFF}
#define FRSTRANS_PROTOCOL_VERSION_W2K3R2 ( 0x00050000 )
#define FRSTRANS_PROTOCOL_VERSION_LONGHORN_SERVER ( 0x00050002 )
#endif
;

/* bitmap frstrans_TransportFlags */
#define FRSTRANS_TRANSPORT_SUPPORTS_RDC_SIMILARITY ( 0x00000001 )

enum frstrans_UpdateRequestType
#ifndef USE_UINT_ENUMS
 {
	FRSTRANS_UPDATE_REQUEST_ALL=(int)(0x0000),
	FRSTRANS_UPDATE_REQUEST_TOMBSTONES=(int)(0x0001),
	FRSTRANS_UPDATE_REQUEST_LIVE=(int)(0x0002)
}
#else
 { __donnot_use_enum_frstrans_UpdateRequestType=0x7FFFFFFF}
#define FRSTRANS_UPDATE_REQUEST_ALL ( 0x0000 )
#define FRSTRANS_UPDATE_REQUEST_TOMBSTONES ( 0x0001 )
#define FRSTRANS_UPDATE_REQUEST_LIVE ( 0x0002 )
#endif
;

enum frstrans_UpdateStatus
#ifndef USE_UINT_ENUMS
 {
	FRSTRANS_UPDATE_STATUS_DONE=(int)(0x0002),
	FRSTRANS_UPDATE_STATUS_MORE=(int)(0x0003)
}
#else
 { __donnot_use_enum_frstrans_UpdateStatus=0x7FFFFFFF}
#define FRSTRANS_UPDATE_STATUS_DONE ( 0x0002 )
#define FRSTRANS_UPDATE_STATUS_MORE ( 0x0003 )
#endif
;

struct frstrans_VersionVector {
	struct GUID db_guid;
	uint64_t low;
	uint64_t high;
};

struct frstrans_Update {
	uint32_t present;
	uint32_t name_conflict;
	uint32_t attributes;
	NTTIME fence;
	NTTIME clock;
	NTTIME create_time;
	struct GUID content_set_guid;
	uint8_t sha1_hash[20];
	uint8_t rdc_similarity[16];
	struct GUID uid_db_guid;
	uint64_t uid_version;
	struct GUID gsvn_db_guid;
	uint64_t gsvn_version;
	struct GUID parent_db_guid;
	uint64_t parent_version;
	const char *name;/* [charset(UTF16)] */
	uint32_t flags;
}/* [flag(LIBNDR_PRINT_ARRAY_HEX)] */;

enum frstrans_VersionRequestType
#ifndef USE_UINT_ENUMS
 {
	FRSTRANS_VERSION_REQUEST_NORNAL_SYNC=(int)(0x0000),
	FRSTRANS_VERSION_REQUEST_SLOW_SYNC=(int)(0x0001),
	FRSTRANS_VERSION_REQUEST_SLAVE_SYNC=(int)(0x0002)
}
#else
 { __donnot_use_enum_frstrans_VersionRequestType=0x7FFFFFFF}
#define FRSTRANS_VERSION_REQUEST_NORNAL_SYNC ( 0x0000 )
#define FRSTRANS_VERSION_REQUEST_SLOW_SYNC ( 0x0001 )
#define FRSTRANS_VERSION_REQUEST_SLAVE_SYNC ( 0x0002 )
#endif
;

enum frstrans_VersionChangeType
#ifndef USE_UINT_ENUMS
 {
	FRSTRANS_VERSION_CHANGE_NOTIFY=(int)(0x0000),
	FRSTRANS_VERSION_CHANGE_ALL=(int)(0x0002)
}
#else
 { __donnot_use_enum_frstrans_VersionChangeType=0x7FFFFFFF}
#define FRSTRANS_VERSION_CHANGE_NOTIFY ( 0x0000 )
#define FRSTRANS_VERSION_CHANGE_ALL ( 0x0002 )
#endif
;

struct frstrans_EpoqueVector {
	struct GUID machine_guid;
	uint32_t year;
	uint32_t month;
	uint32_t day_of_week;
	uint32_t day;
	uint32_t hour;
	uint32_t minute;
	uint32_t second;
	uint32_t milli_seconds;
};

struct frstrans_AsyncVersionVectorResponse {
	uint64_t vv_generation;
	uint32_t version_vector_count;
	struct frstrans_VersionVector *version_vector;/* [unique,size_is(version_vector_count)] */
	uint32_t epoque_vector_count;
	struct frstrans_EpoqueVector *epoque_vector;/* [unique,size_is(epoque_vector_count)] */
};

struct frstrans_AsyncResponseContext {
	uint32_t sequence_number;
	WERROR status;
	struct frstrans_AsyncVersionVectorResponse response;
};

enum frstrans_RequestedStagingPolicy
#ifndef USE_UINT_ENUMS
 {
	FRSTRANS_STAGING_POLICY_SERVER_DEFAULTY=(int)(0x0000),
	FRSTRANS_STAGING_POLICY_STATGING_REQUIRED=(int)(0x0001),
	FRSTRANS_STAGING_POLICY_RESTATGING_REQUIRED=(int)(0x0002)
}
#else
 { __donnot_use_enum_frstrans_RequestedStagingPolicy=0x7FFFFFFF}
#define FRSTRANS_STAGING_POLICY_SERVER_DEFAULTY ( 0x0000 )
#define FRSTRANS_STAGING_POLICY_STATGING_REQUIRED ( 0x0001 )
#define FRSTRANS_STAGING_POLICY_RESTATGING_REQUIRED ( 0x0002 )
#endif
;

enum frstrans_RdcChunckerAlgorithm
#ifndef USE_UINT_ENUMS
 {
	FRSTRANS_RDC_FILTER_GENERIC=(int)(0x0000),
	FRSTRANS_RDC_FILTER_MAX=(int)(0x0001),
	FRSTRANS_RDC_FILTER_POINT=(int)(0x0002),
	FRSTRANS_RDC_MAX_ALGORITHM=(int)(0x0003)
}
#else
 { __donnot_use_enum_frstrans_RdcChunckerAlgorithm=0x7FFFFFFF}
#define FRSTRANS_RDC_FILTER_GENERIC ( 0x0000 )
#define FRSTRANS_RDC_FILTER_MAX ( 0x0001 )
#define FRSTRANS_RDC_FILTER_POINT ( 0x0002 )
#define FRSTRANS_RDC_MAX_ALGORITHM ( 0x0003 )
#endif
;

struct frstrans_RdcParameterGeneric {
	enum frstrans_RdcChunckerAlgorithm chunker_type;
	uint8_t chunker_parameters[64];
};

struct frstrans_RdcParameterFilterMax {
	uint16_t min_horizon_size;/* [range(128,1024*16)] */
	uint16_t max_window_size;/* [range(2,96)] */
};

struct frstrans_RdcParameterFilterPoint {
	uint16_t min_chunk_size;
	uint16_t max_chunk_size;
};

union frstrans_RdcParameterUnion {
	struct frstrans_RdcParameterGeneric filter_generic;/* [case(FRSTRANS_RDC_FILTER_GENERIC)] */
	struct frstrans_RdcParameterFilterMax filter_max;/* [case(FRSTRANS_RDC_FILTER_MAX)] */
	struct frstrans_RdcParameterFilterPoint filter_point;/* [case(FRSTRANS_RDC_FILTER_POINT)] */
}/* [switch_type(frstrans_RdcChunckerAlgorithm)] */;

struct frstrans_RdcParameters {
	enum frstrans_RdcChunckerAlgorithm rdc_chunker_algorithm;
	union frstrans_RdcParameterUnion u;/* [switch_is(rdc_chunker_algorithm)] */
};

enum frstrans_RdcVersion
#ifndef USE_UINT_ENUMS
 {
	FRSTRANS_RDC_VERSION=(int)(0x0001)
}
#else
 { __donnot_use_enum_frstrans_RdcVersion=0x7FFFFFFF}
#define FRSTRANS_RDC_VERSION ( 0x0001 )
#endif
;

enum frstrans_RdcVersionCompatible
#ifndef USE_UINT_ENUMS
 {
	FRSTRANS_RDC_VERSION_COMPATIBLE=(int)(0x0001)
}
#else
 { __donnot_use_enum_frstrans_RdcVersionCompatible=0x7FFFFFFF}
#define FRSTRANS_RDC_VERSION_COMPATIBLE ( 0x0001 )
#endif
;

enum frstrans_RdcCompressionAlgorithm
#ifndef USE_UINT_ENUMS
 {
	FRSTRANS_RDC_UNCOMPRESSED=(int)(0x0000),
	FRSTRANS_RDC_XPRESS=(int)(0x0001)
}
#else
 { __donnot_use_enum_frstrans_RdcCompressionAlgorithm=0x7FFFFFFF}
#define FRSTRANS_RDC_UNCOMPRESSED ( 0x0000 )
#define FRSTRANS_RDC_XPRESS ( 0x0001 )
#endif
;

struct frstrans_RdcFileInfo {
	uint64_t on_disk_file_size;
	uint64_t file_size_estimate;
	enum frstrans_RdcVersion rdc_version;
	enum frstrans_RdcVersionCompatible rdc_minimum_compatible_version;
	uint8_t rdc_signature_levels;/* [range(0,8)] */
	enum frstrans_RdcCompressionAlgorithm compression_algorithm;
	struct frstrans_RdcParameters *rdc_filter_parameters;/* [size_is(rdc_signature_levels)] */
};

struct frstrans_BytePipe;
struct frstrans_BytePipe_chunk {
	uint32_t count;
	uint8_t *array;
};


struct frstrans_CheckConnectivity {
	struct {
		struct GUID replica_set_guid;
		struct GUID connection_guid;
	} in;

	struct {
		WERROR result;
	} out;

};


struct frstrans_EstablishConnection {
	struct {
		struct GUID replica_set_guid;
		struct GUID connection_guid;
		enum frstrans_ProtocolVersion downstream_protocol_version;
		uint32_t downstream_flags;
	} in;

	struct {
		enum frstrans_ProtocolVersion *upstream_protocol_version;/* [ref] */
		uint32_t *upstream_flags;/* [ref] */
		WERROR result;
	} out;

};


struct frstrans_EstablishSession {
	struct {
		struct GUID connection_guid;
		struct GUID content_set_guid;
	} in;

	struct {
		WERROR result;
	} out;

};


struct frstrans_RequestUpdates {
	struct {
		struct GUID connection_guid;
		struct GUID content_set_guid;
		uint32_t credits_available;/* [range(0,256)] */
		uint32_t hash_requested;/* [range(0,1)] */
		enum frstrans_UpdateRequestType update_request_type;/* [range(0,2)] */
		uint32_t version_vector_diff_count;
		struct frstrans_VersionVector *version_vector_diff;/* [ref,size_is(version_vector_diff_count)] */
	} in;

	struct {
		struct frstrans_Update *frs_update;/* [ref,length_is(*update_count),size_is(credits_available)] */
		uint32_t *update_count;/* [ref] */
		enum frstrans_UpdateStatus *update_status;/* [ref] */
		struct GUID *gvsn_db_guid;/* [ref] */
		uint64_t *gvsn_version;/* [ref] */
		WERROR result;
	} out;

};


struct frstrans_RequestVersionVector {
	struct {
		uint32_t sequence_number;
		struct GUID connection_guid;
		struct GUID content_set_guid;
		enum frstrans_VersionRequestType request_type;/* [range(0,2)] */
		enum frstrans_VersionChangeType change_type;/* [range(0,2)] */
		uint64_t vv_generation;
	} in;

	struct {
		WERROR result;
	} out;

};


struct frstrans_AsyncPoll {
	struct {
		struct GUID connection_guid;
	} in;

	struct {
		struct frstrans_AsyncResponseContext *response;/* [ref] */
		WERROR result;
	} out;

};


struct FRSTRANS_REQUEST_RECORDS {
	int _dummy_element;
};


struct FRSTRANS_UPDATE_CANCEL {
	int _dummy_element;
};


struct FRSTRANS_RAW_GET_FILE_DATA {
	int _dummy_element;
};


struct FRSTRANS_RDC_GET_SIGNATURES {
	int _dummy_element;
};


struct FRSTRANS_RDC_PUSH_SOURCE_NEEDS {
	int _dummy_element;
};


struct FRSTRANS_RDC_GET_FILE_DATA {
	int _dummy_element;
};


struct FRSTRANS_RDC_CLOSE {
	int _dummy_element;
};


struct frstrans_InitializeFileTransferAsync {
	struct {
		struct GUID connection_guid;
		uint32_t rdc_desired;/* [range(0,1)] */
		uint32_t buffer_size;/* [range(0,262144)] */
		struct frstrans_Update *frs_update;/* [ref] */
		enum frstrans_RequestedStagingPolicy *staging_policy;/* [ref] */
	} in;

	struct {
		struct policy_handle *server_context;/* [ref] */
		struct frstrans_RdcFileInfo **rdc_file_info;/* [ref] */
		uint8_t *data_buffer;/* [ref,length_is(*size_read),size_is(buffer_size)] */
		uint32_t *size_read;/* [ref] */
		uint32_t *is_end_of_file;/* [ref] */
		struct frstrans_Update *frs_update;/* [ref] */
		enum frstrans_RequestedStagingPolicy *staging_policy;/* [ref] */
		WERROR result;
	} out;

};


struct FRSTRANS_OPNUM_0E_NOT_USED_ON_THE_WIRE {
	int _dummy_element;
};


struct frstrans_RawGetFileDataAsync {
	struct {
		struct policy_handle *server_context;/* [ref] */
	} in;

	struct {
		struct frstrans_BytePipe *byte_pipe;/* [ref] */
		WERROR result;
	} out;

};


struct frstrans_RdcGetFileDataAsync {
	struct {
		struct policy_handle *server_context;/* [ref] */
	} in;

	struct {
		struct frstrans_BytePipe *byte_pipe;/* [ref] */
		WERROR result;
	} out;

};

#endif /* _HEADER_frstrans */
#endif /* _PIDL_HEADER_frstrans */
