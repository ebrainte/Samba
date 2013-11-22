#ifndef __DEFAULT_SOURCE4_NTVFS_POSIX_VFS_POSIX_PROTO_H__
#define __DEFAULT_SOURCE4_NTVFS_POSIX_VFS_POSIX_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

/* this file contains prototypes for functions that are private 
 * to this subsystem or library. These functions should not be 
 * used outside this particular subsystem! */


/* The following definitions come from ../source4/ntvfs/posix/vfs_posix.c  */

NTSTATUS ntvfs_posix_init(void);

/* The following definitions come from ../source4/ntvfs/posix/pvfs_util.c  */

bool pvfs_has_wildcard(const char *str);
NTSTATUS pvfs_map_errno(struct pvfs_state *pvfs, int unix_errno);
NTSTATUS pvfs_match_attrib(struct pvfs_state *pvfs, struct pvfs_filename *name, 
			   uint32_t attrib, uint32_t must_attrib);
uint32_t pvfs_attrib_normalise(uint32_t attrib, mode_t mode);
NTSTATUS pvfs_copy_file(struct pvfs_state *pvfs,
			struct pvfs_filename *name1, 
			struct pvfs_filename *name2,
			bool allow_override);
uint32_t pvfs_name_hash(const char *key, size_t length);
uint64_t pvfs_round_alloc_size(struct pvfs_state *pvfs, uint64_t size);

/* The following definitions come from ../source4/ntvfs/posix/pvfs_search.c  */

NTSTATUS pvfs_search_first(struct ntvfs_module_context *ntvfs,
			   struct ntvfs_request *req, union smb_search_first *io, 
			   void *search_private, 
			   bool (*callback)(void *, const union smb_search_data *));
NTSTATUS pvfs_search_next(struct ntvfs_module_context *ntvfs,
			  struct ntvfs_request *req, union smb_search_next *io, 
			  void *search_private, 
			  bool (*callback)(void *, const union smb_search_data *));
NTSTATUS pvfs_search_close(struct ntvfs_module_context *ntvfs,
			   struct ntvfs_request *req, union smb_search_close *io);

/* The following definitions come from ../source4/ntvfs/posix/pvfs_dirlist.c  */

NTSTATUS pvfs_list_start(struct pvfs_state *pvfs, struct pvfs_filename *name, 
			 TALLOC_CTX *mem_ctx, struct pvfs_dir **dirp);
const char *pvfs_list_next(struct pvfs_dir *dir, off_t *ofs);
const char *pvfs_list_unix_path(struct pvfs_dir *dir);
bool pvfs_list_eos(struct pvfs_dir *dir, off_t ofs);
NTSTATUS pvfs_list_seek(struct pvfs_dir *dir, const char *name, off_t *ofs);
NTSTATUS pvfs_list_seek_ofs(struct pvfs_dir *dir, uint32_t resume_key, off_t *ofs);
bool pvfs_directory_empty(struct pvfs_state *pvfs, struct pvfs_filename *name);

/* The following definitions come from ../source4/ntvfs/posix/pvfs_fileinfo.c  */


/****************************************************************************
 Change a unix mode to a dos mode.
****************************************************************************/
NTSTATUS pvfs_fill_dos_info(struct pvfs_state *pvfs, struct pvfs_filename *name,
			    unsigned int flags, int fd);
mode_t pvfs_fileperms(struct pvfs_state *pvfs, uint32_t attrib);

/* The following definitions come from ../source4/ntvfs/posix/pvfs_unlink.c  */

NTSTATUS pvfs_unlink(struct ntvfs_module_context *ntvfs,
		     struct ntvfs_request *req,
		     union smb_unlink *unl);

/* The following definitions come from ../source4/ntvfs/posix/pvfs_mkdir.c  */

NTSTATUS pvfs_mkdir(struct ntvfs_module_context *ntvfs,
		    struct ntvfs_request *req, union smb_mkdir *md);
