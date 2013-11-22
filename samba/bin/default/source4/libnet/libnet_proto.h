#ifndef __DEFAULT_SOURCE4_LIBNET_LIBNET_PROTO_H__
#define __DEFAULT_SOURCE4_LIBNET_LIBNET_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

/* this file contains prototypes for functions that are private 
 * to this subsystem or library. These functions should not be 
 * used outside this particular subsystem! */


/* The following definitions come from ../source4/libnet/libnet.c  */

struct libnet_context *libnet_context_init(struct tevent_context *ev,
					   struct loadparm_context *lp_ctx);

/* The following definitions come from ../source4/libnet/libnet_passwd.c  */

NTSTATUS libnet_ChangePassword(struct libnet_context *ctx, TALLOC_CTX *mem_ctx, union libnet_ChangePassword *r);
NTSTATUS libnet_SetPassword(struct libnet_context *ctx, TALLOC_CTX *mem_ctx, union libnet_SetPassword *r);

/* The following definitions come from ../source4/libnet/libnet_time.c  */

NTSTATUS libnet_RemoteTOD(struct libnet_context *ctx, TALLOC_CTX *mem_ctx, union libnet_RemoteTOD *r);

/* The following definitions come from ../source4/libnet/libnet_rpc.c  */


/**
 * Initiates connection to rpc pipe on remote server or pdc, optionally
 * providing domain info
 * 
 * @param ctx initialised libnet context
 * @param mem_ctx memory context of this call
 * @param r data structure containing necessary parameters and return values
 * @return composite context of this call
 **/
struct composite_context* libnet_RpcConnect_send(struct libnet_context *ctx,
						 TALLOC_CTX *mem_ctx,
						 struct libnet_RpcConnect *r,
						 void (*monitor)(struct monitor_msg*));

/**
 * Receives result of connection to rpc pipe on remote server or pdc
 *
 * @param c composite context
 * @param ctx initialised libnet context
 * @param mem_ctx memory context of this call
 * @param r data structure containing necessary parameters and return values
 * @return nt status of rpc connection
 **/
NTSTATUS libnet_RpcConnect_recv(struct composite_context *c, struct libnet_context *ctx,
				TALLOC_CTX *mem_ctx, struct libnet_RpcConnect *r);

/**
 * Connect to a rpc pipe on a remote server - sync version
 *
 * @param ctx initialised libnet context
 * @param mem_ctx memory context of this call
 * @param r data structure containing necessary parameters and return values
 * @return nt status of rpc connection
 **/
NTSTATUS libnet_RpcConnect(struct libnet_context *ctx, TALLOC_CTX *mem_ctx,
			   struct libnet_RpcConnect *r);

/* The following definitions come from ../source4/libnet/libnet_join.c  */

NTSTATUS libnet_JoinDomain(struct libnet_context *ctx, TALLOC_CTX *mem_ctx, struct libnet_JoinDomain *r);
NTSTATUS libnet_Join_member(struct libnet_context *ctx,
			    TALLOC_CTX *mem_ctx,
			    struct libnet_Join_member *r);

/* The following definitions come from ../source4/libnet/libnet_site.c  */


/**
 * 1. Setup a CLDAP socket.
 * 2. Lookup the default Site-Name.
 */
NTSTATUS libnet_FindSite(TALLOC_CTX *ctx, struct libnet_context *lctx, struct libnet_JoinSite *r);
NTSTATUS libnet_JoinSite(struct libnet_context *ctx, 
			 struct ldb_context *remote_ldb,
			 struct libnet_JoinDomain *libnet_r);

/* The following definitions come from ../source4/libnet/libnet_become_dc.c  */


/***************************************************************
 * Add this stage we call the prepare_db() callback function
 * of the caller, to see if he wants us to continue
 *
 * see: becomeDC_prepare_db()
 ***************************************************************/
struct composite_context *libnet_BecomeDC_send(struct libnet_context *ctx, TALLOC_CTX *mem_ctx, struct libnet_BecomeDC *r);
NTSTATUS libnet_BecomeDC_recv(struct composite_context *c, TALLOC_CTX *mem_ctx, struct libnet_BecomeDC *r);
NTSTATUS libnet_BecomeDC(struct libnet_context *ctx, TALLOC_CTX *mem_ctx, struct libnet_BecomeDC *r);

