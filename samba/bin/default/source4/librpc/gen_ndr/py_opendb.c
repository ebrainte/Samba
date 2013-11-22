
/* Python wrapper functions auto-generated by pidl */
#include <Python.h>
#include "includes.h"
#include <pytalloc.h>
#include "librpc/rpc/pyrpc.h"
#include "librpc/rpc/pyrpc_util.h"
#include "bin/default/source4/librpc/gen_ndr/ndr_opendb.h"
#include "bin/default/source4/librpc/gen_ndr/ndr_opendb_c.h"

#include "librpc/gen_ndr/server_id.h"
staticforward PyTypeObject opendb_entry_Type;
staticforward PyTypeObject opendb_pending_Type;
staticforward PyTypeObject opendb_file_Type;

void initopendb(void);static PyTypeObject *server_id_Type;
static PyTypeObject *Object_Type;

static PyObject *py_opendb_entry_get_server(PyObject *obj, void *closure)
{
	struct opendb_entry *object = (struct opendb_entry *)pytalloc_get_ptr(obj);
	PyObject *py_server;
	py_server = pytalloc_reference_ex(server_id_Type, pytalloc_get_mem_ctx(obj), &object->server);
	return py_server;
}

static int py_opendb_entry_set_server(PyObject *py_obj, PyObject *value, void *closure)
{
	struct opendb_entry *object = (struct opendb_entry *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(server_id_Type, value, return -1;);
	if (talloc_reference(pytalloc_get_mem_ctx(py_obj), pytalloc_get_mem_ctx(value)) == NULL) {
		PyErr_NoMemory();
		return -1;
	}
	object->server = *(struct server_id *)pytalloc_get_ptr(value);
	return 0;
}

static PyObject *py_opendb_entry_get_stream_id(PyObject *obj, void *closure)
{
	struct opendb_entry *object = (struct opendb_entry *)pytalloc_get_ptr(obj);
	PyObject *py_stream_id;
	py_stream_id = PyInt_FromLong(object->stream_id);
	return py_stream_id;
}

static int py_opendb_entry_set_stream_id(PyObject *py_obj, PyObject *value, void *closure)
{
	struct opendb_entry *object = (struct opendb_entry *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->stream_id = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_opendb_entry_get_share_access(PyObject *obj, void *closure)
{
	struct opendb_entry *object = (struct opendb_entry *)pytalloc_get_ptr(obj);
	PyObject *py_share_access;
	py_share_access = PyInt_FromLong(object->share_access);
	return py_share_access;
}

static int py_opendb_entry_set_share_access(PyObject *py_obj, PyObject *value, void *closure)
{
	struct opendb_entry *object = (struct opendb_entry *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->share_access = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_opendb_entry_get_access_mask(PyObject *obj, void *closure)
{
	struct opendb_entry *object = (struct opendb_entry *)pytalloc_get_ptr(obj);
	PyObject *py_access_mask;
	py_access_mask = PyInt_FromLong(object->access_mask);
	return py_access_mask;
}

static int py_opendb_entry_set_access_mask(PyObject *py_obj, PyObject *value, void *closure)
{
	struct opendb_entry *object = (struct opendb_entry *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->access_mask = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_opendb_entry_get_file_handle(PyObject *obj, void *closure)
{
	struct opendb_entry *object = (struct opendb_entry *)pytalloc_get_ptr(obj);
	PyObject *py_file_handle;
	py_file_handle = pytalloc_CObject_FromTallocPtr(object->file_handle);
	return py_file_handle;
}

static int py_opendb_entry_set_file_handle(PyObject *py_obj, PyObject *value, void *closure)
{
	struct opendb_entry *object = (struct opendb_entry *)pytalloc_get_ptr(py_obj);
	object->file_handle = PyCObject_AsVoidPtr(value);
	return 0;
}

static PyObject *py_opendb_entry_get_fd(PyObject *obj, void *closure)
{
	struct opendb_entry *object = (struct opendb_entry *)pytalloc_get_ptr(obj);
	PyObject *py_fd;
	py_fd = pytalloc_CObject_FromTallocPtr(object->fd);
	return py_fd;
}

static int py_opendb_entry_set_fd(PyObject *py_obj, PyObject *value, void *closure)
{
	struct opendb_entry *object = (struct opendb_entry *)pytalloc_get_ptr(py_obj);
	object->fd = PyCObject_AsVoidPtr(value);
	return 0;
}

static PyObject *py_opendb_entry_get_delete_on_close(PyObject *obj, void *closure)
{
	struct opendb_entry *object = (struct opendb_entry *)pytalloc_get_ptr(obj);
	PyObject *py_delete_on_close;
	py_delete_on_close = PyInt_FromLong(object->delete_on_close);
	return py_delete_on_close;
}

static int py_opendb_entry_set_delete_on_close(PyObject *py_obj, PyObject *value, void *closure)
{
	struct opendb_entry *object = (struct opendb_entry *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->delete_on_close = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_opendb_entry_get_allow_level_II_oplock(PyObject *obj, void *closure)
{
	struct opendb_entry *object = (struct opendb_entry *)pytalloc_get_ptr(obj);
	PyObject *py_allow_level_II_oplock;
	py_allow_level_II_oplock = PyInt_FromLong(object->allow_level_II_oplock);
	return py_allow_level_II_oplock;
}

static int py_opendb_entry_set_allow_level_II_oplock(PyObject *py_obj, PyObject *value, void *closure)
{
	struct opendb_entry *object = (struct opendb_entry *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->allow_level_II_oplock = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_opendb_entry_get_oplock_level(PyObject *obj, void *closure)
{
	struct opendb_entry *object = (struct opendb_entry *)pytalloc_get_ptr(obj);
	PyObject *py_oplock_level;
	py_oplock_level = PyInt_FromLong(object->oplock_level);
	return py_oplock_level;
}

static int py_opendb_entry_set_oplock_level(PyObject *py_obj, PyObject *value, void *closure)
{
	struct opendb_entry *object = (struct opendb_entry *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->oplock_level = PyInt_AsLong(value);
	return 0;
}

static PyGetSetDef py_opendb_entry_getsetters[] = {
	{ discard_const_p(char, "server"), py_opendb_entry_get_server, py_opendb_entry_set_server },
	{ discard_const_p(char, "stream_id"), py_opendb_entry_get_stream_id, py_opendb_entry_set_stream_id },
	{ discard_const_p(char, "share_access"), py_opendb_entry_get_share_access, py_opendb_entry_set_share_access },
	{ discard_const_p(char, "access_mask"), py_opendb_entry_get_access_mask, py_opendb_entry_set_access_mask },
	{ discard_const_p(char, "file_handle"), py_opendb_entry_get_file_handle, py_opendb_entry_set_file_handle },
	{ discard_const_p(char, "fd"), py_opendb_entry_get_fd, py_opendb_entry_set_fd },
	{ discard_const_p(char, "delete_on_close"), py_opendb_entry_get_delete_on_close, py_opendb_entry_set_delete_on_close },
	{ discard_const_p(char, "allow_level_II_oplock"), py_opendb_entry_get_allow_level_II_oplock, py_opendb_entry_set_allow_level_II_oplock },
	{ discard_const_p(char, "oplock_level"), py_opendb_entry_get_oplock_level, py_opendb_entry_set_oplock_level },
	{ NULL }
};

static PyObject *py_opendb_entry_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return pytalloc_new(struct opendb_entry, type);
}


static PyTypeObject opendb_entry_Type = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "opendb.entry",
	.tp_getset = py_opendb_entry_getsetters,
	.tp_methods = NULL,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_basicsize = sizeof(pytalloc_Object),
	.tp_new = py_opendb_entry_new,
};


static PyObject *py_opendb_pending_get_server(PyObject *obj, void *closure)
{
	struct opendb_pending *object = (struct opendb_pending *)pytalloc_get_ptr(obj);
	PyObject *py_server;
	py_server = pytalloc_reference_ex(server_id_Type, pytalloc_get_mem_ctx(obj), &object->server);
	return py_server;
}

static int py_opendb_pending_set_server(PyObject *py_obj, PyObject *value, void *closure)
{
	struct opendb_pending *object = (struct opendb_pending *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(server_id_Type, value, return -1;);
	if (talloc_reference(pytalloc_get_mem_ctx(py_obj), pytalloc_get_mem_ctx(value)) == NULL) {
		PyErr_NoMemory();
		return -1;
	}
	object->server = *(struct server_id *)pytalloc_get_ptr(value);
	return 0;
}

static PyObject *py_opendb_pending_get_notify_ptr(PyObject *obj, void *closure)
{
	struct opendb_pending *object = (struct opendb_pending *)pytalloc_get_ptr(obj);
	PyObject *py_notify_ptr;
	py_notify_ptr = pytalloc_CObject_FromTallocPtr(object->notify_ptr);
	return py_notify_ptr;
}

static int py_opendb_pending_set_notify_ptr(PyObject *py_obj, PyObject *value, void *closure)
{
	struct opendb_pending *object = (struct opendb_pending *)pytalloc_get_ptr(py_obj);
	object->notify_ptr = PyCObject_AsVoidPtr(value);
	return 0;
}

static PyGetSetDef py_opendb_pending_getsetters[] = {
	{ discard_const_p(char, "server"), py_opendb_pending_get_server, py_opendb_pending_set_server },
	{ discard_const_p(char, "notify_ptr"), py_opendb_pending_get_notify_ptr, py_opendb_pending_set_notify_ptr },
	{ NULL }
};

static PyObject *py_opendb_pending_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return pytalloc_new(struct opendb_pending, type);
}


static PyTypeObject opendb_pending_Type = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "opendb.pending",
	.tp_getset = py_opendb_pending_getsetters,
	.tp_methods = NULL,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_basicsize = sizeof(pytalloc_Object),
	.tp_new = py_opendb_pending_new,
};


static PyObject *py_opendb_file_get_delete_on_close(PyObject *obj, void *closure)
{
	struct opendb_file *object = (struct opendb_file *)pytalloc_get_ptr(obj);
	PyObject *py_delete_on_close;
	py_delete_on_close = PyInt_FromLong(object->delete_on_close);
	return py_delete_on_close;
}

static int py_opendb_file_set_delete_on_close(PyObject *py_obj, PyObject *value, void *closure)
{
	struct opendb_file *object = (struct opendb_file *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->delete_on_close = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_opendb_file_get_open_write_time(PyObject *obj, void *closure)
{
	struct opendb_file *object = (struct opendb_file *)pytalloc_get_ptr(obj);
	PyObject *py_open_write_time;
	py_open_write_time = PyLong_FromLongLong(object->open_write_time);
	return py_open_write_time;
}

static int py_opendb_file_set_open_write_time(PyObject *py_obj, PyObject *value, void *closure)
{
	struct opendb_file *object = (struct opendb_file *)pytalloc_get_ptr(py_obj);
	if (PyLong_Check(value)) {
		object->open_write_time = PyLong_AsLongLong(value);
	} else if (PyInt_Check(value)) {
		object->open_write_time = PyInt_AsLong(value);
	} else {
		PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
		  PyInt_Type.tp_name, PyLong_Type.tp_name);
		return -1;
	}
	return 0;
}

static PyObject *py_opendb_file_get_changed_write_time(PyObject *obj, void *closure)
{
	struct opendb_file *object = (struct opendb_file *)pytalloc_get_ptr(obj);
	PyObject *py_changed_write_time;
	py_changed_write_time = PyLong_FromLongLong(object->changed_write_time);
	return py_changed_write_time;
}

static int py_opendb_file_set_changed_write_time(PyObject *py_obj, PyObject *value, void *closure)
{
	struct opendb_file *object = (struct opendb_file *)pytalloc_get_ptr(py_obj);
	if (PyLong_Check(value)) {
		object->changed_write_time = PyLong_AsLongLong(value);
	} else if (PyInt_Check(value)) {
		object->changed_write_time = PyInt_AsLong(value);
	} else {
		PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
		  PyInt_Type.tp_name, PyLong_Type.tp_name);
		return -1;
	}
	return 0;
}

static PyObject *py_opendb_file_get_path(PyObject *obj, void *closure)
{
	struct opendb_file *object = (struct opendb_file *)pytalloc_get_ptr(obj);
	PyObject *py_path;
	py_path = PyString_FromStringOrNULL(object->path);
	return py_path;
}

static int py_opendb_file_set_path(PyObject *py_obj, PyObject *value, void *closure)
{
	struct opendb_file *object = (struct opendb_file *)pytalloc_get_ptr(py_obj);
	object->path = talloc_strdup(pytalloc_get_mem_ctx(py_obj), PyString_AS_STRING(value));
	return 0;
}

static PyObject *py_opendb_file_get_num_entries(PyObject *obj, void *closure)
{
	struct opendb_file *object = (struct opendb_file *)pytalloc_get_ptr(obj);
	PyObject *py_num_entries;
	py_num_entries = PyInt_FromLong(object->num_entries);
	return py_num_entries;
}

static int py_opendb_file_set_num_entries(PyObject *py_obj, PyObject *value, void *closure)
{
	struct opendb_file *object = (struct opendb_file *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->num_entries = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_opendb_file_get_entries(PyObject *obj, void *closure)
{
	struct opendb_file *object = (struct opendb_file *)pytalloc_get_ptr(obj);
	PyObject *py_entries;
	py_entries = PyList_New(object->num_entries);
	if (py_entries == NULL) {
		return NULL;
	}
	{
		int entries_cntr_0;
		for (entries_cntr_0 = 0; entries_cntr_0 < object->num_entries; entries_cntr_0++) {
			PyObject *py_entries_0;
			py_entries_0 = pytalloc_reference_ex(&opendb_entry_Type, object->entries, &object->entries[entries_cntr_0]);
			PyList_SetItem(py_entries, entries_cntr_0, py_entries_0);
		}
	}
	return py_entries;
}

static int py_opendb_file_set_entries(PyObject *py_obj, PyObject *value, void *closure)
{
	struct opendb_file *object = (struct opendb_file *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyList_Type, value, return -1;);
	{
		int entries_cntr_0;
		object->entries = talloc_array_ptrtype(pytalloc_get_mem_ctx(py_obj), object->entries, PyList_GET_SIZE(value));
		if (!object->entries) { return -1;; }
		talloc_set_name_const(object->entries, "ARRAY: object->entries");
		for (entries_cntr_0 = 0; entries_cntr_0 < PyList_GET_SIZE(value); entries_cntr_0++) {
			PY_CHECK_TYPE(&opendb_entry_Type, PyList_GET_ITEM(value, entries_cntr_0), return -1;);
			if (talloc_reference(object->entries, pytalloc_get_mem_ctx(PyList_GET_ITEM(value, entries_cntr_0))) == NULL) {
				PyErr_NoMemory();
				return -1;
			}
			object->entries[entries_cntr_0] = *(struct opendb_entry *)pytalloc_get_ptr(PyList_GET_ITEM(value, entries_cntr_0));
		}
	}
	return 0;
}

static PyObject *py_opendb_file_get_num_pending(PyObject *obj, void *closure)
{
	struct opendb_file *object = (struct opendb_file *)pytalloc_get_ptr(obj);
	PyObject *py_num_pending;
	py_num_pending = PyInt_FromLong(object->num_pending);
	return py_num_pending;
}

static int py_opendb_file_set_num_pending(PyObject *py_obj, PyObject *value, void *closure)
{
	struct opendb_file *object = (struct opendb_file *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->num_pending = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_opendb_file_get_pending(PyObject *obj, void *closure)
{
	struct opendb_file *object = (struct opendb_file *)pytalloc_get_ptr(obj);
	PyObject *py_pending;
	py_pending = PyList_New(object->num_pending);
	if (py_pending == NULL) {
		return NULL;
	}
	{
		int pending_cntr_0;
		for (pending_cntr_0 = 0; pending_cntr_0 < object->num_pending; pending_cntr_0++) {
			PyObject *py_pending_0;
			py_pending_0 = pytalloc_reference_ex(&opendb_pending_Type, object->pending, &object->pending[pending_cntr_0]);
			PyList_SetItem(py_pending, pending_cntr_0, py_pending_0);
		}
	}
	return py_pending;
}

static int py_opendb_file_set_pending(PyObject *py_obj, PyObject *value, void *closure)
{
	struct opendb_file *object = (struct opendb_file *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyList_Type, value, return -1;);
	{
		int pending_cntr_0;
		object->pending = talloc_array_ptrtype(pytalloc_get_mem_ctx(py_obj), object->pending, PyList_GET_SIZE(value));
		if (!object->pending) { return -1;; }
		talloc_set_name_const(object->pending, "ARRAY: object->pending");
		for (pending_cntr_0 = 0; pending_cntr_0 < PyList_GET_SIZE(value); pending_cntr_0++) {
			PY_CHECK_TYPE(&opendb_pending_Type, PyList_GET_ITEM(value, pending_cntr_0), return -1;);
			if (talloc_reference(object->pending, pytalloc_get_mem_ctx(PyList_GET_ITEM(value, pending_cntr_0))) == NULL) {
				PyErr_NoMemory();
				return -1;
			}
			object->pending[pending_cntr_0] = *(struct opendb_pending *)pytalloc_get_ptr(PyList_GET_ITEM(value, pending_cntr_0));
		}
	}
	return 0;
}

static PyGetSetDef py_opendb_file_getsetters[] = {
	{ discard_const_p(char, "delete_on_close"), py_opendb_file_get_delete_on_close, py_opendb_file_set_delete_on_close },
	{ discard_const_p(char, "open_write_time"), py_opendb_file_get_open_write_time, py_opendb_file_set_open_write_time },
	{ discard_const_p(char, "changed_write_time"), py_opendb_file_get_changed_write_time, py_opendb_file_set_changed_write_time },
	{ discard_const_p(char, "path"), py_opendb_file_get_path, py_opendb_file_set_path },
	{ discard_const_p(char, "num_entries"), py_opendb_file_get_num_entries, py_opendb_file_set_num_entries },
	{ discard_const_p(char, "entries"), py_opendb_file_get_entries, py_opendb_file_set_entries },
	{ discard_const_p(char, "num_pending"), py_opendb_file_get_num_pending, py_opendb_file_set_num_pending },
	{ discard_const_p(char, "pending"), py_opendb_file_get_pending, py_opendb_file_set_pending },
	{ NULL }
};

static PyObject *py_opendb_file_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return pytalloc_new(struct opendb_file, type);
}

static PyObject *py_opendb_file_ndr_pack(PyObject *py_obj)
{
	struct opendb_file *object = (struct opendb_file *)pytalloc_get_ptr(py_obj);
	DATA_BLOB blob;
	enum ndr_err_code err;
	err = ndr_push_struct_blob(&blob, pytalloc_get_mem_ctx(py_obj), object, (ndr_push_flags_fn_t)ndr_push_opendb_file);
	if (err != NDR_ERR_SUCCESS) {
		PyErr_SetNdrError(err);
		return NULL;
	}

	return PyString_FromStringAndSize((char *)blob.data, blob.length);
}

static PyObject *py_opendb_file_ndr_unpack(PyObject *py_obj, PyObject *args, PyObject *kwargs)
{
	struct opendb_file *object = (struct opendb_file *)pytalloc_get_ptr(py_obj);
	DATA_BLOB blob;
	int blob_length = 0;
	enum ndr_err_code err;
	const char * const kwnames[] = { "data_blob", "allow_remaining", NULL };
	PyObject *allow_remaining_obj = NULL;
	bool allow_remaining = false;

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s#|O:__ndr_unpack__",
		discard_const_p(char *, kwnames),
		&blob.data, &blob_length,
		&allow_remaining_obj)) {
		return NULL;
	}
	blob.length = blob_length;

	if (allow_remaining_obj && PyObject_IsTrue(allow_remaining_obj)) {
		allow_remaining = true;
	}

	if (allow_remaining) {
		err = ndr_pull_struct_blob(&blob, pytalloc_get_mem_ctx(py_obj), object, (ndr_pull_flags_fn_t)ndr_pull_opendb_file);
	} else {
		err = ndr_pull_struct_blob_all(&blob, pytalloc_get_mem_ctx(py_obj), object, (ndr_pull_flags_fn_t)ndr_pull_opendb_file);
	}
	if (err != NDR_ERR_SUCCESS) {
		PyErr_SetNdrError(err);
		return NULL;
	}

	Py_RETURN_NONE;
}

static PyObject *py_opendb_file_ndr_print(PyObject *py_obj)
{
	struct opendb_file *object = (struct opendb_file *)pytalloc_get_ptr(py_obj);
	PyObject *ret;
	char *retstr;

	retstr = ndr_print_struct_string(pytalloc_get_mem_ctx(py_obj), (ndr_print_fn_t)ndr_print_opendb_file, "opendb_file", object);
	ret = PyString_FromString(retstr);
	talloc_free(retstr);

	return ret;
}

static PyMethodDef py_opendb_file_methods[] = {
	{ "__ndr_pack__", (PyCFunction)py_opendb_file_ndr_pack, METH_NOARGS, "S.ndr_pack(object) -> blob\nNDR pack" },
	{ "__ndr_unpack__", (PyCFunction)py_opendb_file_ndr_unpack, METH_VARARGS|METH_KEYWORDS, "S.ndr_unpack(class, blob, allow_remaining=False) -> None\nNDR unpack" },
	{ "__ndr_print__", (PyCFunction)py_opendb_file_ndr_print, METH_VARARGS, "S.ndr_print(object) -> None\nNDR print" },
	{ NULL, NULL, 0, NULL }
};


static PyTypeObject opendb_file_Type = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "opendb.file",
	.tp_getset = py_opendb_file_getsetters,
	.tp_methods = py_opendb_file_methods,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_basicsize = sizeof(pytalloc_Object),
	.tp_new = py_opendb_file_new,
};

static PyMethodDef opendb_methods[] = {
	{ NULL, NULL, 0, NULL }
};

void initopendb(void)
{
	PyObject *m;
	PyObject *dep_talloc;
	PyObject *dep_samba_dcerpc_server_id;

	dep_talloc = PyImport_ImportModule("talloc");
	if (dep_talloc == NULL)
		return;

	dep_samba_dcerpc_server_id = PyImport_ImportModule("samba.dcerpc.server_id");
	if (dep_samba_dcerpc_server_id == NULL)
		return;

	server_id_Type = (PyTypeObject *)PyObject_GetAttrString(dep_samba_dcerpc_server_id, "server_id");
	if (server_id_Type == NULL)
		return;

	Object_Type = (PyTypeObject *)PyObject_GetAttrString(dep_talloc, "Object");
	if (Object_Type == NULL)
		return;

	opendb_entry_Type.tp_base = Object_Type;

	opendb_pending_Type.tp_base = Object_Type;

	opendb_file_Type.tp_base = Object_Type;

	if (PyType_Ready(&opendb_entry_Type) < 0)
		return;
	if (PyType_Ready(&opendb_pending_Type) < 0)
		return;
	if (PyType_Ready(&opendb_file_Type) < 0)
		return;
#ifdef PY_ENTRY_PATCH
	PY_ENTRY_PATCH(&opendb_entry_Type);
#endif
#ifdef PY_PENDING_PATCH
	PY_PENDING_PATCH(&opendb_pending_Type);
#endif
#ifdef PY_FILE_PATCH
	PY_FILE_PATCH(&opendb_file_Type);
#endif

	m = Py_InitModule3("opendb", opendb_methods, "opendb DCE/RPC");
	if (m == NULL)
		return;

	Py_INCREF((PyObject *)(void *)&opendb_entry_Type);
	PyModule_AddObject(m, "entry", (PyObject *)(void *)&opendb_entry_Type);
	Py_INCREF((PyObject *)(void *)&opendb_pending_Type);
	PyModule_AddObject(m, "pending", (PyObject *)(void *)&opendb_pending_Type);
	Py_INCREF((PyObject *)(void *)&opendb_file_Type);
	PyModule_AddObject(m, "file", (PyObject *)(void *)&opendb_file_Type);
#ifdef PY_MOD_OPENDB_PATCH
	PY_MOD_OPENDB_PATCH(m);
#endif

}