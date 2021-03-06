#ifndef __DEFAULT_SOURCE4_RPC_SERVER_SAMR_PROTO_H__
#define __DEFAULT_SOURCE4_RPC_SERVER_SAMR_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

/* this file contains prototypes for functions that are private 
 * to this subsystem or library. These functions should not be 
 * used outside this particular subsystem! */


/* The following definitions come from ../source4/rpc_server/samr/dcesrv_samr.c  */


/* The following definitions come from ../source4/rpc_server/samr/samr_password.c  */

NTSTATUS dcesrv_samr_ChangePasswordUser(struct dcesrv_call_state *dce_call,
					TALLOC_CTX *mem_ctx,
					struct samr_ChangePasswordUser *r);
NTSTATUS dcesrv_samr_OemChangePasswordUser2(struct dcesrv_call_state *dce_call,
					    TALLOC_CTX *mem_ctx,
					    struct samr_OemChangePasswordUser2 *r);
NTSTATUS dcesrv_samr_ChangePasswordUser3(struct dcesrv_call_state *dce_call,
					 TALLOC_CTX *mem_ctx,
					 struct samr_ChangePasswordUser3 *r);
NTSTATUS dcesrv_samr_ChangePasswordUser2(struct dcesrv_call_state *dce_call,
					 TALLOC_CTX *mem_ctx,
					 struct samr_ChangePasswordUser2 *r);
NTSTATUS samr_set_password(struct dcesrv_call_state *dce_call,
			   struct ldb_context *sam_ctx,
			   struct ldb_dn *account_dn, struct ldb_dn *domain_dn,
			   TALLOC_CTX *mem_ctx,
			   struct samr_CryptPassword *pwbuf);
NTSTATUS samr_set_password_ex(struct dcesrv_call_state *dce_call,
			      struct ldb_context *sam_ctx,
			      struct ldb_dn *account_dn,
			      struct ldb_dn *domain_dn,
			      TALLOC_CTX *mem_ctx,
			      struct samr_CryptPasswordEx *pwbuf);
NTSTATUS samr_set_password_buffers(struct dcesrv_call_state *dce_call,
				   struct ldb_context *sam_ctx,
				   struct ldb_dn *account_dn,
				   struct ldb_dn *domain_dn,
				   TALLOC_CTX *mem_ctx,
				   const uint8_t *lm_pwd_hash,
				   const uint8_t *nt_pwd_hash);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __DEFAULT_SOURCE4_RPC_SERVER_SAMR_PROTO_H__ */