/* The following definitions come from ../source4/libnet/libnet_unbecome_dc.c  */


/*****************************************************************************
 * Windows 2003 (w2k3) does the following steps when changing the server role
 * from domain controller back to domain member
 *
 * We mostly do the same.
 *****************************************************************************/
struct composite_context *libnet_UnbecomeDC_send(struct libnet_context *ctx, TALLOC_CTX *mem_ctx, struct libnet_UnbecomeDC *r);
NTSTATUS libnet_UnbecomeDC_recv(struct composite_context *c, TALLOC_CTX *mem_ctx, struct libnet_UnbecomeDC *r);
NTSTATUS libnet_UnbecomeDC(struct libnet_context *ctx, TALLOC_CTX *mem_ctx, struct libnet_UnbecomeDC *r);

/* The following definitions come from ../source4/libnet/libnet_vampire.c  */

void *libnet_vampire_replicate_init(TALLOC_CTX *mem_ctx,
				    struct ldb_context *samdb,
				    struct loadparm_context *lp_ctx);
void *libnet_vampire_cb_state_init(TALLOC_CTX *mem_ctx,
				   struct loadparm_context *lp_ctx, struct tevent_context *event_ctx,
				   const char *netbios_name, const char *domain_name, const char *realm,
				   const char *targetdir);
struct ldb_context *libnet_vampire_cb_ldb(struct libnet_vampire_cb_state *state);
struct loadparm_context *libnet_vampire_cb_lp_ctx(struct libnet_vampire_cb_state *state);
NTSTATUS libnet_vampire_cb_prepare_db(void *private_data,
				      const struct libnet_BecomeDC_PrepareDB *p);
NTSTATUS libnet_vampire_cb_check_options(void *private_data,
					 const struct libnet_BecomeDC_CheckOptions *o);
NTSTATUS libnet_vampire_cb_schema_chunk(void *private_data,
					const struct libnet_BecomeDC_StoreChunk *c);
NTSTATUS libnet_vampire_cb_store_chunk(void *private_data,
			     const struct libnet_BecomeDC_StoreChunk *c);
NTSTATUS libnet_Vampire(struct libnet_context *ctx, TALLOC_CTX *mem_ctx, 
			struct libnet_Vampire *r);
NTSTATUS libnet_Replicate(struct libnet_context *ctx, TALLOC_CTX *mem_ctx,
			  struct libnet_Replicate *r);

/* The following definitions come from ../source4/libnet/libnet_samdump.c  */

NTSTATUS libnet_SamDump(struct libnet_context *ctx, TALLOC_CTX *mem_ctx, 
			struct libnet_SamDump *r);

/* The following definitions come from ../source4/libnet/libnet_samsync_ldb.c  */

NTSTATUS libnet_samsync_ldb(struct libnet_context *ctx, TALLOC_CTX *mem_ctx, struct libnet_samsync_ldb *r);

/* The following definitions come from ../source4/libnet/libnet_user.c  */


/**
 * Sends request to create user account
 *
 * @param ctx initialised libnet context
 * @param mem_ctx memory context of this call
 * @param r pointer to a structure containing arguments and results of this call
 * @param monitor function pointer for receiving monitor messages
 * @return compostite context of this request
 */
struct composite_context* libnet_CreateUser_send(struct libnet_context *ctx,
						 TALLOC_CTX *mem_ctx,
						 struct libnet_CreateUser *r,
						 void (*monitor)(struct monitor_msg*));

/**
 * Receive result of CreateUser call
 *
 * @param c composite context returned by send request routine
 * @param mem_ctx memory context of this call
 * @param r pointer to a structure containing arguments and result of this call
 * @return nt status
 */
NTSTATUS libnet_CreateUser_recv(struct composite_context *c, TALLOC_CTX *mem_ctx,
				struct libnet_CreateUser *r);

/**
 * Synchronous version of CreateUser call
 *
 * @param ctx initialised libnet context
 * @param mem_ctx memory context of this call
 * @param r pointer to a structure containing arguments and result of this call
 * @return nt status
 */
NTSTATUS libnet_CreateUser(struct libnet_context *ctx, TALLOC_CTX *mem_ctx,
			   struct libnet_CreateUser *r);

/**
 * Sends request to delete user account
 *
 * @param ctx initialised libnet context
 * @param mem_ctx memory context of this call
 * @param r pointer to structure containing arguments and result of this call
 * @param monitor function pointer for receiving monitor messages
 */
