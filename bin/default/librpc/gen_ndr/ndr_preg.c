/* parser auto-generated by pidl */

#include "includes.h"
#include "bin/default/librpc/gen_ndr/ndr_preg.h"

#include "librpc/gen_ndr/ndr_misc.h"
_PUBLIC_ enum ndr_err_code ndr_push_preg_entry(struct ndr_push *ndr, int ndr_flags, const struct preg_entry *r)
{
	NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		NDR_CHECK(ndr_push_charset(ndr, NDR_SCALARS, "[", 2, sizeof(uint8_t), CH_DOS));
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_NULLTERM|LIBNDR_FLAG_ALIGN2);
			NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->keyname));
			ndr->flags = _flags_save_string;
		}
		NDR_CHECK(ndr_push_charset(ndr, NDR_SCALARS, ";", 2, sizeof(uint8_t), CH_DOS));
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_NULLTERM|LIBNDR_FLAG_ALIGN2);
			NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->valuename));
			ndr->flags = _flags_save_string;
		}
		NDR_CHECK(ndr_push_charset(ndr, NDR_SCALARS, ";", 2, sizeof(uint8_t), CH_DOS));
		NDR_CHECK(ndr_push_winreg_Type(ndr, NDR_SCALARS, r->type));
		NDR_CHECK(ndr_push_charset(ndr, NDR_SCALARS, ";", 2, sizeof(uint8_t), CH_DOS));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->size));
		NDR_CHECK(ndr_push_charset(ndr, NDR_SCALARS, ";", 2, sizeof(uint8_t), CH_DOS));
		NDR_CHECK(ndr_push_array_uint8(ndr, NDR_SCALARS, r->data, r->size));
		NDR_CHECK(ndr_push_charset(ndr, NDR_SCALARS, "]", 2, sizeof(uint8_t), CH_DOS));
		NDR_CHECK(ndr_push_trailer_align(ndr, 4));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_preg_entry(struct ndr_pull *ndr, int ndr_flags, struct preg_entry *r)
{
	uint32_t size__opening_bracket_0 = 0;
	uint32_t size__sep1_0 = 0;
	uint32_t size__sep2_0 = 0;
	uint32_t size__sep3_0 = 0;
	uint32_t size__sep4_0 = 0;
	uint32_t size_data_0 = 0;
	uint32_t size__closing_bracket_0 = 0;
	NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		size__opening_bracket_0 = 2;
		NDR_CHECK(ndr_pull_charset(ndr, NDR_SCALARS, &r->_opening_bracket, size__opening_bracket_0, sizeof(uint8_t), CH_DOS));
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_NULLTERM|LIBNDR_FLAG_ALIGN2);
			NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->keyname));
			ndr->flags = _flags_save_string;
		}
		size__sep1_0 = 2;
		NDR_CHECK(ndr_pull_charset(ndr, NDR_SCALARS, &r->_sep1, size__sep1_0, sizeof(uint8_t), CH_DOS));
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_NULLTERM|LIBNDR_FLAG_ALIGN2);
			NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->valuename));
			ndr->flags = _flags_save_string;
		}
		size__sep2_0 = 2;
		NDR_CHECK(ndr_pull_charset(ndr, NDR_SCALARS, &r->_sep2, size__sep2_0, sizeof(uint8_t), CH_DOS));
		NDR_CHECK(ndr_pull_winreg_Type(ndr, NDR_SCALARS, &r->type));
		size__sep3_0 = 2;
		NDR_CHECK(ndr_pull_charset(ndr, NDR_SCALARS, &r->_sep3, size__sep3_0, sizeof(uint8_t), CH_DOS));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->size));
		size__sep4_0 = 2;
		NDR_CHECK(ndr_pull_charset(ndr, NDR_SCALARS, &r->_sep4, size__sep4_0, sizeof(uint8_t), CH_DOS));
		size_data_0 = r->size;
		NDR_PULL_ALLOC_N(ndr, r->data, size_data_0);
		NDR_CHECK(ndr_pull_array_uint8(ndr, NDR_SCALARS, r->data, size_data_0));
		size__closing_bracket_0 = 2;
		NDR_CHECK(ndr_pull_charset(ndr, NDR_SCALARS, &r->_closing_bracket, size__closing_bracket_0, sizeof(uint8_t), CH_DOS));
		NDR_CHECK(ndr_pull_trailer_align(ndr, 4));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_preg_entry(struct ndr_print *ndr, const char *name, const struct preg_entry *r)
{
	ndr_print_struct(ndr, name, "preg_entry");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_string(ndr, "keyname", r->keyname);
	ndr_print_string(ndr, "valuename", r->valuename);
	ndr_print_winreg_Type(ndr, "type", r->type);
	ndr_print_uint32(ndr, "size", r->size);
	ndr_print_array_uint8(ndr, "data", r->data, r->size);
	ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_preg_header(struct ndr_push *ndr, int ndr_flags, const struct preg_header *r)
{
	NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		NDR_CHECK(ndr_push_charset(ndr, NDR_SCALARS, "PReg", 4, sizeof(uint8_t), CH_DOS));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, 1));
		NDR_CHECK(ndr_push_trailer_align(ndr, 4));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_preg_header(struct ndr_pull *ndr, int ndr_flags, struct preg_header *r)
{
	uint32_t size_signature_0 = 0;
	NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		size_signature_0 = 4;
		NDR_CHECK(ndr_pull_charset(ndr, NDR_SCALARS, &r->signature, size_signature_0, sizeof(uint8_t), CH_DOS));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->version));
		NDR_CHECK(ndr_pull_trailer_align(ndr, 4));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_preg_header(struct ndr_print *ndr, const char *name, const struct preg_header *r)
{
	ndr_print_struct(ndr, name, "preg_header");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_string(ndr, "signature", (ndr->flags & LIBNDR_PRINT_SET_VALUES)?"PReg":r->signature);
	ndr_print_uint32(ndr, "version", (ndr->flags & LIBNDR_PRINT_SET_VALUES)?1:r->version);
	ndr->depth--;
}

