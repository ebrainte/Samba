/* parser auto-generated by pidl */

#include "includes.h"
#include "bin/default/source3/librpc/gen_ndr/ndr_messaging.h"

#include "librpc/gen_ndr/ndr_server_id.h"
_PUBLIC_ enum ndr_err_code ndr_push_messaging_type(struct ndr_push *ndr, int ndr_flags, enum messaging_type r)
{
	NDR_CHECK(ndr_push_enum_uint32(ndr, NDR_SCALARS, r));
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_messaging_type(struct ndr_pull *ndr, int ndr_flags, enum messaging_type *r)
{
	uint32_t v;
	NDR_CHECK(ndr_pull_enum_uint32(ndr, NDR_SCALARS, &v));
	*r = v;
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_messaging_type(struct ndr_print *ndr, const char *name, enum messaging_type r)
{
	const char *val = NULL;

	switch (r) {
		case MSG_DEBUG: val = "MSG_DEBUG"; break;
		case MSG_PING: val = "MSG_PING"; break;
		case MSG_PONG: val = "MSG_PONG"; break;
		case MSG_PROFILE: val = "MSG_PROFILE"; break;
		case MSG_REQ_DEBUGLEVEL: val = "MSG_REQ_DEBUGLEVEL"; break;
		case MSG_DEBUGLEVEL: val = "MSG_DEBUGLEVEL"; break;
		case MSG_REQ_PROFILELEVEL: val = "MSG_REQ_PROFILELEVEL"; break;
		case MSG_PROFILELEVEL: val = "MSG_PROFILELEVEL"; break;
		case MSG_REQ_POOL_USAGE: val = "MSG_REQ_POOL_USAGE"; break;
		case MSG_POOL_USAGE: val = "MSG_POOL_USAGE"; break;
		case MSG_REQ_DMALLOC_MARK: val = "MSG_REQ_DMALLOC_MARK"; break;
		case MSG_REQ_DMALLOC_LOG_CHANGED: val = "MSG_REQ_DMALLOC_LOG_CHANGED"; break;
		case MSG_SHUTDOWN: val = "MSG_SHUTDOWN"; break;
		case ID_CACHE_DELETE: val = "ID_CACHE_DELETE"; break;
		case ID_CACHE_KILL: val = "ID_CACHE_KILL"; break;
		case MSG_SMB_CONF_UPDATED: val = "MSG_SMB_CONF_UPDATED"; break;
		case MSG_PREFORK_CHILD_EVENT: val = "MSG_PREFORK_CHILD_EVENT"; break;
		case MSG_PREFORK_PARENT_EVENT: val = "MSG_PREFORK_PARENT_EVENT"; break;
		case MSG_FORCE_ELECTION: val = "MSG_FORCE_ELECTION"; break;
		case MSG_WINS_NEW_ENTRY: val = "MSG_WINS_NEW_ENTRY"; break;
		case MSG_SEND_PACKET: val = "MSG_SEND_PACKET"; break;
		case MSG_PRINTER_NOTIFY2: val = "MSG_PRINTER_NOTIFY2"; break;
		case MSG_PRINTER_DRVUPGRADE: val = "MSG_PRINTER_DRVUPGRADE"; break;
		case MSG_PRINTERDATA_INIT_RESET: val = "MSG_PRINTERDATA_INIT_RESET"; break;
		case MSG_PRINTER_UPDATE: val = "MSG_PRINTER_UPDATE"; break;
		case MSG_PRINTER_MOD: val = "MSG_PRINTER_MOD"; break;
		case MSG_PRINTER_PCAP: val = "MSG_PRINTER_PCAP"; break;
		case MSG_SMB_FORCE_TDIS: val = "MSG_SMB_FORCE_TDIS"; break;
		case MSG_SMB_UNLOCK: val = "MSG_SMB_UNLOCK"; break;
		case MSG_SMB_BREAK_REQUEST: val = "MSG_SMB_BREAK_REQUEST"; break;
		case MSG_SMB_BREAK_RESPONSE: val = "MSG_SMB_BREAK_RESPONSE"; break;
		case MSG_SMB_ASYNC_LEVEL2_BREAK: val = "MSG_SMB_ASYNC_LEVEL2_BREAK"; break;
		case MSG_SMB_OPEN_RETRY: val = "MSG_SMB_OPEN_RETRY"; break;
		case MSG_SMB_KERNEL_BREAK: val = "MSG_SMB_KERNEL_BREAK"; break;
		case MSG_SMB_FILE_RENAME: val = "MSG_SMB_FILE_RENAME"; break;
		case MSG_SMB_INJECT_FAULT: val = "MSG_SMB_INJECT_FAULT"; break;
		case MSG_SMB_BLOCKING_LOCK_CANCEL: val = "MSG_SMB_BLOCKING_LOCK_CANCEL"; break;
		case MSG_SMB_NOTIFY: val = "MSG_SMB_NOTIFY"; break;
		case MSG_SMB_STAT_CACHE_DELETE: val = "MSG_SMB_STAT_CACHE_DELETE"; break;
		case MSG_PVFS_NOTIFY: val = "MSG_PVFS_NOTIFY"; break;
		case MSG_SMB_BRL_VALIDATE: val = "MSG_SMB_BRL_VALIDATE"; break;
		case MSG_SMB_CLOSE_FILE: val = "MSG_SMB_CLOSE_FILE"; break;
		case MSG_SMB_NOTIFY_CLEANUP: val = "MSG_SMB_NOTIFY_CLEANUP"; break;
		case MSG_SMB_SCAVENGER: val = "MSG_SMB_SCAVENGER"; break;
		case MSG_WINBIND_FINISHED: val = "MSG_WINBIND_FINISHED"; break;
		case MSG_WINBIND_FORGET_STATE: val = "MSG_WINBIND_FORGET_STATE"; break;
		case MSG_WINBIND_ONLINE: val = "MSG_WINBIND_ONLINE"; break;
		case MSG_WINBIND_OFFLINE: val = "MSG_WINBIND_OFFLINE"; break;
		case MSG_WINBIND_ONLINESTATUS: val = "MSG_WINBIND_ONLINESTATUS"; break;
		case MSG_WINBIND_TRY_TO_GO_ONLINE: val = "MSG_WINBIND_TRY_TO_GO_ONLINE"; break;
		case MSG_WINBIND_FAILED_TO_GO_ONLINE: val = "MSG_WINBIND_FAILED_TO_GO_ONLINE"; break;
		case MSG_WINBIND_VALIDATE_CACHE: val = "MSG_WINBIND_VALIDATE_CACHE"; break;
		case MSG_WINBIND_DUMP_DOMAIN_LIST: val = "MSG_WINBIND_DUMP_DOMAIN_LIST"; break;
		case MSG_WINBIND_IP_DROPPED: val = "MSG_WINBIND_IP_DROPPED"; break;
		case MSG_DUMP_EVENT_LIST: val = "MSG_DUMP_EVENT_LIST"; break;
		case MSG_SMBXSRV_SESSION_CLOSE: val = "MSG_SMBXSRV_SESSION_CLOSE"; break;
		case MSG_DBWRAP_G_LOCK_RETRY: val = "MSG_DBWRAP_G_LOCK_RETRY"; break;
		case MSG_DBWRAP_MODIFIED: val = "MSG_DBWRAP_MODIFIED"; break;
	}
	ndr_print_enum(ndr, name, "ENUM", val, r);
}

_PUBLIC_ enum ndr_err_code ndr_push_messaging_rec(struct ndr_push *ndr, int ndr_flags, const struct messaging_rec *r)
{
	NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 8));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->msg_version));
		NDR_CHECK(ndr_push_messaging_type(ndr, NDR_SCALARS, r->msg_type));
		NDR_CHECK(ndr_push_server_id(ndr, NDR_SCALARS, &r->dest));
		NDR_CHECK(ndr_push_server_id(ndr, NDR_SCALARS, &r->src));
		NDR_CHECK(ndr_push_DATA_BLOB(ndr, NDR_SCALARS, r->buf));
		NDR_CHECK(ndr_push_trailer_align(ndr, 8));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_messaging_rec(struct ndr_pull *ndr, int ndr_flags, struct messaging_rec *r)
{
	NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 8));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->msg_version));
		NDR_CHECK(ndr_pull_messaging_type(ndr, NDR_SCALARS, &r->msg_type));
		NDR_CHECK(ndr_pull_server_id(ndr, NDR_SCALARS, &r->dest));
		NDR_CHECK(ndr_pull_server_id(ndr, NDR_SCALARS, &r->src));
		NDR_CHECK(ndr_pull_DATA_BLOB(ndr, NDR_SCALARS, &r->buf));
		NDR_CHECK(ndr_pull_trailer_align(ndr, 8));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_messaging_rec(struct ndr_print *ndr, const char *name, const struct messaging_rec *r)
{
	ndr_print_struct(ndr, name, "messaging_rec");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_uint32(ndr, "msg_version", r->msg_version);
	ndr_print_messaging_type(ndr, "msg_type", r->msg_type);
	ndr_print_server_id(ndr, "dest", &r->dest);
	ndr_print_server_id(ndr, "src", &r->src);
	ndr_print_DATA_BLOB(ndr, "buf", r->buf);
	ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_messaging_array(struct ndr_push *ndr, int ndr_flags, const struct messaging_array *r)
{
	uint32_t cntr_messages_0;
	NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 8));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->num_messages));
		for (cntr_messages_0 = 0; cntr_messages_0 < r->num_messages; cntr_messages_0++) {
			NDR_CHECK(ndr_push_messaging_rec(ndr, NDR_SCALARS, &r->messages[cntr_messages_0]));
		}
		NDR_CHECK(ndr_push_trailer_align(ndr, 8));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_messaging_array(struct ndr_pull *ndr, int ndr_flags, struct messaging_array *r)
{
	uint32_t size_messages_0 = 0;
	uint32_t cntr_messages_0;
	TALLOC_CTX *_mem_save_messages_0;
	NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 8));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->num_messages));
		size_messages_0 = r->num_messages;
		NDR_PULL_ALLOC_N(ndr, r->messages, size_messages_0);
		_mem_save_messages_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->messages, 0);
		for (cntr_messages_0 = 0; cntr_messages_0 < size_messages_0; cntr_messages_0++) {
			NDR_CHECK(ndr_pull_messaging_rec(ndr, NDR_SCALARS, &r->messages[cntr_messages_0]));
		}
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_messages_0, 0);
		NDR_CHECK(ndr_pull_trailer_align(ndr, 8));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_messaging_array(struct ndr_print *ndr, const char *name, const struct messaging_array *r)
{
	uint32_t cntr_messages_0;
	ndr_print_struct(ndr, name, "messaging_array");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_uint32(ndr, "num_messages", r->num_messages);
	ndr->print(ndr, "%s: ARRAY(%d)", "messages", (int)r->num_messages);
	ndr->depth++;
	for (cntr_messages_0=0;cntr_messages_0<r->num_messages;cntr_messages_0++) {
		ndr_print_messaging_rec(ndr, "messages", &r->messages[cntr_messages_0]);
	}
	ndr->depth--;
	ndr->depth--;
}

