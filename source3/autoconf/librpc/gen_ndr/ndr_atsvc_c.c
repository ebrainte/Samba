/* client functions auto-generated by pidl */

#include "includes.h"
#include <tevent.h>
#include "lib/util/tevent_ntstatus.h"
#include "autoconf/librpc/gen_ndr/ndr_atsvc.h"
#include "autoconf/librpc/gen_ndr/ndr_atsvc_c.h"

/* atsvc - client functions generated by pidl */

struct dcerpc_atsvc_JobAdd_r_state {
	TALLOC_CTX *out_mem_ctx;
};

static void dcerpc_atsvc_JobAdd_r_done(struct tevent_req *subreq);

struct tevent_req *dcerpc_atsvc_JobAdd_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct atsvc_JobAdd *r)
{
	struct tevent_req *req;
	struct dcerpc_atsvc_JobAdd_r_state *state;
	struct tevent_req *subreq;

	req = tevent_req_create(mem_ctx, &state,
				struct dcerpc_atsvc_JobAdd_r_state);
	if (req == NULL) {
		return NULL;
	}

	state->out_mem_ctx = talloc_new(state);
	if (tevent_req_nomem(state->out_mem_ctx, req)) {
		return tevent_req_post(req, ev);
	}

	subreq = dcerpc_binding_handle_call_send(state, ev, h,
			NULL, &ndr_table_atsvc,
			NDR_ATSVC_JOBADD, state->out_mem_ctx, r);
	if (tevent_req_nomem(subreq, req)) {
		return tevent_req_post(req, ev);
	}
	tevent_req_set_callback(subreq, dcerpc_atsvc_JobAdd_r_done, req);

	return req;
}

static void dcerpc_atsvc_JobAdd_r_done(struct tevent_req *subreq)
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

NTSTATUS dcerpc_atsvc_JobAdd_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx)
{
	struct dcerpc_atsvc_JobAdd_r_state *state =
		tevent_req_data(req,
		struct dcerpc_atsvc_JobAdd_r_state);
	NTSTATUS status;

	if (tevent_req_is_nterror(req, &status)) {
		tevent_req_received(req);
		return status;
	}

	talloc_steal(mem_ctx, state->out_mem_ctx);

	tevent_req_received(req);
	return NT_STATUS_OK;
}

NTSTATUS dcerpc_atsvc_JobAdd_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct atsvc_JobAdd *r)
{
	NTSTATUS status;

	status = dcerpc_binding_handle_call(h,
			NULL, &ndr_table_atsvc,
			NDR_ATSVC_JOBADD, mem_ctx, r);

	return status;
}

struct dcerpc_atsvc_JobAdd_state {
	struct atsvc_JobAdd orig;
	struct atsvc_JobAdd tmp;
	TALLOC_CTX *out_mem_ctx;
};

static void dcerpc_atsvc_JobAdd_done(struct tevent_req *subreq);

struct tevent_req *dcerpc_atsvc_JobAdd_send(TALLOC_CTX *mem_ctx,
					    struct tevent_context *ev,
					    struct dcerpc_binding_handle *h,
					    const char *_servername /* [in] [unique,charset(UTF16)] */,
					    struct atsvc_JobInfo *_job_info /* [in] [ref] */,
					    uint32_t *_job_id /* [out] [ref] */)
{
	struct tevent_req *req;
	struct dcerpc_atsvc_JobAdd_state *state;
	struct tevent_req *subreq;

	req = tevent_req_create(mem_ctx, &state,
				struct dcerpc_atsvc_JobAdd_state);
	if (req == NULL) {
		return NULL;
	}
	state->out_mem_ctx = NULL;

	/* In parameters */
	state->orig.in.servername = _servername;
	state->orig.in.job_info = _job_info;

	/* Out parameters */
	state->orig.out.job_id = _job_id;

	/* Result */
	ZERO_STRUCT(state->orig.out.result);

	state->out_mem_ctx = talloc_named_const(state, 0,
			     "dcerpc_atsvc_JobAdd_out_memory");
	if (tevent_req_nomem(state->out_mem_ctx, req)) {
		return tevent_req_post(req, ev);
	}

	/* make a temporary copy, that we pass to the dispatch function */
	state->tmp = state->orig;

	subreq = dcerpc_atsvc_JobAdd_r_send(state, ev, h, &state->tmp);
	if (tevent_req_nomem(subreq, req)) {
		return tevent_req_post(req, ev);
	}
	tevent_req_set_callback(subreq, dcerpc_atsvc_JobAdd_done, req);
	return req;
}

