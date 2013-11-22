/* header auto-generated by pidl */

#include "librpc/ndr/libndr.h"
#include "autoconf/librpc/gen_ndr/perfcount.h"

#ifndef _HEADER_NDR_perfcount
#define _HEADER_NDR_perfcount

#define NDR_PERFCOUNT_CALL_COUNT (0)
void ndr_print_SYSTEMTIME(struct ndr_print *ndr, const char *name, const struct SYSTEMTIME *r);
enum ndr_err_code ndr_push_PERF_COUNTER_DEFINITION(struct ndr_push *ndr, int ndr_flags, const struct PERF_COUNTER_DEFINITION *r);
enum ndr_err_code ndr_pull_PERF_COUNTER_DEFINITION(struct ndr_pull *ndr, int ndr_flags, struct PERF_COUNTER_DEFINITION *r);
void ndr_print_PERF_COUNTER_DEFINITION(struct ndr_print *ndr, const char *name, const struct PERF_COUNTER_DEFINITION *r);
enum ndr_err_code ndr_push_PERF_COUNTER_BLOCK(struct ndr_push *ndr, int ndr_flags, const struct PERF_COUNTER_BLOCK *r);
enum ndr_err_code ndr_pull_PERF_COUNTER_BLOCK(struct ndr_pull *ndr, int ndr_flags, struct PERF_COUNTER_BLOCK *r);
void ndr_print_PERF_COUNTER_BLOCK(struct ndr_print *ndr, const char *name, const struct PERF_COUNTER_BLOCK *r);
enum ndr_err_code ndr_push_PERF_INSTANCE_DEFINITION(struct ndr_push *ndr, int ndr_flags, const struct PERF_INSTANCE_DEFINITION *r);
enum ndr_err_code ndr_pull_PERF_INSTANCE_DEFINITION(struct ndr_pull *ndr, int ndr_flags, struct PERF_INSTANCE_DEFINITION *r);
void ndr_print_PERF_INSTANCE_DEFINITION(struct ndr_print *ndr, const char *name, const struct PERF_INSTANCE_DEFINITION *r);
enum ndr_err_code ndr_push_PERF_OBJECT_TYPE(struct ndr_push *ndr, int ndr_flags, const struct PERF_OBJECT_TYPE *r);
enum ndr_err_code ndr_pull_PERF_OBJECT_TYPE(struct ndr_pull *ndr, int ndr_flags, struct PERF_OBJECT_TYPE *r);
void ndr_print_PERF_OBJECT_TYPE(struct ndr_print *ndr, const char *name, const struct PERF_OBJECT_TYPE *r);
enum ndr_err_code ndr_push_PERF_DATA_BLOCK(struct ndr_push *ndr, int ndr_flags, const struct PERF_DATA_BLOCK *r);
enum ndr_err_code ndr_pull_PERF_DATA_BLOCK(struct ndr_pull *ndr, int ndr_flags, struct PERF_DATA_BLOCK *r);
void ndr_print_PERF_DATA_BLOCK(struct ndr_print *ndr, const char *name, const struct PERF_DATA_BLOCK *r);
#endif /* _HEADER_NDR_perfcount */
