/* client functions auto-generated by pidl */

#include "includes.h"
#include <tevent.h>
#include "lib/util/tevent_ntstatus.h"
#include "bin/default/librpc/gen_ndr/ndr_krb5pac.h"
#include "bin/default/librpc/gen_ndr/ndr_krb5pac_c.h"

/* krb5pac - client functions generated by pidl */

struct dcerpc_decode_pac_r_state {
	TALLOC_CTX *out_mem_ctx;
};

static void dcerpc_decode_pac_r_done(struct tevent_req *subreq);

struct tevent_req *dcerpc_decode_pac_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct decode_pac *r)
{
	struct tevent_req *req;
	struct dcerpc_decode_pac_r_state *state;
	struct tevent_req *subreq;

	req = tevent_req_create(mem_ctx, &state,
				struct dcerpc_decode_pac_r_state);
	if (req == NULL) {
		return NULL;
	}

	state->out_mem_ctx = NULL;

	subreq = dcerpc_binding_handle_call_send(state, ev, h,
			NULL, &ndr_table_krb5pac,
			NDR_DECODE_PAC, state, r);
	if (tevent_req_nomem(subreq, req)) {
		return tevent_req_post(req, ev);
	}
	tevent_req_set_callback(subreq, dcerpc_decode_pac_r_done, req);

	return req;
}

static void dcerpc_decode_pac_r_done(struct tevent_req *subreq)
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

NTSTATUS dcerpc_decode_pac_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx)
{
	struct dcerpc_decode_pac_r_state *state =
		tevent_req_data(req,
		struct dcerpc_decode_pac_r_state);
	NTSTATUS status;

	if (tevent_req_is_nterror(req, &status)) {
		tevent_req_received(req);
		return status;
	}

	talloc_steal(mem_ctx, state->out_mem_ctx);

	tevent_req_received(req);
	return NT_STATUS_OK;
}

NTSTATUS dcerpc_decode_pac_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct decode_pac *r)
{
	NTSTATUS status;

	status = dcerpc_binding_handle_call(h,
			NULL, &ndr_table_krb5pac,
			NDR_DECODE_PAC, mem_ctx, r);

	return status;
}

struct dcerpc_decode_pac_state {
	struct decode_pac orig;
	struct decode_pac tmp;
	TALLOC_CTX *out_mem_ctx;
};

static void dcerpc_decode_pac_done(struct tevent_req *subreq);

struct tevent_req *dcerpc_decode_pac_send(TALLOC_CTX *mem_ctx,
					  struct tevent_context *ev,
					  struct dcerpc_binding_handle *h,
					  struct PAC_DATA _pac /* [in]  */)
{
	struct tevent_req *req;
	struct dcerpc_decode_pac_state *state;
	struct tevent_req *subreq;

	req = tevent_req_create(mem_ctx, &state,
				struct dcerpc_decode_pac_state);
	if (req == NULL) {
		return NULL;
	}
	state->out_mem_ctx = NULL;

	/* In parameters */
	state->orig.in.pac = _pac;

	/* Out parameters */

	/* make a temporary copy, that we pass to the dispatch function */
	state->tmp = state->orig;

	subreq = dcerpc_decode_pac_r_send(state, ev, h, &state->tmp);
	if (tevent_req_nomem(subreq, req)) {
		return tevent_req_post(req, ev);
	}
	tevent_req_set_callback(subreq, dcerpc_decode_pac_done, req);
	return req;
}

