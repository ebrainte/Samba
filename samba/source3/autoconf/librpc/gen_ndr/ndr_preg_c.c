/* client functions auto-generated by pidl */

#include "includes.h"
#include <tevent.h>
#include "lib/util/tevent_ntstatus.h"
#include "autoconf/librpc/gen_ndr/ndr_preg.h"
#include "autoconf/librpc/gen_ndr/ndr_preg_c.h"

/* preg - client functions generated by pidl */

struct dcerpc_decode_preg_file_r_state {
	TALLOC_CTX *out_mem_ctx;
};

static void dcerpc_decode_preg_file_r_done(struct tevent_req *subreq);

struct tevent_req *dcerpc_decode_preg_file_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct decode_preg_file *r)
{
	struct tevent_req *req;
	struct dcerpc_decode_preg_file_r_state *state;
	struct tevent_req *subreq;

	req = tevent_req_create(mem_ctx, &state,
				struct dcerpc_decode_preg_file_r_state);
	if (req == NULL) {
		return NULL;
	}

	state->out_mem_ctx = NULL;

	subreq = dcerpc_binding_handle_call_send(state, ev, h,
			NULL, &ndr_table_preg,
			NDR_DECODE_PREG_FILE, state, r);
	if (tevent_req_nomem(subreq, req)) {
		return tevent_req_post(req, ev);
	}
	tevent_req_set_callback(subreq, dcerpc_decode_preg_file_r_done, req);

	return req;
}

static void dcerpc_decode_preg_file_r_done(struct tevent_req *subreq)
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

NTSTATUS dcerpc_decode_preg_file_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx)
{
	struct dcerpc_decode_preg_file_r_state *state =
		tevent_req_data(req,
		struct dcerpc_decode_preg_file_r_state);
	NTSTATUS status;

	if (tevent_req_is_nterror(req, &status)) {
		tevent_req_received(req);
		return status;
	}

	talloc_steal(mem_ctx, state->out_mem_ctx);

	tevent_req_received(req);
	return NT_STATUS_OK;
}

NTSTATUS dcerpc_decode_preg_file_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct decode_preg_file *r)
{
	NTSTATUS status;

	status = dcerpc_binding_handle_call(h,
			NULL, &ndr_table_preg,
			NDR_DECODE_PREG_FILE, mem_ctx, r);

	return status;
}

struct dcerpc_decode_preg_file_state {
	struct decode_preg_file orig;
	struct decode_preg_file tmp;
	TALLOC_CTX *out_mem_ctx;
};

static void dcerpc_decode_preg_file_done(struct tevent_req *subreq);

struct tevent_req *dcerpc_decode_preg_file_send(TALLOC_CTX *mem_ctx,
						struct tevent_context *ev,
						struct dcerpc_binding_handle *h,
						struct preg_file _file /* [in]  */)
{
	struct tevent_req *req;
	struct dcerpc_decode_preg_file_state *state;
	struct tevent_req *subreq;

	req = tevent_req_create(mem_ctx, &state,
				struct dcerpc_decode_preg_file_state);
	if (req == NULL) {
		return NULL;
	}
	state->out_mem_ctx = NULL;

	/* In parameters */
	state->orig.in.file = _file;

	/* Out parameters */

	/* make a temporary copy, that we pass to the dispatch function */
	state->tmp = state->orig;

	subreq = dcerpc_decode_preg_file_r_send(state, ev, h, &state->tmp);
	if (tevent_req_nomem(subreq, req)) {
		return tevent_req_post(req, ev);
	}
	tevent_req_set_callback(subreq, dcerpc_decode_preg_file_done, req);
	return req;
}

static void dcerpc_decode_preg_file_done(struct tevent_req *subreq)
{
	struct tevent_req *req = tevent_req_callback_data(
		subreq, struct tevent_req);
	struct dcerpc_decode_preg_file_state *state = tevent_req_data(
		req, struct dcerpc_decode_preg_file_state);
	NTSTATUS status;
	TALLOC_CTX *mem_ctx;

	if (state->out_mem_ctx) {
		mem_ctx = state->out_mem_ctx;
	} else {
		mem_ctx = state;
	}

	status = dcerpc_decode_preg_file_r_recv(subreq, mem_ctx);
	TALLOC_FREE(subreq);
	if (!NT_STATUS_IS_OK(status)) {
		tevent_req_nterror(req, status);
		return;
	}

	/* Copy out parameters */

	/* Reset temporary structure */
	ZERO_STRUCT(state->tmp);

	tevent_req_done(req);
}

NTSTATUS dcerpc_decode_preg_file_recv(struct tevent_req *req,
				      TALLOC_CTX *mem_ctx)
{
	struct dcerpc_decode_preg_file_state *state = tevent_req_data(
		req, struct dcerpc_decode_preg_file_state);
	NTSTATUS status;

	if (tevent_req_is_nterror(req, &status)) {
		tevent_req_received(req);
		return status;
	}

	/* Steal possible out parameters to the callers context */
	talloc_steal(mem_ctx, state->out_mem_ctx);

	tevent_req_received(req);
	return NT_STATUS_OK;
}

NTSTATUS dcerpc_decode_preg_file(struct dcerpc_binding_handle *h,
				 TALLOC_CTX *mem_ctx,
				 struct preg_file _file /* [in]  */)
{
	struct decode_preg_file r;
	NTSTATUS status;

	/* In parameters */
	r.in.file = _file;

	status = dcerpc_decode_preg_file_r(h, mem_ctx, &r);
	if (!NT_STATUS_IS_OK(status)) {
		return status;
	}

	/* Return variables */

	/* Return result */

	return NT_STATUS_OK;
}

