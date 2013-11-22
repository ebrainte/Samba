#ifndef __DEFAULT_SOURCE4_LIBCLI_RESOLVE_LP_PROTO_H__
#define __DEFAULT_SOURCE4_LIBCLI_RESOLVE_LP_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

/* this file contains prototypes for functions that are private 
 * to this subsystem or library. These functions should not be 
 * used outside this particular subsystem! */


/* The following definitions come from ../source4/libcli/resolve/bcast.c  */


/**
  broadcast name resolution method - async send
 */
struct composite_context *resolve_name_bcast_send(TALLOC_CTX *mem_ctx, 
						  struct tevent_context *event_ctx,
						  void *userdata, uint32_t flags,
						  uint16_t port,
						  struct nbt_name *name);
NTSTATUS resolve_name_bcast_recv(struct composite_context *c, 
				 TALLOC_CTX *mem_ctx,
				 struct socket_address ***addrs,
				 char ***names);
bool resolve_context_add_bcast_method(struct resolve_context *ctx, struct interface *ifaces, uint16_t nbt_port, int nbt_timeout);
bool resolve_context_add_bcast_method_lp(struct resolve_context *ctx, struct loadparm_context *lp_ctx);

/* The following definitions come from ../source4/libcli/resolve/nbtlist.c  */

struct composite_context *resolve_name_nbtlist_send(TALLOC_CTX *mem_ctx,
						    struct tevent_context *event_ctx,
						    uint32_t flags,
						    uint16_t port,
						    struct nbt_name *name, 
						    const char **address_list,
						    struct interface *ifaces,
						    uint16_t nbt_port,
						    int nbt_timeout,
						    bool broadcast,
						    bool wins_lookup);
NTSTATUS resolve_name_nbtlist_recv(struct composite_context *c, 
				   TALLOC_CTX *mem_ctx,
				   struct socket_address ***addrs,
				   char ***names);

/* The following definitions come from ../source4/libcli/resolve/wins.c  */


/**
  wins name resolution method - async send
 */
struct composite_context *resolve_name_wins_send(
				TALLOC_CTX *mem_ctx, 
				struct tevent_context *event_ctx,
				void *userdata,
				uint32_t flags,
				uint16_t port,
				struct nbt_name *name);
NTSTATUS resolve_name_wins_recv(struct composite_context *c, 
				TALLOC_CTX *mem_ctx,
				struct socket_address ***addrs,
				char ***names);
bool resolve_context_add_wins_method(struct resolve_context *ctx, const char **address_list, struct interface *ifaces, uint16_t nbt_port, int nbt_timeout);
bool resolve_context_add_wins_method_lp(struct resolve_context *ctx, struct loadparm_context *lp_ctx);

/* The following definitions come from ../source4/libcli/resolve/dns_ex.c  */

struct composite_context *resolve_name_dns_ex_send(TALLOC_CTX *mem_ctx,
						   struct tevent_context *event_ctx,
						   void *privdata,
						   uint32_t flags,
						   uint16_t port,
						   struct nbt_name *name,
						   bool do_fallback);
NTSTATUS resolve_name_dns_ex_recv(struct composite_context *c, 
				  TALLOC_CTX *mem_ctx,
				  struct socket_address ***addrs,
				  char ***names);

/* The following definitions come from ../source4/libcli/resolve/file.c  */


/**
  broadcast name resolution method - async send
 */
struct composite_context *resolve_name_file_send(TALLOC_CTX *mem_ctx, 
						  struct tevent_context *event_ctx,
						  void *userdata, uint32_t flags,
						  uint16_t port,
						  struct nbt_name *name);
NTSTATUS resolve_name_file_recv(struct composite_context *c, 
				 TALLOC_CTX *mem_ctx,
				 struct socket_address ***addrs,
				 char ***names);
bool resolve_context_add_file_method(struct resolve_context *ctx, const char *lookup_file, const char *default_domain);
bool resolve_context_add_file_method_lp(struct resolve_context *ctx, struct loadparm_context *lp_ctx);

/* The following definitions come from ../source4/libcli/resolve/host.c  */

struct composite_context *resolve_name_host_send(TALLOC_CTX *mem_ctx,
						 struct tevent_context *event_ctx,
						 void *privdata, uint32_t flags,
						 uint16_t port,
						 struct nbt_name *name);
NTSTATUS resolve_name_host_recv(struct composite_context *c, 
				TALLOC_CTX *mem_ctx,
				struct socket_address ***addrs,
				char ***names);
bool resolve_context_add_host_method(struct resolve_context *ctx);

/* The following definitions come from ../source4/libcli/resolve/resolve_lp.c  */

struct resolve_context *lpcfg_resolve_context(struct loadparm_context *lp_ctx);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __DEFAULT_SOURCE4_LIBCLI_RESOLVE_LP_PROTO_H__ */