struct composite_context *libnet_DeleteUser_send(struct libnet_context *ctx,
						 TALLOC_CTX *mem_ctx,
						 struct libnet_DeleteUser *r,
						 void (*monitor)(struct monitor_msg*));

/**
 * Receives result of asynchronous DeleteUser call
 *
 * @param c composite context returned by async DeleteUser call
 * @param mem_ctx memory context of this call
 * @param r pointer to structure containing arguments and result
 */
NTSTATUS libnet_DeleteUser_recv(struct composite_context *c, TALLOC_CTX *mem_ctx,
				struct libnet_DeleteUser *r);

/**
 * Synchronous version of DeleteUser call
 *
 * @param ctx initialised libnet context
 * @param mem_ctx memory context of this call
 * @param r pointer to structure containing arguments and result
 */
NTSTATUS libnet_DeleteUser(struct libnet_context *ctx, TALLOC_CTX *mem_ctx,
			   struct libnet_DeleteUser *r);

/**
 * Sends request to modify user account
 *
 * @param ctx initialised libnet context
 * @param mem_ctx memory context of this call
 * @param r pointer to structure containing arguments and result of this call
 * @param monitor function pointer for receiving monitor messages
 */
struct composite_context *libnet_ModifyUser_send(struct libnet_context *ctx,
						 TALLOC_CTX *mem_ctx,
						 struct libnet_ModifyUser *r,
						 void (*monitor)(struct monitor_msg*));

/**
 * Receive result of ModifyUser call
 *
 * @param c composite context returned by send request routine
 * @param mem_ctx memory context of this call
 * @param r pointer to a structure containing arguments and result of this call
 * @return nt status
 */
NTSTATUS libnet_ModifyUser_recv(struct composite_context *c, TALLOC_CTX *mem_ctx,
				struct libnet_ModifyUser *r);

/**
 * Synchronous version of ModifyUser call
 *
 * @param ctx initialised libnet context
 * @param mem_ctx memory context of this call
 * @param r pointer to a structure containing arguments and result of this call
 * @return nt status
 */
NTSTATUS libnet_ModifyUser(struct libnet_context *ctx, TALLOC_CTX *mem_ctx,
			   struct libnet_ModifyUser *r);

/**
 * Sends request to get user account information
 *
 * @param ctx initialised libnet context
 * @param mem_ctx memory context of this call
 * @param r pointer to a structure containing arguments and results of this call
 * @param monitor function pointer for receiving monitor messages
 * @return compostite context of this request
 */
struct composite_context* libnet_UserInfo_send(struct libnet_context *ctx,
					       TALLOC_CTX *mem_ctx,
					       struct libnet_UserInfo *r,
					       void (*monitor)(struct monitor_msg*));

/**
 * Receive result of UserInfo call
 *
 * @param c composite context returned by send request routine
 * @param mem_ctx memory context of this call
 * @param r pointer to a structure containing arguments and result of this call
 * @return nt status
 */
NTSTATUS libnet_UserInfo_recv(struct composite_context *c, TALLOC_CTX *mem_ctx,
			      struct libnet_UserInfo *r);

/**
 * Synchronous version of UserInfo call
 *
 * @param ctx initialised libnet context
 * @param mem_ctx memory context of this call
 * @param r pointer to a structure containing arguments and result of this call
 * @return nt status
 */
NTSTATUS libnet_UserInfo(struct libnet_context *ctx, TALLOC_CTX *mem_ctx,
			 struct libnet_UserInfo *r);

/**
 * Sends request to list (enumerate) user accounts
 *
 * @param ctx initialised libnet context
 * @param mem_ctx memory context of this call
 * @param r pointer to structure containing arguments and results of this call
 * @param monitor function pointer for receiving monitor messages
 * @return compostite context of this request
 */
struct composite_context* libnet_UserList_send(struct libnet_context *ctx,
					       TALLOC_CTX *mem_ctx,
					       struct libnet_UserList *r,
					       void (*monitor)(struct monitor_msg*));

/**
 * Receive result of UserList call
 *
 * @param c composite context returned by send request routine
 * @param mem_ctx memory context of this call
 * @param r pointer to structure containing arguments and result of this call
 * @return nt status
 */