NTSTATUS pvfs_rmdir(struct ntvfs_module_context *ntvfs,
		    struct ntvfs_request *req, struct smb_rmdir *rd);

/* The following definitions come from ../source4/ntvfs/posix/pvfs_open.c  */

struct pvfs_file *pvfs_find_fd(struct pvfs_state *pvfs,
			       struct ntvfs_request *req, struct ntvfs_handle *h);
NTSTATUS pvfs_locking_key(struct pvfs_filename *name,
			  TALLOC_CTX *mem_ctx, DATA_BLOB *key);
NTSTATUS pvfs_odb_retry_setup(struct ntvfs_module_context *ntvfs,
			      struct ntvfs_request *req,
			      struct odb_lock *lck,
			      struct timeval end_time,
			      void *io,
			      void *private_data,
			      void (*callback)(struct pvfs_odb_retry *r,
					       struct ntvfs_module_context *ntvfs,
					       struct ntvfs_request *req,
					       void *io,
					       void *private_data,
					       enum pvfs_wait_notice reason));
NTSTATUS pvfs_open(struct ntvfs_module_context *ntvfs,
		   struct ntvfs_request *req, union smb_open *io);
NTSTATUS pvfs_close(struct ntvfs_module_context *ntvfs,
		    struct ntvfs_request *req, union smb_close *io);
NTSTATUS pvfs_logoff(struct ntvfs_module_context *ntvfs,
		     struct ntvfs_request *req);
NTSTATUS pvfs_exit(struct ntvfs_module_context *ntvfs,
		   struct ntvfs_request *req);
NTSTATUS pvfs_set_delete_on_close(struct pvfs_state *pvfs,
				  struct ntvfs_request *req, 
				  struct pvfs_file *f, bool del_on_close);
NTSTATUS pvfs_can_delete(struct pvfs_state *pvfs, 
			 struct ntvfs_request *req,
			 struct pvfs_filename *name,
			 struct odb_lock **lckp);
NTSTATUS pvfs_can_rename(struct pvfs_state *pvfs, 
			 struct ntvfs_request *req,
			 struct pvfs_filename *name,
			 struct odb_lock **lckp);
NTSTATUS pvfs_can_update_file_size(struct pvfs_state *pvfs,
				   struct ntvfs_request *req,
				   struct pvfs_filename *name,
				   struct odb_lock **lckp);
NTSTATUS pvfs_can_stat(struct pvfs_state *pvfs, 
		       struct ntvfs_request *req,
		       struct pvfs_filename *name);
bool pvfs_delete_on_close_set(struct pvfs_state *pvfs, struct pvfs_file_handle *h);

/* The following definitions come from ../source4/ntvfs/posix/pvfs_read.c  */

NTSTATUS pvfs_read(struct ntvfs_module_context *ntvfs,
		   struct ntvfs_request *req, union smb_read *rd);

/* The following definitions come from ../source4/ntvfs/posix/pvfs_flush.c  */

NTSTATUS pvfs_flush(struct ntvfs_module_context *ntvfs,
		    struct ntvfs_request *req,
		    union smb_flush *io);

/* The following definitions come from ../source4/ntvfs/posix/pvfs_write.c  */

NTSTATUS pvfs_write(struct ntvfs_module_context *ntvfs,
		    struct ntvfs_request *req, union smb_write *wr);

/* The following definitions come from ../source4/ntvfs/posix/pvfs_fsinfo.c  */

NTSTATUS pvfs_fsinfo(struct ntvfs_module_context *ntvfs,
		     struct ntvfs_request *req, union smb_fsinfo *fs);

/* The following definitions come from ../source4/ntvfs/posix/pvfs_qfileinfo.c  */

NTSTATUS pvfs_query_ea_list(struct pvfs_state *pvfs, TALLOC_CTX *mem_ctx, 
			    struct pvfs_filename *name, int fd, 
			    unsigned int num_names,
			    struct ea_name *names,
			    struct smb_ea_list *eas);
