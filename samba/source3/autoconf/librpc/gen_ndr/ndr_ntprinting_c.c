/* client functions auto-generated by pidl */

#include "includes.h"
#include <tevent.h>
#include "lib/util/tevent_ntstatus.h"
#include "autoconf/librpc/gen_ndr/ndr_ntprinting.h"
#include "autoconf/librpc/gen_ndr/ndr_ntprinting_c.h"

/* ntprinting - client functions generated by pidl */

struct dcerpc_decode_ntprinting_form_r_state {
	TALLOC_CTX *out_mem_ctx;
};

static void dcerpc_decode_ntprinting_form_r_done(struct tevent_req *subreq);

struct tevent_req *dcerpc_decode_ntprinting_form_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct decode_ntprinting_form *r)
{
	struct tevent_req *req;
	struct dcerpc_decode_ntprinting_form_r_state *state;
	struct tevent_req *subreq;

	req = tevent_req_create(mem_ctx, &state,
				struct dcerpc_decode_ntprinting_form_r_state);
	if (req == NULL) {
		return NULL;
	}

	state->out_mem_ctx = NULL;

	subreq = dcerpc_binding_handle_call_send(state, ev, h,
			NULL, &ndr_table_ntprinting,
			NDR_DECODE_NTPRINTING_FORM, state, r);
	if (tevent_req_nomem(subreq, req)) {
		return tevent_req_post(req, ev);
	}
	tevent_req_set_callback(subreq, dcerpc_decode_ntprinting_form_r_done, req);

	return req;
}

static void dcerpc_decode_ntprinting_form_r_done(struct tevent_req *subreq)
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

NTSTATUS dcerpc_decode_ntprinting_form_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx)
{
	struct dcerpc_decode_ntprinting_form_r_state *state =
		tevent_req_data(req,
		struct dcerpc_decode_ntprinting_form_r_state);
	NTSTATUS status;

	if (tevent_req_is_nterror(req, &status)) {
		tevent_req_received(req);
		return status;
	}

	talloc_steal(mem_ctx, state->out_mem_ctx);

	tevent_req_received(req);
	return NT_STATUS_OK;
}

NTSTATUS dcerpc_decode_ntprinting_form_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct decode_ntprinting_form *r)
{
	NTSTATUS status;

	status = dcerpc_binding_handle_call(h,
			NULL, &ndr_table_ntprinting,
			NDR_DECODE_NTPRINTING_FORM, mem_ctx, r);

	return status;
}

struct dcerpc_decode_ntprinting_form_state {
	struct decode_ntprinting_form orig;
	struct decode_ntprinting_form tmp;
	TALLOC_CTX *out_mem_ctx;
};

static void dcerpc_decode_ntprinting_form_done(struct tevent_req *subreq);

struct tevent_req *dcerpc_decode_ntprinting_form_send(TALLOC_CTX *mem_ctx,
						      struct tevent_context *ev,
						      struct dcerpc_binding_handle *h,
						      struct ntprinting_form _form /* [in]  */)
{
	struct tevent_req *req;
	struct dcerpc_decode_ntprinting_form_state *state;
	struct tevent_req *subreq;

	req = tevent_req_create(mem_ctx, &state,
				struct dcerpc_decode_ntprinting_form_state);
	if (req == NULL) {
		return NULL;
	}
	state->out_mem_ctx = NULL;

	/* In parameters */
	state->orig.in.form = _form;

	/* Out parameters */

	/* make a temporary copy, that we pass to the dispatch function */
	state->tmp = state->orig;

	subreq = dcerpc_decode_ntprinting_form_r_send(state, ev, h, &state->tmp);
	if (tevent_req_nomem(subreq, req)) {
		return tevent_req_post(req, ev);
	}
	tevent_req_set_callback(subreq, dcerpc_decode_ntprinting_form_done, req);
	return req;
}

