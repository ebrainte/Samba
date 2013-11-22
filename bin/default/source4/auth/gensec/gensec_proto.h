#ifndef __DEFAULT_SOURCE4_AUTH_GENSEC_GENSEC_PROTO_H__
#define __DEFAULT_SOURCE4_AUTH_GENSEC_GENSEC_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

/* this file contains prototypes for functions that are private 
 * to this subsystem or library. These functions should not be 
 * used outside this particular subsystem! */


/* The following definitions come from ../source4/auth/gensec/socket.c  */

NTSTATUS gensec_socket_init(struct gensec_security *gensec_security,
			    TALLOC_CTX *mem_ctx,
			    struct socket_context *current_socket,
			    struct tevent_context *ev,
			    void (*recv_handler)(void *, uint16_t),
			    void *recv_private,
			    struct socket_context **new_socket);

/* The following definitions come from ../source4/auth/gensec/gensec_tstream.c  */

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __DEFAULT_SOURCE4_AUTH_GENSEC_GENSEC_PROTO_H__ */
