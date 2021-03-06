#ifndef __DEFAULT_SOURCE4_TORTURE_LIBNET_PROTO_H__
#define __DEFAULT_SOURCE4_TORTURE_LIBNET_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

/* this file contains prototypes for functions that are private 
 * to this subsystem or library. These functions should not be 
 * used outside this particular subsystem! */


/* The following definitions come from ../source4/torture/libnet/libnet.c  */

NTSTATUS torture_net_init(void);

/* The following definitions come from ../source4/torture/libnet/utils.c  */


/**
 * Opens handle on Domain using SAMR
 *
 * @param _domain_handle [out] Ptr to storage to store Domain handle
 * @param _dom_sid [out] If NULL, Domain SID won't be returned
 */
bool test_domain_open(struct torture_context *tctx,
		      struct dcerpc_binding_handle *b,
		      struct lsa_String *domname,
		      TALLOC_CTX *mem_ctx,
		      struct policy_handle *_domain_handle,
		      struct dom_sid2 *_dom_sid);

/**
 * Removes user by RDN through SAMR interface.
 *
 * @param domain_handle [in] Domain handle
 * @param user_rdn [in] User's RDN in ldap database
 */
bool test_user_cleanup(struct torture_context *tctx,
		       struct dcerpc_binding_handle *b,
		       TALLOC_CTX *mem_ctx,
		       struct policy_handle *domain_handle,
		       const char *user_rdn);

/**
 * Creates new user using SAMR
 *
 * @param name [in] Username for user to create
 * @param rid [out] If NULL, User's RID is not returned
 */
bool test_user_create(struct torture_context *tctx,
		      struct dcerpc_binding_handle *b,
		      TALLOC_CTX *mem_ctx,
		      struct policy_handle *domain_handle,
		      const char *name,
		      uint32_t *rid);

/**
 * Deletes a Group using SAMR interface
 */
bool test_group_cleanup(struct torture_context *tctx,
			struct dcerpc_binding_handle *b,
			TALLOC_CTX *mem_ctx,
			struct policy_handle *domain_handle,
			const char *name);

/**
 * Creates a Group object using SAMR interface
 *
 * @param group_name [in] Name of the group to create
 * @param rid [out] RID of group created. May be NULL in
 *                  which case RID is not required by caller
 */
bool test_group_create(struct torture_context *tctx,
		       struct dcerpc_binding_handle *b,
		       TALLOC_CTX *mem_ctx,
		       struct policy_handle *handle,
		       const char *group_name,
		       uint32_t *rid);

/**
 * Closes SAMR handle obtained from Connect, Open User/Domain, etc
 */
bool test_samr_close_handle(struct torture_context *tctx,
			    struct dcerpc_binding_handle *b,
			    TALLOC_CTX *mem_ctx,
			    struct policy_handle *samr_handle);

/**
 * Closes LSA handle obtained from Connect, Open Group, etc
 */
bool test_lsa_close_handle(struct torture_context *tctx,
			   struct dcerpc_binding_handle *b,
			   TALLOC_CTX *mem_ctx,
			   struct policy_handle *lsa_handle);

/**
 * Create and initialize libnet_context Context.
 * Use this function in cases where we need to have SAMR and LSA pipes
 * of libnet_context to be connected before executing any other
 * libnet call
 *
 * @param rpc_connect [in] Connects SAMR and LSA pipes
 */
bool test_libnet_context_init(struct torture_context *tctx,
			      bool rpc_connect,
			      struct libnet_context **_net_ctx);
void msg_handler(struct monitor_msg *m);

/* The following definitions come from ../source4/torture/libnet/userinfo.c  */

bool torture_userinfo(struct torture_context *torture);

/* The following definitions come from ../source4/torture/libnet/userman.c  */

bool torture_useradd(struct torture_context *torture);
bool torture_userdel(struct torture_context *torture);
bool torture_usermod(struct torture_context *torture);

/* The following definitions come from ../source4/torture/libnet/groupinfo.c  */

bool torture_groupinfo(struct torture_context *torture);

/* The following definitions come from ../source4/torture/libnet/groupman.c  */

bool torture_groupadd(struct torture_context *torture);

/* The following definitions come from ../source4/torture/libnet/domain.c  */

bool torture_domainopen(struct torture_context *torture);

/* The following definitions come from ../source4/torture/libnet/libnet_lookup.c  */

bool torture_lookup(struct torture_context *torture);
bool torture_lookup_host(struct torture_context *torture);
bool torture_lookup_pdc(struct torture_context *torture);
bool torture_lookup_sam_name(struct torture_context *torture);

/* The following definitions come from ../source4/torture/libnet/libnet_user.c  */

bool torture_createuser(struct torture_context *torture);
bool torture_deleteuser(struct torture_context *torture);
bool torture_modifyuser(struct torture_context *torture);
bool torture_userinfo_api(struct torture_context *torture);
bool torture_userlist(struct torture_context *torture);

/* The following definitions come from ../source4/torture/libnet/libnet_group.c  */

bool torture_groupinfo_api(struct torture_context *torture);
bool torture_grouplist(struct torture_context *torture);
bool torture_creategroup(struct torture_context *torture);

/* The following definitions come from ../source4/torture/libnet/libnet_share.c  */

bool torture_listshares(struct torture_context *torture);
bool torture_delshare(struct torture_context *torture);

/* The following definitions come from ../source4/torture/libnet/libnet_rpc.c  */

bool torture_rpc_connect_srv(struct torture_context *torture);
bool torture_rpc_connect_pdc(struct torture_context *torture);
bool torture_rpc_connect_dc(struct torture_context *torture);
bool torture_rpc_connect_dc_info(struct torture_context *torture);
bool torture_rpc_connect_binding(struct torture_context *torture);

/* The following definitions come from ../source4/torture/libnet/libnet_domain.c  */

bool torture_domain_open_lsa(struct torture_context *torture);
bool torture_domain_close_lsa(struct torture_context *torture);
bool torture_domain_open_samr(struct torture_context *torture);
bool torture_domain_close_samr(struct torture_context *torture);
bool torture_domain_list(struct torture_context *torture);

/* The following definitions come from ../source4/torture/libnet/libnet_BecomeDC.c  */

bool torture_net_become_dc(struct torture_context *torture);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __DEFAULT_SOURCE4_TORTURE_LIBNET_PROTO_H__ */

