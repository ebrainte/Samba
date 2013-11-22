/* header auto-generated by pidl */

#include "librpc/ndr/libndr.h"
#include "bin/default/source3/librpc/gen_ndr/smbXsrv.h"

#ifndef _HEADER_NDR_smbXsrv
#define _HEADER_NDR_smbXsrv

#define NDR_SMBXSRV_UUID "07408340-ae31-11e1-97dc-539f7fddc06f"
#define NDR_SMBXSRV_VERSION 0.0
#define NDR_SMBXSRV_NAME "smbXsrv"
#define NDR_SMBXSRV_HELPSTRING "smbXsrv structures"
extern const struct ndr_interface_table ndr_table_smbXsrv;
#define NDR_SMBXSRV_VERSION_GLOBAL_DECODE (0x00)

#define NDR_SMBXSRV_SESSION_GLOBAL_DECODE (0x01)

#define NDR_SMBXSRV_SESSION_DECODE (0x02)

#define NDR_SMBXSRV_SESSION_CLOSE_DECODE (0x03)

#define NDR_SMBXSRV_TCON_GLOBAL_DECODE (0x04)

#define NDR_SMBXSRV_TCON_DECODE (0x05)

#define NDR_SMBXSRV_OPEN_GLOBAL_DECODE (0x06)

#define NDR_SMBXSRV_OPEN_DECODE (0x07)

