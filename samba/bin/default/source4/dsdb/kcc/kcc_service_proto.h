#ifndef __DEFAULT_SOURCE4_DSDB_KCC_KCC_SERVICE_PROTO_H__
#define __DEFAULT_SOURCE4_DSDB_KCC_KCC_SERVICE_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

/* this file contains prototypes for functions that are private 
 * to this subsystem or library. These functions should not be 
 * used outside this particular subsystem! */


/* The following definitions come from ../source4/dsdb/kcc/kcc_service.c  */

NTSTATUS server_service_kcc_init(void);

/* The following definitions come from ../source4/dsdb/kcc/kcc_connection.c  */

void kccsrv_apply_connections(struct kccsrv_service *s,
			      struct kcc_connection_list *ntds_list,
			      struct kcc_connection_list *dsa_list);
struct kcc_connection_list *kccsrv_find_connections(struct kccsrv_service *s,
						    TALLOC_CTX *mem_ctx);

/* The following definitions come from ../source4/dsdb/kcc/kcc_topology.c  */


/**
 * computes an NC replica graph for each NC replica that "should be present" on
 * the local DC or "is present" on any DC in the same site as the local DC. for
 * each edge directed to an NC replica on such a DC from an NC replica on a DC
 * in another site, the KCC creates and nTDSConnection object to imply that edge
 * if one does not already exist.
 */
NTSTATUS kcctpl_test(struct kccsrv_service *service);

/* The following definitions come from ../source4/dsdb/kcc/kcc_deleted.c  */

NTSTATUS kccsrv_check_deleted(struct kccsrv_service *s, TALLOC_CTX *mem_ctx);

/* The following definitions come from ../source4/dsdb/kcc/kcc_periodic.c  */


/**
 * Force dreplsrv to update its state as topology is changed
 */
uint32_t kccsrv_replica_flags(struct kccsrv_service *s);
NTSTATUS kccsrv_add_repsFrom(struct kccsrv_service *s, TALLOC_CTX *mem_ctx,
			    struct repsFromToBlob *reps, uint32_t count,
			    struct ldb_result *res);
NTSTATUS kccsrv_simple_update(struct kccsrv_service *s, TALLOC_CTX *mem_ctx);
WERROR kccsrv_periodic_schedule(struct kccsrv_service *service, uint32_t next_interval);
NTSTATUS kccsrv_samba_kcc(struct kccsrv_service *service,
			TALLOC_CTX *ctxp);

/* The following definitions come from ../source4/dsdb/kcc/kcc_drs_replica_info.c  */

NTSTATUS kccdrs_replica_get_info(struct irpc_message *msg,
				 struct drsuapi_DsReplicaGetInfo *req);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __DEFAULT_SOURCE4_DSDB_KCC_KCC_SERVICE_PROTO_H__ */