static void dcerpc_decode_pac_done(struct tevent_req *subreq)
{
	struct tevent_req *req = tevent_req_callback_data(
		subreq, struct tevent_req);
	struct dcerpc_decode_pac_state *state = tevent_req_data(
		req, struct dcerpc_decode_pac_state);
	NTSTATUS status;
	TALLOC_CTX *mem_ctx;

	if (state->out_mem_ctx) {
		mem_ctx = state->out_mem_ctx;
	} else {
		mem_ctx = state;
	}

	status = dcerpc_decode_pac_r_recv(subreq, mem_ctx);
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

NTSTATUS dcerpc_decode_pac_recv(struct tevent_req *req,
				TALLOC_CTX *mem_ctx)
{
	struct dcerpc_decode_pac_state *state = tevent_req_data(
		req, struct dcerpc_decode_pac_state);
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

NTSTATUS dcerpc_decode_pac(struct dcerpc_binding_handle *h,
			   TALLOC_CTX *mem_ctx,
			   struct PAC_DATA _pac /* [in]  */)
{
	struct decode_pac r;
	NTSTATUS status;

	/* In parameters */
	r.in.pac = _pac;

	status = dcerpc_decode_pac_r(h, mem_ctx, &r);
	if (!NT_STATUS_IS_OK(status)) {
		return status;
	}

	/* Return variables */

	/* Return result */

	return NT_STATUS_OK;
}

struct dcerpc_decode_pac_raw_r_state {
	TALLOC_CTX *out_mem_ctx;
};

static void dcerpc_decode_pac_raw_r_done(struct tevent_req *subreq);

struct tevent_req *dcerpc_decode_pac_raw_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct decode_pac_raw *r)
{
	struct tevent_req *req;
	struct dcerpc_decode_pac_raw_r_state *state;
	struct tevent_req *subreq;

	req = tevent_req_create(mem_ctx, &state,
				struct dcerpc_decode_pac_raw_r_state);
	if (req == NULL) {
		return NULL;
	}

	state->out_mem_ctx = NULL;

	subreq = dcerpc_binding_handle_call_send(state, ev, h,
			NULL, &ndr_table_krb5pac,
			NDR_DECODE_PAC_RAW, state, r);
	if (tevent_req_nomem(subreq, req)) {
		return tevent_req_post(req, ev);
	}
	tevent_req_set_callback(subreq, dcerpc_decode_pac_raw_r_done, req);

	return req;
}

static void dcerpc_decode_pac_raw_r_done(struct tevent_req *subreq)
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

NTSTATUS dcerpc_decode_pac_raw_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx)
{
	struct dcerpc_decode_pac_raw_r_state *state =
		tevent_req_data(req,
		struct dcerpc_decode_pac_raw_r_state);
	NTSTATUS status;

	if (tevent_req_is_nterror(req, &status)) {
		tevent_req_received(req);
		return status;
	}

	talloc_steal(mem_ctx, state->out_mem_ctx);

	tevent_req_received(req);
	return NT_STATUS_OK;
}

NTSTATUS dcerpc_decode_pac_raw_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct decode_pac_raw *r)
{
	NTSTATUS status;

	status = dcerpc_binding_handle_call(h,
			NULL, &ndr_table_krb5pac,
			NDR_DECODE_PAC_RAW, mem_ctx, r);

	return status;
}

struct dcerpc_decode_pac_raw_state {
	struct decode_pac_raw orig;
	struct decode_pac_raw tmp;
	TALLOC_CTX *out_mem_ctx;
};

static void dcerpc_decode_pac_raw_done(struct tevent_req *subreq);

struct tevent_req *dcerpc_decode_pac_raw_send(TALLOC_CTX *mem_ctx,
					      struct tevent_context *ev,
					      struct dcerpc_binding_handle *h,
					      struct PAC_DATA_RAW _pac /* [in]  */)
{
	struct tevent_req *req;
	struct dcerpc_decode_pac_raw_state *state;
	struct tevent_req *subreq;

	req = tevent_req_create(mem_ctx, &state,
				struct dcerpc_decode_pac_raw_state);
	if (req == NULL) {
		return NULL;
	}
	state->out_mem_ctx = NULL;

	/* In parameters */
	state->orig.in.pac = _pac;

	/* Out parameters */

	/* make a temporary copy, that we pass to the dispatch function */
	state->tmp = state->orig;

	subreq = dcerpc_decode_pac_raw_r_send(state, ev, h, &state->tmp);
	if (tevent_req_nomem(subreq, req)) {
		return tevent_req_post(req, ev);
	}
	tevent_req_set_callback(subreq, dcerpc_decode_pac_raw_done, req);
	return req;
}