NTSTATUS pvfs_qpathinfo(struct ntvfs_module_context *ntvfs,
		        struct ntvfs_request *req, union smb_fileinfo *info);
NTSTATUS pvfs_qfileinfo(struct ntvfs_module_context *ntvfs,
		        struct ntvfs_request *req, union smb_fileinfo *info);

/* The following definitions come from ../source4/ntvfs/posix/pvfs_setfileinfo.c  */

NTSTATUS pvfs_setfileinfo_ea_set(struct pvfs_state *pvfs, 
				 struct pvfs_filename *name,
				 int fd, uint16_t num_eas,
				 struct ea_struct *eas);
NTSTATUS pvfs_setfileinfo(struct ntvfs_module_context *ntvfs,
			  struct ntvfs_request *req, 
			  union smb_setfileinfo *info);
NTSTATUS pvfs_setpathinfo(struct ntvfs_module_context *ntvfs,
			  struct ntvfs_request *req, union smb_setfileinfo *info);

/* The following definitions come from ../source4/ntvfs/posix/pvfs_rename.c  */

NTSTATUS pvfs_do_rename(struct pvfs_state *pvfs,
			struct odb_lock *lck,
			const struct pvfs_filename *name1,
			const char *name2);
NTSTATUS pvfs_rename(struct ntvfs_module_context *ntvfs,
		     struct ntvfs_request *req, union smb_rename *ren);

/* The following definitions come from ../source4/ntvfs/posix/pvfs_resolve.c  */


/**
  compare two filename components. This is where the name mangling hook will go
*/
NTSTATUS pvfs_resolve_name(struct pvfs_state *pvfs, 
			   struct ntvfs_request *req,
			   const char *cifs_name,
			   unsigned int flags, struct pvfs_filename **name);
NTSTATUS pvfs_resolve_partial(struct pvfs_state *pvfs, TALLOC_CTX *mem_ctx,
			      const char *unix_dir, const char *fname,
			      unsigned int flags, struct pvfs_filename **name);
NTSTATUS pvfs_resolve_name_fd(struct pvfs_state *pvfs, int fd,
			      struct pvfs_filename *name, unsigned int flags);
NTSTATUS pvfs_resolve_name_handle(struct pvfs_state *pvfs,
				  struct pvfs_file_handle *h);
NTSTATUS pvfs_resolve_parent(struct pvfs_state *pvfs, TALLOC_CTX *mem_ctx,
			     const struct pvfs_filename *child,
			     struct pvfs_filename **name);

/* The following definitions come from ../source4/ntvfs/posix/pvfs_shortname.c  */

NTSTATUS pvfs_mangle_init(struct pvfs_state *pvfs);
char *pvfs_short_name_component(struct pvfs_state *pvfs, const char *name);
const char *pvfs_short_name(struct pvfs_state *pvfs, TALLOC_CTX *mem_ctx, 
			    struct pvfs_filename *name);
char *pvfs_mangled_lookup(struct pvfs_state *pvfs, TALLOC_CTX *mem_ctx, 
			  const char *name);
bool pvfs_is_reserved_name(struct pvfs_state *pvfs, const char *name);
bool pvfs_is_mangled_component(struct pvfs_state *pvfs, const char *name);

/* The following definitions come from ../source4/ntvfs/posix/pvfs_lock.c  */

NTSTATUS pvfs_check_lock(struct pvfs_state *pvfs,
			 struct pvfs_file *f,
			 uint32_t smbpid,
			 uint64_t offset, uint64_t count,
			 enum brl_type rw);
void pvfs_lock_close(struct pvfs_state *pvfs, struct pvfs_file *f);
NTSTATUS pvfs_lock(struct ntvfs_module_context *ntvfs,
		   struct ntvfs_request *req, union smb_lock *lck);

