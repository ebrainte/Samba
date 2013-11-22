#include "librpc/rpc/dcerpc.h"
#include "bin/default/source4/librpc/gen_ndr/winbind.h"
#ifndef _HEADER_RPC_winbind
#define _HEADER_RPC_winbind

extern const struct ndr_interface_table ndr_table_winbind;

struct tevent_req *dcerpc_winbind_information_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct winbind_information *r);
NTSTATUS dcerpc_winbind_information_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_winbind_information_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct winbind_information *r);
struct tevent_req *dcerpc_winbind_information_send(TALLOC_CTX *mem_ctx,
						   struct tevent_context *ev,
						   struct dcerpc_binding_handle *h);
NTSTATUS dcerpc_winbind_information_recv(struct tevent_req *req,
					 TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_winbind_information(struct dcerpc_binding_handle *h,
				    TALLOC_CTX *mem_ctx);

struct tevent_req *dcerpc_winbind_remote_control_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct winbind_remote_control *r);
NTSTATUS dcerpc_winbind_remote_control_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_winbind_remote_control_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct winbind_remote_control *r);
struct tevent_req *dcerpc_winbind_remote_control_send(TALLOC_CTX *mem_ctx,
						      struct tevent_context *ev,
						      struct dcerpc_binding_handle *h);
NTSTATUS dcerpc_winbind_remote_control_recv(struct tevent_req *req,
					    TALLOC_CTX *mem_ctx,
					    NTSTATUS *result);
NTSTATUS dcerpc_winbind_remote_control(struct dcerpc_binding_handle *h,
				       TALLOC_CTX *mem_ctx,
				       NTSTATUS *result);

struct tevent_req *dcerpc_winbind_SamLogon_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct winbind_SamLogon *r);
NTSTATUS dcerpc_winbind_SamLogon_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_winbind_SamLogon_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct winbind_SamLogon *r);
/*
 * The following functions are skipped because
 * an [out] argument validation is not a pointer or array:
 *
 * dcerpc_winbind_SamLogon_send()
 * dcerpc_winbind_SamLogon_recv()
 * dcerpc_winbind_SamLogon()
 */

struct tevent_req *dcerpc_winbind_get_idmap_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct winbind_get_idmap *r);
NTSTATUS dcerpc_winbind_get_idmap_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_winbind_get_idmap_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct winbind_get_idmap *r);
struct tevent_req *dcerpc_winbind_get_idmap_send(TALLOC_CTX *mem_ctx,
						 struct tevent_context *ev,
						 struct dcerpc_binding_handle *h,
						 enum winbind_get_idmap_level _level /* [in]  */,
						 uint32_t _count /* [in]  */,
						 struct id_map *_ids /* [in,out] [size_is(count)] */);
NTSTATUS dcerpc_winbind_get_idmap_recv(struct tevent_req *req,
				       TALLOC_CTX *mem_ctx,
				       NTSTATUS *result);
NTSTATUS dcerpc_winbind_get_idmap(struct dcerpc_binding_handle *h,
				  TALLOC_CTX *mem_ctx,
				  enum winbind_get_idmap_level _level /* [in]  */,
				  uint32_t _count /* [in]  */,
				  struct id_map *_ids /* [in,out] [size_is(count)] */,
				  NTSTATUS *result);

struct tevent_req *dcerpc_winbind_DsrUpdateReadOnlyServerDnsRecords_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct winbind_DsrUpdateReadOnlyServerDnsRecords *r);
NTSTATUS dcerpc_winbind_DsrUpdateReadOnlyServerDnsRecords_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_winbind_DsrUpdateReadOnlyServerDnsRecords_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct winbind_DsrUpdateReadOnlyServerDnsRecords *r);
struct tevent_req *dcerpc_winbind_DsrUpdateReadOnlyServerDnsRecords_send(TALLOC_CTX *mem_ctx,
									 struct tevent_context *ev,
									 struct dcerpc_binding_handle *h,
									 const char *_site_name /* [in] [unique,charset(UTF16)] */,
									 uint32_t _dns_ttl /* [in]  */,
									 struct NL_DNS_NAME_INFO_ARRAY *_dns_names /* [in,out] [ref] */);
NTSTATUS dcerpc_winbind_DsrUpdateReadOnlyServerDnsRecords_recv(struct tevent_req *req,
							       TALLOC_CTX *mem_ctx,
							       NTSTATUS *result);
NTSTATUS dcerpc_winbind_DsrUpdateReadOnlyServerDnsRecords(struct dcerpc_binding_handle *h,
							  TALLOC_CTX *mem_ctx,
							  const char *_site_name /* [in] [unique,charset(UTF16)] */,
							  uint32_t _dns_ttl /* [in]  */,
							  struct NL_DNS_NAME_INFO_ARRAY *_dns_names /* [in,out] [ref] */,
							  NTSTATUS *result);

#endif /* _HEADER_RPC_winbind */