_PUBLIC_ void ndr_print_preg_file(struct ndr_print *ndr, const char *name, const struct preg_file *r)
{
	uint32_t cntr_entries_0;
	ndr_print_struct(ndr, name, "preg_file");
	if (r == NULL) { ndr_print_null(ndr); return; }
	{
		uint32_t _flags_save_STRUCT = ndr->flags;
		ndr_set_flags(&ndr->flags, LIBNDR_FLAG_NOALIGN);
		ndr->depth++;
		ndr_print_preg_header(ndr, "header", &r->header);
		ndr_print_uint32(ndr, "num_entries", r->num_entries);
		ndr->print(ndr, "%s: ARRAY(%d)", "entries", (int)r->num_entries);
		ndr->depth++;
		for (cntr_entries_0=0;cntr_entries_0<r->num_entries;cntr_entries_0++) {
			ndr_print_preg_entry(ndr, "entries", &r->entries[cntr_entries_0]);
		}
		ndr->depth--;
		ndr->depth--;
		ndr->flags = _flags_save_STRUCT;
	}
}

static enum ndr_err_code ndr_push_decode_preg_file(struct ndr_push *ndr, int flags, const struct decode_preg_file *r)
{
	NDR_PUSH_CHECK_FN_FLAGS(ndr, flags);
	if (flags & NDR_IN) {
		NDR_CHECK(ndr_push_preg_file(ndr, NDR_SCALARS, &r->in.file));
	}
	if (flags & NDR_OUT) {
	}
	return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_decode_preg_file(struct ndr_pull *ndr, int flags, struct decode_preg_file *r)
{
	NDR_PULL_CHECK_FN_FLAGS(ndr, flags);
	if (flags & NDR_IN) {
		NDR_CHECK(ndr_pull_preg_file(ndr, NDR_SCALARS, &r->in.file));
	}
	if (flags & NDR_OUT) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_decode_preg_file(struct ndr_print *ndr, const char *name, int flags, const struct decode_preg_file *r)
{
	ndr_print_struct(ndr, name, "decode_preg_file");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "decode_preg_file");
		ndr->depth++;
		ndr_print_preg_file(ndr, "file", &r->in.file);
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "decode_preg_file");
		ndr->depth++;
		ndr->depth--;
	}
	ndr->depth--;
}

static const struct ndr_interface_call preg_calls[] = {
	{
		"decode_preg_file",
		sizeof(struct decode_preg_file),
		(ndr_push_flags_fn_t) ndr_push_decode_preg_file,
		(ndr_pull_flags_fn_t) ndr_pull_decode_preg_file,
		(ndr_print_function_t) ndr_print_decode_preg_file,
		{ 0, NULL },
		{ 0, NULL },
	},
	{ NULL, 0, NULL, NULL, NULL }
};

static const char * const preg_endpoint_strings[] = {
	"ncacn_np:[\\pipe\\preg]", 
};

static const struct ndr_interface_string_array preg_endpoints = {
	.count	= 1,
	.names	= preg_endpoint_strings
};

static const char * const preg_authservice_strings[] = {
	"host", 
};

static const struct ndr_interface_string_array preg_authservices = {
	.count	= 1,
	.names	= preg_authservice_strings
};


const struct ndr_interface_table ndr_table_preg = {
	.name		= "preg",
	.syntax_id	= {
		{0x67655250,0x0000,0x0000,{0x00,0x00},{0x00,0x00,0x00,0x00}},
		NDR_PREG_VERSION
	},
	.helpstring	= NDR_PREG_HELPSTRING,
	.num_calls	= 1,
	.calls		= preg_calls,
	.endpoints	= &preg_endpoints,
	.authservices	= &preg_authservices
};