static void dcerpc_atsvc_JobAdd_done(struct tevent_req *subreq)
{
	struct tevent_req *req = tevent_req_callback_data(
		subreq, struct tevent_req);
	struct dcerpc_atsvc_JobAdd_state *state = tevent_req_data(
		req, struct dcerpc_atsvc_JobAdd_state);
	NTSTATUS status;
	TALLOC_CTX *mem_ctx;

	if (state->out_mem_ctx) {
		mem_ctx = state->out_mem_ctx;
	} else {
		mem_ctx = state;
	}

	status = dcerpc_atsvc_JobAdd_r_recv(subreq, mem_ctx);
	TALLOC_FREE(subreq);
	if (!NT_STATUS_IS_OK(status)) {
		tevent_req_nterror(req, status);
		return;
	}

	/* Copy out parameters */
	*state->orig.out.job_id = *state->tmp.out.job_id;

	/* Copy result */
	state->orig.out.result = state->tmp.out.result;

	/* Reset temporary structure */
	ZERO_STRUCT(state->tmp);

	tevent_req_done(req);
}

NTSTATUS dcerpc_atsvc_JobAdd_recv(struct tevent_req *req,
				  TALLOC_CTX *mem_ctx,
				  NTSTATUS *result)
{
	struct dcerpc_atsvc_JobAdd_state *state = tevent_req_data(
		req, struct dcerpc_atsvc_JobAdd_state);
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

NTSTATUS dcerpc_atsvc_JobAdd(struct dcerpc_binding_handle *h,
			     TALLOC_CTX *mem_ctx,
			     const char *_servername /* [in] [unique,charset(UTF16)] */,
			     struct atsvc_JobInfo *_job_info /* [in] [ref] */,
			     uint32_t *_job_id /* [out] [ref] */,
			     NTSTATUS *result)
{
	struct atsvc_JobAdd r;
	NTSTATUS status;

	/* In parameters */
	r.in.servername = _servername;
	r.in.job_info = _job_info;

	status = dcerpc_atsvc_JobAdd_r(h, mem_ctx, &r);
	if (!NT_STATUS_IS_OK(status)) {
		return status;
	}

	/* Return variables */
	*_job_id = *r.out.job_id;

	/* Return result */
	*result = r.out.result;

	return NT_STATUS_OK;
}

struct dcerpc_atsvc_JobDel_r_state {
	TALLOC_CTX *out_mem_ctx;
};

static void dcerpc_atsvc_JobDel_r_done(struct tevent_req *subreq);

struct tevent_req *dcerpc_atsvc_JobDel_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct atsvc_JobDel *r)
{
	struct tevent_req *req;
	struct dcerpc_atsvc_JobDel_r_state *state;
	struct tevent_req *subreq;

	req = tevent_req_create(mem_ctx, &state,
				struct dcerpc_atsvc_JobDel_r_state);
	if (req == NULL) {
		return NULL;
	}

	state->out_mem_ctx = NULL;

	subreq = dcerpc_binding_handle_call_send(state, ev, h,
			NULL, &ndr_table_atsvc,
			NDR_ATSVC_JOBDEL, state, r);
	if (tevent_req_nomem(subreq, req)) {
		return tevent_req_post(req, ev);
	}
	tevent_req_set_callback(subreq, dcerpc_atsvc_JobDel_r_done, req);

	return req;
}

static void dcerpc_atsvc_JobDel_r_done(struct tevent_req *subreq)
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

NTSTATUS dcerpc_atsvc_JobDel_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx)
{
	struct dcerpc_atsvc_JobDel_r_state *state =
		tevent_req_data(req,
		struct dcerpc_atsvc_JobDel_r_state);
	NTSTATUS status;

	if (tevent_req_is_nterror(req, &status)) {
		tevent_req_received(req);
		return status;
	}

	talloc_steal(mem_ctx, state->out_mem_ctx);

	tevent_req_received(req);
	return NT_STATUS_OK;
}

NTSTATUS dcerpc_atsvc_JobDel_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct atsvc_JobDel *r)
{
	NTSTATUS status;

	status = dcerpc_binding_handle_call(h,
			NULL, &ndr_table_atsvc,
			NDR_ATSVC_JOBDEL, mem_ctx, r);

	return status;
}

