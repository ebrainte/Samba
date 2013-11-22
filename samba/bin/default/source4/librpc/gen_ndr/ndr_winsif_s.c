/* server functions auto-generated by pidl */
#include "bin/default/source4/librpc/gen_ndr/ndr_winsif.h"

NTSTATUS dcerpc_server_winsif_init(void);

/* winsif - dcerpc server boilerplate generated by pidl */


static NTSTATUS winsif__op_bind(struct dcesrv_call_state *dce_call, const struct dcesrv_interface *iface, uint32_t if_version)
{
#ifdef DCESRV_INTERFACE_WINSIF_BIND
	return DCESRV_INTERFACE_WINSIF_BIND(dce_call,iface);
#else
	return NT_STATUS_OK;
#endif
}

static void winsif__op_unbind(struct dcesrv_connection_context *context, const struct dcesrv_interface *iface)
{
#ifdef DCESRV_INTERFACE_WINSIF_UNBIND
	DCESRV_INTERFACE_WINSIF_UNBIND(context, iface);
#else
	return;
#endif
}

static NTSTATUS winsif__op_ndr_pull(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, struct ndr_pull *pull, void **r)
{
	enum ndr_err_code ndr_err;
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	dce_call->fault_code = 0;

	if (opnum >= ndr_table_winsif.num_calls) {
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	*r = talloc_named(mem_ctx,
			  ndr_table_winsif.calls[opnum].struct_size,
			  "struct %s",
			  ndr_table_winsif.calls[opnum].name);
	NT_STATUS_HAVE_NO_MEMORY(*r);

        /* unravel the NDR for the packet */
	ndr_err = ndr_table_winsif.calls[opnum].ndr_pull(pull, NDR_IN, *r);
	if (!NDR_ERR_CODE_IS_SUCCESS(ndr_err)) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir, 
				  &ndr_table_winsif, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		dce_call->fault_code = DCERPC_FAULT_NDR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS winsif__op_dispatch(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, void *r)
{
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	switch (opnum) {
	case 0: {
		struct winsif_WinsRecordAction *r2 = (struct winsif_WinsRecordAction *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsRecordAction, NDR_IN, r2);
		}
		r2->out.result = dcesrv_winsif_WinsRecordAction(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsRecordAction will reply async\n"));
		}
		break;
	}
	case 1: {
		struct winsif_WinsStatus *r2 = (struct winsif_WinsStatus *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsStatus, NDR_IN, r2);
		}
		r2->out.result = dcesrv_winsif_WinsStatus(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsStatus will reply async\n"));
		}
		break;
	}
	case 2: {
		struct winsif_WinsTrigger *r2 = (struct winsif_WinsTrigger *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsTrigger, NDR_IN, r2);
		}
		r2->out.result = dcesrv_winsif_WinsTrigger(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsTrigger will reply async\n"));
		}
		break;
	}
	case 3: {
		struct winsif_WinsDoStaticInit *r2 = (struct winsif_WinsDoStaticInit *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsDoStaticInit, NDR_IN, r2);
		}
		r2->out.result = dcesrv_winsif_WinsDoStaticInit(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsDoStaticInit will reply async\n"));
		}
		break;
	}
	case 4: {
		struct winsif_WinsDoScavenging *r2 = (struct winsif_WinsDoScavenging *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsDoScavenging, NDR_IN, r2);
		}
		r2->out.result = dcesrv_winsif_WinsDoScavenging(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsDoScavenging will reply async\n"));
		}
		break;
	}
	case 5: {
		struct winsif_WinsGetDbRecs *r2 = (struct winsif_WinsGetDbRecs *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsGetDbRecs, NDR_IN, r2);
		}
		r2->out.result = dcesrv_winsif_WinsGetDbRecs(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsGetDbRecs will reply async\n"));
		}
		break;
	}
	case 6: {
		struct winsif_WinsTerm *r2 = (struct winsif_WinsTerm *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsTerm, NDR_IN, r2);
		}
		r2->out.result = dcesrv_winsif_WinsTerm(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsTerm will reply async\n"));
		}
		break;
	}
	case 7: {
		struct winsif_WinsBackup *r2 = (struct winsif_WinsBackup *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsBackup, NDR_IN, r2);
		}
		r2->out.result = dcesrv_winsif_WinsBackup(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsBackup will reply async\n"));
		}
		break;
	}
	case 8: {
		struct winsif_WinsDelDbRecs *r2 = (struct winsif_WinsDelDbRecs *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsDelDbRecs, NDR_IN, r2);
		}
		r2->out.result = dcesrv_winsif_WinsDelDbRecs(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsDelDbRecs will reply async\n"));
		}
		break;
	}
	case 9: {
		struct winsif_WinsPullRange *r2 = (struct winsif_WinsPullRange *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsPullRange, NDR_IN, r2);
		}
		r2->out.result = dcesrv_winsif_WinsPullRange(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsPullRange will reply async\n"));
		}
		break;
	}
	case 10: {
		struct winsif_WinsSetPriorityClass *r2 = (struct winsif_WinsSetPriorityClass *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsSetPriorityClass, NDR_IN, r2);
		}
		r2->out.result = dcesrv_winsif_WinsSetPriorityClass(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsSetPriorityClass will reply async\n"));
		}
		break;
	}
	case 11: {
		struct winsif_WinsResetCounters *r2 = (struct winsif_WinsResetCounters *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsResetCounters, NDR_IN, r2);
		}
		r2->out.result = dcesrv_winsif_WinsResetCounters(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsResetCounters will reply async\n"));
		}
		break;
	}
	case 12: {
		struct winsif_WinsWorkerThreadUpdate *r2 = (struct winsif_WinsWorkerThreadUpdate *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsWorkerThreadUpdate, NDR_IN, r2);
		}
		r2->out.result = dcesrv_winsif_WinsWorkerThreadUpdate(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsWorkerThreadUpdate will reply async\n"));
		}
		break;
	}
	case 13: {
		struct winsif_WinsGetNameAndAdd *r2 = (struct winsif_WinsGetNameAndAdd *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsGetNameAndAdd, NDR_IN, r2);
		}
		r2->out.result = dcesrv_winsif_WinsGetNameAndAdd(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsGetNameAndAdd will reply async\n"));
		}
		break;
	}
	case 14: {
		struct winsif_WinsGetBrowserNames_Old *r2 = (struct winsif_WinsGetBrowserNames_Old *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsGetBrowserNames_Old, NDR_IN, r2);
		}
		r2->out.result = dcesrv_winsif_WinsGetBrowserNames_Old(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsGetBrowserNames_Old will reply async\n"));
		}
		break;
	}
	case 15: {
		struct winsif_WinsDeleteWins *r2 = (struct winsif_WinsDeleteWins *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsDeleteWins, NDR_IN, r2);
		}
		r2->out.result = dcesrv_winsif_WinsDeleteWins(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsDeleteWins will reply async\n"));
		}
		break;
	}
	case 16: {
		struct winsif_WinsSetFlags *r2 = (struct winsif_WinsSetFlags *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsSetFlags, NDR_IN, r2);
		}
		r2->out.result = dcesrv_winsif_WinsSetFlags(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsSetFlags will reply async\n"));
		}
		break;
	}
	case 17: {
		struct winsif_WinsGetBrowserNames *r2 = (struct winsif_WinsGetBrowserNames *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsGetBrowserNames, NDR_IN, r2);
		}
		r2->out.result = dcesrv_winsif_WinsGetBrowserNames(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsGetBrowserNames will reply async\n"));
		}
		break;
	}
	case 18: {
		struct winsif_WinsGetDbRecsByName *r2 = (struct winsif_WinsGetDbRecsByName *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsGetDbRecsByName, NDR_IN, r2);
		}
		r2->out.result = dcesrv_winsif_WinsGetDbRecsByName(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsGetDbRecsByName will reply async\n"));
		}
		break;
	}
	case 19: {
		struct winsif_WinsStatusNew *r2 = (struct winsif_WinsStatusNew *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsStatusNew, NDR_IN, r2);
		}
		r2->out.result = dcesrv_winsif_WinsStatusNew(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsStatusNew will reply async\n"));
		}
		break;
	}
	case 20: {
		struct winsif_WinsStatusWHdl *r2 = (struct winsif_WinsStatusWHdl *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsStatusWHdl, NDR_IN, r2);
		}
		r2->out.result = dcesrv_winsif_WinsStatusWHdl(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsStatusWHdl will reply async\n"));
		}
		break;
	}
	case 21: {
		struct winsif_WinsDoScanvengingNew *r2 = (struct winsif_WinsDoScanvengingNew *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsDoScanvengingNew, NDR_IN, r2);
		}
		r2->out.result = dcesrv_winsif_WinsDoScanvengingNew(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsDoScanvengingNew will reply async\n"));
		}
		break;
	}

	default:
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		break;
	}

	if (dce_call->fault_code != 0) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir, 
		          &ndr_table_winsif, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS winsif__op_reply(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, void *r)
{
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	switch (opnum) {
	case 0: {
		struct winsif_WinsRecordAction *r2 = (struct winsif_WinsRecordAction *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsRecordAction replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsRecordAction, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in winsif_WinsRecordAction\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 1: {
		struct winsif_WinsStatus *r2 = (struct winsif_WinsStatus *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsStatus replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsStatus, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in winsif_WinsStatus\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 2: {
		struct winsif_WinsTrigger *r2 = (struct winsif_WinsTrigger *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsTrigger replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsTrigger, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in winsif_WinsTrigger\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 3: {
		struct winsif_WinsDoStaticInit *r2 = (struct winsif_WinsDoStaticInit *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsDoStaticInit replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsDoStaticInit, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in winsif_WinsDoStaticInit\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 4: {
		struct winsif_WinsDoScavenging *r2 = (struct winsif_WinsDoScavenging *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsDoScavenging replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsDoScavenging, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in winsif_WinsDoScavenging\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 5: {
		struct winsif_WinsGetDbRecs *r2 = (struct winsif_WinsGetDbRecs *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsGetDbRecs replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsGetDbRecs, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in winsif_WinsGetDbRecs\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 6: {
		struct winsif_WinsTerm *r2 = (struct winsif_WinsTerm *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsTerm replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsTerm, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in winsif_WinsTerm\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 7: {
		struct winsif_WinsBackup *r2 = (struct winsif_WinsBackup *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsBackup replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsBackup, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in winsif_WinsBackup\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 8: {
		struct winsif_WinsDelDbRecs *r2 = (struct winsif_WinsDelDbRecs *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsDelDbRecs replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsDelDbRecs, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in winsif_WinsDelDbRecs\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 9: {
		struct winsif_WinsPullRange *r2 = (struct winsif_WinsPullRange *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsPullRange replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsPullRange, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in winsif_WinsPullRange\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 10: {
		struct winsif_WinsSetPriorityClass *r2 = (struct winsif_WinsSetPriorityClass *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsSetPriorityClass replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsSetPriorityClass, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in winsif_WinsSetPriorityClass\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 11: {
		struct winsif_WinsResetCounters *r2 = (struct winsif_WinsResetCounters *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsResetCounters replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsResetCounters, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in winsif_WinsResetCounters\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 12: {
		struct winsif_WinsWorkerThreadUpdate *r2 = (struct winsif_WinsWorkerThreadUpdate *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsWorkerThreadUpdate replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsWorkerThreadUpdate, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in winsif_WinsWorkerThreadUpdate\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 13: {
		struct winsif_WinsGetNameAndAdd *r2 = (struct winsif_WinsGetNameAndAdd *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsGetNameAndAdd replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsGetNameAndAdd, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in winsif_WinsGetNameAndAdd\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 14: {
		struct winsif_WinsGetBrowserNames_Old *r2 = (struct winsif_WinsGetBrowserNames_Old *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsGetBrowserNames_Old replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsGetBrowserNames_Old, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in winsif_WinsGetBrowserNames_Old\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 15: {
		struct winsif_WinsDeleteWins *r2 = (struct winsif_WinsDeleteWins *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsDeleteWins replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsDeleteWins, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in winsif_WinsDeleteWins\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 16: {
		struct winsif_WinsSetFlags *r2 = (struct winsif_WinsSetFlags *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsSetFlags replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsSetFlags, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in winsif_WinsSetFlags\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 17: {
		struct winsif_WinsGetBrowserNames *r2 = (struct winsif_WinsGetBrowserNames *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsGetBrowserNames replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsGetBrowserNames, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in winsif_WinsGetBrowserNames\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 18: {
		struct winsif_WinsGetDbRecsByName *r2 = (struct winsif_WinsGetDbRecsByName *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsGetDbRecsByName replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsGetDbRecsByName, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in winsif_WinsGetDbRecsByName\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 19: {
		struct winsif_WinsStatusNew *r2 = (struct winsif_WinsStatusNew *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsStatusNew replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsStatusNew, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in winsif_WinsStatusNew\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 20: {
		struct winsif_WinsStatusWHdl *r2 = (struct winsif_WinsStatusWHdl *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsStatusWHdl replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsStatusWHdl, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in winsif_WinsStatusWHdl\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 21: {
		struct winsif_WinsDoScanvengingNew *r2 = (struct winsif_WinsDoScanvengingNew *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function winsif_WinsDoScanvengingNew replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(winsif_WinsDoScanvengingNew, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in winsif_WinsDoScanvengingNew\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}

	default:
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		break;
	}

	if (dce_call->fault_code != 0) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir,
		          &ndr_table_winsif, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS winsif__op_ndr_push(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, struct ndr_push *push, const void *r)
{
	enum ndr_err_code ndr_err;
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	ndr_err = ndr_table_winsif.calls[opnum].ndr_push(push, NDR_OUT, r);
	if (!NDR_ERR_CODE_IS_SUCCESS(ndr_err)) {
		dce_call->fault_code = DCERPC_FAULT_NDR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

const struct dcesrv_interface dcesrv_winsif_interface = {
	.name		= "winsif",
	.syntax_id  = {{0x45f52c28,0x7f9f,0x101a,{0xb5,0x2b},{0x08,0x00,0x2b,0x2e,0xfa,0xbe}},1.0},
	.bind		= winsif__op_bind,
	.unbind		= winsif__op_unbind,
	.ndr_pull	= winsif__op_ndr_pull,
	.dispatch	= winsif__op_dispatch,
	.reply		= winsif__op_reply,
	.ndr_push	= winsif__op_ndr_push
};


static NTSTATUS winsif__op_init_server(struct dcesrv_context *dce_ctx, const struct dcesrv_endpoint_server *ep_server)
{
	int i;

	for (i=0;i<ndr_table_winsif.endpoints->count;i++) {
		NTSTATUS ret;
		const char *name = ndr_table_winsif.endpoints->names[i];

		ret = dcesrv_interface_register(dce_ctx, name, &dcesrv_winsif_interface, NULL);
		if (!NT_STATUS_IS_OK(ret)) {
			DEBUG(1,("winsif_op_init_server: failed to register endpoint '%s'\n",name));
			return ret;
		}
	}

	return NT_STATUS_OK;
}

static bool winsif__op_interface_by_uuid(struct dcesrv_interface *iface, const struct GUID *uuid, uint32_t if_version)
{
	if (dcesrv_winsif_interface.syntax_id.if_version == if_version &&
		GUID_equal(&dcesrv_winsif_interface.syntax_id.uuid, uuid)) {
		memcpy(iface,&dcesrv_winsif_interface, sizeof(*iface));
		return true;
	}

	return false;
}

static bool winsif__op_interface_by_name(struct dcesrv_interface *iface, const char *name)
{
	if (strcmp(dcesrv_winsif_interface.name, name)==0) {
		memcpy(iface, &dcesrv_winsif_interface, sizeof(*iface));
		return true;
	}

	return false;
}

NTSTATUS dcerpc_server_winsif_init(void)
{
	NTSTATUS ret;
	struct dcesrv_endpoint_server ep_server;

	/* fill in our name */
	ep_server.name = "winsif";

	/* fill in all the operations */
	ep_server.init_server = winsif__op_init_server;

	ep_server.interface_by_uuid = winsif__op_interface_by_uuid;
	ep_server.interface_by_name = winsif__op_interface_by_name;

	/* register ourselves with the DCERPC subsystem. */
	ret = dcerpc_register_ep_server(&ep_server);

	if (!NT_STATUS_IS_OK(ret)) {
		DEBUG(0,("Failed to register 'winsif' endpoint server!\n"));
		return ret;
	}

	return ret;
}

