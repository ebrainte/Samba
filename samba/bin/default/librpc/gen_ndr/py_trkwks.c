
/* Python wrapper functions auto-generated by pidl */
#include <Python.h>
#include "includes.h"
#include <pytalloc.h>
#include "librpc/rpc/pyrpc.h"
#include "librpc/rpc/pyrpc_util.h"
#include "bin/default/librpc/gen_ndr/ndr_trkwks.h"
#include "bin/default/librpc/gen_ndr/ndr_trkwks_c.h"

staticforward PyTypeObject trkwks_InterfaceType;

void inittrkwks(void);static PyTypeObject *ClientConnection_Type;

static bool pack_py_trkwks_Unknown0_args_in(PyObject *args, PyObject *kwargs, struct trkwks_Unknown0 *r)
{
	const char *kwnames[] = {
		NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, ":trkwks_Unknown0", discard_const_p(char *, kwnames))) {
		return false;
	}

	return true;
}

static PyObject *unpack_py_trkwks_Unknown0_args_out(struct trkwks_Unknown0 *r)
{
	PyObject *result;
	result = Py_None;
	Py_INCREF(result);
	if (!W_ERROR_IS_OK(r->out.result)) {
		PyErr_SetWERROR(r->out.result);
		return NULL;
	}

	return result;
}

const struct PyNdrRpcMethodDef py_ndr_trkwks_methods[] = {
	{ "Unknown0", "S.Unknown0() -> None", (py_dcerpc_call_fn)dcerpc_trkwks_Unknown0_r, (py_data_pack_fn)pack_py_trkwks_Unknown0_args_in, (py_data_unpack_fn)unpack_py_trkwks_Unknown0_args_out, 0, &ndr_table_trkwks },
	{ NULL }
};

static PyObject *interface_trkwks_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return py_dcerpc_interface_init_helper(type, args, kwargs, &ndr_table_trkwks);
}

#define PY_DOC_TRKWKS "Distributed Key Tracking Service"
static PyTypeObject trkwks_InterfaceType = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "trkwks.trkwks",
	.tp_basicsize = sizeof(dcerpc_InterfaceObject),
	.tp_doc = "trkwks(binding, lp_ctx=None, credentials=None) -> connection\n"
"\n"
"binding should be a DCE/RPC binding string (for example: ncacn_ip_tcp:127.0.0.1)\n"
"lp_ctx should be a path to a smb.conf file or a param.LoadParm object\n"
"credentials should be a credentials.Credentials object.\n\n"PY_DOC_TRKWKS,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_new = interface_trkwks_new,
};

static PyMethodDef trkwks_methods[] = {
	{ NULL, NULL, 0, NULL }
};

void inittrkwks(void)
{
	PyObject *m;
	PyObject *dep_samba_dcerpc_base;

	dep_samba_dcerpc_base = PyImport_ImportModule("samba.dcerpc.base");
	if (dep_samba_dcerpc_base == NULL)
		return;

	ClientConnection_Type = (PyTypeObject *)PyObject_GetAttrString(dep_samba_dcerpc_base, "ClientConnection");
	if (ClientConnection_Type == NULL)
		return;

	trkwks_InterfaceType.tp_base = ClientConnection_Type;

	if (PyType_Ready(&trkwks_InterfaceType) < 0)
		return;
	if (!PyInterface_AddNdrRpcMethods(&trkwks_InterfaceType, py_ndr_trkwks_methods))
		return;

#ifdef PY_TRKWKS_PATCH
	PY_TRKWKS_PATCH(&trkwks_InterfaceType);
#endif

	m = Py_InitModule3("trkwks", trkwks_methods, "trkwks DCE/RPC");
	if (m == NULL)
		return;

	Py_INCREF((PyObject *)(void *)&trkwks_InterfaceType);
	PyModule_AddObject(m, "trkwks", (PyObject *)(void *)&trkwks_InterfaceType);
#ifdef PY_MOD_TRKWKS_PATCH
	PY_MOD_TRKWKS_PATCH(m);
#endif

}
