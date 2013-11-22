/* server functions auto-generated by pidl */
#include "bin/default/source4/librpc/gen_ndr/ndr_irpc.h"

NTSTATUS dcerpc_server_irpc_init(void);

/* irpc - dcerpc server boilerplate generated by pidl */


static NTSTATUS irpc__op_bind(struct dcesrv_call_state *dce_call, const struct dcesrv_interface *iface, uint32_t if_version)
{
#ifdef DCESRV_INTERFACE_IRPC_BIND
	return DCESRV_INTERFACE_IRPC_BIND(dce_call,iface);
#else
	return NT_STATUS_OK;
#endif
}

static void irpc__op_unbind(struct dcesrv_connection_context *context, const struct dcesrv_interface *iface)
{
#ifdef DCESRV_INTERFACE_IRPC_UNBIND
	DCESRV_INTERFACE_IRPC_UNBIND(context, iface);
#else
	return;
#endif
}

static NTSTATUS irpc__op_ndr_pull(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, struct ndr_pull *pull, void **r)
{
	enum ndr_err_code ndr_err;
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	dce_call->fault_code = 0;

	if (opnum >= ndr_table_irpc.num_calls) {
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	*r = talloc_named(mem_ctx,
			  ndr_table_irpc.calls[opnum].struct_size,
			  "struct %s",
			  ndr_table_irpc.calls[opnum].name);
	NT_STATUS_HAVE_NO_MEMORY(*r);

        /* unravel the NDR for the packet */
	ndr_err = ndr_table_irpc.calls[opnum].ndr_pull(pull, NDR_IN, *r);
	if (!NDR_ERR_CODE_IS_SUCCESS(ndr_err)) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir, 
				  &ndr_table_irpc, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		dce_call->fault_code = DCERPC_FAULT_NDR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS irpc__op_dispatch(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, void *r)
{
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	switch (opnum) {
	case 0: {
		struct irpc_uptime *r2 = (struct irpc_uptime *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(irpc_uptime, NDR_IN, r2);
		}
		dcesrv_irpc_uptime(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function irpc_uptime will reply async\n"));
		}
		break;
	}
	case 1: {
		struct nbtd_information *r2 = (struct nbtd_information *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(nbtd_information, NDR_IN, r2);
		}
		dcesrv_nbtd_information(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function nbtd_information will reply async\n"));
		}
		break;
	}
	case 2: {
		struct nbtd_getdcname *r2 = (struct nbtd_getdcname *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(nbtd_getdcname, NDR_IN, r2);
		}
		dcesrv_nbtd_getdcname(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function nbtd_getdcname will reply async\n"));
		}
		break;
	}
	case 3: {
		struct nbtd_proxy_wins_challenge *r2 = (struct nbtd_proxy_wins_challenge *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(nbtd_proxy_wins_challenge, NDR_IN, r2);
		}
		dcesrv_nbtd_proxy_wins_challenge(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function nbtd_proxy_wins_challenge will reply async\n"));
		}
		break;
	}
	case 4: {
		struct nbtd_proxy_wins_release_demand *r2 = (struct nbtd_proxy_wins_release_demand *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(nbtd_proxy_wins_release_demand, NDR_IN, r2);
		}
		dcesrv_nbtd_proxy_wins_release_demand(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function nbtd_proxy_wins_release_demand will reply async\n"));
		}
		break;
	}
	case 5: {
		struct kdc_check_generic_kerberos *r2 = (struct kdc_check_generic_kerberos *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(kdc_check_generic_kerberos, NDR_IN, r2);
		}
		dcesrv_kdc_check_generic_kerberos(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function kdc_check_generic_kerberos will reply async\n"));
		}
		break;
	}
	case 6: {
		struct smbsrv_information *r2 = (struct smbsrv_information *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(smbsrv_information, NDR_IN, r2);
		}
		dcesrv_smbsrv_information(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function smbsrv_information will reply async\n"));
		}
		break;
	}
	case 7: {
		struct samba_terminate *r2 = (struct samba_terminate *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(samba_terminate, NDR_IN, r2);
		}
		dcesrv_samba_terminate(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function samba_terminate will reply async\n"));
		}
		break;
	}
	case 8: {
		struct dreplsrv_refresh *r2 = (struct dreplsrv_refresh *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(dreplsrv_refresh, NDR_IN, r2);
		}
		r2->out.result = dcesrv_dreplsrv_refresh(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function dreplsrv_refresh will reply async\n"));
		}
		break;
	}
	case 9: {
		struct drepl_takeFSMORole *r2 = (struct drepl_takeFSMORole *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(drepl_takeFSMORole, NDR_IN, r2);
		}
		r2->out.result = dcesrv_drepl_takeFSMORole(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function drepl_takeFSMORole will reply async\n"));
		}
		break;
	}
	case 10: {
		struct drepl_trigger_repl_secret *r2 = (struct drepl_trigger_repl_secret *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(drepl_trigger_repl_secret, NDR_IN, r2);
		}
		dcesrv_drepl_trigger_repl_secret(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function drepl_trigger_repl_secret will reply async\n"));
		}
		break;
	}
	case 11: {
		struct dnsupdate_RODC *r2 = (struct dnsupdate_RODC *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(dnsupdate_RODC, NDR_IN, r2);
		}
		r2->out.result = dcesrv_dnsupdate_RODC(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function dnsupdate_RODC will reply async\n"));
		}
		break;
	}

	default:
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		break;
	}

	if (dce_call->fault_code != 0) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir, 
		          &ndr_table_irpc, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS irpc__op_reply(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, void *r)
{
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	switch (opnum) {
	case 0: {
		struct irpc_uptime *r2 = (struct irpc_uptime *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function irpc_uptime replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(irpc_uptime, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in irpc_uptime\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 1: {
		struct nbtd_information *r2 = (struct nbtd_information *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function nbtd_information replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(nbtd_information, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in nbtd_information\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 2: {
		struct nbtd_getdcname *r2 = (struct nbtd_getdcname *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function nbtd_getdcname replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(nbtd_getdcname, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in nbtd_getdcname\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 3: {
		struct nbtd_proxy_wins_challenge *r2 = (struct nbtd_proxy_wins_challenge *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function nbtd_proxy_wins_challenge replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(nbtd_proxy_wins_challenge, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in nbtd_proxy_wins_challenge\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 4: {
		struct nbtd_proxy_wins_release_demand *r2 = (struct nbtd_proxy_wins_release_demand *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function nbtd_proxy_wins_release_demand replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(nbtd_proxy_wins_release_demand, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in nbtd_proxy_wins_release_demand\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 5: {
		struct kdc_check_generic_kerberos *r2 = (struct kdc_check_generic_kerberos *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function kdc_check_generic_kerberos replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(kdc_check_generic_kerberos, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in kdc_check_generic_kerberos\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 6: {
		struct smbsrv_information *r2 = (struct smbsrv_information *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function smbsrv_information replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(smbsrv_information, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in smbsrv_information\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 7: {
		struct samba_terminate *r2 = (struct samba_terminate *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function samba_terminate replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(samba_terminate, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in samba_terminate\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 8: {
		struct dreplsrv_refresh *r2 = (struct dreplsrv_refresh *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function dreplsrv_refresh replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(dreplsrv_refresh, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in dreplsrv_refresh\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 9: {
		struct drepl_takeFSMORole *r2 = (struct drepl_takeFSMORole *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function drepl_takeFSMORole replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(drepl_takeFSMORole, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in drepl_takeFSMORole\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 10: {
		struct drepl_trigger_repl_secret *r2 = (struct drepl_trigger_repl_secret *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function drepl_trigger_repl_secret replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(drepl_trigger_repl_secret, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in drepl_trigger_repl_secret\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 11: {
		struct dnsupdate_RODC *r2 = (struct dnsupdate_RODC *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function dnsupdate_RODC replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(dnsupdate_RODC, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in dnsupdate_RODC\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}

	default:
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		break;
	}

	if (dce_call->fault_code != 0) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir,
		          &ndr_table_irpc, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS irpc__op_ndr_push(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, struct ndr_push *push, const void *r)
{
	enum ndr_err_code ndr_err;
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	ndr_err = ndr_table_irpc.calls[opnum].ndr_push(push, NDR_OUT, r);
	if (!NDR_ERR_CODE_IS_SUCCESS(ndr_err)) {
		dce_call->fault_code = DCERPC_FAULT_NDR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

const struct dcesrv_interface dcesrv_irpc_interface = {
	.name		= "irpc",
	.syntax_id  = {{0xe770c620,0x0b06,0x4b5e,{0x8d,0x87},{0xa2,0x6e,0x20,0xf2,0x83,0x40}},1.0},
	.bind		= irpc__op_bind,
	.unbind		= irpc__op_unbind,
	.ndr_pull	= irpc__op_ndr_pull,
	.dispatch	= irpc__op_dispatch,
	.reply		= irpc__op_reply,
	.ndr_push	= irpc__op_ndr_push
};


static NTSTATUS irpc__op_init_server(struct dcesrv_context *dce_ctx, const struct dcesrv_endpoint_server *ep_server)
{
	int i;

	for (i=0;i<ndr_table_irpc.endpoints->count;i++) {
		NTSTATUS ret;
		const char *name = ndr_table_irpc.endpoints->names[i];

		ret = dcesrv_interface_register(dce_ctx, name, &dcesrv_irpc_interface, NULL);
		if (!NT_STATUS_IS_OK(ret)) {
			DEBUG(1,("irpc_op_init_server: failed to register endpoint '%s'\n",name));
			return ret;
		}
	}

	return NT_STATUS_OK;
}

static bool irpc__op_interface_by_uuid(struct dcesrv_interface *iface, const struct GUID *uuid, uint32_t if_version)
{
	if (dcesrv_irpc_interface.syntax_id.if_version == if_version &&
		GUID_equal(&dcesrv_irpc_interface.syntax_id.uuid, uuid)) {
		memcpy(iface,&dcesrv_irpc_interface, sizeof(*iface));
		return true;
	}

	return false;
}

static bool irpc__op_interface_by_name(struct dcesrv_interface *iface, const char *name)
{
	if (strcmp(dcesrv_irpc_interface.name, name)==0) {
		memcpy(iface, &dcesrv_irpc_interface, sizeof(*iface));
		return true;
	}

	return false;
}

NTSTATUS dcerpc_server_irpc_init(void)
{
	NTSTATUS ret;
	struct dcesrv_endpoint_server ep_server;

	/* fill in our name */
	ep_server.name = "irpc";

	/* fill in all the operations */
	ep_server.init_server = irpc__op_init_server;

	ep_server.interface_by_uuid = irpc__op_interface_by_uuid;
	ep_server.interface_by_name = irpc__op_interface_by_name;

	/* register ourselves with the DCERPC subsystem. */
	ret = dcerpc_register_ep_server(&ep_server);

	if (!NT_STATUS_IS_OK(ret)) {
		DEBUG(0,("Failed to register 'irpc' endpoint server!\n"));
		return ret;
	}

	return ret;
}
