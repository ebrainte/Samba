/* client functions auto-generated by pidl */

#include "includes.h"
#include <tevent.h>
#include "lib/util/tevent_ntstatus.h"
#include "bin/default/librpc/gen_ndr/ndr_remact.h"
#include "bin/default/librpc/gen_ndr/ndr_remact_c.h"

/* IRemoteActivation - client functions generated by pidl */

struct dcerpc_RemoteActivation_r_state {
	TALLOC_CTX *out_mem_ctx;
};

static void dcerpc_RemoteActivation_r_done(struct tevent_req *subreq);

struct tevent_req *dcerpc_RemoteActivation_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct RemoteActivation *r)
{
	struct tevent_req *req;
	struct dcerpc_RemoteActivation_r_state *state;
	struct tevent_req *subreq;

	req = tevent_req_create(mem_ctx, &state,
				struct dcerpc_RemoteActivation_r_state);
	if (req == NULL) {
		return NULL;
	}

	state->out_mem_ctx = talloc_new(state);
	if (tevent_req_nomem(state->out_mem_ctx, req)) {
		return tevent_req_post(req, ev);
	}

	subreq = dcerpc_binding_handle_call_send(state, ev, h,
			NULL, &ndr_table_IRemoteActivation,
			NDR_REMOTEACTIVATION, state->out_mem_ctx, r);
	if (tevent_req_nomem(subreq, req)) {
		return tevent_req_post(req, ev);
	}
	tevent_req_set_callback(subreq, dcerpc_RemoteActivation_r_done, req);

	return req;
}

static void dcerpc_RemoteActivation_r_done(struct tevent_req *subreq)
{
	struct tevent_req *req =
		tevent_req_callback_data(subreq,
		struct tevent_req);
	NTSTATUS status;

	status = dcerpc_binding_handle_call_recv(subreq);
	if (!NT_STATUS_IS_OK(status)) {
		tevent_req_nterror(req, status);
		return;
	}

	tevent_req_done(req);
}

NTSTATUS dcerpc_RemoteActivation_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx)
{
	struct dcerpc_RemoteActivation_r_state *state =
		tevent_req_data(req,
		struct dcerpc_RemoteActivation_r_state);
	NTSTATUS status;

	if (tevent_req_is_nterror(req, &status)) {
		tevent_req_received(req);
		return status;
	}

	talloc_steal(mem_ctx, state->out_mem_ctx);

	tevent_req_received(req);
	return NT_STATUS_OK;
}

NTSTATUS dcerpc_RemoteActivation_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct RemoteActivation *r)
{
	NTSTATUS status;

	status = dcerpc_binding_handle_call(h,
			NULL, &ndr_table_IRemoteActivation,
			NDR_REMOTEACTIVATION, mem_ctx, r);

	return status;
}

struct dcerpc_RemoteActivation_state {
	struct RemoteActivation orig;
	struct RemoteActivation tmp;
	TALLOC_CTX *out_mem_ctx;
};

static void dcerpc_RemoteActivation_done(struct tevent_req *subreq);

