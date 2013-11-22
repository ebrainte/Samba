#ifndef __DEFAULT_LIB_PARAM_PARAM_PROTO_H__
#define __DEFAULT_LIB_PARAM_PARAM_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

/* this file contains prototypes for functions that are private 
 * to this subsystem or library. These functions should not be 
 * used outside this particular subsystem! */


/* The following definitions come from ../lib/param/loadparm.c  */

struct loadparm_service *lpcfg_default_service(struct loadparm_context *lp_ctx);
bool lpcfg_readraw(struct loadparm_context *);
bool lpcfg_writeraw(struct loadparm_context *);
const char *lpcfg_cachedir(struct loadparm_context *);
const char *lpcfg_statedir(struct loadparm_context *);

/**
 * Convenience routine to grab string parameters into temporary memory
 * and run standard_sub_basic on them.
 *
 * The buffers can be written to by
 * callers without affecting the source string.
 */
const char *lpcfg_get_parametric(struct loadparm_context *lp_ctx,
			      struct loadparm_service *service,
			      const char *type, const char *option);

/**
 * Return parametric option from a given service. Type is a part of option before ':'
 * Parametric option has following syntax: 'Type: option = value'
 * Returned value is allocated in 'lp_talloc' context
 */
const char *lpcfg_parm_string(struct loadparm_context *lp_ctx,
			      struct loadparm_service *service, const char *type,
			      const char *option);

/**
 * Return parametric option from a given service. Type is a part of option before ':'
 * Parametric option has following syntax: 'Type: option = value'
 * Returned value is allocated in 'lp_talloc' context
 */
const char **lpcfg_parm_string_list(TALLOC_CTX *mem_ctx,
				    struct loadparm_context *lp_ctx,
				    struct loadparm_service *service,
				    const char *type,
				    const char *option, const char *separator);

/**
 * Return parametric option from a given service. Type is a part of option before ':'
 * Parametric option has following syntax: 'Type: option = value'
 */
int lpcfg_parm_int(struct loadparm_context *lp_ctx,
		   struct loadparm_service *service, const char *type,
		   const char *option, int default_v);

/**
 * Return parametric option from a given service. Type is a part of
 * option before ':'.
 * Parametric option has following syntax: 'Type: option = value'.
 */
int lpcfg_parm_bytes(struct loadparm_context *lp_ctx,
		  struct loadparm_service *service, const char *type,
		  const char *option, int default_v);

/**
 * Return parametric option from a given service.
 * Type is a part of option before ':'
 * Parametric option has following syntax: 'Type: option = value'
 */
unsigned long lpcfg_parm_ulong(struct loadparm_context *lp_ctx,
			    struct loadparm_service *service, const char *type,
			    const char *option, unsigned long default_v);
long lpcfg_parm_long(struct loadparm_context *lp_ctx,
		     struct loadparm_service *service, const char *type,
		     const char *option, long default_v);
double lpcfg_parm_double(struct loadparm_context *lp_ctx,
		      struct loadparm_service *service, const char *type,
		      const char *option, double default_v);

/**
 * Return parametric option from a given service. Type is a part of option before ':'
 * Parametric option has following syntax: 'Type: option = value'
 */
bool lpcfg_parm_bool(struct loadparm_context *lp_ctx,
		     struct loadparm_service *service, const char *type,
		     const char *option, bool default_v);

/**
 * Add a new service to the services array initialising it with the given
 * service.
 */
struct loadparm_service *lpcfg_add_service(struct loadparm_context *lp_ctx,
					   const struct loadparm_service *pservice,
					   const char *name);

/**
 * Add a new home service, with the specified home directory, defaults coming
 * from service ifrom.
 */
bool lpcfg_add_home(struct loadparm_context *lp_ctx,
		 const char *pszHomename,
		 struct loadparm_service *default_service,
		 const char *user, const char *pszHomedir);

/**
 * Add a new printer service, with defaults coming from service iFrom.
 */
bool lpcfg_add_printer(struct loadparm_context *lp_ctx,
		       const char *pszPrintername,
		       struct loadparm_service *default_service);

/**
  return the parameter structure for a parameter
*/
struct parm_struct *lpcfg_parm_struct(struct loadparm_context *lp_ctx, const char *name);

/**
  return the parameter pointer for a parameter
*/
void *lpcfg_parm_ptr(struct loadparm_context *lp_ctx,
		  struct loadparm_service *service, struct parm_struct *parm);

/**
  return the parameter pointer for a parameter
*/
bool lpcfg_parm_is_cmdline(struct loadparm_context *lp_ctx, const char *name);

/*******************************************************************
 Check if a config file has changed date.
********************************************************************/
bool lpcfg_file_list_changed(struct loadparm_context *lp_ctx);

