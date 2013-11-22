/* server functions auto-generated by pidl */
#include "bin/default/librpc/gen_ndr/ndr_keysvc.h"

NTSTATUS dcerpc_server_keysvc_init(void);

/* keysvc - dcerpc server boilerplate generated by pidl */


static NTSTATUS keysvc__op_bind(struct dcesrv_call_state *dce_call, const struct dcesrv_interface *iface, uint32_t if_version)
{
#ifdef DCESRV_INTERFACE_KEYSVC_BIND
	return DCESRV_INTERFACE_KEYSVC_BIND(dce_call,iface);
#else
	return NT_STATUS_OK;
#endif
}

static void keysvc__op_unbind(struct dcesrv_connection_context *context, const struct dcesrv_interface *iface)
{
#ifdef DCESRV_INTERFACE_KEYSVC_UNBIND
	DCESRV_INTERFACE_KEYSVC_UNBIND(context, iface);
#else
	return;
#endif
}

static NTSTATUS keysvc__op_ndr_pull(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, struct ndr_pull *pull, void **r)
{
	enum ndr_err_code ndr_err;
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	dce_call->fault_code = 0;

	if (opnum >= ndr_table_keysvc.num_calls) {
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	*r = talloc_named(mem_ctx,
			  ndr_table_keysvc.calls[opnum].struct_size,
			  "struct %s",
			  ndr_table_keysvc.calls[opnum].name);
	NT_STATUS_HAVE_NO_MEMORY(*r);

        /* unravel the NDR for the packet */
	ndr_err = ndr_table_keysvc.calls[opnum].ndr_pull(pull, NDR_IN, *r);
	if (!NDR_ERR_CODE_IS_SUCCESS(ndr_err)) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir, 
				  &ndr_table_keysvc, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		dce_call->fault_code = DCERPC_FAULT_NDR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS keysvc__op_dispatch(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, void *r)
{
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	switch (opnum) {
	case 0: {
		struct keysvc_Unknown0 *r2 = (struct keysvc_Unknown0 *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(keysvc_Unknown0, NDR_IN, r2);
		}
		r2->out.result = dcesrv_keysvc_Unknown0(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function keysvc_Unknown0 will reply async\n"));
		}
		break;
	}

	default:
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		break;
	}

	if (dce_call->fault_code != 0) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir, 
		          &ndr_table_keysvc, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS keysvc__op_reply(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, void *r)
{
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	switch (opnum) {
	case 0: {
		struct keysvc_Unknown0 *r2 = (struct keysvc_Unknown0 *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function keysvc_Unknown0 replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(keysvc_Unknown0, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in keysvc_Unknown0\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}

	default:
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		break;
	}

	if (dce_call->fault_code != 0) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir,
		          &ndr_table_keysvc, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS keysvc__op_ndr_push(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, struct ndr_push *push, const void *r)
{
	enum ndr_err_code ndr_err;
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	ndr_err = ndr_table_keysvc.calls[opnum].ndr_push(push, NDR_OUT, r);
	if (!NDR_ERR_CODE_IS_SUCCESS(ndr_err)) {
		dce_call->fault_code = DCERPC_FAULT_NDR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

const struct dcesrv_interface dcesrv_keysvc_interface = {
	.name		= "keysvc",
	.syntax_id  = {{0x8d0ffe72,0xd252,0x11d0,{0xbf,0x8f},{0x00,0xc0,0x4f,0xd9,0x12,0x6b}},1.0},
	.bind		= keysvc__op_bind,
	.unbind		= keysvc__op_unbind,
	.ndr_pull	= keysvc__op_ndr_pull,
	.dispatch	= keysvc__op_dispatch,
	.reply		= keysvc__op_reply,
	.ndr_push	= keysvc__op_ndr_push
};


static NTSTATUS keysvc__op_init_server(struct dcesrv_context *dce_ctx, const struct dcesrv_endpoint_server *ep_server)
{
	int i;

	for (i=0;i<ndr_table_keysvc.endpoints->count;i++) {
		NTSTATUS ret;
		const char *name = ndr_table_keysvc.endpoints->names[i];

		ret = dcesrv_interface_register(dce_ctx, name, &dcesrv_keysvc_interface, NULL);
		if (!NT_STATUS_IS_OK(ret)) {
			DEBUG(1,("keysvc_op_init_server: failed to register endpoint '%s'\n",name));
			return ret;
		}
	}

	return NT_STATUS_OK;
}

static bool keysvc__op_interface_by_uuid(struct dcesrv_interface *iface, const struct GUID *uuid, uint32_t if_version)
{
	if (dcesrv_keysvc_interface.syntax_id.if_version == if_version &&
		GUID_equal(&dcesrv_keysvc_interface.syntax_id.uuid, uuid)) {
		memcpy(iface,&dcesrv_keysvc_interface, sizeof(*iface));
		return true;
	}

	return false;
}

static bool keysvc__op_interface_by_name(struct dcesrv_interface *iface, const char *name)
{
	if (strcmp(dcesrv_keysvc_interface.name, name)==0) {
		memcpy(iface, &dcesrv_keysvc_interface, sizeof(*iface));
		return true;
	}

	return false;
}

NTSTATUS dcerpc_server_keysvc_init(void)
{
	NTSTATUS ret;
	struct dcesrv_endpoint_server ep_server;

	/* fill in our name */
	ep_server.name = "keysvc";

	/* fill in all the operations */
	ep_server.init_server = keysvc__op_init_server;

	ep_server.interface_by_uuid = keysvc__op_interface_by_uuid;
	ep_server.interface_by_name = keysvc__op_interface_by_name;

	/* register ourselves with the DCERPC subsystem. */
	ret = dcerpc_register_ep_server(&ep_server);

	if (!NT_STATUS_IS_OK(ret)) {
		DEBUG(0,("Failed to register 'keysvc' endpoint server!\n"));
		return ret;
	}

	return ret;
}