struct tevent_req *dcerpc_RemoteActivation_send(TALLOC_CTX *mem_ctx,
						struct tevent_context *ev,
						struct dcerpc_binding_handle *h,
						struct ORPCTHIS _this_object /* [in]  */,
						struct ORPCTHAT *_that /* [out] [ref] */,
						struct GUID _Clsid /* [in]  */,
						const char *_pwszObjectName /* [in] [ref,charset(UTF16)] */,
						struct MInterfacePointer *_pObjectStorage /* [in] [ref] */,
						uint32_t _ClientImpLevel /* [in]  */,
						uint32_t _Mode /* [in]  */,
						uint32_t _Interfaces /* [in] [range(1,32768)] */,
						struct GUID *_pIIDs /* [in] [ref,size_is(Interfaces)] */,
						uint16_t _num_protseqs /* [in]  */,
						uint16_t *_protseq /* [in] [size_is(num_protseqs)] */,
						uint64_t *_pOxid /* [out] [ref] */,
						struct DUALSTRINGARRAY *_pdsaOxidBindings /* [out] [ref] */,
						struct GUID *_ipidRemUnknown /* [out] [ref] */,
						uint32_t *_AuthnHint /* [out] [ref] */,
						struct COMVERSION *_ServerVersion /* [out] [ref] */,
						WERROR *_hr /* [out] [ref] */,
						struct MInterfacePointer **_ifaces /* [out] [ref,size_is(Interfaces)] */,
						WERROR *_results /* [out] [size_is(Interfaces)] */)
{
	struct tevent_req *req;
	struct dcerpc_RemoteActivation_state *state;
	struct tevent_req *subreq;

	req = tevent_req_create(mem_ctx, &state,
				struct dcerpc_RemoteActivation_state);
	if (req == NULL) {
		return NULL;
	}
	state->out_mem_ctx = NULL;

	/* In parameters */
	state->orig.in.this_object = _this_object;
	state->orig.in.Clsid = _Clsid;
	state->orig.in.pwszObjectName = _pwszObjectName;
	state->orig.in.pObjectStorage = _pObjectStorage;
	state->orig.in.ClientImpLevel = _ClientImpLevel;
	state->orig.in.Mode = _Mode;
	state->orig.in.Interfaces = _Interfaces;
	state->orig.in.pIIDs = _pIIDs;
	state->orig.in.num_protseqs = _num_protseqs;
	state->orig.in.protseq = _protseq;

	/* Out parameters */
	state->orig.out.that = _that;
	state->orig.out.pOxid = _pOxid;
	state->orig.out.pdsaOxidBindings = _pdsaOxidBindings;
	state->orig.out.ipidRemUnknown = _ipidRemUnknown;
	state->orig.out.AuthnHint = _AuthnHint;
	state->orig.out.ServerVersion = _ServerVersion;
	state->orig.out.hr = _hr;
	state->orig.out.ifaces = _ifaces;
	state->orig.out.results = _results;

	/* Result */
	ZERO_STRUCT(state->orig.out.result);

	state->out_mem_ctx = talloc_named_const(state, 0,
			     "dcerpc_RemoteActivation_out_memory");
	if (tevent_req_nomem(state->out_mem_ctx, req)) {
		return tevent_req_post(req, ev);
	}

	/* make a temporary copy, that we pass to the dispatch function */
	state->tmp = state->orig;

	subreq = dcerpc_RemoteActivation_r_send(state, ev, h, &state->tmp);
	if (tevent_req_nomem(subreq, req)) {
		return tevent_req_post(req, ev);
	}
	tevent_req_set_callback(subreq, dcerpc_RemoteActivation_done, req);
	return req;
}

static void dcerpc_RemoteActivation_done(struct tevent_req *subreq)
{
	struct tevent_req *req = tevent_req_callback_data(
		subreq, struct tevent_req);
	struct dcerpc_RemoteActivation_state *state = tevent_req_data(
		req, struct dcerpc_RemoteActivation_state);
	NTSTATUS status;
	TALLOC_CTX *mem_ctx;

	if (state->out_mem_ctx) {
		mem_ctx = state->out_mem_ctx;
	} else {
		mem_ctx = state;
	}

	status = dcerpc_RemoteActivation_r_recv(subreq, mem_ctx);
	TALLOC_FREE(subreq);
	if (!NT_STATUS_IS_OK(status)) {
		tevent_req_nterror(req, status);
		return;
	}

	/* Copy out parameters */
	*state->orig.out.that = *state->tmp.out.that;
	*state->orig.out.pOxid = *state->tmp.out.pOxid;
	*state->orig.out.pdsaOxidBindings = *state->tmp.out.pdsaOxidBindings;
	*state->orig.out.ipidRemUnknown = *state->tmp.out.ipidRemUnknown;
	*state->orig.out.AuthnHint = *state->tmp.out.AuthnHint;
	*state->orig.out.ServerVersion = *state->tmp.out.ServerVersion;
	*state->orig.out.hr = *state->tmp.out.hr;
	{
		size_t _copy_len_ifaces;
		_copy_len_ifaces = state->tmp.in.Interfaces;
		memcpy(state->orig.out.ifaces, state->tmp.out.ifaces, _copy_len_ifaces * sizeof(*state->orig.out.ifaces));
	}
	{
		size_t _copy_len_results;
		_copy_len_results = state->tmp.in.Interfaces;
		memcpy(state->orig.out.results, state->tmp.out.results, _copy_len_results * sizeof(*state->orig.out.results));
	}

	/* Copy result */
	state->orig.out.result = state->tmp.out.result;

	/* Reset temporary structure */
	ZERO_STRUCT(state->tmp);

	tevent_req_done(req);
}

