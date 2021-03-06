/* header auto-generated by pidl */

#include "librpc/ndr/libndr.h"
#include "bin/default/librpc/gen_ndr/ioctl.h"

#ifndef _HEADER_NDR_copychunk
#define _HEADER_NDR_copychunk

#define NDR_COPYCHUNK_CALL_COUNT (0)
enum ndr_err_code ndr_push_req_resume_key_rsp(struct ndr_push *ndr, int ndr_flags, const struct req_resume_key_rsp *r);
enum ndr_err_code ndr_pull_req_resume_key_rsp(struct ndr_pull *ndr, int ndr_flags, struct req_resume_key_rsp *r);
void ndr_print_req_resume_key_rsp(struct ndr_print *ndr, const char *name, const struct req_resume_key_rsp *r);
void ndr_print_srv_copychunk(struct ndr_print *ndr, const char *name, const struct srv_copychunk *r);
enum ndr_err_code ndr_push_srv_copychunk_copy(struct ndr_push *ndr, int ndr_flags, const struct srv_copychunk_copy *r);
enum ndr_err_code ndr_pull_srv_copychunk_copy(struct ndr_pull *ndr, int ndr_flags, struct srv_copychunk_copy *r);
void ndr_print_srv_copychunk_copy(struct ndr_print *ndr, const char *name, const struct srv_copychunk_copy *r);
enum ndr_err_code ndr_push_srv_copychunk_rsp(struct ndr_push *ndr, int ndr_flags, const struct srv_copychunk_rsp *r);
enum ndr_err_code ndr_pull_srv_copychunk_rsp(struct ndr_pull *ndr, int ndr_flags, struct srv_copychunk_rsp *r);
void ndr_print_srv_copychunk_rsp(struct ndr_print *ndr, const char *name, const struct srv_copychunk_rsp *r);
enum ndr_err_code ndr_push_device_copy_offload_descriptor(struct ndr_push *ndr, int ndr_flags, const struct device_copy_offload_descriptor *r);
enum ndr_err_code ndr_pull_device_copy_offload_descriptor(struct ndr_pull *ndr, int ndr_flags, struct device_copy_offload_descriptor *r);
void ndr_print_device_copy_offload_descriptor(struct ndr_print *ndr, const char *name, const struct device_copy_offload_descriptor *r);
enum ndr_err_code ndr_push_storage_offload_token(struct ndr_push *ndr, int ndr_flags, const struct storage_offload_token *r);
enum ndr_err_code ndr_pull_storage_offload_token(struct ndr_pull *ndr, int ndr_flags, struct storage_offload_token *r);
void ndr_print_storage_offload_token(struct ndr_print *ndr, const char *name, const struct storage_offload_token *r);
enum ndr_err_code ndr_push_fsctl_offload_read_input(struct ndr_push *ndr, int ndr_flags, const struct fsctl_offload_read_input *r);
enum ndr_err_code ndr_pull_fsctl_offload_read_input(struct ndr_pull *ndr, int ndr_flags, struct fsctl_offload_read_input *r);
void ndr_print_fsctl_offload_read_input(struct ndr_print *ndr, const char *name, const struct fsctl_offload_read_input *r);
enum ndr_err_code ndr_push_fsctl_offload_read_output(struct ndr_push *ndr, int ndr_flags, const struct fsctl_offload_read_output *r);
enum ndr_err_code ndr_pull_fsctl_offload_read_output(struct ndr_pull *ndr, int ndr_flags, struct fsctl_offload_read_output *r);
void ndr_print_fsctl_offload_read_output(struct ndr_print *ndr, const char *name, const struct fsctl_offload_read_output *r);
enum ndr_err_code ndr_push_fsctl_offload_write_input(struct ndr_push *ndr, int ndr_flags, const struct fsctl_offload_write_input *r);
enum ndr_err_code ndr_pull_fsctl_offload_write_input(struct ndr_pull *ndr, int ndr_flags, struct fsctl_offload_write_input *r);
void ndr_print_fsctl_offload_write_input(struct ndr_print *ndr, const char *name, const struct fsctl_offload_write_input *r);
enum ndr_err_code ndr_push_fsctl_offload_write_output(struct ndr_push *ndr, int ndr_flags, const struct fsctl_offload_write_output *r);
enum ndr_err_code ndr_pull_fsctl_offload_write_output(struct ndr_pull *ndr, int ndr_flags, struct fsctl_offload_write_output *r);
void ndr_print_fsctl_offload_write_output(struct ndr_print *ndr, const char *name, const struct fsctl_offload_write_output *r);
#endif /* _HEADER_NDR_copychunk */
