
/* Python wrapper functions auto-generated by pidl */
#include <Python.h>
#include "includes.h"
#include <pytalloc.h>
#include "librpc/rpc/pyrpc.h"
#include "librpc/rpc/pyrpc_util.h"
#include "autoconf/librpc/gen_ndr/ndr_unixinfo.h"
#include "autoconf/librpc/gen_ndr/ndr_unixinfo_c.h"

#include "librpc/gen_ndr/security.h"
staticforward PyTypeObject unixinfo_GetPWUidInfo_Type;
staticforward PyTypeObject unixinfo_InterfaceType;

void initunixinfo(void);static PyTypeObject *dom_sid_Type;
static PyTypeObject *Object_Type;
static PyTypeObject *ClientConnection_Type;

static PyObject *py_unixinfo_GetPWUidInfo_get_status(PyObject *obj, void *closure)
{
	struct unixinfo_GetPWUidInfo *object = (struct unixinfo_GetPWUidInfo *)pytalloc_get_ptr(obj);
	PyObject *py_status;
	py_status = PyErr_FromNTSTATUS(object->status);
	return py_status;
}

static int py_unixinfo_GetPWUidInfo_set_status(PyObject *py_obj, PyObject *value, void *closure)
{
	struct unixinfo_GetPWUidInfo *object = (struct unixinfo_GetPWUidInfo *)pytalloc_get_ptr(py_obj);
	object->status = NT_STATUS(PyInt_AsLong(value));
	return 0;
}

static PyObject *py_unixinfo_GetPWUidInfo_get_homedir(PyObject *obj, void *closure)
{
	struct unixinfo_GetPWUidInfo *object = (struct unixinfo_GetPWUidInfo *)pytalloc_get_ptr(obj);
	PyObject *py_homedir;
	if (object->homedir == NULL) {
		py_homedir = Py_None;
		Py_INCREF(py_homedir);
	} else {
		py_homedir = PyUnicode_Decode(object->homedir, strlen(object->homedir), "utf-8", "ignore");
	}
	return py_homedir;
}

static int py_unixinfo_GetPWUidInfo_set_homedir(PyObject *py_obj, PyObject *value, void *closure)
{
	struct unixinfo_GetPWUidInfo *object = (struct unixinfo_GetPWUidInfo *)pytalloc_get_ptr(py_obj);
	if (PyUnicode_Check(value)) {
		object->homedir = PyString_AS_STRING(PyUnicode_AsEncodedString(value, "utf-8", "ignore"));
	} else if (PyString_Check(value)) {
		object->homedir = PyString_AS_STRING(value);
	} else {
		PyErr_Format(PyExc_TypeError, "Expected string or unicode object, got %s", Py_TYPE(value)->tp_name);
		return -1;
	}
	return 0;
}

static PyObject *py_unixinfo_GetPWUidInfo_get_shell(PyObject *obj, void *closure)
{
	struct unixinfo_GetPWUidInfo *object = (struct unixinfo_GetPWUidInfo *)pytalloc_get_ptr(obj);
	PyObject *py_shell;
	if (object->shell == NULL) {
		py_shell = Py_None;
		Py_INCREF(py_shell);
	} else {
		py_shell = PyUnicode_Decode(object->shell, strlen(object->shell), "utf-8", "ignore");
	}
	return py_shell;
}

static int py_unixinfo_GetPWUidInfo_set_shell(PyObject *py_obj, PyObject *value, void *closure)
{
	struct unixinfo_GetPWUidInfo *object = (struct unixinfo_GetPWUidInfo *)pytalloc_get_ptr(py_obj);
	if (PyUnicode_Check(value)) {
		object->shell = PyString_AS_STRING(PyUnicode_AsEncodedString(value, "utf-8", "ignore"));
	} else if (PyString_Check(value)) {
		object->shell = PyString_AS_STRING(value);
	} else {
		PyErr_Format(PyExc_TypeError, "Expected string or unicode object, got %s", Py_TYPE(value)->tp_name);
		return -1;
	}
	return 0;
}

static PyGetSetDef py_unixinfo_GetPWUidInfo_getsetters[] = {
	{ discard_const_p(char, "status"), py_unixinfo_GetPWUidInfo_get_status, py_unixinfo_GetPWUidInfo_set_status },
	{ discard_const_p(char, "homedir"), py_unixinfo_GetPWUidInfo_get_homedir, py_unixinfo_GetPWUidInfo_set_homedir },
	{ discard_const_p(char, "shell"), py_unixinfo_GetPWUidInfo_get_shell, py_unixinfo_GetPWUidInfo_set_shell },
	{ NULL }
};