NTSTATUS dcerpc_RemoteActivation_recv(struct tevent_req *req,
				      TALLOC_CTX *mem_ctx,
				      WERROR *result)
{
	struct dcerpc_RemoteActivation_state *state = tevent_req_data(
		req, struct dcerpc_RemoteActivation_state);
	NTSTATUS status;

	if (tevent_req_is_nterror(req, &status)) {
		tevent_req_received(req);
		return status;
	}

	/* Steal possible out parameters to the callers context */
	talloc_steal(mem_ctx, state->out_mem_ctx);

	/* Return result */
	*result = state->orig.out.result;

	tevent_req_received(req);
	return NT_STATUS_OK;
}

NTSTATUS dcerpc_RemoteActivation(struct dcerpc_binding_handle *h,
				 TALLOC_CTX *mem_ctx,
				 struct ORPCTHIS _this_object /* [in]  */,
				 struct ORPCTHAT *_that /* [out] [ref] */,
				 struct GUID _Clsid /* [in]  */,
				 const char *_pwszObjectName /* [in] [ref,charset(UTF16)] */,
				 struct MInterfacePointer *_pObjectStorage /* [in] [ref] */,
				 uint32_t _ClientImpLevel /* [in]  */,
				 uint32_t _Mode /* [in]  */,
				 uint32_t _Interfaces /* [in] [range(1,32768)] */,
				 struct GUID *_pIIDs /* [in] [ref,size_is(Interfaces)] */,
				 uint16_t _num_protseqs /* [in]  */,
				 uint16_t *_protseq /* [in] [size_is(num_protseqs)] */,
				 uint64_t *_pOxid /* [out] [ref] */,
				 struct DUALSTRINGARRAY *_pdsaOxidBindings /* [out] [ref] */,
				 struct GUID *_ipidRemUnknown /* [out] [ref] */,
				 uint32_t *_AuthnHint /* [out] [ref] */,
				 struct COMVERSION *_ServerVersion /* [out] [ref] */,
				 WERROR *_hr /* [out] [ref] */,
				 struct MInterfacePointer **_ifaces /* [out] [ref,size_is(Interfaces)] */,
				 WERROR *_results /* [out] [size_is(Interfaces)] */,
				 WERROR *result)
{
	struct RemoteActivation r;
	NTSTATUS status;

	/* In parameters */
	r.in.this_object = _this_object;
	r.in.Clsid = _Clsid;
	r.in.pwszObjectName = _pwszObjectName;
	r.in.pObjectStorage = _pObjectStorage;
	r.in.ClientImpLevel = _ClientImpLevel;
	r.in.Mode = _Mode;
	r.in.Interfaces = _Interfaces;
	r.in.pIIDs = _pIIDs;
	r.in.num_protseqs = _num_protseqs;
	r.in.protseq = _protseq;

	status = dcerpc_RemoteActivation_r(h, mem_ctx, &r);
	if (!NT_STATUS_IS_OK(status)) {
		return status;
	}

	/* Return variables */
	*_that = *r.out.that;
	*_pOxid = *r.out.pOxid;
	*_pdsaOxidBindings = *r.out.pdsaOxidBindings;
	*_ipidRemUnknown = *r.out.ipidRemUnknown;
	*_AuthnHint = *r.out.AuthnHint;
	*_ServerVersion = *r.out.ServerVersion;
	*_hr = *r.out.hr;
	{
		size_t _copy_len_ifaces;
		_copy_len_ifaces = r.in.Interfaces;
		memcpy(_ifaces, r.out.ifaces, _copy_len_ifaces * sizeof(*_ifaces));
	}
	{
		size_t _copy_len_results;
		_copy_len_results = r.in.Interfaces;
		memcpy(_results, r.out.results, _copy_len_results * sizeof(*_results));
	}

	/* Return result */
	*result = r.out.result;

	return NT_STATUS_OK;
}