/**
 * Process a parametric option
 */
bool lpcfg_do_global_parameter(struct loadparm_context *lp_ctx,
			       const char *pszParmName, const char *pszParmValue);
bool lpcfg_do_service_parameter(struct loadparm_context *lp_ctx,
				struct loadparm_service *service,
				const char *pszParmName, const char *pszParmValue);

/**
 * Process a parameter.
 */
bool lpcfg_do_global_parameter_var(struct loadparm_context *lp_ctx,
				const char *pszParmName, const char *fmt, ...);
bool lpcfg_set_cmdline(struct loadparm_context *lp_ctx, const char *pszParmName,
		       const char *pszParmValue);
bool lpcfg_set_option(struct loadparm_context *lp_ctx, const char *option);

/**
 * Display the contents of a single services record.
 */
bool lpcfg_dump_a_parameter(struct loadparm_context *lp_ctx,
			    struct loadparm_service *service,
			    const char *parm_name, FILE * f);

/**
 * Return info about the next parameter in a service.
 * snum==-1 gives the globals.
 * Return NULL when out of parameters.
 */
struct parm_struct *lpcfg_next_parameter(struct loadparm_context *lp_ctx, int snum, int *i,
					 int allparameters);

/**
 * Unload unused services.
 */
void lpcfg_killunused(struct loadparm_context *lp_ctx,
		   struct smbsrv_connection *smb,
		   bool (*snumused) (struct smbsrv_connection *, int));

/**
 * Initialise the global parameter structure.
 *
 * Note that most callers should use loadparm_init_global() instead
 */
struct loadparm_context *loadparm_init(TALLOC_CTX *mem_ctx);

/**
 * Initialise the global parameter structure.
 */
struct loadparm_context *loadparm_init_global(bool load_default);

/**
 * Initialise the global parameter structure.
 */
struct loadparm_context *loadparm_init_s3(TALLOC_CTX *mem_ctx, 
					  const struct loadparm_s3_helpers *s3_fns);
const char *lpcfg_configfile(struct loadparm_context *lp_ctx);
const char *lp_default_path(void);

/**
 * Update the internal state of a loadparm context after settings 
 * have changed.
 */
bool lpcfg_load_default(struct loadparm_context *lp_ctx);

/**
 * Load the services array from the services file.
 *
 * Return True on success, False on failure.
 */
bool lpcfg_load(struct loadparm_context *lp_ctx, const char *filename);

/**
 * Return the max number of services.
 */
int lpcfg_numservices(struct loadparm_context *lp_ctx);

/**
 * Display the contents of the services array in human-readable form.
 */
void lpcfg_dump(struct loadparm_context *lp_ctx, FILE *f, bool show_defaults,
	     int maxtoprint);

/**
 * Display the contents of one service in human-readable form.
 */
void lpcfg_dump_one(FILE *f, bool show_defaults, struct loadparm_service *service, struct loadparm_service *sDefault);
struct loadparm_service *lpcfg_servicebynum(struct loadparm_context *lp_ctx,
					    int snum);
struct loadparm_service *lpcfg_service(struct loadparm_context *lp_ctx,
				    const char *service_name);
const char *lpcfg_servicename(const struct loadparm_service *service);

/**
 * A useful volume label function.
 */
const char *lpcfg_volume_label(struct loadparm_service *service, struct loadparm_service *sDefault);

/**
 * If we are PDC then prefer us as DMB
 */
const char *lpcfg_printername(struct loadparm_service *service, struct loadparm_service *sDefault);

/**
 * Return the max print jobs per queue.
 */
int lpcfg_maxprintjobs(struct loadparm_service *service, struct loadparm_service *sDefault);
struct smb_iconv_handle *lpcfg_iconv_handle(struct loadparm_context *lp_ctx);
struct gensec_settings *lpcfg_gensec_settings(TALLOC_CTX *mem_ctx, struct loadparm_context *lp_ctx);
int lpcfg_server_role(struct loadparm_context *lp_ctx);
int lpcfg_security(struct loadparm_context *lp_ctx);

/* The following definitions come from ../lib/param/generic.c  */

