/* server functions auto-generated by pidl */
#include "bin/default/librpc/gen_ndr/ndr_epmapper.h"

NTSTATUS dcerpc_server_epmapper_init(void);

/* epmapper - dcerpc server boilerplate generated by pidl */


static NTSTATUS epmapper__op_bind(struct dcesrv_call_state *dce_call, const struct dcesrv_interface *iface, uint32_t if_version)
{
#ifdef DCESRV_INTERFACE_EPMAPPER_BIND
	return DCESRV_INTERFACE_EPMAPPER_BIND(dce_call,iface);
#else
	return NT_STATUS_OK;
#endif
}

static void epmapper__op_unbind(struct dcesrv_connection_context *context, const struct dcesrv_interface *iface)
{
#ifdef DCESRV_INTERFACE_EPMAPPER_UNBIND
	DCESRV_INTERFACE_EPMAPPER_UNBIND(context, iface);
#else
	return;
#endif
}

static NTSTATUS epmapper__op_ndr_pull(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, struct ndr_pull *pull, void **r)
{
	enum ndr_err_code ndr_err;
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	dce_call->fault_code = 0;

	if (opnum >= ndr_table_epmapper.num_calls) {
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	*r = talloc_named(mem_ctx,
			  ndr_table_epmapper.calls[opnum].struct_size,
			  "struct %s",
			  ndr_table_epmapper.calls[opnum].name);
	NT_STATUS_HAVE_NO_MEMORY(*r);

        /* unravel the NDR for the packet */
	ndr_err = ndr_table_epmapper.calls[opnum].ndr_pull(pull, NDR_IN, *r);
	if (!NDR_ERR_CODE_IS_SUCCESS(ndr_err)) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir, 
				  &ndr_table_epmapper, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		dce_call->fault_code = DCERPC_FAULT_NDR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS epmapper__op_dispatch(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, void *r)
{
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	switch (opnum) {
	case 0: {
		struct epm_Insert *r2 = (struct epm_Insert *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(epm_Insert, NDR_IN, r2);
		}
		r2->out.result = dcesrv_epm_Insert(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function epm_Insert will reply async\n"));
		}
		break;
	}
	case 1: {
		struct epm_Delete *r2 = (struct epm_Delete *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(epm_Delete, NDR_IN, r2);
		}
		r2->out.result = dcesrv_epm_Delete(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function epm_Delete will reply async\n"));
		}
		break;
	}
	case 2: {
		struct epm_Lookup *r2 = (struct epm_Lookup *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(epm_Lookup, NDR_IN, r2);
		}
		r2->out.result = dcesrv_epm_Lookup(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function epm_Lookup will reply async\n"));
		}
		break;
	}
	case 3: {
		struct epm_Map *r2 = (struct epm_Map *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(epm_Map, NDR_IN, r2);
		}
		r2->out.result = dcesrv_epm_Map(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function epm_Map will reply async\n"));
		}
		break;
	}
	case 4: {
		struct epm_LookupHandleFree *r2 = (struct epm_LookupHandleFree *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(epm_LookupHandleFree, NDR_IN, r2);
		}
		r2->out.result = dcesrv_epm_LookupHandleFree(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function epm_LookupHandleFree will reply async\n"));
		}
		break;
	}
	case 5: {
		struct epm_InqObject *r2 = (struct epm_InqObject *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(epm_InqObject, NDR_IN, r2);
		}
		r2->out.result = dcesrv_epm_InqObject(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function epm_InqObject will reply async\n"));
		}
		break;
	}
	case 6: {
		struct epm_MgmtDelete *r2 = (struct epm_MgmtDelete *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(epm_MgmtDelete, NDR_IN, r2);
		}
		r2->out.result = dcesrv_epm_MgmtDelete(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function epm_MgmtDelete will reply async\n"));
		}
		break;
	}
	case 7: {
		struct epm_MapAuth *r2 = (struct epm_MapAuth *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(epm_MapAuth, NDR_IN, r2);
		}
		r2->out.result = dcesrv_epm_MapAuth(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function epm_MapAuth will reply async\n"));
		}
		break;
	}

	default:
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		break;
	}

	if (dce_call->fault_code != 0) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir, 
		          &ndr_table_epmapper, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS epmapper__op_reply(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, void *r)
{
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	switch (opnum) {
	case 0: {
		struct epm_Insert *r2 = (struct epm_Insert *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function epm_Insert replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(epm_Insert, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in epm_Insert\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 1: {
		struct epm_Delete *r2 = (struct epm_Delete *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function epm_Delete replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(epm_Delete, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in epm_Delete\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 2: {
		struct epm_Lookup *r2 = (struct epm_Lookup *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function epm_Lookup replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(epm_Lookup, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in epm_Lookup\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 3: {
		struct epm_Map *r2 = (struct epm_Map *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function epm_Map replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(epm_Map, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in epm_Map\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 4: {
		struct epm_LookupHandleFree *r2 = (struct epm_LookupHandleFree *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function epm_LookupHandleFree replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(epm_LookupHandleFree, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in epm_LookupHandleFree\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 5: {
		struct epm_InqObject *r2 = (struct epm_InqObject *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function epm_InqObject replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(epm_InqObject, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in epm_InqObject\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 6: {
		struct epm_MgmtDelete *r2 = (struct epm_MgmtDelete *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function epm_MgmtDelete replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(epm_MgmtDelete, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in epm_MgmtDelete\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 7: {
		struct epm_MapAuth *r2 = (struct epm_MapAuth *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function epm_MapAuth replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(epm_MapAuth, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in epm_MapAuth\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}

	default:
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		break;
	}

	if (dce_call->fault_code != 0) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir,
		          &ndr_table_epmapper, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS epmapper__op_ndr_push(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, struct ndr_push *push, const void *r)
{
	enum ndr_err_code ndr_err;
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	ndr_err = ndr_table_epmapper.calls[opnum].ndr_push(push, NDR_OUT, r);
	if (!NDR_ERR_CODE_IS_SUCCESS(ndr_err)) {
		dce_call->fault_code = DCERPC_FAULT_NDR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

const struct dcesrv_interface dcesrv_epmapper_interface = {
	.name		= "epmapper",
	.syntax_id  = {{0xe1af8308,0x5d1f,0x11c9,{0x91,0xa4},{0x08,0x00,0x2b,0x14,0xa0,0xfa}},3.0},
	.bind		= epmapper__op_bind,
	.unbind		= epmapper__op_unbind,
	.ndr_pull	= epmapper__op_ndr_pull,
	.dispatch	= epmapper__op_dispatch,
	.reply		= epmapper__op_reply,
	.ndr_push	= epmapper__op_ndr_push
};


static NTSTATUS epmapper__op_init_server(struct dcesrv_context *dce_ctx, const struct dcesrv_endpoint_server *ep_server)
{
	int i;

	for (i=0;i<ndr_table_epmapper.endpoints->count;i++) {
		NTSTATUS ret;
		const char *name = ndr_table_epmapper.endpoints->names[i];

		ret = dcesrv_interface_register(dce_ctx, name, &dcesrv_epmapper_interface, NULL);
		if (!NT_STATUS_IS_OK(ret)) {
			DEBUG(1,("epmapper_op_init_server: failed to register endpoint '%s'\n",name));
			return ret;
		}
	}

	return NT_STATUS_OK;
}

static bool epmapper__op_interface_by_uuid(struct dcesrv_interface *iface, const struct GUID *uuid, uint32_t if_version)
{
	if (dcesrv_epmapper_interface.syntax_id.if_version == if_version &&
		GUID_equal(&dcesrv_epmapper_interface.syntax_id.uuid, uuid)) {
		memcpy(iface,&dcesrv_epmapper_interface, sizeof(*iface));
		return true;
	}

	return false;
}

static bool epmapper__op_interface_by_name(struct dcesrv_interface *iface, const char *name)
{
	if (strcmp(dcesrv_epmapper_interface.name, name)==0) {
		memcpy(iface, &dcesrv_epmapper_interface, sizeof(*iface));
		return true;
	}

	return false;
}

NTSTATUS dcerpc_server_epmapper_init(void)
{
	NTSTATUS ret;
	struct dcesrv_endpoint_server ep_server;

	/* fill in our name */
	ep_server.name = "epmapper";

	/* fill in all the operations */
	ep_server.init_server = epmapper__op_init_server;

	ep_server.interface_by_uuid = epmapper__op_interface_by_uuid;
	ep_server.interface_by_name = epmapper__op_interface_by_name;

	/* register ourselves with the DCERPC subsystem. */
	ret = dcerpc_register_ep_server(&ep_server);

	if (!NT_STATUS_IS_OK(ret)) {
		DEBUG(0,("Failed to register 'epmapper' endpoint server!\n"));
		return ret;
	}

	return ret;
}