NTSTATUS libnet_UserList_recv(struct composite_context* c, TALLOC_CTX *mem_ctx,
			      struct libnet_UserList *r);

/**
 * Synchronous version of UserList call
 *
 * @param ctx initialised libnet context
 * @param mem_ctx memory context of this call
 * @param r pointer to structure containing arguments and result of this call
 * @return nt status
 */
NTSTATUS libnet_UserList(struct libnet_context *ctx,
			 TALLOC_CTX *mem_ctx,
			 struct libnet_UserList *r);

/* The following definitions come from ../source4/libnet/libnet_group.c  */

struct composite_context* libnet_CreateGroup_send(struct libnet_context *ctx,
						  TALLOC_CTX *mem_ctx,
						  struct libnet_CreateGroup *r,
						  void (*monitor)(struct monitor_msg*));

/**
 * Receive result of CreateGroup call
 *
 * @param c composite context returned by send request routine
 * @param mem_ctx memory context of this call
 * @param r pointer to a structure containing arguments and result of this call
 * @return nt status
 */
NTSTATUS libnet_CreateGroup_recv(struct composite_context *c,
				 TALLOC_CTX *mem_ctx,
				 struct libnet_CreateGroup *r);

/**
 * Create domain group
 *
 * @param ctx initialised libnet context
 * @param mem_ctx memory context of this call
 * @param io pointer to structure containing arguments and result of this call
 * @return nt status
 */
NTSTATUS libnet_CreateGroup(struct libnet_context *ctx, TALLOC_CTX *mem_ctx,
			    struct libnet_CreateGroup *io);

/**
 * Sends request to get group information
 *
 * @param ctx initialised libnet context
 * @param mem_ctx memory context of this call
 * @param io pointer to structure containing arguments the call
 * @param monitor function pointer for receiving monitor messages
 * @return composite context of this request
 */
struct composite_context* libnet_GroupInfo_send(struct libnet_context *ctx,
						TALLOC_CTX *mem_ctx,
						struct libnet_GroupInfo *io,
						void (*monitor)(struct monitor_msg*));
NTSTATUS libnet_GroupInfo_recv(struct composite_context* c, TALLOC_CTX *mem_ctx,
			       struct libnet_GroupInfo *io);

/**
 * Obtains specified group information
 * 
 * @param ctx initialised libnet context
 * @param mem_ctx memory context of the call
 * @param io pointer to a structure containing arguments and results of the call
 */
NTSTATUS libnet_GroupInfo(struct libnet_context *ctx, TALLOC_CTX *mem_ctx,
			  struct libnet_GroupInfo *io);

/**
 * Sends request to list (enumerate) group accounts
 *
 * @param ctx initialised libnet context
 * @param mem_ctx memory context of this call
 * @param io pointer to structure containing arguments and results of this call
 * @param monitor function pointer for receiving monitor messages
 * @return compostite context of this request
 */
struct composite_context *libnet_GroupList_send(struct libnet_context *ctx,
						TALLOC_CTX *mem_ctx,
						struct libnet_GroupList *io,
						void (*monitor)(struct monitor_msg*));

/**
 * Receive result of GroupList call
 *
 * @param c composite context returned by send request routine
 * @param mem_ctx memory context of this call
 * @param io pointer to structure containing arguments and result of this call
 * @param nt status
 */
NTSTATUS libnet_GroupList_recv(struct composite_context *c, TALLOC_CTX *mem_ctx,
			       struct libnet_GroupList *io);

/**
 * Enumerate domain groups
 *
 * @param ctx initialised libnet context
 * @param mem_ctx memory context of this call
 * @param io pointer to structure containing arguments and result of this call
 * @return nt status
 */
NTSTATUS libnet_GroupList(struct libnet_context *ctx, TALLOC_CTX *mem_ctx,
			  struct libnet_GroupList *io);

/* The following definitions come from ../source4/libnet/libnet_share.c  */

NTSTATUS libnet_ListShares(struct libnet_context *ctx, 
			   TALLOC_CTX *mem_ctx, struct libnet_ListShares *r);
NTSTATUS libnet_AddShare(struct libnet_context *ctx,
			 TALLOC_CTX *mem_ctx, struct libnet_AddShare *r);
NTSTATUS libnet_DelShare(struct libnet_context *ctx,
			 TALLOC_CTX *mem_ctx, struct libnet_DelShare *r);

