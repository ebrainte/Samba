
/* Python wrapper functions auto-generated by pidl */
#include <Python.h>
#include "includes.h"
#include <pytalloc.h>
#include "librpc/rpc/pyrpc.h"
#include "librpc/rpc/pyrpc_util.h"
#include "autoconf/librpc/gen_ndr/ndr_msgsvc.h"
#include "autoconf/librpc/gen_ndr/ndr_msgsvc_c.h"

staticforward PyTypeObject msgsvc_InterfaceType;

staticforward PyTypeObject msgsvcsend_InterfaceType;

void initmsgsvc(void);static PyTypeObject *ClientConnection_Type;

const struct PyNdrRpcMethodDef py_ndr_msgsvc_methods[] = {
	{ NULL }
};

static PyObject *interface_msgsvc_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return py_dcerpc_interface_init_helper(type, args, kwargs, &ndr_table_msgsvc);
}

#define PY_DOC_MSGSVC "Messaging Service"
static PyTypeObject msgsvc_InterfaceType = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "msgsvc.msgsvc",
	.tp_basicsize = sizeof(dcerpc_InterfaceObject),
	.tp_doc = "msgsvc(binding, lp_ctx=None, credentials=None) -> connection\n"
"\n"
"binding should be a DCE/RPC binding string (for example: ncacn_ip_tcp:127.0.0.1)\n"
"lp_ctx should be a path to a smb.conf file or a param.LoadParm object\n"
"credentials should be a credentials.Credentials object.\n\n"PY_DOC_MSGSVC,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_new = interface_msgsvc_new,
};


const struct PyNdrRpcMethodDef py_ndr_msgsvcsend_methods[] = {
	{ NULL }
};

static PyObject *interface_msgsvcsend_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return py_dcerpc_interface_init_helper(type, args, kwargs, &ndr_table_msgsvcsend);
}

static PyTypeObject msgsvcsend_InterfaceType = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "msgsvc.msgsvcsend",
	.tp_basicsize = sizeof(dcerpc_InterfaceObject),
	.tp_doc = "msgsvcsend(binding, lp_ctx=None, credentials=None) -> connection\n"
"\n"
"binding should be a DCE/RPC binding string (for example: ncacn_ip_tcp:127.0.0.1)\n"
"lp_ctx should be a path to a smb.conf file or a param.LoadParm object\n"
"credentials should be a credentials.Credentials object.\n\n",
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_new = interface_msgsvcsend_new,
};

static PyMethodDef msgsvc_methods[] = {
	{ NULL, NULL, 0, NULL }
};

void initmsgsvc(void)
{
	PyObject *m;
	PyObject *dep_samba_dcerpc_base;

	dep_samba_dcerpc_base = PyImport_ImportModule("samba.dcerpc.base");
	if (dep_samba_dcerpc_base == NULL)
		return;

	ClientConnection_Type = (PyTypeObject *)PyObject_GetAttrString(dep_samba_dcerpc_base, "ClientConnection");
	if (ClientConnection_Type == NULL)
		return;

	msgsvc_InterfaceType.tp_base = ClientConnection_Type;

	msgsvcsend_InterfaceType.tp_base = ClientConnection_Type;

	if (PyType_Ready(&msgsvc_InterfaceType) < 0)
		return;
	if (PyType_Ready(&msgsvcsend_InterfaceType) < 0)
		return;
	if (!PyInterface_AddNdrRpcMethods(&msgsvc_InterfaceType, py_ndr_msgsvc_methods))
		return;

	if (!PyInterface_AddNdrRpcMethods(&msgsvcsend_InterfaceType, py_ndr_msgsvcsend_methods))
		return;

#ifdef PY_MSGSVC_PATCH
	PY_MSGSVC_PATCH(&msgsvc_InterfaceType);
#endif
#ifdef PY_MSGSVCSEND_PATCH
	PY_MSGSVCSEND_PATCH(&msgsvcsend_InterfaceType);
#endif

	m = Py_InitModule3("msgsvc", msgsvc_methods, "msgsvc DCE/RPC");
	if (m == NULL)
		return;

	Py_INCREF((PyObject *)(void *)&msgsvc_InterfaceType);
	PyModule_AddObject(m, "msgsvc", (PyObject *)(void *)&msgsvc_InterfaceType);
	Py_INCREF((PyObject *)(void *)&msgsvcsend_InterfaceType);
	PyModule_AddObject(m, "msgsvcsend", (PyObject *)(void *)&msgsvcsend_InterfaceType);
#ifdef PY_MOD_MSGSVC_PATCH
	PY_MOD_MSGSVC_PATCH(m);
#endif

}
