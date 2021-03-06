#ifndef __DEFAULT_SOURCE4_NBT_SERVER_NBT_SERVER_PROTO_H__
#define __DEFAULT_SOURCE4_NBT_SERVER_NBT_SERVER_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

/* this file contains prototypes for functions that are private 
 * to this subsystem or library. These functions should not be 
 * used outside this particular subsystem! */


/* The following definitions come from ../source4/nbt_server/interfaces.c  */

struct nbtd_iface_name *nbtd_find_iname(struct nbtd_interface *iface, 
					struct nbt_name *name, 
					uint16_t nb_flags);
NTSTATUS nbtd_startup_interfaces(struct nbtd_server *nbtsrv, struct loadparm_context *lp_ctx,
				 struct interface *ifaces);
const char **nbtd_address_list(struct nbtd_interface *iface, TALLOC_CTX *mem_ctx);
struct nbtd_interface *nbtd_find_request_iface(struct nbtd_server *nbtd_server,
					       const char *address, bool allow_bcast_iface);
struct nbtd_interface *nbtd_find_reply_iface(struct nbtd_interface *iface,
					     const char *address, bool allow_bcast_iface);

/* The following definitions come from ../source4/nbt_server/register.c  */

void nbtd_register_name(struct nbtd_server *nbtsrv, 
			const char *name, enum nbt_name_type type,
			uint16_t nb_flags);
void nbtd_register_names(struct nbtd_server *nbtsrv);

/* The following definitions come from ../source4/nbt_server/query.c  */

void nbtd_request_query(struct nbt_name_socket *nbtsock, 
			struct nbt_name_packet *packet, 
			struct socket_address *src);

/* The following definitions come from ../source4/nbt_server/nodestatus.c  */

void nbtd_query_status(struct nbt_name_socket *nbtsock, 
		       struct nbt_name_packet *packet, 
		       struct socket_address *src);

/* The following definitions come from ../source4/nbt_server/defense.c  */

void nbtd_request_defense(struct nbt_name_socket *nbtsock, 
			  struct nbt_name_packet *packet, 
			  struct socket_address *src);

/* The following definitions come from ../source4/nbt_server/packet.c  */

void nbtd_bad_packet(struct nbt_name_packet *packet, 
		     const struct socket_address *src, const char *reason);
bool nbtd_self_packet_and_bcast(struct nbt_name_socket *nbtsock, 
				struct nbt_name_packet *packet, 
				const struct socket_address *src);
bool nbtd_self_packet(struct nbt_name_socket *nbtsock, 
		      struct nbt_name_packet *packet, 
		      const struct socket_address *src);
void nbtd_name_query_reply(struct nbt_name_socket *nbtsock, 
			   struct nbt_name_packet *request_packet, 
			   struct socket_address *src,
			   struct nbt_name *name, uint32_t ttl,
			   uint16_t nb_flags, const char **addresses);
void nbtd_negative_name_query_reply(struct nbt_name_socket *nbtsock, 
				    struct nbt_name_packet *request_packet, 
				    struct socket_address *src);
void nbtd_name_registration_reply(struct nbt_name_socket *nbtsock, 
				  struct nbt_name_packet *request_packet, 
				  struct socket_address *src,
				  uint8_t rcode);
void nbtd_name_release_reply(struct nbt_name_socket *nbtsock, 
			     struct nbt_name_packet *request_packet, 
			     struct socket_address *src,
			     uint8_t rcode);
void nbtd_wack_reply(struct nbt_name_socket *nbtsock, 
		     struct nbt_name_packet *request_packet, 
		     struct socket_address *src,
		     uint32_t ttl);

/* The following definitions come from ../source4/nbt_server/irpc.c  */

void nbtd_register_irpc(struct nbtd_server *nbtsrv);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __DEFAULT_SOURCE4_NBT_SERVER_NBT_SERVER_PROTO_H__ */