/* The following definitions come from ../source4/libnet/libnet_lookup.c  */


/**
 * Sends asynchronous Lookup request
 *
 * @param io arguments and result of the call
 */
struct composite_context *libnet_Lookup_send(struct libnet_context *ctx,
					     TALLOC_CTX *mem_ctx,
					     struct libnet_Lookup *io);

/**
 * Waits for and receives results of asynchronous Lookup call
 *
 * @param c composite context returned by asynchronous Lookup call
 * @param mem_ctx memory context of the call
 * @param io pointer to results (and arguments) of the call
 * @return nt status code of execution
 */
NTSTATUS libnet_Lookup_recv(struct composite_context *c, TALLOC_CTX *mem_ctx,
			    struct libnet_Lookup *io);

/**
 * Synchronous version of Lookup call
 *
 * @param mem_ctx memory context for the call
 * @param io arguments and results of the call
 * @return nt status code of execution
 */
NTSTATUS libnet_Lookup(struct libnet_context *ctx, TALLOC_CTX *mem_ctx,
		       struct libnet_Lookup *io);

/**
 * Sends asynchronous LookupHost request
 */
struct composite_context* libnet_LookupHost_send(struct libnet_context *ctx,
						 TALLOC_CTX *mem_ctx,
						 struct libnet_Lookup *io);

/**
 * Synchronous version of LookupHost call
 */
NTSTATUS libnet_LookupHost(struct libnet_context *ctx, TALLOC_CTX *mem_ctx,
			   struct libnet_Lookup *io);

/**
 * Sends asynchronous LookupDCs request
 */
struct tevent_req *libnet_LookupDCs_send(struct libnet_context *ctx,
					 TALLOC_CTX *mem_ctx,
					 struct libnet_LookupDCs *io);

/**
 * Waits for and receives results of asynchronous Lookup call
 *
 * @param c composite context returned by asynchronous Lookup call
 * @param mem_ctx memory context of the call
 * @param io pointer to results (and arguments) of the call
 * @return nt status code of execution
 */
NTSTATUS libnet_LookupDCs_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx,
			       struct libnet_LookupDCs *io);

/**
 * Synchronous version of LookupDCs
 */
NTSTATUS libnet_LookupDCs(struct libnet_context *ctx, TALLOC_CTX *mem_ctx,
			  struct libnet_LookupDCs *io);
struct composite_context* libnet_LookupName_send(struct libnet_context *ctx,
						 TALLOC_CTX *mem_ctx,
						 struct libnet_LookupName *io,
						 void (*monitor)(struct monitor_msg*));
NTSTATUS libnet_LookupName_recv(struct composite_context *c, TALLOC_CTX *mem_ctx,
				struct libnet_LookupName *io);
NTSTATUS libnet_LookupName(struct libnet_context *ctx, TALLOC_CTX *mem_ctx,
			   struct libnet_LookupName *io);

/* The following definitions come from ../source4/libnet/libnet_domain.c  */


/**
 * Sends asynchronous DomainOpenSamr request
 *
 * @param ctx initialised libnet context
 * @param io arguments and results of the call
 * @param monitor pointer to monitor function that is passed monitor message
 */
struct composite_context *libnet_DomainOpenSamr_send(struct libnet_context *ctx,
						     TALLOC_CTX *mem_ctx,
						     struct libnet_DomainOpen *io,
						     void (*monitor)(struct monitor_msg*));

/**
 * Waits for and receives result of asynchronous DomainOpenSamr call
 * 
 * @param c composite context returned by asynchronous DomainOpen call
 * @param ctx initialised libnet context
 * @param mem_ctx memory context of the call
 * @param io pointer to results (and arguments) of the call
 * @return nt status code of execution
 */
NTSTATUS libnet_DomainOpenSamr_recv(struct composite_context *c, struct libnet_context *ctx,
				    TALLOC_CTX *mem_ctx, struct libnet_DomainOpen *io);

/**
 * Sends asynchronous DomainOpenLsa request
 *
 * @param ctx initialised libnet context
 * @param io arguments and results of the call
 * @param monitor pointer to monitor function that is passed monitor message
 */
struct composite_context* libnet_DomainOpenLsa_send(struct libnet_context *ctx,
						    TALLOC_CTX *mem_ctx,
						    struct libnet_DomainOpen *io,
						    void (*monitor)(struct monitor_msg*));