static PyObject *py_unixinfo_GetPWUidInfo_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return pytalloc_new(struct unixinfo_GetPWUidInfo, type);
}


static PyTypeObject unixinfo_GetPWUidInfo_Type = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "unixinfo.GetPWUidInfo",
	.tp_getset = py_unixinfo_GetPWUidInfo_getsetters,
	.tp_methods = NULL,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_basicsize = sizeof(pytalloc_Object),
	.tp_new = py_unixinfo_GetPWUidInfo_new,
};


static bool pack_py_unixinfo_SidToUid_args_in(PyObject *args, PyObject *kwargs, struct unixinfo_SidToUid *r)
{
	PyObject *py_sid;
	const char *kwnames[] = {
		"sid", NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O:unixinfo_SidToUid", discard_const_p(char *, kwnames), &py_sid)) {
		return false;
	}

	PY_CHECK_TYPE(dom_sid_Type, py_sid, return false;);
	if (talloc_reference(r, pytalloc_get_mem_ctx(py_sid)) == NULL) {
		PyErr_NoMemory();
		return false;
	}
	r->in.sid = *(struct dom_sid *)pytalloc_get_ptr(py_sid);
	return true;
}

static PyObject *unpack_py_unixinfo_SidToUid_args_out(struct unixinfo_SidToUid *r)
{
	PyObject *result;
	PyObject *py_uid;
	py_uid = PyLong_FromLongLong(*r->out.uid);
	result = py_uid;
	if (NT_STATUS_IS_ERR(r->out.result)) {
		PyErr_SetNTSTATUS(r->out.result);
		return NULL;
	}

	return result;
}

static bool pack_py_unixinfo_UidToSid_args_in(PyObject *args, PyObject *kwargs, struct unixinfo_UidToSid *r)
{
	PyObject *py_uid;
	const char *kwnames[] = {
		"uid", NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O:unixinfo_UidToSid", discard_const_p(char *, kwnames), &py_uid)) {
		return false;
	}

	if (PyLong_Check(py_uid)) {
		r->in.uid = PyLong_AsLongLong(py_uid);
	} else if (PyInt_Check(py_uid)) {
		r->in.uid = PyInt_AsLong(py_uid);
	} else {
		PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
		  PyInt_Type.tp_name, PyLong_Type.tp_name);
		return false;
	}
	return true;
}

static PyObject *unpack_py_unixinfo_UidToSid_args_out(struct unixinfo_UidToSid *r)
{
	PyObject *result;
	PyObject *py_sid;
	py_sid = pytalloc_reference_ex(dom_sid_Type, r->out.sid, r->out.sid);
	result = py_sid;
	if (NT_STATUS_IS_ERR(r->out.result)) {
		PyErr_SetNTSTATUS(r->out.result);
		return NULL;
	}

	return result;
}

static bool pack_py_unixinfo_SidToGid_args_in(PyObject *args, PyObject *kwargs, struct unixinfo_SidToGid *r)
{
	PyObject *py_sid;
	const char *kwnames[] = {
		"sid", NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O:unixinfo_SidToGid", discard_const_p(char *, kwnames), &py_sid)) {
		return false;
	}

	PY_CHECK_TYPE(dom_sid_Type, py_sid, return false;);
	if (talloc_reference(r, pytalloc_get_mem_ctx(py_sid)) == NULL) {
		PyErr_NoMemory();
		return false;
	}
	r->in.sid = *(struct dom_sid *)pytalloc_get_ptr(py_sid);
	return true;
}

static PyObject *unpack_py_unixinfo_SidToGid_args_out(struct unixinfo_SidToGid *r)
{
	PyObject *result;
	PyObject *py_gid;
	py_gid = PyLong_FromLongLong(*r->out.gid);
	result = py_gid;
	if (NT_STATUS_IS_ERR(r->out.result)) {
		PyErr_SetNTSTATUS(r->out.result);
		return NULL;
	}

	return result;
}

static bool pack_py_unixinfo_GidToSid_args_in(PyObject *args, PyObject *kwargs, struct unixinfo_GidToSid *r)
{
	PyObject *py_gid;
	const char *kwnames[] = {
		"gid", NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O:unixinfo_GidToSid", discard_const_p(char *, kwnames), &py_gid)) {
		return false;
	}

	if (PyLong_Check(py_gid)) {
		r->in.gid = PyLong_AsLongLong(py_gid);
	} else if (PyInt_Check(py_gid)) {
		r->in.gid = PyInt_AsLong(py_gid);
	} else {
		PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
		  PyInt_Type.tp_name, PyLong_Type.tp_name);
		return false;
	}
	return true;
}