struct param_section *param_get_section(struct param_context *ctx, const char *name);
struct parmlist_entry *param_section_get(struct param_section *section, const char *name);
struct param_section *param_add_section(struct param_context *ctx, const char *section_name);
struct parmlist_entry *param_get_add(struct param_context *ctx, const char *name, const char *section_name);
const char *param_get_string(struct param_context *ctx, const char *param, const char *section_name);
int param_set_string(struct param_context *ctx, const char *param, const char *value, const char *section_name);
const char **param_get_string_list(struct param_context *ctx, const char *param, const char *separator, const char *section_name);
int param_set_string_list(struct param_context *ctx, const char *param, const char **list, const char *section);
int param_get_int(struct param_context *ctx, const char *param, int default_v, const char *section_name);
void param_set_int(struct param_context *ctx, const char *param, int value, const char *section);
unsigned long param_get_ulong(struct param_context *ctx, const char *param, unsigned long default_v, const char *section);
void param_set_ulong(struct param_context *ctx, const char *name, unsigned long value, const char *section);
struct param_context *param_init(TALLOC_CTX *mem_ctx);
int param_read(struct param_context *ctx, const char *fn);
int param_use(struct loadparm_context *lp_ctx, struct param_context *ctx);
int param_write(struct param_context *ctx, const char *fn);

/* The following definitions come from ../lib/param/util.c  */


/**
 * @file
 * @brief Misc utility functions
 */
bool lpcfg_is_mydomain(struct loadparm_context *lp_ctx,
			     const char *domain);
bool lpcfg_is_my_domain_or_realm(struct loadparm_context *lp_ctx,
			     const char *domain);

/**
  see if a string matches either our primary or one of our secondary 
  netbios aliases. do a case insensitive match
*/
bool lpcfg_is_myname(struct loadparm_context *lp_ctx, const char *name);

/**
 A useful function for returning a path in the Samba lock directory.
**/
char *lpcfg_lock_path(TALLOC_CTX* mem_ctx, struct loadparm_context *lp_ctx,
			 const char *name);

/**
 A useful function for returning a path in the Samba state directory.
**/
char *lpcfg_state_path(TALLOC_CTX* mem_ctx, struct loadparm_context *lp_ctx,
		       const char *name);

/**
 A useful function for returning a path in the Samba cache directory.
**/
char *lpcfg_cache_path(TALLOC_CTX* mem_ctx, struct loadparm_context *lp_ctx,
		       const char *name);

/**
 * @brief Returns an absolute path to a file in the directory containing the current config file
 *
 * @param name File to find, relative to the config file directory.
 *
 * @retval Pointer to a talloc'ed string containing the full path.
 **/
char *lpcfg_config_path(TALLOC_CTX* mem_ctx, struct loadparm_context *lp_ctx,
			   const char *name);

/**
 * @brief Returns an absolute path to a file in the Samba private directory.
 *
 * @param name File to find, relative to PRIVATEDIR.
 * if name is not relative, then use it as-is
 *
 * @retval Pointer to a talloc'ed string containing the full path.
 **/
char *lpcfg_private_path(TALLOC_CTX* mem_ctx,
			    struct loadparm_context *lp_ctx,
			    const char *name);

/**
  return a path in the smbd.tmp directory, where all temporary file
  for smbd go. If NULL is passed for name then return the directory 
  path itself
*/
char *smbd_tmp_path(TALLOC_CTX *mem_ctx, 
			     struct loadparm_context *lp_ctx,
			     const char *name);
const char *lpcfg_imessaging_path(TALLOC_CTX *mem_ctx,
				       struct loadparm_context *lp_ctx);
struct smb_iconv_handle *smb_iconv_handle_reinit_lp(TALLOC_CTX *mem_ctx,
							      struct loadparm_context *lp_ctx,
							      struct smb_iconv_handle *old_ic);
const char *lpcfg_sam_name(struct loadparm_context *lp_ctx);
void lpcfg_default_kdc_policy(struct loadparm_context *lp_ctx,
				time_t *svc_tkt_lifetime,
				time_t *usr_tkt_lifetime,
				time_t *renewal_lifetime);

/* The following definitions come from ../lib/param/param_functions.c  */