static void dcerpc_decode_pac_raw_done(struct tevent_req *subreq)
{
	struct tevent_req *req = tevent_req_callback_data(
		subreq, struct tevent_req);
	struct dcerpc_decode_pac_raw_state *state = tevent_req_data(
		req, struct dcerpc_decode_pac_raw_state);
	NTSTATUS status;
	TALLOC_CTX *mem_ctx;

	if (state->out_mem_ctx) {
		mem_ctx = state->out_mem_ctx;
	} else {
		mem_ctx = state;
	}

	status = dcerpc_decode_pac_raw_r_recv(subreq, mem_ctx);
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

NTSTATUS dcerpc_decode_pac_raw_recv(struct tevent_req *req,
				    TALLOC_CTX *mem_ctx)
{
	struct dcerpc_decode_pac_raw_state *state = tevent_req_data(
		req, struct dcerpc_decode_pac_raw_state);
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

NTSTATUS dcerpc_decode_pac_raw(struct dcerpc_binding_handle *h,
			       TALLOC_CTX *mem_ctx,
			       struct PAC_DATA_RAW _pac /* [in]  */)
{
	struct decode_pac_raw r;
	NTSTATUS status;

	/* In parameters */
	r.in.pac = _pac;

	status = dcerpc_decode_pac_raw_r(h, mem_ctx, &r);
	if (!NT_STATUS_IS_OK(status)) {
		return status;
	}

	/* Return variables */

	/* Return result */

	return NT_STATUS_OK;
}

struct dcerpc_decode_login_info_r_state {
	TALLOC_CTX *out_mem_ctx;
};

static void dcerpc_decode_login_info_r_done(struct tevent_req *subreq);

struct tevent_req *dcerpc_decode_login_info_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct decode_login_info *r)
{
	struct tevent_req *req;
	struct dcerpc_decode_login_info_r_state *state;
	struct tevent_req *subreq;

	req = tevent_req_create(mem_ctx, &state,
				struct dcerpc_decode_login_info_r_state);
	if (req == NULL) {
		return NULL;
	}

	state->out_mem_ctx = NULL;

	subreq = dcerpc_binding_handle_call_send(state, ev, h,
			NULL, &ndr_table_krb5pac,
			NDR_DECODE_LOGIN_INFO, state, r);
	if (tevent_req_nomem(subreq, req)) {
		return tevent_req_post(req, ev);
	}
	tevent_req_set_callback(subreq, dcerpc_decode_login_info_r_done, req);

	return req;
}

static void dcerpc_decode_login_info_r_done(struct tevent_req *subreq)
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

NTSTATUS dcerpc_decode_login_info_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx)
{
	struct dcerpc_decode_login_info_r_state *state =
		tevent_req_data(req,
		struct dcerpc_decode_login_info_r_state);
	NTSTATUS status;

	if (tevent_req_is_nterror(req, &status)) {
		tevent_req_received(req);
		return status;
	}

	talloc_steal(mem_ctx, state->out_mem_ctx);

	tevent_req_received(req);
	return NT_STATUS_OK;
}

NTSTATUS dcerpc_decode_login_info_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct decode_login_info *r)
{
	NTSTATUS status;

	status = dcerpc_binding_handle_call(h,
			NULL, &ndr_table_krb5pac,
			NDR_DECODE_LOGIN_INFO, mem_ctx, r);

	return status;
}

struct dcerpc_decode_login_info_state {
	struct decode_login_info orig;
	struct decode_login_info tmp;
	TALLOC_CTX *out_mem_ctx;
};

static void dcerpc_decode_login_info_done(struct tevent_req *subreq);

struct tevent_req *dcerpc_decode_login_info_send(TALLOC_CTX *mem_ctx,
						 struct tevent_context *ev,
						 struct dcerpc_binding_handle *h,
						 struct PAC_LOGON_INFO _logon_info /* [in]  */)
{
	struct tevent_req *req;
	struct dcerpc_decode_login_info_state *state;
	struct tevent_req *subreq;