static PyObject *unpack_py_unixinfo_GidToSid_args_out(struct unixinfo_GidToSid *r)
{
	PyObject *result;
	PyObject *py_sid;
	py_sid = pytalloc_reference_ex(dom_sid_Type, r->out.sid, r->out.sid);
	result = py_sid;
	if (NT_STATUS_IS_ERR(r->out.result)) {
		PyErr_SetNTSTATUS(r->out.result);
		return NULL;
	}

	return result;
}

static bool pack_py_unixinfo_GetPWUid_args_in(PyObject *args, PyObject *kwargs, struct unixinfo_GetPWUid *r)
{
	PyObject *py_uids;
	const char *kwnames[] = {
		"uids", NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O:unixinfo_GetPWUid", discard_const_p(char *, kwnames), &py_uids)) {
		return false;
	}

	PY_CHECK_TYPE(&PyList_Type, py_uids, return false;);
	r->in.count = talloc_ptrtype(r, r->in.count);
	*r->in.count = PyList_GET_SIZE(py_uids);
	PY_CHECK_TYPE(&PyList_Type, py_uids, return false;);
	{
		int uids_cntr_0;
		r->in.uids = talloc_array_ptrtype(r, r->in.uids, PyList_GET_SIZE(py_uids));
		if (!r->in.uids) { return false;; }
		talloc_set_name_const(r->in.uids, "ARRAY: r->in.uids");
		for (uids_cntr_0 = 0; uids_cntr_0 < PyList_GET_SIZE(py_uids); uids_cntr_0++) {
			if (PyLong_Check(PyList_GET_ITEM(py_uids, uids_cntr_0))) {
				r->in.uids[uids_cntr_0] = PyLong_AsLongLong(PyList_GET_ITEM(py_uids, uids_cntr_0));
			} else if (PyInt_Check(PyList_GET_ITEM(py_uids, uids_cntr_0))) {
				r->in.uids[uids_cntr_0] = PyInt_AsLong(PyList_GET_ITEM(py_uids, uids_cntr_0));
			} else {
				PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
				  PyInt_Type.tp_name, PyLong_Type.tp_name);
				return false;
			}
		}
	}
	return true;
}

static PyObject *unpack_py_unixinfo_GetPWUid_args_out(struct unixinfo_GetPWUid *r)
{
	PyObject *result;
	PyObject *py_infos;
	py_infos = PyList_New(*r->out.count);
	if (py_infos == NULL) {
		return NULL;
	}
	{
		int infos_cntr_0;
		for (infos_cntr_0 = 0; infos_cntr_0 < *r->out.count; infos_cntr_0++) {
			PyObject *py_infos_0;
			py_infos_0 = pytalloc_reference_ex(&unixinfo_GetPWUidInfo_Type, r->out.infos, &r->out.infos[infos_cntr_0]);
			PyList_SetItem(py_infos, infos_cntr_0, py_infos_0);
		}
	}
	result = py_infos;
	if (NT_STATUS_IS_ERR(r->out.result)) {
		PyErr_SetNTSTATUS(r->out.result);
		return NULL;
	}

	return result;
}

const struct PyNdrRpcMethodDef py_ndr_unixinfo_methods[] = {
	{ "SidToUid", "S.SidToUid(sid) -> uid", (py_dcerpc_call_fn)dcerpc_unixinfo_SidToUid_r, (py_data_pack_fn)pack_py_unixinfo_SidToUid_args_in, (py_data_unpack_fn)unpack_py_unixinfo_SidToUid_args_out, 0, &ndr_table_unixinfo },
	{ "UidToSid", "S.UidToSid(uid) -> sid", (py_dcerpc_call_fn)dcerpc_unixinfo_UidToSid_r, (py_data_pack_fn)pack_py_unixinfo_UidToSid_args_in, (py_data_unpack_fn)unpack_py_unixinfo_UidToSid_args_out, 1, &ndr_table_unixinfo },
	{ "SidToGid", "S.SidToGid(sid) -> gid", (py_dcerpc_call_fn)dcerpc_unixinfo_SidToGid_r, (py_data_pack_fn)pack_py_unixinfo_SidToGid_args_in, (py_data_unpack_fn)unpack_py_unixinfo_SidToGid_args_out, 2, &ndr_table_unixinfo },
	{ "GidToSid", "S.GidToSid(gid) -> sid", (py_dcerpc_call_fn)dcerpc_unixinfo_GidToSid_r, (py_data_pack_fn)pack_py_unixinfo_GidToSid_args_in, (py_data_unpack_fn)unpack_py_unixinfo_GidToSid_args_out, 3, &ndr_table_unixinfo },
	{ "GetPWUid", "S.GetPWUid(uids) -> infos", (py_dcerpc_call_fn)dcerpc_unixinfo_GetPWUid_r, (py_data_pack_fn)pack_py_unixinfo_GetPWUid_args_in, (py_data_unpack_fn)unpack_py_unixinfo_GetPWUid_args_out, 4, &ndr_table_unixinfo },
	{ NULL }
};