const char *lpcfg_pathname(struct loadparm_service *, struct loadparm_service *);
const char **lpcfg_hostsallow(struct loadparm_service *, struct loadparm_service *);
const char **lpcfg_hostsdeny(struct loadparm_service *, struct loadparm_service *);
const char *lpcfg_fstype(struct loadparm_service *, struct loadparm_service *);
const char **lpcfg_ntvfs_handler(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_msdfs_root(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_browseable(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_readonly(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_print_ok(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_map_hidden(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_map_archive(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_oplocks(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_strict_sync(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_map_system(struct loadparm_service *, struct loadparm_service *);
int lpcfg_max_connections(struct loadparm_service *, struct loadparm_service *);
int lpcfg_csc_policy(struct loadparm_service *, struct loadparm_service *);
int lpcfg_create_mask(struct loadparm_service *, struct loadparm_service *);
int lpcfg_force_create_mode(struct loadparm_service *, struct loadparm_service *);
int lpcfg_dir_mask(struct loadparm_service *, struct loadparm_service *);
int lpcfg_force_dir_mode(struct loadparm_service *, struct loadparm_service *);
const char *lpcfg_preexec(struct loadparm_service *, struct loadparm_service *);
const char *lpcfg_postexec(struct loadparm_service *, struct loadparm_service *);
const char *lpcfg_rootpreexec(struct loadparm_service *, struct loadparm_service *);
const char *lpcfg_rootpostexec(struct loadparm_service *, struct loadparm_service *);
const char *lpcfg_dontdescend(struct loadparm_service *, struct loadparm_service *);
const char *lpcfg_username(struct loadparm_service *, struct loadparm_service *);
const char **lpcfg_invalid_users(struct loadparm_service *, struct loadparm_service *);
const char **lpcfg_valid_users(struct loadparm_service *, struct loadparm_service *);
const char **lpcfg_admin_users(struct loadparm_service *, struct loadparm_service *);
const char *lpcfg_printcommand(struct loadparm_service *, struct loadparm_service *);
const char *lpcfg_lpqcommand(struct loadparm_service *, struct loadparm_service *);
const char *lpcfg_lprmcommand(struct loadparm_service *, struct loadparm_service *);
const char *lpcfg_lppausecommand(struct loadparm_service *, struct loadparm_service *);
const char *lpcfg_lpresumecommand(struct loadparm_service *, struct loadparm_service *);
const char *lpcfg_queuepausecommand(struct loadparm_service *, struct loadparm_service *);
const char *lpcfg_queueresumecommand(struct loadparm_service *, struct loadparm_service *);
const char *lpcfg_printjob_username(struct loadparm_service *, struct loadparm_service *);
const char *lpcfg_magicscript(struct loadparm_service *, struct loadparm_service *);
const char *lpcfg_magicoutput(struct loadparm_service *, struct loadparm_service *);
const char *lpcfg_comment(struct loadparm_service *, struct loadparm_service *);
const char *lpcfg_force_user(struct loadparm_service *, struct loadparm_service *);
const char *lpcfg_force_group(struct loadparm_service *, struct loadparm_service *);
const char **lpcfg_readlist(struct loadparm_service *, struct loadparm_service *);
const char **lpcfg_writelist(struct loadparm_service *, struct loadparm_service *);
const char **lpcfg_printer_admin(struct loadparm_service *, struct loadparm_service *);
const char **lpcfg_vfs_objects(struct loadparm_service *, struct loadparm_service *);
const char *lpcfg_msdfs_proxy(struct loadparm_service *, struct loadparm_service *);
const char *lpcfg_veto_files(struct loadparm_service *, struct loadparm_service *);
const char *lpcfg_hide_files(struct loadparm_service *, struct loadparm_service *);
const char *lpcfg_veto_oplocks(struct loadparm_service *, struct loadparm_service *);
const char *lpcfg_aio_write_behind(struct loadparm_service *, struct loadparm_service *);
const char *lpcfg_dfree_command(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_autoloaded(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_preexec_close(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_rootpreexec_close(struct loadparm_service *, struct loadparm_service *);
int lpcfg_casesensitive(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_preservecase(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_shortpreservecase(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_hide_dot_files(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_hide_special_files(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_hideunreadable(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_hideunwriteable_files(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_access_based_share_enum(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_no_set_dir(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_guest_ok(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_guest_only(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_administrative_share(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_print_notify_backchannel(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_store_dos_attributes(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_dmapi_support(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_locking(struct loadparm_service *, struct loadparm_service *);
int lpcfg_strict_locking(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_posix_locking(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_kernel_oplocks(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_level2_oplocks(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_kernel_share_modes(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_onlyuser(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_manglednames(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_symlinks(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_syncalways(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_strict_allocate(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_delete_readonly(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_fake_oplocks(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_recursive_veto_delete(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_dos_filemode(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_dos_filetimes(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_dos_filetime_resolution(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_fake_dir_create_times(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_blocking_locks(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_inherit_perms(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_inherit_acls(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_inherit_owner(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_use_client_driver(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_default_devmode(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_force_printername(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_nt_acl_support(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_force_unknown_acl_user(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_ea_support(struct loadparm_service *, struct loadparm_service *);
bool lpcfg__use_sendfile(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_profile_acls(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_map_acl_inherit(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_afs_share(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_acl_check_permissions(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_acl_group_control(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_acl_map_full_control(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_acl_allow_execute_always(struct loadparm_service *, struct loadparm_service *);
int lpcfg_defaultcase(struct loadparm_service *, struct loadparm_service *);
int lpcfg_minprintspace(struct loadparm_service *, struct loadparm_service *);
int lpcfg_printing(struct loadparm_service *, struct loadparm_service *);
int lpcfg_max_reported_jobs(struct loadparm_service *, struct loadparm_service *);
int lpcfg_oplock_contention_limit(struct loadparm_service *, struct loadparm_service *);
int lpcfg_write_cache_size(struct loadparm_service *, struct loadparm_service *);
int lpcfg_block_size(struct loadparm_service *, struct loadparm_service *);
int lpcfg_dfree_cache_time(struct loadparm_service *, struct loadparm_service *);
int lpcfg_allocation_roundup_size(struct loadparm_service *, struct loadparm_service *);
int lpcfg_aio_read_size(struct loadparm_service *, struct loadparm_service *);
int lpcfg_aio_write_size(struct loadparm_service *, struct loadparm_service *);
int lpcfg_map_readonly(struct loadparm_service *, struct loadparm_service *);
int lpcfg_directory_name_cache_size(struct loadparm_service *, struct loadparm_service *);
int lpcfg_smb_encrypt(struct loadparm_service *, struct loadparm_service *);
char lpcfg_magicchar(struct loadparm_service *, struct loadparm_service *);
const char *lpcfg_cups_options(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_change_notify(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_kernel_change_notify(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_durable_handles(struct loadparm_service *, struct loadparm_service *);
bool lpcfg_allow_insecure_widelinks(struct loadparm_context *);
bool lpcfg_allow_trusted_domains(struct loadparm_context *);
bool lpcfg_async_smb_echo_handler(struct loadparm_context *);
bool lpcfg_bind_interfaces_only(struct loadparm_context *);
bool lpcfg_browse_list(struct loadparm_context *);
bool lpcfg_client_lanman_auth(struct loadparm_context *);
bool lpcfg_client_ntlmv2_auth(struct loadparm_context *);
bool lpcfg_client_plaintext_auth(struct loadparm_context *);
bool lpcfg_client_use_spnego(struct loadparm_context *);
bool lpcfg_client_use_spnego_principal(struct loadparm_context *);
bool lpcfg_clustering(struct loadparm_context *);
bool lpcfg_create_krb5_conf(struct loadparm_context *);
bool lpcfg_debug_class(struct loadparm_context *);
bool lpcfg_debug_hires_timestamp(struct loadparm_context *);
bool lpcfg_debug_pid(struct loadparm_context *);
bool lpcfg_debug_prefix_timestamp(struct loadparm_context *);
bool lpcfg_debug_uid(struct loadparm_context *);
bool lpcfg_defer_sharing_violations(struct loadparm_context *);
bool lpcfg_disable_netbios(struct loadparm_context *);
bool lpcfg__disable_spoolss(struct loadparm_context *);
bool lpcfg__domain_logons(struct loadparm_context *);
bool lpcfg_enable_asu_support(struct loadparm_context *);
bool lpcfg_enable_core_files(struct loadparm_context *);
bool lpcfg_enable_privileges(struct loadparm_context *);
bool lpcfg_encrypted_passwords(struct loadparm_context *);
bool lpcfg_enhanced_browsing(struct loadparm_context *);
bool lpcfg_getwd_cache(struct loadparm_context *);
bool lpcfg_host_msdfs(struct loadparm_context *);
bool lpcfg_hostname_lookups(struct loadparm_context *);
bool lpcfg_lanman_auth(struct loadparm_context *);
bool lpcfg_large_readwrite(struct loadparm_context *);
bool lpcfg_ldap_delete_dn(struct loadparm_context *);
bool lpcfg_ldap_ssl_ads(struct loadparm_context *);
bool lpcfg_load_printers(struct loadparm_context *);
bool lpcfg_local_master(struct loadparm_context *);
bool lpcfg_log_writeable_files_on_exit(struct loadparm_context *);
bool lpcfg_map_untrusted_to_domain(struct loadparm_context *);
bool lpcfg_ms_add_printer_wizard(struct loadparm_context *);
bool lpcfg_multicast_dns_register(struct loadparm_context *);
bool lpcfg_nis_home_map(struct loadparm_context *);
bool lpcfg_nmbd_bind_explicit_broadcast(struct loadparm_context *);
bool lpcfg_ntlm_auth(struct loadparm_context *);
bool lpcfg_nt_pipe_support(struct loadparm_context *);
bool lpcfg_nt_status_support(struct loadparm_context *);
bool lpcfg_null_passwords(struct loadparm_context *);
bool lpcfg_obey_pam_restrictions(struct loadparm_context *);
bool lpcfg_pam_password_change(struct loadparm_context *);
bool lpcfg_passdb_expand_explicit(struct loadparm_context *);
bool lpcfg_passwd_chat_debug(struct loadparm_context *);
bool lpcfg_registry_shares(struct loadparm_context *);
bool lpcfg_reset_on_zero_vc(struct loadparm_context *);
bool lpcfg_rpc_big_endian(struct loadparm_context *);
bool lpcfg_stat_cache(struct loadparm_context *);
bool lpcfg_syslog_only(struct loadparm_context *);
bool lpcfg_timestamp_logs(struct loadparm_context *);
bool lpcfg_time_server(struct loadparm_context *);
bool lpcfg_tls_enabled(struct loadparm_context *);
bool lpcfg_unicode(struct loadparm_context *);
bool lpcfg_unix_extensions(struct loadparm_context *);
bool lpcfg_unix_password_sync(struct loadparm_context *);
bool lpcfg_use_mmap(struct loadparm_context *);
bool lpcfg_usershare_allow_guests(struct loadparm_context *);
bool lpcfg_usershare_owner_only(struct loadparm_context *);
bool lpcfg_use_spnego(struct loadparm_context *);
bool lpcfg_utmp(struct loadparm_context *);
bool lpcfg_we_are_a_wins_server(struct loadparm_context *);
bool lpcfg_winbind_enum_groups(struct loadparm_context *);
bool lpcfg_winbind_enum_users(struct loadparm_context *);
bool lpcfg_winbind_nested_groups(struct loadparm_context *);
bool lpcfg_winbind_normalize_names(struct loadparm_context *);
bool lpcfg_winbind_offline_logon(struct loadparm_context *);
bool lpcfg_winbind_refresh_tickets(struct loadparm_context *);
bool lpcfg_winbind_rpc_only(struct loadparm_context *);
bool lpcfg_winbind_sealed_pipes(struct loadparm_context *);
bool lpcfg_winbind_trusted_domains_only(struct loadparm_context *);
bool lpcfg_winbind_use_default_domain(struct loadparm_context *);
bool lpcfg_wins_dns_proxy(struct loadparm_context *);
bool lpcfg_wins_proxy(struct loadparm_context *);
const char *lpcfg_afs_username_map(struct loadparm_context *);
const char *lpcfg_ctdbd_socket(struct loadparm_context *);
const char *lpcfg_dedicated_keytab_file(struct loadparm_context *);
const char *lpcfg_dnsdomain(struct loadparm_context *);
const char *lpcfg_dns_forwarder(struct loadparm_context *);
const char *lpcfg_dos_charset(struct loadparm_context *);
const char *lpcfg_guestaccount(struct loadparm_context *);
const char *lpcfg_idmap_backend(struct loadparm_context *);
const char *lpcfg_lockdir(struct loadparm_context *);
const char *lpcfg_logon_drive(struct loadparm_context *);
const char *lpcfg_logon_home(struct loadparm_context *);
const char *lpcfg_logon_path(struct loadparm_context *);
const char *lpcfg_logon_script(struct loadparm_context *);
const char *lpcfg_nbt_client_socket_address(struct loadparm_context *);
const char *lpcfg_ncalrpc_dir(struct loadparm_context *);
const char *lpcfg_netbios_name(struct loadparm_context *);
const char *lpcfg_netbios_scope(struct loadparm_context *);
const char *lpcfg_ntp_signd_socket_directory(struct loadparm_context *);
const char *lpcfg_passdb_backend(struct loadparm_context *);
const char *lpcfg_passwordserver(struct loadparm_context *);
const char *lpcfg_piddir(struct loadparm_context *);
const char *lpcfg_private_dir(struct loadparm_context *);
const char *lpcfg_realm(struct loadparm_context *);
const char *lpcfg_smb_passwd_file(struct loadparm_context *);
const char *lpcfg_socket_options(struct loadparm_context *);
const char *lpcfg_template_homedir(struct loadparm_context *);
const char *lpcfg_template_shell(struct loadparm_context *);
const char *lpcfg_unix_charset(struct loadparm_context *);
const char *lpcfg_utmpdir(struct loadparm_context *);
const char *lpcfg_winbindd_privileged_socket_directory(struct loadparm_context *);
const char *lpcfg_winbindd_socket_directory(struct loadparm_context *);
const char *lpcfg_winbind_separator(struct loadparm_context *);
const char *lpcfg_workgroup(struct loadparm_context *);
const char *lpcfg_wtmpdir(struct loadparm_context *);
int lpcfg_afs_token_lifetime(struct loadparm_context *);
int lpcfg_algorithmic_rid_base(struct loadparm_context *);
int lpcfg_allow_dns_updates(struct loadparm_context *);
int lpcfg_cldap_port(struct loadparm_context *);
int lpcfg_client_ldap_sasl_wrapping(struct loadparm_context *);
int lpcfg_client_schannel(struct loadparm_context *);
int lpcfg_client_signing(struct loadparm_context *);
int lpcfg_cli_maxprotocol(struct loadparm_context *);
int lpcfg_cli_minprotocol(struct loadparm_context *);
int lpcfg_config_backend(struct loadparm_context *);
int lpcfg_ctdb_locktime_warn_threshold(struct loadparm_context *);
int lpcfg_ctdb_timeout(struct loadparm_context *);
int lpcfg_cups_connection_timeout(struct loadparm_context *);
int lpcfg_deadtime(struct loadparm_context *);
int lpcfg_dgram_port(struct loadparm_context *);
int lpcfg__domain_master(struct loadparm_context *);
int lpcfg_idmap_cache_time(struct loadparm_context *);
int lpcfg_idmap_negative_cache_time(struct loadparm_context *);
int lpcfg_init_logon_delay(struct loadparm_context *);
int lpcfg_keepalive(struct loadparm_context *);
int lpcfg_kerberos_method(struct loadparm_context *);
int lpcfg_kpasswd_port(struct loadparm_context *);
int lpcfg_krb5_port(struct loadparm_context *);
int lpcfg_ldap_connection_timeout(struct loadparm_context *);
int lpcfg_ldap_debug_level(struct loadparm_context *);
int lpcfg_ldap_debug_threshold(struct loadparm_context *);
int lpcfg_ldap_deref(struct loadparm_context *);
int lpcfg_ldap_follow_referral(struct loadparm_context *);
int lpcfg_ldap_page_size(struct loadparm_context *);
int lpcfg_ldap_passwd_sync(struct loadparm_context *);
int lpcfg_ldap_replication_sleep(struct loadparm_context *);
int lpcfg_ldap_ssl(struct loadparm_context *);
int lpcfg_ldap_timeout(struct loadparm_context *);
int lpcfg_lm_announce(struct loadparm_context *);
int lpcfg_lm_interval(struct loadparm_context *);
int lpcfg_lock_spin_time(struct loadparm_context *);
int lpcfg_lpqcachetime(struct loadparm_context *);
int lpcfg_machine_password_timeout(struct loadparm_context *);
int lpcfg_mangle_prefix(struct loadparm_context *);
int lpcfg_map_to_guest(struct loadparm_context *);
int lpcfg_maxdisksize(struct loadparm_context *);
int lpcfg_max_log_size(struct loadparm_context *);
int lpcfg_maxmux(struct loadparm_context *);
int lpcfg_max_open_files(struct loadparm_context *);
int lpcfg_max_smbd_processes(struct loadparm_context *);
int lpcfg_max_stat_cache_size(struct loadparm_context *);
int lpcfg_max_ttl(struct loadparm_context *);
int lpcfg_max_wins_ttl(struct loadparm_context *);
int lpcfg_max_xmit(struct loadparm_context *);
int lpcfg_min_wins_ttl(struct loadparm_context *);
int lpcfg_name_cache_timeout(struct loadparm_context *);
int lpcfg_nbt_port(struct loadparm_context *);
int lpcfg_open_files_db_hash_size(struct loadparm_context *);
int lpcfg_oplock_break_wait_time(struct loadparm_context *);
int lpcfg_os_level(struct loadparm_context *);
int lpcfg_passwd_chat_timeout(struct loadparm_context *);
int lpcfg_passwordlevel(struct loadparm_context *);
int lpcfg_printcap_cache_time(struct loadparm_context *);
int lpcfg_restrict_anonymous(struct loadparm_context *);
int lpcfg__security(struct loadparm_context *);
int lpcfg__server_role(struct loadparm_context *);
int lpcfg_server_schannel(struct loadparm_context *);
int lpcfg_server_signing(struct loadparm_context *);
int lpcfg_smb2_max_read(struct loadparm_context *);
int lpcfg_smb2_max_trans(struct loadparm_context *);
int lpcfg_smb2_max_write(struct loadparm_context *);
int lpcfg_srv_maxprotocol(struct loadparm_context *);
int lpcfg_srv_minprotocol(struct loadparm_context *);
int lpcfg_syslog(struct loadparm_context *);
int lpcfg_usernamelevel(struct loadparm_context *);
int lpcfg_username_map_cache_time(struct loadparm_context *);
int lpcfg_usershare_max_shares(struct loadparm_context *);
int lpcfg_web_port(struct loadparm_context *);
int lpcfg_winbind_cache_time(struct loadparm_context *);
int lpcfg_winbind_expand_groups(struct loadparm_context *);
int lpcfg_winbind_max_clients(struct loadparm_context *);
int lpcfg_winbind_reconnect_delay(struct loadparm_context *);
const char **lpcfg_auth_methods(struct loadparm_context *);
const char **lpcfg_cluster_addresses(struct loadparm_context *);
const char **lpcfg_dcerpc_endpoint_servers(struct loadparm_context *);
const char **lpcfg_dns_update_command(struct loadparm_context *);
const char **lpcfg_eventlog_list(struct loadparm_context *);
const char **lpcfg_init_logon_delayed_hosts(struct loadparm_context *);
const char **lpcfg_interfaces(struct loadparm_context *);
const char **lpcfg_name_resolve_order(struct loadparm_context *);
const char **lpcfg_netbios_aliases(struct loadparm_context *);
const char **lpcfg_nsupdate_command(struct loadparm_context *);
const char **lpcfg_preload_modules(struct loadparm_context *);
const char **lpcfg_rndc_command(struct loadparm_context *);
const char **lpcfg_samba_kcc_command(struct loadparm_context *);
const char **lpcfg_server_services(struct loadparm_context *);
const char **lpcfg_smb_ports(struct loadparm_context *);
const char **lpcfg_spn_update_command(struct loadparm_context *);
const char **lpcfg_svcctl_list(struct loadparm_context *);
const char **lpcfg_usershare_prefix_allow_list(struct loadparm_context *);
const char **lpcfg_usershare_prefix_deny_list(struct loadparm_context *);
const char **lpcfg_winbind_nss_info(struct loadparm_context *);
const char **lpcfg_wins_server_list(struct loadparm_context *);
const char *lpcfg_abort_shutdown_script(struct loadparm_context *);
const char *lpcfg_addgroup_script(struct loadparm_context *);
const char *lpcfg_addmachine_script(struct loadparm_context *);
const char *lpcfg_addport_cmd(struct loadparm_context *);
const char *lpcfg_addprinter_cmd(struct loadparm_context *);
const char *lpcfg_add_share_cmd(struct loadparm_context *);
const char *lpcfg_adduser_script(struct loadparm_context *);
const char *lpcfg_addusertogroup_script(struct loadparm_context *);
const char *lpcfg_auto_services(struct loadparm_context *);
const char *lpcfg_change_share_cmd(struct loadparm_context *);
const char *lpcfg_check_password_script(struct loadparm_context *);
const char *lpcfg_cups_server(struct loadparm_context *);
const char *lpcfg_defaultservice(struct loadparm_context *);
const char *lpcfg_deleteprinter_cmd(struct loadparm_context *);
const char *lpcfg_delete_share_cmd(struct loadparm_context *);
const char *lpcfg_delgroup_script(struct loadparm_context *);
const char *lpcfg_deluserfromgroup_script(struct loadparm_context *);
const char *lpcfg_deluser_script(struct loadparm_context *);
const char *lpcfg_enumports_cmd(struct loadparm_context *);
const char *lpcfg_get_quota_command(struct loadparm_context *);
const char *lpcfg_iprint_server(struct loadparm_context *);
const char *lpcfg_ldap_admin_dn(struct loadparm_context *);
const char *lpcfg_ldap_suffix(struct loadparm_context *);
const char *lpcfg_logfile(struct loadparm_context *);
const char *lpcfg_log_nt_token_command(struct loadparm_context *);
const char *lpcfg_mangling_method(struct loadparm_context *);
const char *lpcfg_msg_command(struct loadparm_context *);
const char *lpcfg_nis_home_map_name(struct loadparm_context *);
const char *lpcfg_os2_driver_map(struct loadparm_context *);
const char *lpcfg_panic_action(struct loadparm_context *);
const char *lpcfg_passwd_chat(struct loadparm_context *);
const char *lpcfg_passwd_program(struct loadparm_context *);
const char *lpcfg_perfcount_module(struct loadparm_context *);
const char *lpcfg_remote_announce(struct loadparm_context *);
const char *lpcfg_remote_browse_sync(struct loadparm_context *);
const char *lpcfg_renameuser_script(struct loadparm_context *);
const char *lpcfg_rootdir(struct loadparm_context *);
const char *lpcfg_serverstring(struct loadparm_context *);
const char *lpcfg_setprimarygroup_script(struct loadparm_context *);
const char *lpcfg_set_quota_command(struct loadparm_context *);
const char *lpcfg_share_backend(struct loadparm_context *);
const char *lpcfg_shutdown_script(struct loadparm_context *);
const char *lpcfg_username_map_script(struct loadparm_context *);
const char *lpcfg_username_map(struct loadparm_context *);
const char *lpcfg_usershare_path(struct loadparm_context *);
const char *lpcfg_wins_hook(struct loadparm_context *);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __DEFAULT_LIB_PARAM_PARAM_PROTO_H__ */