	req = tevent_req_create(mem_ctx, &state,
				struct dcerpc_decode_login_info_state);
	if (req == NULL) {
		return NULL;
	}
	state->out_mem_ctx = NULL;

	/* In parameters */
	state->orig.in.logon_info = _logon_info;

	/* Out parameters */

	/* make a temporary copy, that we pass to the dispatch function */
	state->tmp = state->orig;

	subreq = dcerpc_decode_login_info_r_send(state, ev, h, &state->tmp);
	if (tevent_req_nomem(subreq, req)) {
		return tevent_req_post(req, ev);
	}
	tevent_req_set_callback(subreq, dcerpc_decode_login_info_done, req);
	return req;
}

static void dcerpc_decode_login_info_done(struct tevent_req *subreq)
{
	struct tevent_req *req = tevent_req_callback_data(
		subreq, struct tevent_req);
	struct dcerpc_decode_login_info_state *state = tevent_req_data(
		req, struct dcerpc_decode_login_info_state);
	NTSTATUS status;
	TALLOC_CTX *mem_ctx;

	if (state->out_mem_ctx) {
		mem_ctx = state->out_mem_ctx;
	} else {
		mem_ctx = state;
	}

	status = dcerpc_decode_login_info_r_recv(subreq, mem_ctx);
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

NTSTATUS dcerpc_decode_login_info_recv(struct tevent_req *req,
				       TALLOC_CTX *mem_ctx)
{
	struct dcerpc_decode_login_info_state *state = tevent_req_data(
		req, struct dcerpc_decode_login_info_state);
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

NTSTATUS dcerpc_decode_login_info(struct dcerpc_binding_handle *h,
				  TALLOC_CTX *mem_ctx,
				  struct PAC_LOGON_INFO _logon_info /* [in]  */)
{
	struct decode_login_info r;
	NTSTATUS status;

	/* In parameters */
	r.in.logon_info = _logon_info;

	status = dcerpc_decode_login_info_r(h, mem_ctx, &r);
	if (!NT_STATUS_IS_OK(status)) {
		return status;
	}

	/* Return variables */

	/* Return result */

	return NT_STATUS_OK;
}

struct dcerpc_decode_login_info_ctr_r_state {
	TALLOC_CTX *out_mem_ctx;
};

static void dcerpc_decode_login_info_ctr_r_done(struct tevent_req *subreq);

struct tevent_req *dcerpc_decode_login_info_ctr_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct decode_login_info_ctr *r)
{
	struct tevent_req *req;
	struct dcerpc_decode_login_info_ctr_r_state *state;
	struct tevent_req *subreq;

	req = tevent_req_create(mem_ctx, &state,
				struct dcerpc_decode_login_info_ctr_r_state);
	if (req == NULL) {
		return NULL;
	}

	state->out_mem_ctx = NULL;

	subreq = dcerpc_binding_handle_call_send(state, ev, h,
			NULL, &ndr_table_krb5pac,
			NDR_DECODE_LOGIN_INFO_CTR, state, r);
	if (tevent_req_nomem(subreq, req)) {
		return tevent_req_post(req, ev);
	}
	tevent_req_set_callback(subreq, dcerpc_decode_login_info_ctr_r_done, req);

	return req;
}

static void dcerpc_decode_login_info_ctr_r_done(struct tevent_req *subreq)
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

NTSTATUS dcerpc_decode_login_info_ctr_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx)
{
	struct dcerpc_decode_login_info_ctr_r_state *state =
		tevent_req_data(req,
		struct dcerpc_decode_login_info_ctr_r_state);
	NTSTATUS status;

	if (tevent_req_is_nterror(req, &status)) {
		tevent_req_received(req);
		return status;
	}

	talloc_steal(mem_ctx, state->out_mem_ctx);

	tevent_req_received(req);
	return NT_STATUS_OK;
}