static PyObject *interface_unixinfo_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return py_dcerpc_interface_init_helper(type, args, kwargs, &ndr_table_unixinfo);
}

#define PY_DOC_UNIXINFO "Unixinfo specific stuff"
static PyTypeObject unixinfo_InterfaceType = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "unixinfo.unixinfo",
	.tp_basicsize = sizeof(dcerpc_InterfaceObject),
	.tp_doc = "unixinfo(binding, lp_ctx=None, credentials=None) -> connection\n"
"\n"
"binding should be a DCE/RPC binding string (for example: ncacn_ip_tcp:127.0.0.1)\n"
"lp_ctx should be a path to a smb.conf file or a param.LoadParm object\n"
"credentials should be a credentials.Credentials object.\n\n"PY_DOC_UNIXINFO,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_new = interface_unixinfo_new,
};

static PyMethodDef unixinfo_methods[] = {
	{ NULL, NULL, 0, NULL }
};

void initunixinfo(void)
{
	PyObject *m;
	PyObject *dep_samba_dcerpc_security;
	PyObject *dep_talloc;
	PyObject *dep_samba_dcerpc_base;

	dep_samba_dcerpc_security = PyImport_ImportModule("samba.dcerpc.security");
	if (dep_samba_dcerpc_security == NULL)
		return;

	dep_talloc = PyImport_ImportModule("talloc");
	if (dep_talloc == NULL)
		return;

	dep_samba_dcerpc_base = PyImport_ImportModule("samba.dcerpc.base");
	if (dep_samba_dcerpc_base == NULL)
		return;

	dom_sid_Type = (PyTypeObject *)PyObject_GetAttrString(dep_samba_dcerpc_security, "dom_sid");
	if (dom_sid_Type == NULL)
		return;

	Object_Type = (PyTypeObject *)PyObject_GetAttrString(dep_talloc, "Object");
	if (Object_Type == NULL)
		return;

	ClientConnection_Type = (PyTypeObject *)PyObject_GetAttrString(dep_samba_dcerpc_base, "ClientConnection");
	if (ClientConnection_Type == NULL)
		return;

	unixinfo_GetPWUidInfo_Type.tp_base = Object_Type;

	unixinfo_InterfaceType.tp_base = ClientConnection_Type;

	if (PyType_Ready(&unixinfo_GetPWUidInfo_Type) < 0)
		return;
	if (PyType_Ready(&unixinfo_InterfaceType) < 0)
		return;
	if (!PyInterface_AddNdrRpcMethods(&unixinfo_InterfaceType, py_ndr_unixinfo_methods))
		return;

#ifdef PY_GETPWUIDINFO_PATCH
	PY_GETPWUIDINFO_PATCH(&unixinfo_GetPWUidInfo_Type);
#endif
#ifdef PY_UNIXINFO_PATCH
	PY_UNIXINFO_PATCH(&unixinfo_InterfaceType);
#endif

	m = Py_InitModule3("unixinfo", unixinfo_methods, "unixinfo DCE/RPC");
	if (m == NULL)
		return;

	Py_INCREF((PyObject *)(void *)&unixinfo_GetPWUidInfo_Type);
	PyModule_AddObject(m, "GetPWUidInfo", (PyObject *)(void *)&unixinfo_GetPWUidInfo_Type);
	Py_INCREF((PyObject *)(void *)&unixinfo_InterfaceType);
	PyModule_AddObject(m, "unixinfo", (PyObject *)(void *)&unixinfo_InterfaceType);
#ifdef PY_MOD_UNIXINFO_PATCH
	PY_MOD_UNIXINFO_PATCH(m);
#endif

}
