#ifndef __DEFAULT_AUTH_GENSEC_GENSEC_TOPLEVEL_PROTO_H__
#define __DEFAULT_AUTH_GENSEC_GENSEC_TOPLEVEL_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

/* this file contains prototypes for functions that are private 
 * to this subsystem or library. These functions should not be 
 * used outside this particular subsystem! */


/* The following definitions come from ../auth/gensec/gensec.c  */


/* The following definitions come from ../auth/gensec/gensec_start.c  */

bool gensec_security_ops_enabled(struct gensec_security_ops *ops, struct gensec_security *security);

/**
 * Return a unique list of security subsystems from those specified in
 * the list of SASL names.
 *
 * Use the list of enabled GENSEC mechanisms from the credentials
 * attached to the gensec_security, and return in our preferred order.
 */
const struct gensec_security_ops **gensec_security_by_sasl_list(struct gensec_security *gensec_security,
								TALLOC_CTX *mem_ctx,
								const char **sasl_names);

/**
 * Return OIDS from the security subsystems listed
 */
const char **gensec_security_oids_from_ops(struct gensec_security *gensec_security,
										   TALLOC_CTX *mem_ctx,
					   struct gensec_security_ops **ops,
					   const char *skip);
NTSTATUS gensec_start_mech(struct gensec_security *gensec_security);

/**
 * Start a GENSEC sub-mechanism with a specified mechansim structure, used in SPNEGO
 *
 */
NTSTATUS gensec_start_mech_by_ops(struct gensec_security *gensec_security,
				  const struct gensec_security_ops *ops);
const struct gensec_critical_sizes *gensec_interface_version(void);
int gensec_setting_int(struct gensec_settings *settings, const char *mechanism, const char *name, int default_value);
bool gensec_setting_bool(struct gensec_settings *settings, const char *mechanism, const char *name, bool default_value);

/* The following definitions come from ../auth/gensec/gensec_util.c  */

NTSTATUS gensec_generate_session_info_pac(TALLOC_CTX *mem_ctx,
					  struct gensec_security *gensec_security,
					  struct smb_krb5_context *smb_krb5_context,
					  DATA_BLOB *pac_blob,
					  const char *principal_string,
					  const struct tsocket_address *remote_address,
					  struct auth_session_info **session_info);
NTSTATUS gensec_unwrap_packets(struct gensec_security *gensec_security,
					TALLOC_CTX *mem_ctx,
					const DATA_BLOB *in,
					DATA_BLOB *out,
					size_t *len_processed);
NTSTATUS gensec_packet_full_request(struct gensec_security *gensec_security,
				    DATA_BLOB blob, size_t *size);

/**
 * Check if the packet is one for the KRB5 mechansim
 *
 * NOTE: This is a helper that can be employed by multiple mechanisms, do
 * not make assumptions about the private_data
 *
 * @param gensec_security GENSEC state, unused
 * @param in The request, as a DATA_BLOB
 * @return Error, INVALID_PARAMETER if it's not a packet for us
 *                or NT_STATUS_OK if the packet is ok.
 */
NTSTATUS gensec_magic_check_krb5_oid(struct gensec_security *unused,
					const DATA_BLOB *blob);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __DEFAULT_AUTH_GENSEC_GENSEC_TOPLEVEL_PROTO_H__ */