struct dcerpc_atsvc_JobDel_state {
	struct atsvc_JobDel orig;
	struct atsvc_JobDel tmp;
	TALLOC_CTX *out_mem_ctx;
};

static void dcerpc_atsvc_JobDel_done(struct tevent_req *subreq);

struct tevent_req *dcerpc_atsvc_JobDel_send(TALLOC_CTX *mem_ctx,
					    struct tevent_context *ev,
					    struct dcerpc_binding_handle *h,
					    const char *_servername /* [in] [unique,charset(UTF16)] */,
					    uint32_t _min_job_id /* [in]  */,
					    uint32_t _max_job_id /* [in]  */)
{
	struct tevent_req *req;
	struct dcerpc_atsvc_JobDel_state *state;
	struct tevent_req *subreq;

	req = tevent_req_create(mem_ctx, &state,
				struct dcerpc_atsvc_JobDel_state);
	if (req == NULL) {
		return NULL;
	}
	state->out_mem_ctx = NULL;

	/* In parameters */
	state->orig.in.servername = _servername;
	state->orig.in.min_job_id = _min_job_id;
	state->orig.in.max_job_id = _max_job_id;

	/* Out parameters */

	/* Result */
	ZERO_STRUCT(state->orig.out.result);

	/* make a temporary copy, that we pass to the dispatch function */
	state->tmp = state->orig;

	subreq = dcerpc_atsvc_JobDel_r_send(state, ev, h, &state->tmp);
	if (tevent_req_nomem(subreq, req)) {
		return tevent_req_post(req, ev);
	}
	tevent_req_set_callback(subreq, dcerpc_atsvc_JobDel_done, req);
	return req;
}

static void dcerpc_atsvc_JobDel_done(struct tevent_req *subreq)
{
	struct tevent_req *req = tevent_req_callback_data(
		subreq, struct tevent_req);
	struct dcerpc_atsvc_JobDel_state *state = tevent_req_data(
		req, struct dcerpc_atsvc_JobDel_state);
	NTSTATUS status;
	TALLOC_CTX *mem_ctx;

	if (state->out_mem_ctx) {
		mem_ctx = state->out_mem_ctx;
	} else {
		mem_ctx = state;
	}

	status = dcerpc_atsvc_JobDel_r_recv(subreq, mem_ctx);
	TALLOC_FREE(subreq);
	if (!NT_STATUS_IS_OK(status)) {
		tevent_req_nterror(req, status);
		return;
	}

	/* Copy out parameters */

	/* Copy result */
	state->orig.out.result = state->tmp.out.result;

	/* Reset temporary structure */
	ZERO_STRUCT(state->tmp);

	tevent_req_done(req);
}

NTSTATUS dcerpc_atsvc_JobDel_recv(struct tevent_req *req,
				  TALLOC_CTX *mem_ctx,
				  NTSTATUS *result)
{
	struct dcerpc_atsvc_JobDel_state *state = tevent_req_data(
		req, struct dcerpc_atsvc_JobDel_state);
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

NTSTATUS dcerpc_atsvc_JobDel(struct dcerpc_binding_handle *h,
			     TALLOC_CTX *mem_ctx,
			     const char *_servername /* [in] [unique,charset(UTF16)] */,
			     uint32_t _min_job_id /* [in]  */,
			     uint32_t _max_job_id /* [in]  */,
			     NTSTATUS *result)
{
	struct atsvc_JobDel r;
	NTSTATUS status;

	/* In parameters */
	r.in.servername = _servername;
	r.in.min_job_id = _min_job_id;
	r.in.max_job_id = _max_job_id;

	status = dcerpc_atsvc_JobDel_r(h, mem_ctx, &r);
	if (!NT_STATUS_IS_OK(status)) {
		return status;
	}

	/* Return variables */

	/* Return result */
	*result = r.out.result;

	return NT_STATUS_OK;
}

struct dcerpc_atsvc_JobEnum_r_state {
	TALLOC_CTX *out_mem_ctx;
};

static void dcerpc_atsvc_JobEnum_r_done(struct tevent_req *subreq);

struct tevent_req *dcerpc_atsvc_JobEnum_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct atsvc_JobEnum *r)
{
	struct tevent_req *req;
	struct dcerpc_atsvc_JobEnum_r_state *state;
	struct tevent_req *subreq;

	req = tevent_req_create(mem_ctx, &state,
				struct dcerpc_atsvc_JobEnum_r_state);
	if (req == NULL) {
		return NULL;
	}