/**
 * Receives result of asynchronous DomainOpenLsa call
 *
 * @param c composite context returned by asynchronous DomainOpenLsa call
 * @param ctx initialised libnet context
 * @param mem_ctx memory context of the call
 * @param io pointer to results (and arguments) of the call
 * @return nt status code of execution
 */
NTSTATUS libnet_DomainOpenLsa_recv(struct composite_context *c, struct libnet_context *ctx,
				   TALLOC_CTX *mem_ctx, struct libnet_DomainOpen *io);

/**
 * Sends a request to open a domain in desired service
 *
 * @param ctx initalised libnet context
 * @param io arguments and results of the call
 * @param monitor pointer to monitor function that is passed monitor message
 */
struct composite_context* libnet_DomainOpen_send(struct libnet_context *ctx,
						 TALLOC_CTX *mem_ctx,
						 struct libnet_DomainOpen *io,
						 void (*monitor)(struct monitor_msg*));

/**
 * Receive result of domain open request
 *
 * @param c composite context returned by DomainOpen_send function
 * @param ctx initialised libnet context
 * @param mem_ctx memory context of the call
 * @param io results and arguments of the call
 */
NTSTATUS libnet_DomainOpen_recv(struct composite_context *c, struct libnet_context *ctx,
				TALLOC_CTX *mem_ctx, struct libnet_DomainOpen *io);

/**
 * Synchronous version of DomainOpen call
 *
 * @param ctx initialised libnet context
 * @param mem_ctx memory context for the call
 * @param io arguments and results of the call
 * @return nt status code of execution
 */
NTSTATUS libnet_DomainOpen(struct libnet_context *ctx,
			   TALLOC_CTX *mem_ctx,
			   struct libnet_DomainOpen *io);
struct composite_context* libnet_DomainCloseLsa_send(struct libnet_context *ctx,
						     TALLOC_CTX *mem_ctx,
						     struct libnet_DomainClose *io,
						     void (*monitor)(struct monitor_msg*));
NTSTATUS libnet_DomainCloseLsa_recv(struct composite_context *c, struct libnet_context *ctx,
				    TALLOC_CTX *mem_ctx, struct libnet_DomainClose *io);
struct composite_context* libnet_DomainCloseSamr_send(struct libnet_context *ctx,
						      TALLOC_CTX *mem_ctx,
						      struct libnet_DomainClose *io,
						      void (*monitor)(struct monitor_msg*));
NTSTATUS libnet_DomainCloseSamr_recv(struct composite_context *c, struct libnet_context *ctx,
				     TALLOC_CTX *mem_ctx, struct libnet_DomainClose *io);
struct composite_context* libnet_DomainClose_send(struct libnet_context *ctx,
						  TALLOC_CTX *mem_ctx,
						  struct libnet_DomainClose *io,
						  void (*monitor)(struct monitor_msg*));
NTSTATUS libnet_DomainClose_recv(struct composite_context *c, struct libnet_context *ctx,
				 TALLOC_CTX *mem_ctx, struct libnet_DomainClose *io);
NTSTATUS libnet_DomainClose(struct libnet_context *ctx, TALLOC_CTX *mem_ctx,
			    struct libnet_DomainClose *io);

/**
 * Sends a request to list domains on given host
 *
 * @param ctx initalised libnet context
 * @param mem_ctx memory context
 * @param io arguments and results of the call
 * @param monitor pointer to monitor function that is passed monitor messages
 */
struct composite_context* libnet_DomainList_send(struct libnet_context *ctx,
						 TALLOC_CTX *mem_ctx,
						 struct libnet_DomainList *io,
						 void (*monitor)(struct monitor_msg*));

/**
 * Receive result of domain list request
 *
 * @param c composite context returned by DomainList_send function
 * @param ctx initialised libnet context
 * @param mem_ctx memory context of the call
 * @param io results and arguments of the call
 */
NTSTATUS libnet_DomainList_recv(struct composite_context *c, struct libnet_context *ctx,
				TALLOC_CTX *mem_ctx, struct libnet_DomainList *io);

/**
 * Synchronous version of DomainList call
 *
 * @param ctx initialised libnet context
 * @param mem_ctx memory context for the call
 * @param io arguments and results of the call
 * @return nt status code of execution
 */
NTSTATUS libnet_DomainList(struct libnet_context *ctx, TALLOC_CTX *mem_ctx,
			   struct libnet_DomainList *io);

