#ifndef __DEFAULT_SOURCE4_CLDAP_SERVER_PROTO_H__
#define __DEFAULT_SOURCE4_CLDAP_SERVER_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

/* this file contains prototypes for functions that are private 
 * to this subsystem or library. These functions should not be 
 * used outside this particular subsystem! */


/* The following definitions come from ../source4/cldap_server/netlogon.c  */

NTSTATUS fill_netlogon_samlogon_response(struct ldb_context *sam_ctx,
					 TALLOC_CTX *mem_ctx,
					 const char *domain,
					 const char *netbios_domain,
					 struct dom_sid *domain_sid,
					 const char *domain_guid,
					 const char *user,
					 uint32_t acct_control,
					 const char *src_address,
					 uint32_t version,
					 struct loadparm_context *lp_ctx,
					 struct netlogon_samlogon_response *netlogon,
					 bool fill_on_blank_request);
void cldapd_netlogon_request(struct cldap_socket *cldap,
			     struct cldapd_server *cldapd,
			     TALLOC_CTX *tmp_ctx,
			     uint32_t message_id,
			     struct ldb_parse_tree *tree,
			     struct tsocket_address *src);

/* The following definitions come from ../source4/cldap_server/rootdse.c  */

void cldapd_rootdse_request(struct cldap_socket *cldap, 
			    struct cldapd_server *cldapd,
			    TALLOC_CTX *tmp_ctx,
			    uint32_t message_id,
			    struct ldap_SearchRequest *search,
			    struct tsocket_address *src);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __DEFAULT_SOURCE4_CLDAP_SERVER_PROTO_H__ */