static void dcerpc_decode_ntprinting_form_done(struct tevent_req *subreq)
{
	struct tevent_req *req = tevent_req_callback_data(
		subreq, struct tevent_req);
	struct dcerpc_decode_ntprinting_form_state *state = tevent_req_data(
		req, struct dcerpc_decode_ntprinting_form_state);
	NTSTATUS status;
	TALLOC_CTX *mem_ctx;

	if (state->out_mem_ctx) {
		mem_ctx = state->out_mem_ctx;
	} else {
		mem_ctx = state;
	}

	status = dcerpc_decode_ntprinting_form_r_recv(subreq, mem_ctx);
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

NTSTATUS dcerpc_decode_ntprinting_form_recv(struct tevent_req *req,
					    TALLOC_CTX *mem_ctx)
{
	struct dcerpc_decode_ntprinting_form_state *state = tevent_req_data(
		req, struct dcerpc_decode_ntprinting_form_state);
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

NTSTATUS dcerpc_decode_ntprinting_form(struct dcerpc_binding_handle *h,
				       TALLOC_CTX *mem_ctx,
				       struct ntprinting_form _form /* [in]  */)
{
	struct decode_ntprinting_form r;
	NTSTATUS status;

	/* In parameters */
	r.in.form = _form;

	status = dcerpc_decode_ntprinting_form_r(h, mem_ctx, &r);
	if (!NT_STATUS_IS_OK(status)) {
		return status;
	}

	/* Return variables */

	/* Return result */

	return NT_STATUS_OK;
}

struct dcerpc_decode_ntprinting_driver_r_state {
	TALLOC_CTX *out_mem_ctx;
};

static void dcerpc_decode_ntprinting_driver_r_done(struct tevent_req *subreq);

struct tevent_req *dcerpc_decode_ntprinting_driver_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct decode_ntprinting_driver *r)
{
	struct tevent_req *req;
	struct dcerpc_decode_ntprinting_driver_r_state *state;
	struct tevent_req *subreq;

	req = tevent_req_create(mem_ctx, &state,
				struct dcerpc_decode_ntprinting_driver_r_state);
	if (req == NULL) {
		return NULL;
	}

	state->out_mem_ctx = NULL;

	subreq = dcerpc_binding_handle_call_send(state, ev, h,
			NULL, &ndr_table_ntprinting,
			NDR_DECODE_NTPRINTING_DRIVER, state, r);
	if (tevent_req_nomem(subreq, req)) {
		return tevent_req_post(req, ev);
	}
	tevent_req_set_callback(subreq, dcerpc_decode_ntprinting_driver_r_done, req);

	return req;
}

static void dcerpc_decode_ntprinting_driver_r_done(struct tevent_req *subreq)
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

NTSTATUS dcerpc_decode_ntprinting_driver_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx)
{
	struct dcerpc_decode_ntprinting_driver_r_state *state =
		tevent_req_data(req,
		struct dcerpc_decode_ntprinting_driver_r_state);
	NTSTATUS status;

	if (tevent_req_is_nterror(req, &status)) {
		tevent_req_received(req);
		return status;
	}

	talloc_steal(mem_ctx, state->out_mem_ctx);

	tevent_req_received(req);
	return NT_STATUS_OK;
}

NTSTATUS dcerpc_decode_ntprinting_driver_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct decode_ntprinting_driver *r)
{
	NTSTATUS status;

	status = dcerpc_binding_handle_call(h,
			NULL, &ndr_table_ntprinting,
			NDR_DECODE_NTPRINTING_DRIVER, mem_ctx, r);

	return status;
}

struct dcerpc_decode_ntprinting_driver_state {
	struct decode_ntprinting_driver orig;
	struct decode_ntprinting_driver tmp;
	TALLOC_CTX *out_mem_ctx;
};

static void dcerpc_decode_ntprinting_driver_done(struct tevent_req *subreq);

struct tevent_req *dcerpc_decode_ntprinting_driver_send(TALLOC_CTX *mem_ctx,
							struct tevent_context *ev,
							struct dcerpc_binding_handle *h,
							struct ntprinting_driver _driver /* [in]  */)
{
	struct tevent_req *req;
	struct dcerpc_decode_ntprinting_driver_state *state;
	struct tevent_req *subreq;

	req = tevent_req_create(mem_ctx, &state,
				struct dcerpc_decode_ntprinting_driver_state);
	if (req == NULL) {
		return NULL;
	}
	state->out_mem_ctx = NULL;

	/* In parameters */
	state->orig.in.driver = _driver;

	/* Out parameters */

	/* make a temporary copy, that we pass to the dispatch function */
	state->tmp = state->orig;

	subreq = dcerpc_decode_ntprinting_driver_r_send(state, ev, h, &state->tmp);
	if (tevent_req_nomem(subreq, req)) {
		return tevent_req_post(req, ev);
	}
	tevent_req_set_callback(subreq, dcerpc_decode_ntprinting_driver_done, req);
	return req;
}