/* The following definitions come from ../source4/ntvfs/posix/pvfs_oplock.c  */

NTSTATUS pvfs_setup_oplock(struct pvfs_file *f, uint32_t oplock_granted);
NTSTATUS pvfs_oplock_release(struct ntvfs_module_context *ntvfs,
			     struct ntvfs_request *req, union smb_lock *lck);
NTSTATUS pvfs_break_level2_oplocks(struct pvfs_file *f);

/* The following definitions come from ../source4/ntvfs/posix/pvfs_wait.c  */

NTSTATUS pvfs_async_setup(struct ntvfs_module_context *ntvfs,
			  struct ntvfs_request *req, void *private_data);
struct pvfs_wait *pvfs_wait_message(struct pvfs_state *pvfs,
				    struct ntvfs_request *req,
				    int msg_type,
				    struct timeval end_time,
				    void (*fn)(void *, enum pvfs_wait_notice),
				    void *private_data);
NTSTATUS pvfs_cancel(struct ntvfs_module_context *ntvfs, struct ntvfs_request *req);

/* The following definitions come from ../source4/ntvfs/posix/pvfs_seek.c  */

NTSTATUS pvfs_seek(struct ntvfs_module_context *ntvfs,
		   struct ntvfs_request *req,
		   union smb_seek *io);

/* The following definitions come from ../source4/ntvfs/posix/pvfs_ioctl.c  */

NTSTATUS pvfs_ioctl(struct ntvfs_module_context *ntvfs,
		    struct ntvfs_request *req,
		    union smb_ioctl *io);

/* The following definitions come from ../source4/ntvfs/posix/pvfs_xattr.c  */

NTSTATUS pvfs_xattr_unlink_hook(struct pvfs_state *pvfs, const char *fname);
NTSTATUS pvfs_xattr_ndr_load(struct pvfs_state *pvfs,
			     TALLOC_CTX *mem_ctx,
			     const char *fname, int fd, const char *attr_name,
			     void *p, void *pull_fn);
NTSTATUS pvfs_xattr_ndr_save(struct pvfs_state *pvfs,
			     const char *fname, int fd, const char *attr_name, 
			     void *p, void *push_fn);
NTSTATUS pvfs_dosattrib_load(struct pvfs_state *pvfs, struct pvfs_filename *name, int fd);
NTSTATUS pvfs_dosattrib_save(struct pvfs_state *pvfs, struct pvfs_filename *name, int fd);
NTSTATUS pvfs_doseas_load(struct pvfs_state *pvfs, struct pvfs_filename *name, int fd,
			  struct xattr_DosEAs *eas);
NTSTATUS pvfs_doseas_save(struct pvfs_state *pvfs, struct pvfs_filename *name, int fd,
			  struct xattr_DosEAs *eas);
NTSTATUS pvfs_streams_load(struct pvfs_state *pvfs, struct pvfs_filename *name, int fd,
			   struct xattr_DosStreams *streams);
NTSTATUS pvfs_streams_save(struct pvfs_state *pvfs, struct pvfs_filename *name, int fd,
			   struct xattr_DosStreams *streams);
NTSTATUS pvfs_acl_load(struct pvfs_state *pvfs, struct pvfs_filename *name, int fd,
		       struct xattr_NTACL *acl);
NTSTATUS pvfs_acl_save(struct pvfs_state *pvfs, struct pvfs_filename *name, int fd,
		       struct xattr_NTACL *acl);
NTSTATUS pvfs_xattr_create(struct pvfs_state *pvfs, 
			   const char *fname, int fd,
			   const char *attr_prefix,
			   const char *attr_name);
NTSTATUS pvfs_xattr_delete(struct pvfs_state *pvfs, 
			   const char *fname, int fd,
			   const char *attr_prefix,
			   const char *attr_name);
