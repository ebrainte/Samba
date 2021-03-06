#ifndef __DEFAULT_SOURCE4_AUTH_KERBEROS_KERBEROS_SRV_KEYTAB_H__
#define __DEFAULT_SOURCE4_AUTH_KERBEROS_KERBEROS_SRV_KEYTAB_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

/* this file contains prototypes for functions that are private 
 * to this subsystem or library. These functions should not be 
 * used outside this particular subsystem! */


/* The following definitions come from ../source4/auth/kerberos/srv_keytab.c  */

krb5_error_code smb_krb5_update_keytab(TALLOC_CTX *parent_ctx,
				krb5_context context,
				const char *keytab_name,
				const char *samAccountName,
				const char *realm,
				const char **SPNs,
				int num_SPNs,
				const char *saltPrincipal,
				const char *new_secret,
				const char *old_secret,
				int kvno,
				uint32_t supp_enctypes,
				bool delete_all_kvno,
			        krb5_keytab *_keytab,
				const char **error_string);
krb5_error_code smb_krb5_create_memory_keytab(TALLOC_CTX *parent_ctx,
				krb5_context context,
				const char *new_secret,
				const char *samAccountName,
				const char *realm,
				int kvno,
				krb5_keytab *keytab,
				const char **keytab_name);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __DEFAULT_SOURCE4_AUTH_KERBEROS_KERBEROS_SRV_KEYTAB_H__ */