static void dcerpc_decode_ntprinting_driver_done(struct tevent_req *subreq)
{
	struct tevent_req *req = tevent_req_callback_data(
		subreq, struct tevent_req);
	struct dcerpc_decode_ntprinting_driver_state *state = tevent_req_data(
		req, struct dcerpc_decode_ntprinting_driver_state);
	NTSTATUS status;
	TALLOC_CTX *mem_ctx;

	if (state->out_mem_ctx) {
		mem_ctx = state->out_mem_ctx;
	} else {
		mem_ctx = state;
	}

	status = dcerpc_decode_ntprinting_driver_r_recv(subreq, mem_ctx);
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

NTSTATUS dcerpc_decode_ntprinting_driver_recv(struct tevent_req *req,
					      TALLOC_CTX *mem_ctx)
{
	struct dcerpc_decode_ntprinting_driver_state *state = tevent_req_data(
		req, struct dcerpc_decode_ntprinting_driver_state);
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

NTSTATUS dcerpc_decode_ntprinting_driver(struct dcerpc_binding_handle *h,
					 TALLOC_CTX *mem_ctx,
					 struct ntprinting_driver _driver /* [in]  */)
{
	struct decode_ntprinting_driver r;
	NTSTATUS status;

	/* In parameters */
	r.in.driver = _driver;

	status = dcerpc_decode_ntprinting_driver_r(h, mem_ctx, &r);
	if (!NT_STATUS_IS_OK(status)) {
		return status;
	}

	/* Return variables */

	/* Return result */

	return NT_STATUS_OK;
}

struct dcerpc_decode_ntprinting_printer_r_state {
	TALLOC_CTX *out_mem_ctx;
};

static void dcerpc_decode_ntprinting_printer_r_done(struct tevent_req *subreq);

struct tevent_req *dcerpc_decode_ntprinting_printer_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct decode_ntprinting_printer *r)
{
	struct tevent_req *req;
	struct dcerpc_decode_ntprinting_printer_r_state *state;
	struct tevent_req *subreq;

	req = tevent_req_create(mem_ctx, &state,
				struct dcerpc_decode_ntprinting_printer_r_state);
	if (req == NULL) {
		return NULL;
	}

	state->out_mem_ctx = NULL;

	subreq = dcerpc_binding_handle_call_send(state, ev, h,
			NULL, &ndr_table_ntprinting,
			NDR_DECODE_NTPRINTING_PRINTER, state, r);
	if (tevent_req_nomem(subreq, req)) {
		return tevent_req_post(req, ev);
	}
	tevent_req_set_callback(subreq, dcerpc_decode_ntprinting_printer_r_done, req);

	return req;
}

static void dcerpc_decode_ntprinting_printer_r_done(struct tevent_req *subreq)
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

NTSTATUS dcerpc_decode_ntprinting_printer_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx)
{
	struct dcerpc_decode_ntprinting_printer_r_state *state =
		tevent_req_data(req,
		struct dcerpc_decode_ntprinting_printer_r_state);
	NTSTATUS status;

	if (tevent_req_is_nterror(req, &status)) {
		tevent_req_received(req);
		return status;
	}

	talloc_steal(mem_ctx, state->out_mem_ctx);

	tevent_req_received(req);
	return NT_STATUS_OK;
}

NTSTATUS dcerpc_decode_ntprinting_printer_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct decode_ntprinting_printer *r)
{
	NTSTATUS status;

	status = dcerpc_binding_handle_call(h,
			NULL, &ndr_table_ntprinting,
			NDR_DECODE_NTPRINTING_PRINTER, mem_ctx, r);

	return status;
}

struct dcerpc_decode_ntprinting_printer_state {
	struct decode_ntprinting_printer orig;
	struct decode_ntprinting_printer tmp;
	TALLOC_CTX *out_mem_ctx;
};

static void dcerpc_decode_ntprinting_printer_done(struct tevent_req *subreq);

struct tevent_req *dcerpc_decode_ntprinting_printer_send(TALLOC_CTX *mem_ctx,
							 struct tevent_context *ev,
							 struct dcerpc_binding_handle *h,
							 struct ntprinting_printer _printer /* [in]  */)
{
	struct tevent_req *req;
	struct dcerpc_decode_ntprinting_printer_state *state;
	struct tevent_req *subreq;

	req = tevent_req_create(mem_ctx, &state,
				struct dcerpc_decode_ntprinting_printer_state);
	if (req == NULL) {
		return NULL;
	}
	state->out_mem_ctx = NULL;

	/* In parameters */
	state->orig.in.printer = _printer;

	/* Out parameters */

	/* make a temporary copy, that we pass to the dispatch function */
	state->tmp = state->orig;

	subreq = dcerpc_decode_ntprinting_printer_r_send(state, ev, h, &state->tmp);
	if (tevent_req_nomem(subreq, req)) {
		return tevent_req_post(req, ev);
	}
	tevent_req_set_callback(subreq, dcerpc_decode_ntprinting_printer_done, req);
	return req;
}

static void dcerpc_decode_ntprinting_printer_done(struct tevent_req *subreq)
{
	struct tevent_req *req = tevent_req_callback_data(
		subreq, struct tevent_req);
	struct dcerpc_decode_ntprinting_printer_state *state = tevent_req_data(
		req, struct dcerpc_decode_ntprinting_printer_state);
	NTSTATUS status;
	TALLOC_CTX *mem_ctx;

	if (state->out_mem_ctx) {
		mem_ctx = state->out_mem_ctx;
	} else {
		mem_ctx = state;
	}

	status = dcerpc_decode_ntprinting_printer_r_recv(subreq, mem_ctx);
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

NTSTATUS dcerpc_decode_ntprinting_printer_recv(struct tevent_req *req,
					       TALLOC_CTX *mem_ctx)
{
	struct dcerpc_decode_ntprinting_printer_state *state = tevent_req_data(
		req, struct dcerpc_decode_ntprinting_printer_state);
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

NTSTATUS dcerpc_decode_ntprinting_printer(struct dcerpc_binding_handle *h,
					  TALLOC_CTX *mem_ctx,
					  struct ntprinting_printer _printer /* [in]  */)
{
	struct decode_ntprinting_printer r;
	NTSTATUS status;

	/* In parameters */
	r.in.printer = _printer;

	status = dcerpc_decode_ntprinting_printer_r(h, mem_ctx, &r);
	if (!NT_STATUS_IS_OK(status)) {
		return status;
	}

	/* Return variables */

	/* Return result */

	return NT_STATUS_OK;
}