NTSTATUS dcerpc_decode_login_info_ctr_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct decode_login_info_ctr *r)
{
	NTSTATUS status;

	status = dcerpc_binding_handle_call(h,
			NULL, &ndr_table_krb5pac,
			NDR_DECODE_LOGIN_INFO_CTR, mem_ctx, r);

	return status;
}

struct dcerpc_decode_login_info_ctr_state {
	struct decode_login_info_ctr orig;
	struct decode_login_info_ctr tmp;
	TALLOC_CTX *out_mem_ctx;
};

static void dcerpc_decode_login_info_ctr_done(struct tevent_req *subreq);

struct tevent_req *dcerpc_decode_login_info_ctr_send(TALLOC_CTX *mem_ctx,
						     struct tevent_context *ev,
						     struct dcerpc_binding_handle *h,
						     struct PAC_LOGON_INFO_CTR _logon_info_ctr /* [in]  */)
{
	struct tevent_req *req;
	struct dcerpc_decode_login_info_ctr_state *state;
	struct tevent_req *subreq;

	req = tevent_req_create(mem_ctx, &state,
				struct dcerpc_decode_login_info_ctr_state);
	if (req == NULL) {
		return NULL;
	}
	state->out_mem_ctx = NULL;

	/* In parameters */
	state->orig.in.logon_info_ctr = _logon_info_ctr;

	/* Out parameters */

	/* make a temporary copy, that we pass to the dispatch function */
	state->tmp = state->orig;

	subreq = dcerpc_decode_login_info_ctr_r_send(state, ev, h, &state->tmp);
	if (tevent_req_nomem(subreq, req)) {
		return tevent_req_post(req, ev);
	}
	tevent_req_set_callback(subreq, dcerpc_decode_login_info_ctr_done, req);
	return req;
}

static void dcerpc_decode_login_info_ctr_done(struct tevent_req *subreq)
{
	struct tevent_req *req = tevent_req_callback_data(
		subreq, struct tevent_req);
	struct dcerpc_decode_login_info_ctr_state *state = tevent_req_data(
		req, struct dcerpc_decode_login_info_ctr_state);
	NTSTATUS status;
	TALLOC_CTX *mem_ctx;

	if (state->out_mem_ctx) {
		mem_ctx = state->out_mem_ctx;
	} else {
		mem_ctx = state;
	}

	status = dcerpc_decode_login_info_ctr_r_recv(subreq, mem_ctx);
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

NTSTATUS dcerpc_decode_login_info_ctr_recv(struct tevent_req *req,
					   TALLOC_CTX *mem_ctx)
{
	struct dcerpc_decode_login_info_ctr_state *state = tevent_req_data(
		req, struct dcerpc_decode_login_info_ctr_state);
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

NTSTATUS dcerpc_decode_login_info_ctr(struct dcerpc_binding_handle *h,
				      TALLOC_CTX *mem_ctx,
				      struct PAC_LOGON_INFO_CTR _logon_info_ctr /* [in]  */)
{
	struct decode_login_info_ctr r;
	NTSTATUS status;

	/* In parameters */
	r.in.logon_info_ctr = _logon_info_ctr;

	status = dcerpc_decode_login_info_ctr_r(h, mem_ctx, &r);
	if (!NT_STATUS_IS_OK(status)) {
		return status;
	}

	/* Return variables */

	/* Return result */

	return NT_STATUS_OK;
}

struct dcerpc_decode_pac_validate_r_state {
	TALLOC_CTX *out_mem_ctx;
};

static void dcerpc_decode_pac_validate_r_done(struct tevent_req *subreq);

struct tevent_req *dcerpc_decode_pac_validate_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct decode_pac_validate *r)
{
	struct tevent_req *req;
	struct dcerpc_decode_pac_validate_r_state *state;
	struct tevent_req *subreq;

	req = tevent_req_create(mem_ctx, &state,
				struct dcerpc_decode_pac_validate_r_state);
	if (req == NULL) {
		return NULL;
	}

	state->out_mem_ctx = NULL;

	subreq = dcerpc_binding_handle_call_send(state, ev, h,
			NULL, &ndr_table_krb5pac,
			NDR_DECODE_PAC_VALIDATE, state, r);
	if (tevent_req_nomem(subreq, req)) {
		return tevent_req_post(req, ev);
	}
	tevent_req_set_callback(subreq, dcerpc_decode_pac_validate_r_done, req);

	return req;
}

static void dcerpc_decode_pac_validate_r_done(struct tevent_req *subreq)
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

NTSTATUS dcerpc_decode_pac_validate_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx)
{
	struct dcerpc_decode_pac_validate_r_state *state =
		tevent_req_data(req,
		struct dcerpc_decode_pac_validate_r_state);
	NTSTATUS status;

	if (tevent_req_is_nterror(req, &status)) {
		tevent_req_received(req);
		return status;
	}

	talloc_steal(mem_ctx, state->out_mem_ctx);

	tevent_req_received(req);
	return NT_STATUS_OK;
}

