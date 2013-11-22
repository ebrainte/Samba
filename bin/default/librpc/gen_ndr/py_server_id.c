
/* Python wrapper functions auto-generated by pidl */
#include <Python.h>
#include "includes.h"
#include <pytalloc.h>
#include "librpc/rpc/pyrpc.h"
#include "librpc/rpc/pyrpc_util.h"
#include "bin/default/librpc/gen_ndr/ndr_server_id.h"
#include "bin/default/librpc/gen_ndr/ndr_server_id_c.h"

staticforward PyTypeObject server_id_Type;

void initserver_id(void);static PyTypeObject *Object_Type;

static PyObject *py_server_id_get_pid(PyObject *obj, void *closure)
{
	struct server_id *object = (struct server_id *)pytalloc_get_ptr(obj);
	PyObject *py_pid;
	py_pid = PyLong_FromLongLong(object->pid);
	return py_pid;
}

static int py_server_id_set_pid(PyObject *py_obj, PyObject *value, void *closure)
{
	struct server_id *object = (struct server_id *)pytalloc_get_ptr(py_obj);
	if (PyLong_Check(value)) {
		object->pid = PyLong_AsLongLong(value);
	} else if (PyInt_Check(value)) {
		object->pid = PyInt_AsLong(value);
	} else {
		PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
		  PyInt_Type.tp_name, PyLong_Type.tp_name);
		return -1;
	}
	return 0;
}

static PyObject *py_server_id_get_task_id(PyObject *obj, void *closure)
{
	struct server_id *object = (struct server_id *)pytalloc_get_ptr(obj);
	PyObject *py_task_id;
	py_task_id = PyInt_FromLong(object->task_id);
	return py_task_id;
}

static int py_server_id_set_task_id(PyObject *py_obj, PyObject *value, void *closure)
{
	struct server_id *object = (struct server_id *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->task_id = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_server_id_get_vnn(PyObject *obj, void *closure)
{
	struct server_id *object = (struct server_id *)pytalloc_get_ptr(obj);
	PyObject *py_vnn;
	py_vnn = PyInt_FromLong(object->vnn);
	return py_vnn;
}

static int py_server_id_set_vnn(PyObject *py_obj, PyObject *value, void *closure)
{
	struct server_id *object = (struct server_id *)pytalloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->vnn = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_server_id_get_unique_id(PyObject *obj, void *closure)
{
	struct server_id *object = (struct server_id *)pytalloc_get_ptr(obj);
	PyObject *py_unique_id;
	py_unique_id = PyLong_FromLongLong(object->unique_id);
	return py_unique_id;
}

static int py_server_id_set_unique_id(PyObject *py_obj, PyObject *value, void *closure)
{
	struct server_id *object = (struct server_id *)pytalloc_get_ptr(py_obj);
	if (PyLong_Check(value)) {
		object->unique_id = PyLong_AsLongLong(value);
	} else if (PyInt_Check(value)) {
		object->unique_id = PyInt_AsLong(value);
	} else {
		PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
		  PyInt_Type.tp_name, PyLong_Type.tp_name);
		return -1;
	}
	return 0;
}

static PyGetSetDef py_server_id_getsetters[] = {
	{ discard_const_p(char, "pid"), py_server_id_get_pid, py_server_id_set_pid },
	{ discard_const_p(char, "task_id"), py_server_id_get_task_id, py_server_id_set_task_id },
	{ discard_const_p(char, "vnn"), py_server_id_get_vnn, py_server_id_set_vnn },
	{ discard_const_p(char, "unique_id"), py_server_id_get_unique_id, py_server_id_set_unique_id },
	{ NULL }
};

static PyObject *py_server_id_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return pytalloc_new(struct server_id, type);
}

static PyObject *py_server_id_ndr_pack(PyObject *py_obj)
{
	struct server_id *object = (struct server_id *)pytalloc_get_ptr(py_obj);
	DATA_BLOB blob;
	enum ndr_err_code err;
	err = ndr_push_struct_blob(&blob, pytalloc_get_mem_ctx(py_obj), object, (ndr_push_flags_fn_t)ndr_push_server_id);
	if (err != NDR_ERR_SUCCESS) {
		PyErr_SetNdrError(err);
		return NULL;
	}

	return PyString_FromStringAndSize((char *)blob.data, blob.length);
}

static PyObject *py_server_id_ndr_unpack(PyObject *py_obj, PyObject *args, PyObject *kwargs)
{
	struct server_id *object = (struct server_id *)pytalloc_get_ptr(py_obj);
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
		err = ndr_pull_struct_blob(&blob, pytalloc_get_mem_ctx(py_obj), object, (ndr_pull_flags_fn_t)ndr_pull_server_id);
	} else {
		err = ndr_pull_struct_blob_all(&blob, pytalloc_get_mem_ctx(py_obj), object, (ndr_pull_flags_fn_t)ndr_pull_server_id);
	}
	if (err != NDR_ERR_SUCCESS) {
		PyErr_SetNdrError(err);
		return NULL;
	}

	Py_RETURN_NONE;
}