/* The following definitions come from ../source4/libnet/userinfo.c  */


/**
 * Sends asynchronous userinfo request
 *
 * @param p dce/rpc call pipe 
 * @param io arguments and results of the call
 */
struct composite_context *libnet_rpc_userinfo_send(struct dcerpc_pipe *p,
						   TALLOC_CTX *mem_ctx,
						   struct libnet_rpc_userinfo *io,
						   void (*monitor)(struct monitor_msg*));

/**
 * Waits for and receives result of asynchronous userinfo call
 * 
 * @param c composite context returned by asynchronous userinfo call
 * @param mem_ctx memory context of the call
 * @param io pointer to results (and arguments) of the call
 * @return nt status code of execution
 */
NTSTATUS libnet_rpc_userinfo_recv(struct composite_context *c, TALLOC_CTX *mem_ctx,
				  struct libnet_rpc_userinfo *io);

/**
 * Synchronous version of userinfo call
 *
 * @param pipe dce/rpc call pipe
 * @param mem_ctx memory context for the call
 * @param io arguments and results of the call
 * @return nt status code of execution
 */
NTSTATUS libnet_rpc_userinfo(struct dcerpc_pipe *p,
			     TALLOC_CTX *mem_ctx,
			     struct libnet_rpc_userinfo *io);

/* The following definitions come from ../source4/libnet/groupinfo.c  */


/**
 * Sends asynchronous groupinfo request
 *
 * @param p dce/rpc call pipe 
 * @param io arguments and results of the call
 */
struct composite_context *libnet_rpc_groupinfo_send(struct dcerpc_pipe *p,
						    TALLOC_CTX *mem_ctx,
						    struct libnet_rpc_groupinfo *io,
						    void (*monitor)(struct monitor_msg*));

/**
 * Waits for and receives result of asynchronous groupinfo call
 * 
 * @param c composite context returned by asynchronous groupinfo call
 * @param mem_ctx memory context of the call
 * @param io pointer to results (and arguments) of the call
 * @return nt status code of execution
 */
NTSTATUS libnet_rpc_groupinfo_recv(struct composite_context *c, TALLOC_CTX *mem_ctx,
				   struct libnet_rpc_groupinfo *io);

/**
 * Synchronous version of groupinfo call
 *
 * @param pipe dce/rpc call pipe
 * @param mem_ctx memory context for the call
 * @param io arguments and results of the call
 * @return nt status code of execution
 */
NTSTATUS libnet_rpc_groupinfo(struct dcerpc_pipe *p,
			      TALLOC_CTX *mem_ctx,
			      struct libnet_rpc_groupinfo *io);

/* The following definitions come from ../source4/libnet/userman.c  */


/**
 * Sends asynchronous useradd request
 *
 * @param p dce/rpc call pipe 
 * @param io arguments and results of the call
 * @param monitor monitor function for providing information about the progress
 */
struct composite_context *libnet_rpc_useradd_send(struct dcerpc_pipe *p,
						  TALLOC_CTX *mem_ctx,
						  struct libnet_rpc_useradd *io,
						  void (*monitor)(struct monitor_msg*));

/**
 * Waits for and receives result of asynchronous useradd call
 * 
 * @param c composite context returned by asynchronous useradd call
 * @param mem_ctx memory context of the call
 * @param io pointer to results (and arguments) of the call
 * @return nt status code of execution
 */
NTSTATUS libnet_rpc_useradd_recv(struct composite_context *c, TALLOC_CTX *mem_ctx,
				 struct libnet_rpc_useradd *io);

/**
 * Synchronous version of useradd call
 *
 * @param pipe dce/rpc call pipe
 * @param mem_ctx memory context for the call
 * @param io arguments and results of the call
 * @return nt status code of execution
 */
NTSTATUS libnet_rpc_useradd(struct dcerpc_pipe *p,
			    TALLOC_CTX *mem_ctx,
			    struct libnet_rpc_useradd *io);

/**
 * Sends asynchronous userdel request
 *
 * @param p dce/rpc call pipe
 * @param io arguments and results of the call
 * @param monitor monitor function for providing information about the progress
 */
struct composite_context *libnet_rpc_userdel_send(struct dcerpc_pipe *p,
						  TALLOC_CTX *mem_ctx,
						  struct libnet_rpc_userdel *io,
						  void (*monitor)(struct monitor_msg*));