	state->out_mem_ctx = talloc_new(state);
	if (tevent_req_nomem(state->out_mem_ctx, req)) {
		return tevent_req_post(req, ev);
	}

	subreq = dcerpc_binding_handle_call_send(state, ev, h,
			NULL, &ndr_table_atsvc,
			NDR_ATSVC_JOBENUM, state->out_mem_ctx, r);
	if (tevent_req_nomem(subreq, req)) {
		return tevent_req_post(req, ev);
	}
	tevent_req_set_callback(subreq, dcerpc_atsvc_JobEnum_r_done, req);

	return req;
}

static void dcerpc_atsvc_JobEnum_r_done(struct tevent_req *subreq)
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

NTSTATUS dcerpc_atsvc_JobEnum_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx)
{
	struct dcerpc_atsvc_JobEnum_r_state *state =
		tevent_req_data(req,
		struct dcerpc_atsvc_JobEnum_r_state);
	NTSTATUS status;

	if (tevent_req_is_nterror(req, &status)) {
		tevent_req_received(req);
		return status;
	}

	talloc_steal(mem_ctx, state->out_mem_ctx);

	tevent_req_received(req);
	return NT_STATUS_OK;
}

NTSTATUS dcerpc_atsvc_JobEnum_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct atsvc_JobEnum *r)
{
	NTSTATUS status;

	status = dcerpc_binding_handle_call(h,
			NULL, &ndr_table_atsvc,
			NDR_ATSVC_JOBENUM, mem_ctx, r);

	return status;
}

struct dcerpc_atsvc_JobEnum_state {
	struct atsvc_JobEnum orig;
	struct atsvc_JobEnum tmp;
	TALLOC_CTX *out_mem_ctx;
};

static void dcerpc_atsvc_JobEnum_done(struct tevent_req *subreq);

struct tevent_req *dcerpc_atsvc_JobEnum_send(TALLOC_CTX *mem_ctx,
					     struct tevent_context *ev,
					     struct dcerpc_binding_handle *h,
					     const char *_servername /* [in] [unique,charset(UTF16)] */,
					     struct atsvc_enum_ctr *_ctr /* [in,out] [ref] */,
					     uint32_t _preferred_max_len /* [in]  */,
					     uint32_t *_total_entries /* [out] [ref] */,
					     uint32_t *_resume_handle /* [in,out] [unique] */)
{
	struct tevent_req *req;
	struct dcerpc_atsvc_JobEnum_state *state;
	struct tevent_req *subreq;

	req = tevent_req_create(mem_ctx, &state,
				struct dcerpc_atsvc_JobEnum_state);
	if (req == NULL) {
		return NULL;
	}
	state->out_mem_ctx = NULL;

	/* In parameters */
	state->orig.in.servername = _servername;
	state->orig.in.ctr = _ctr;
	state->orig.in.preferred_max_len = _preferred_max_len;
	state->orig.in.resume_handle = _resume_handle;

	/* Out parameters */
	state->orig.out.ctr = _ctr;
	state->orig.out.total_entries = _total_entries;
	state->orig.out.resume_handle = _resume_handle;

	/* Result */
	ZERO_STRUCT(state->orig.out.result);

	state->out_mem_ctx = talloc_named_const(state, 0,
			     "dcerpc_atsvc_JobEnum_out_memory");
	if (tevent_req_nomem(state->out_mem_ctx, req)) {
		return tevent_req_post(req, ev);
	}

	/* make a temporary copy, that we pass to the dispatch function */
	state->tmp = state->orig;

	subreq = dcerpc_atsvc_JobEnum_r_send(state, ev, h, &state->tmp);
	if (tevent_req_nomem(subreq, req)) {
		return tevent_req_post(req, ev);
	}
	tevent_req_set_callback(subreq, dcerpc_atsvc_JobEnum_done, req);
	return req;
}