NTSTATUS dcerpc_decode_pac_validate_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct decode_pac_validate *r)
{
	NTSTATUS status;

	status = dcerpc_binding_handle_call(h,
			NULL, &ndr_table_krb5pac,
			NDR_DECODE_PAC_VALIDATE, mem_ctx, r);

	return status;
}

struct dcerpc_decode_pac_validate_state {
	struct decode_pac_validate orig;
	struct decode_pac_validate tmp;
	TALLOC_CTX *out_mem_ctx;
};

static void dcerpc_decode_pac_validate_done(struct tevent_req *subreq);

struct tevent_req *dcerpc_decode_pac_validate_send(TALLOC_CTX *mem_ctx,
						   struct tevent_context *ev,
						   struct dcerpc_binding_handle *h,
						   struct PAC_Validate _pac_validate /* [in]  */)
{
	struct tevent_req *req;
	struct dcerpc_decode_pac_validate_state *state;
	struct tevent_req *subreq;

	req = tevent_req_create(mem_ctx, &state,
				struct dcerpc_decode_pac_validate_state);
	if (req == NULL) {
		return NULL;
	}
	state->out_mem_ctx = NULL;

	/* In parameters */
	state->orig.in.pac_validate = _pac_validate;

	/* Out parameters */

	/* make a temporary copy, that we pass to the dispatch function */
	state->tmp = state->orig;

	subreq = dcerpc_decode_pac_validate_r_send(state, ev, h, &state->tmp);
	if (tevent_req_nomem(subreq, req)) {
		return tevent_req_post(req, ev);
	}
	tevent_req_set_callback(subreq, dcerpc_decode_pac_validate_done, req);
	return req;
}

static void dcerpc_decode_pac_validate_done(struct tevent_req *subreq)
{
	struct tevent_req *req = tevent_req_callback_data(
		subreq, struct tevent_req);
	struct dcerpc_decode_pac_validate_state *state = tevent_req_data(
		req, struct dcerpc_decode_pac_validate_state);
	NTSTATUS status;
	TALLOC_CTX *mem_ctx;

	if (state->out_mem_ctx) {
		mem_ctx = state->out_mem_ctx;
	} else {
		mem_ctx = state;
	}

	status = dcerpc_decode_pac_validate_r_recv(subreq, mem_ctx);
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

NTSTATUS dcerpc_decode_pac_validate_recv(struct tevent_req *req,
					 TALLOC_CTX *mem_ctx)
{
	struct dcerpc_decode_pac_validate_state *state = tevent_req_data(
		req, struct dcerpc_decode_pac_validate_state);
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

NTSTATUS dcerpc_decode_pac_validate(struct dcerpc_binding_handle *h,
				    TALLOC_CTX *mem_ctx,
				    struct PAC_Validate _pac_validate /* [in]  */)
{
	struct decode_pac_validate r;
	NTSTATUS status;

	/* In parameters */
	r.in.pac_validate = _pac_validate;

	status = dcerpc_decode_pac_validate_r(h, mem_ctx, &r);
	if (!NT_STATUS_IS_OK(status)) {
		return status;
	}

	/* Return variables */

	/* Return result */

	return NT_STATUS_OK;
}