static PyObject *py_server_id_ndr_print(PyObject *py_obj)
{
	struct server_id *object = (struct server_id *)pytalloc_get_ptr(py_obj);
	PyObject *ret;
	char *retstr;

	retstr = ndr_print_struct_string(pytalloc_get_mem_ctx(py_obj), (ndr_print_fn_t)ndr_print_server_id, "server_id", object);
	ret = PyString_FromString(retstr);
	talloc_free(retstr);

	return ret;
}

static PyMethodDef py_server_id_methods[] = {
	{ "__ndr_pack__", (PyCFunction)py_server_id_ndr_pack, METH_NOARGS, "S.ndr_pack(object) -> blob\nNDR pack" },
	{ "__ndr_unpack__", (PyCFunction)py_server_id_ndr_unpack, METH_VARARGS|METH_KEYWORDS, "S.ndr_unpack(class, blob, allow_remaining=False) -> None\nNDR unpack" },
	{ "__ndr_print__", (PyCFunction)py_server_id_ndr_print, METH_VARARGS, "S.ndr_print(object) -> None\nNDR print" },
	{ NULL, NULL, 0, NULL }
};


static PyTypeObject server_id_Type = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "server_id.server_id",
	.tp_getset = py_server_id_getsetters,
	.tp_methods = py_server_id_methods,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_basicsize = sizeof(pytalloc_Object),
	.tp_new = py_server_id_new,
};

static PyMethodDef server_id_methods[] = {
	{ NULL, NULL, 0, NULL }
};

void initserver_id(void)
{
	PyObject *m;
	PyObject *dep_talloc;

	dep_talloc = PyImport_ImportModule("talloc");
	if (dep_talloc == NULL)
		return;

	Object_Type = (PyTypeObject *)PyObject_GetAttrString(dep_talloc, "Object");
	if (Object_Type == NULL)
		return;

	server_id_Type.tp_base = Object_Type;

	if (PyType_Ready(&server_id_Type) < 0)
		return;
#ifdef PY_SERVER_ID_PATCH
	PY_SERVER_ID_PATCH(&server_id_Type);
#endif

	m = Py_InitModule3("server_id", server_id_methods, "server_id DCE/RPC");
	if (m == NULL)
		return;

	PyModule_AddObject(m, "SERVERID_UNIQUE_ID_NOT_TO_VERIFY", PyInt_FromLong(0xFFFFFFFFFFFFFFFFULL));
	PyModule_AddObject(m, "NONCLUSTER_VNN", PyInt_FromLong(0xFFFFFFFF));
	Py_INCREF((PyObject *)(void *)&server_id_Type);
	PyModule_AddObject(m, "server_id", (PyObject *)(void *)&server_id_Type);
#ifdef PY_MOD_SERVER_ID_PATCH
	PY_MOD_SERVER_ID_PATCH(m);
#endif

}