static void dcerpc_atsvc_JobEnum_done(struct tevent_req *subreq)
{
	struct tevent_req *req = tevent_req_callback_data(
		subreq, struct tevent_req);
	struct dcerpc_atsvc_JobEnum_state *state = tevent_req_data(
		req, struct dcerpc_atsvc_JobEnum_state);
	NTSTATUS status;
	TALLOC_CTX *mem_ctx;

	if (state->out_mem_ctx) {
		mem_ctx = state->out_mem_ctx;
	} else {
		mem_ctx = state;
	}

	status = dcerpc_atsvc_JobEnum_r_recv(subreq, mem_ctx);
	TALLOC_FREE(subreq);
	if (!NT_STATUS_IS_OK(status)) {
		tevent_req_nterror(req, status);
		return;
	}

	/* Copy out parameters */
	*state->orig.out.ctr = *state->tmp.out.ctr;
	*state->orig.out.total_entries = *state->tmp.out.total_entries;
	if (state->orig.out.resume_handle && state->tmp.out.resume_handle) {
		*state->orig.out.resume_handle = *state->tmp.out.resume_handle;
	}

	/* Copy result */
	state->orig.out.result = state->tmp.out.result;

	/* Reset temporary structure */
	ZERO_STRUCT(state->tmp);

	tevent_req_done(req);
}

NTSTATUS dcerpc_atsvc_JobEnum_recv(struct tevent_req *req,
				   TALLOC_CTX *mem_ctx,
				   NTSTATUS *result)
{
	struct dcerpc_atsvc_JobEnum_state *state = tevent_req_data(
		req, struct dcerpc_atsvc_JobEnum_state);
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

NTSTATUS dcerpc_atsvc_JobEnum(struct dcerpc_binding_handle *h,
			      TALLOC_CTX *mem_ctx,
			      const char *_servername /* [in] [unique,charset(UTF16)] */,
			      struct atsvc_enum_ctr *_ctr /* [in,out] [ref] */,
			      uint32_t _preferred_max_len /* [in]  */,
			      uint32_t *_total_entries /* [out] [ref] */,
			      uint32_t *_resume_handle /* [in,out] [unique] */,
			      NTSTATUS *result)
{
	struct atsvc_JobEnum r;
	NTSTATUS status;

	/* In parameters */
	r.in.servername = _servername;
	r.in.ctr = _ctr;
	r.in.preferred_max_len = _preferred_max_len;
	r.in.resume_handle = _resume_handle;

	status = dcerpc_atsvc_JobEnum_r(h, mem_ctx, &r);
	if (!NT_STATUS_IS_OK(status)) {
		return status;
	}

	/* Return variables */
	*_ctr = *r.out.ctr;
	*_total_entries = *r.out.total_entries;
	if (_resume_handle && r.out.resume_handle) {
		*_resume_handle = *r.out.resume_handle;
	}

	/* Return result */
	*result = r.out.result;

	return NT_STATUS_OK;
}

struct dcerpc_atsvc_JobGetInfo_r_state {
	TALLOC_CTX *out_mem_ctx;
};

static void dcerpc_atsvc_JobGetInfo_r_done(struct tevent_req *subreq);

struct tevent_req *dcerpc_atsvc_JobGetInfo_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct atsvc_JobGetInfo *r)
{
	struct tevent_req *req;
	struct dcerpc_atsvc_JobGetInfo_r_state *state;
	struct tevent_req *subreq;

	req = tevent_req_create(mem_ctx, &state,
				struct dcerpc_atsvc_JobGetInfo_r_state);
	if (req == NULL) {
		return NULL;
	}

	state->out_mem_ctx = talloc_new(state);
	if (tevent_req_nomem(state->out_mem_ctx, req)) {
		return tevent_req_post(req, ev);
	}

	subreq = dcerpc_binding_handle_call_send(state, ev, h,
			NULL, &ndr_table_atsvc,
			NDR_ATSVC_JOBGETINFO, state->out_mem_ctx, r);
	if (tevent_req_nomem(subreq, req)) {
		return tevent_req_post(req, ev);
	}
	tevent_req_set_callback(subreq, dcerpc_atsvc_JobGetInfo_r_done, req);

	return req;
}

static void dcerpc_atsvc_JobGetInfo_r_done(struct tevent_req *subreq)
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

NTSTATUS dcerpc_atsvc_JobGetInfo_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx)
{
	struct dcerpc_atsvc_JobGetInfo_r_state *state =
		tevent_req_data(req,
		struct dcerpc_atsvc_JobGetInfo_r_state);
	NTSTATUS status;

	if (tevent_req_is_nterror(req, &status)) {
		tevent_req_received(req);
		return status;
	}

	talloc_steal(mem_ctx, state->out_mem_ctx);

	tevent_req_received(req);
	return NT_STATUS_OK;
}

NTSTATUS dcerpc_atsvc_JobGetInfo_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct atsvc_JobGetInfo *r)
{
	NTSTATUS status;

	status = dcerpc_binding_handle_call(h,
			NULL, &ndr_table_atsvc,
			NDR_ATSVC_JOBGETINFO, mem_ctx, r);

	return status;
}

