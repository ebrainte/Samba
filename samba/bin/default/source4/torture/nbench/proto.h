#ifndef __DEFAULT_SOURCE4_TORTURE_NBENCH_PROTO_H__
#define __DEFAULT_SOURCE4_TORTURE_NBENCH_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

/* this file contains prototypes for functions that are private 
 * to this subsystem or library. These functions should not be 
 * used outside this particular subsystem! */


/* The following definitions come from ../source4/torture/nbench/nbio.c  */

bool nb_reconnect(struct smbcli_state **cli, struct torture_context *tctx, int client);
void nbio_target_rate(double rate);
void nbio_time_reset(void);
void nbio_time_delay(double targett);
double nbio_result(void);
double nbio_latency(void);
bool nb_tick(void);
void nb_alarm(int sig);
void nbio_shmem(int n, int t_timelimit, int t_warmup);
void nb_setup(struct smbcli_state *cli, int id);
bool nb_unlink(const char *fname, int attr, NTSTATUS status, bool retry);
bool nb_createx(const char *fname, 
	       unsigned int create_options, unsigned int create_disposition, int handle,
	       NTSTATUS status);
bool nb_writex(int handle, off_t offset, int size, int ret_size, NTSTATUS status);
bool nb_write(int handle, off_t offset, int size, int ret_size, NTSTATUS status);
bool nb_lockx(int handle, off_t offset, int size, NTSTATUS status);
bool nb_unlockx(int handle, unsigned int offset, int size, NTSTATUS status);
bool nb_readx(int handle, off_t offset, int size, int ret_size, NTSTATUS status);
bool nb_close(int handle, NTSTATUS status);
bool nb_rmdir(const char *dname, NTSTATUS status, bool retry);
bool nb_mkdir(const char *dname, NTSTATUS status, bool retry);
bool nb_rename(const char *o, const char *n, NTSTATUS status, bool retry);
bool nb_qpathinfo(const char *fname, int level, NTSTATUS status);
bool nb_qfileinfo(int fnum, int level, NTSTATUS status);
bool nb_sfileinfo(int fnum, int level, NTSTATUS status);
bool nb_qfsinfo(int level, NTSTATUS status);
bool nb_findfirst(const char *mask, int level, int maxcnt, int count, NTSTATUS status);
bool nb_flush(int fnum, NTSTATUS status);
void nb_sleep(int usec, NTSTATUS status);
bool nb_deltree(const char *dname, bool retry);
void nb_exit(int status);

/* The following definitions come from ../source4/torture/nbench/nbench.c  */

bool torture_nbench(struct torture_context *torture);
NTSTATUS torture_nbench_init(void);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __DEFAULT_SOURCE4_TORTURE_NBENCH_PROTO_H__ */