#define NDR_SMBXSRV_CALL_COUNT (8)
void ndr_print_smbXsrv_version_values(struct ndr_print *ndr, const char *name, enum smbXsrv_version_values r);
void ndr_print_smbXsrv_version_node0(struct ndr_print *ndr, const char *name, const struct smbXsrv_version_node0 *r);
void ndr_print_smbXsrv_version_global0(struct ndr_print *ndr, const char *name, const struct smbXsrv_version_global0 *r);
void ndr_print_smbXsrv_version_globalU(struct ndr_print *ndr, const char *name, const union smbXsrv_version_globalU *r);
enum ndr_err_code ndr_push_smbXsrv_version_globalB(struct ndr_push *ndr, int ndr_flags, const struct smbXsrv_version_globalB *r);
enum ndr_err_code ndr_pull_smbXsrv_version_globalB(struct ndr_pull *ndr, int ndr_flags, struct smbXsrv_version_globalB *r);
void ndr_print_smbXsrv_version_globalB(struct ndr_print *ndr, const char *name, const struct smbXsrv_version_globalB *r);
void ndr_print_smbXsrv_channel_global0(struct ndr_print *ndr, const char *name, const struct smbXsrv_channel_global0 *r);
void ndr_print_smbXsrv_session_global0(struct ndr_print *ndr, const char *name, const struct smbXsrv_session_global0 *r);
void ndr_print_smbXsrv_session_globalU(struct ndr_print *ndr, const char *name, const union smbXsrv_session_globalU *r);
enum ndr_err_code ndr_push_smbXsrv_session_globalB(struct ndr_push *ndr, int ndr_flags, const struct smbXsrv_session_globalB *r);
enum ndr_err_code ndr_pull_smbXsrv_session_globalB(struct ndr_pull *ndr, int ndr_flags, struct smbXsrv_session_globalB *r);
void ndr_print_smbXsrv_session_globalB(struct ndr_print *ndr, const char *name, const struct smbXsrv_session_globalB *r);
void ndr_print_smbXsrv_session(struct ndr_print *ndr, const char *name, const struct smbXsrv_session *r);
void ndr_print_smbXsrv_sessionU(struct ndr_print *ndr, const char *name, const union smbXsrv_sessionU *r);
enum ndr_err_code ndr_push_smbXsrv_sessionB(struct ndr_push *ndr, int ndr_flags, const struct smbXsrv_sessionB *r);
enum ndr_err_code ndr_pull_smbXsrv_sessionB(struct ndr_pull *ndr, int ndr_flags, struct smbXsrv_sessionB *r);
void ndr_print_smbXsrv_sessionB(struct ndr_print *ndr, const char *name, const struct smbXsrv_sessionB *r);
void ndr_print_smbXsrv_session_close0(struct ndr_print *ndr, const char *name, const struct smbXsrv_session_close0 *r);
void ndr_print_smbXsrv_session_closeU(struct ndr_print *ndr, const char *name, const union smbXsrv_session_closeU *r);
enum ndr_err_code ndr_push_smbXsrv_session_closeB(struct ndr_push *ndr, int ndr_flags, const struct smbXsrv_session_closeB *r);
enum ndr_err_code ndr_pull_smbXsrv_session_closeB(struct ndr_pull *ndr, int ndr_flags, struct smbXsrv_session_closeB *r);
void ndr_print_smbXsrv_session_closeB(struct ndr_print *ndr, const char *name, const struct smbXsrv_session_closeB *r);
void ndr_print_smbXsrv_tcon_global0(struct ndr_print *ndr, const char *name, const struct smbXsrv_tcon_global0 *r);
void ndr_print_smbXsrv_tcon_globalU(struct ndr_print *ndr, const char *name, const union smbXsrv_tcon_globalU *r);
enum ndr_err_code ndr_push_smbXsrv_tcon_globalB(struct ndr_push *ndr, int ndr_flags, const struct smbXsrv_tcon_globalB *r);
enum ndr_err_code ndr_pull_smbXsrv_tcon_globalB(struct ndr_pull *ndr, int ndr_flags, struct smbXsrv_tcon_globalB *r);
void ndr_print_smbXsrv_tcon_globalB(struct ndr_print *ndr, const char *name, const struct smbXsrv_tcon_globalB *r);
void ndr_print_smbXsrv_tcon(struct ndr_print *ndr, const char *name, const struct smbXsrv_tcon *r);
void ndr_print_smbXsrv_tconU(struct ndr_print *ndr, const char *name, const union smbXsrv_tconU *r);
enum ndr_err_code ndr_push_smbXsrv_tconB(struct ndr_push *ndr, int ndr_flags, const struct smbXsrv_tconB *r);
enum ndr_err_code ndr_pull_smbXsrv_tconB(struct ndr_pull *ndr, int ndr_flags, struct smbXsrv_tconB *r);
void ndr_print_smbXsrv_tconB(struct ndr_print *ndr, const char *name, const struct smbXsrv_tconB *r);
void ndr_print_smbXsrv_open_global0(struct ndr_print *ndr, const char *name, const struct smbXsrv_open_global0 *r);
void ndr_print_smbXsrv_open_globalU(struct ndr_print *ndr, const char *name, const union smbXsrv_open_globalU *r);
enum ndr_err_code ndr_push_smbXsrv_open_globalB(struct ndr_push *ndr, int ndr_flags, const struct smbXsrv_open_globalB *r);
enum ndr_err_code ndr_pull_smbXsrv_open_globalB(struct ndr_pull *ndr, int ndr_flags, struct smbXsrv_open_globalB *r);
void ndr_print_smbXsrv_open_globalB(struct ndr_print *ndr, const char *name, const struct smbXsrv_open_globalB *r);
void ndr_print_smbXsrv_open(struct ndr_print *ndr, const char *name, const struct smbXsrv_open *r);
void ndr_print_smbXsrv_openU(struct ndr_print *ndr, const char *name, const union smbXsrv_openU *r);
enum ndr_err_code ndr_push_smbXsrv_openB(struct ndr_push *ndr, int ndr_flags, const struct smbXsrv_openB *r);
enum ndr_err_code ndr_pull_smbXsrv_openB(struct ndr_pull *ndr, int ndr_flags, struct smbXsrv_openB *r);
void ndr_print_smbXsrv_openB(struct ndr_print *ndr, const char *name, const struct smbXsrv_openB *r);
void ndr_print_smbXsrv_version_global_decode(struct ndr_print *ndr, const char *name, int flags, const struct smbXsrv_version_global_decode *r);
void ndr_print_smbXsrv_session_global_decode(struct ndr_print *ndr, const char *name, int flags, const struct smbXsrv_session_global_decode *r);
void ndr_print_smbXsrv_session_decode(struct ndr_print *ndr, const char *name, int flags, const struct smbXsrv_session_decode *r);
void ndr_print_smbXsrv_session_close_decode(struct ndr_print *ndr, const char *name, int flags, const struct smbXsrv_session_close_decode *r);
void ndr_print_smbXsrv_tcon_global_decode(struct ndr_print *ndr, const char *name, int flags, const struct smbXsrv_tcon_global_decode *r);
void ndr_print_smbXsrv_tcon_decode(struct ndr_print *ndr, const char *name, int flags, const struct smbXsrv_tcon_decode *r);
void ndr_print_smbXsrv_open_global_decode(struct ndr_print *ndr, const char *name, int flags, const struct smbXsrv_open_global_decode *r);
void ndr_print_smbXsrv_open_decode(struct ndr_print *ndr, const char *name, int flags, const struct smbXsrv_open_decode *r);
#endif /* _HEADER_NDR_smbXsrv */
