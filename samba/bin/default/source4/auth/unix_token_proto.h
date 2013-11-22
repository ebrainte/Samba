#ifndef __DEFAULT_SOURCE4_AUTH_UNIX_TOKEN_PROTO_H__
#define __DEFAULT_SOURCE4_AUTH_UNIX_TOKEN_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

/* this file contains prototypes for functions that are private 
 * to this subsystem or library. These functions should not be 
 * used outside this particular subsystem! */


/* The following definitions come from ../source4/auth/unix_token.c  */

NTSTATUS security_token_to_unix_token(TALLOC_CTX *mem_ctx,
				      struct wbc_context *wbc_ctx,
				      struct security_token *token,
				      struct security_unix_token **sec);
NTSTATUS auth_session_info_fill_unix(struct wbc_context *wbc_ctx,
				     struct loadparm_context *lp_ctx,
				     const char *original_user_name,
				     struct auth_session_info *session_info);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __DEFAULT_SOURCE4_AUTH_UNIX_TOKEN_PROTO_H__ */