/**
 * Waits for and receives results of asynchronous userdel call
 *
 * @param c composite context returned by asynchronous userdel call
 * @param mem_ctx memory context of the call
 * @param io pointer to results (and arguments) of the call
 * @return nt status code of execution
 */
NTSTATUS libnet_rpc_userdel_recv(struct composite_context *c, TALLOC_CTX *mem_ctx,
				 struct libnet_rpc_userdel *io);

/**
 * Synchronous version of userdel call
 *
 * @param pipe dce/rpc call pipe
 * @param mem_ctx memory context for the call
 * @param io arguments and results of the call
 * @return nt status code of execution
 */
NTSTATUS libnet_rpc_userdel(struct dcerpc_pipe *p,
			    TALLOC_CTX *mem_ctx,
			    struct libnet_rpc_userdel *io);

/**
 * Sends asynchronous usermod request
 *
 * @param p dce/rpc call pipe
 * @param io arguments and results of the call
 * @param monitor monitor function for providing information about the progress
 */
struct composite_context *libnet_rpc_usermod_send(struct dcerpc_pipe *p,
						  TALLOC_CTX *mem_ctx,
						  struct libnet_rpc_usermod *io,
						  void (*monitor)(struct monitor_msg*));

/**
 * Waits for and receives results of asynchronous usermod call
 *
 * @param c composite context returned by asynchronous usermod call
 * @param mem_ctx memory context of the call
 * @param io pointer to results (and arguments) of the call
 * @return nt status code of execution
 */
NTSTATUS libnet_rpc_usermod_recv(struct composite_context *c, TALLOC_CTX *mem_ctx,
				 struct libnet_rpc_usermod *io);

/**
 * Synchronous version of usermod call
 *
 * @param pipe dce/rpc call pipe
 * @param mem_ctx memory context for the call
 * @param io arguments and results of the call
 * @return nt status code of execution
 */
NTSTATUS libnet_rpc_usermod(struct dcerpc_pipe *p,
			    TALLOC_CTX *mem_ctx,
			    struct libnet_rpc_usermod *io);

/* The following definitions come from ../source4/libnet/groupman.c  */

struct composite_context* libnet_rpc_groupadd_send(struct dcerpc_pipe *p,
						   TALLOC_CTX *mem_ctx,
						   struct libnet_rpc_groupadd *io,
						   void (*monitor)(struct monitor_msg*));
NTSTATUS libnet_rpc_groupadd_recv(struct composite_context *c, TALLOC_CTX *mem_ctx,
				  struct libnet_rpc_groupadd *io);
NTSTATUS libnet_rpc_groupadd(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx,
			     struct libnet_rpc_groupadd *io);
struct composite_context* libnet_rpc_groupdel_send(struct dcerpc_pipe *p,
						   TALLOC_CTX *mem_ctx,
						   struct libnet_rpc_groupdel *io,
						   void (*monitor)(struct monitor_msg*));
NTSTATUS libnet_rpc_groupdel_recv(struct composite_context *c, TALLOC_CTX *mem_ctx,
				  struct libnet_rpc_groupdel *io);
NTSTATUS libnet_rpc_groupdel(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx,
			     struct libnet_rpc_groupdel *io);

/* The following definitions come from ../source4/libnet/prereq_domain.c  */

bool samr_domain_opened(struct libnet_context *ctx, TALLOC_CTX *mem_ctx,
			const char *domain_name,
			struct composite_context **parent_ctx,
			struct libnet_DomainOpen *domain_open,
			void (*continue_fn)(struct composite_context*),
			void (*monitor)(struct monitor_msg*));
bool lsa_domain_opened(struct libnet_context *ctx, TALLOC_CTX *mem_ctx,
		       const char *domain_name,
		       struct composite_context **parent_ctx,
		       struct libnet_DomainOpen *domain_open,
		       void (*continue_fn)(struct composite_context*),
		       void (*monitor)(struct monitor_msg*));

/* The following definitions come from ../source4/libnet/libnet_samsync.c  */

NTSTATUS libnet_SamSync_netlogon(struct libnet_context *ctx, TALLOC_CTX *mem_ctx, struct libnet_SamSync *r);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __DEFAULT_SOURCE4_LIBNET_LIBNET_PROTO_H__ */