struct dcerpc_atsvc_JobGetInfo_state {
	struct atsvc_JobGetInfo orig;
	struct atsvc_JobGetInfo tmp;
	TALLOC_CTX *out_mem_ctx;
};

static void dcerpc_atsvc_JobGetInfo_done(struct tevent_req *subreq);

struct tevent_req *dcerpc_atsvc_JobGetInfo_send(TALLOC_CTX *mem_ctx,
						struct tevent_context *ev,
						struct dcerpc_binding_handle *h,
						const char *_servername /* [in] [unique,charset(UTF16)] */,
						uint32_t _job_id /* [in]  */,
						struct atsvc_JobInfo **_job_info /* [out] [ref] */)
{
	struct tevent_req *req;
	struct dcerpc_atsvc_JobGetInfo_state *state;
	struct tevent_req *subreq;

	req = tevent_req_create(mem_ctx, &state,
				struct dcerpc_atsvc_JobGetInfo_state);
	if (req == NULL) {
		return NULL;
	}
	state->out_mem_ctx = NULL;

	/* In parameters */
	state->orig.in.servername = _servername;
	state->orig.in.job_id = _job_id;

	/* Out parameters */
	state->orig.out.job_info = _job_info;

	/* Result */
	ZERO_STRUCT(state->orig.out.result);

	state->out_mem_ctx = talloc_named_const(state, 0,
			     "dcerpc_atsvc_JobGetInfo_out_memory");
	if (tevent_req_nomem(state->out_mem_ctx, req)) {
		return tevent_req_post(req, ev);
	}

	/* make a temporary copy, that we pass to the dispatch function */
	state->tmp = state->orig;

	subreq = dcerpc_atsvc_JobGetInfo_r_send(state, ev, h, &state->tmp);
	if (tevent_req_nomem(subreq, req)) {
		return tevent_req_post(req, ev);
	}
	tevent_req_set_callback(subreq, dcerpc_atsvc_JobGetInfo_done, req);
	return req;
}

static void dcerpc_atsvc_JobGetInfo_done(struct tevent_req *subreq)
{
	struct tevent_req *req = tevent_req_callback_data(
		subreq, struct tevent_req);
	struct dcerpc_atsvc_JobGetInfo_state *state = tevent_req_data(
		req, struct dcerpc_atsvc_JobGetInfo_state);
	NTSTATUS status;
	TALLOC_CTX *mem_ctx;

	if (state->out_mem_ctx) {
		mem_ctx = state->out_mem_ctx;
	} else {
		mem_ctx = state;
	}

	status = dcerpc_atsvc_JobGetInfo_r_recv(subreq, mem_ctx);
	TALLOC_FREE(subreq);
	if (!NT_STATUS_IS_OK(status)) {
		tevent_req_nterror(req, status);
		return;
	}

	/* Copy out parameters */
	*state->orig.out.job_info = *state->tmp.out.job_info;

	/* Copy result */
	state->orig.out.result = state->tmp.out.result;

	/* Reset temporary structure */
	ZERO_STRUCT(state->tmp);

	tevent_req_done(req);
}

NTSTATUS dcerpc_atsvc_JobGetInfo_recv(struct tevent_req *req,
				      TALLOC_CTX *mem_ctx,
				      NTSTATUS *result)
{
	struct dcerpc_atsvc_JobGetInfo_state *state = tevent_req_data(
		req, struct dcerpc_atsvc_JobGetInfo_state);
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

NTSTATUS dcerpc_atsvc_JobGetInfo(struct dcerpc_binding_handle *h,
				 TALLOC_CTX *mem_ctx,
				 const char *_servername /* [in] [unique,charset(UTF16)] */,
				 uint32_t _job_id /* [in]  */,
				 struct atsvc_JobInfo **_job_info /* [out] [ref] */,
				 NTSTATUS *result)
{
	struct atsvc_JobGetInfo r;
	NTSTATUS status;

	/* In parameters */
	r.in.servername = _servername;
	r.in.job_id = _job_id;

	status = dcerpc_atsvc_JobGetInfo_r(h, mem_ctx, &r);
	if (!NT_STATUS_IS_OK(status)) {
		return status;
	}

	/* Return variables */
	*_job_info = *r.out.job_info;

	/* Return result */
	*result = r.out.result;

	return NT_STATUS_OK;
}