NTSTATUS pvfs_xattr_load(struct pvfs_state *pvfs, 
			 TALLOC_CTX *mem_ctx,
			 const char *fname, int fd,
			 const char *attr_prefix,
			 const char *attr_name,
			 size_t estimated_size,
			 DATA_BLOB *blob);
NTSTATUS pvfs_xattr_save(struct pvfs_state *pvfs, 
			 const char *fname, int fd,
			 const char *attr_prefix,
			 const char *attr_name,
			 const DATA_BLOB *blob);
void pvfs_xattr_probe(struct pvfs_state *pvfs);

/* The following definitions come from ../source4/ntvfs/posix/pvfs_streams.c  */

NTSTATUS pvfs_stream_information(struct pvfs_state *pvfs, 
				 TALLOC_CTX *mem_ctx,
				 struct pvfs_filename *name, int fd, 
				 struct stream_information *info);
NTSTATUS pvfs_stream_info(struct pvfs_state *pvfs, struct pvfs_filename *name, int fd);
NTSTATUS pvfs_stream_rename(struct pvfs_state *pvfs, struct pvfs_filename *name, int fd,
			    const char *new_name, bool overwrite);
NTSTATUS pvfs_stream_create(struct pvfs_state *pvfs, 
			    struct pvfs_filename *name, 
			    int fd);
NTSTATUS pvfs_stream_delete(struct pvfs_state *pvfs, 
			    struct pvfs_filename *name, 
			    int fd);
ssize_t pvfs_stream_read(struct pvfs_state *pvfs,
			 struct pvfs_file_handle *h, void *data, size_t count, off_t offset);
ssize_t pvfs_stream_write(struct pvfs_state *pvfs,
			  struct pvfs_file_handle *h, const void *data, size_t count, off_t offset);
NTSTATUS pvfs_stream_truncate(struct pvfs_state *pvfs,
			      struct pvfs_filename *name, int fd, off_t length);

/* The following definitions come from ../source4/ntvfs/posix/pvfs_notify.c  */

NTSTATUS pvfs_notify(struct ntvfs_module_context *ntvfs, 
		     struct ntvfs_request *req,
		     union smb_notify *info);

/* The following definitions come from ../source4/ntvfs/posix/pvfs_sys.c  */

int pvfs_sys_open(struct pvfs_state *pvfs, const char *filename, int flags, mode_t mode, bool allow_override);
int pvfs_sys_unlink(struct pvfs_state *pvfs, const char *filename, bool allow_override);
int pvfs_sys_rename(struct pvfs_state *pvfs, const char *name1, const char *name2, bool allow_override);
int pvfs_sys_mkdir(struct pvfs_state *pvfs, const char *dirname, mode_t mode, bool allow_override);
int pvfs_sys_rmdir(struct pvfs_state *pvfs, const char *dirname, bool allow_override);
int pvfs_sys_fchmod(struct pvfs_state *pvfs, int fd, mode_t mode, bool allow_override);
int pvfs_sys_chmod(struct pvfs_state *pvfs, const char *filename, mode_t mode, bool allow_override);

/* The following definitions come from ../source4/ntvfs/posix/xattr_system.c  */

NTSTATUS pull_xattr_blob_system(struct pvfs_state *pvfs,
				TALLOC_CTX *mem_ctx,
				const char *attr_name, 
				const char *fname, 
				int fd, 
				size_t estimated_size,
				DATA_BLOB *blob);
NTSTATUS push_xattr_blob_system(struct pvfs_state *pvfs,
				const char *attr_name, 
				const char *fname, 
				int fd, 
				const DATA_BLOB *blob);
NTSTATUS delete_xattr_system(struct pvfs_state *pvfs, const char *attr_name, 
			     const char *fname, int fd);
NTSTATUS unlink_xattr_system(struct pvfs_state *pvfs, const char *fname);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __DEFAULT_SOURCE4_NTVFS_POSIX_VFS_POSIX_PROTO_H__ */
