/* parser auto-generated by pidl */

#include "includes.h"
#include "bin/default/librpc/gen_ndr/ndr_schannel.h"

#include "librpc/gen_ndr/ndr_netlogon.h"
#include "librpc/gen_ndr/ndr_nbt.h"
#include "librpc/gen_ndr/ndr_misc.h"
#include "librpc/gen_ndr/ndr_security.h"
_PUBLIC_ enum ndr_err_code ndr_push_netlogon_creds_CredentialState(struct ndr_push *ndr, int ndr_flags, const struct netlogon_creds_CredentialState *r)
{
	{
		uint32_t _flags_save_STRUCT = ndr->flags;
		ndr_set_flags(&ndr->flags, LIBNDR_PRINT_ARRAY_HEX);
		NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
		if (ndr_flags & NDR_SCALARS) {
			NDR_CHECK(ndr_push_align(ndr, 5));
			NDR_CHECK(ndr_push_netr_NegotiateFlags(ndr, NDR_SCALARS, r->negotiate_flags));
			NDR_CHECK(ndr_push_array_uint8(ndr, NDR_SCALARS, r->session_key, 16));
			NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->sequence));
			NDR_CHECK(ndr_push_netr_Credential(ndr, NDR_SCALARS, &r->seed));
			NDR_CHECK(ndr_push_netr_Credential(ndr, NDR_SCALARS, &r->client));
			NDR_CHECK(ndr_push_netr_Credential(ndr, NDR_SCALARS, &r->server));
			NDR_CHECK(ndr_push_netr_SchannelType(ndr, NDR_SCALARS, r->secure_channel_type));
			NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, ndr_charset_length(r->computer_name, CH_UTF8)));
			NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, 0));
			NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, ndr_charset_length(r->computer_name, CH_UTF8)));
			NDR_CHECK(ndr_push_charset(ndr, NDR_SCALARS, r->computer_name, ndr_charset_length(r->computer_name, CH_UTF8), sizeof(uint8_t), CH_UTF8));
			NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, ndr_charset_length(r->account_name, CH_UTF8)));
			NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, 0));
			NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, ndr_charset_length(r->account_name, CH_UTF8)));
			NDR_CHECK(ndr_push_charset(ndr, NDR_SCALARS, r->account_name, ndr_charset_length(r->account_name, CH_UTF8), sizeof(uint8_t), CH_UTF8));
			NDR_CHECK(ndr_push_unique_ptr(ndr, r->sid));
			NDR_CHECK(ndr_push_trailer_align(ndr, 5));
		}
		if (ndr_flags & NDR_BUFFERS) {
			if (r->sid) {
				NDR_CHECK(ndr_push_dom_sid(ndr, NDR_SCALARS, r->sid));
			}
		}
		ndr->flags = _flags_save_STRUCT;
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_netlogon_creds_CredentialState(struct ndr_pull *ndr, int ndr_flags, struct netlogon_creds_CredentialState *r)
{
	uint32_t size_session_key_0 = 0;
	uint32_t size_computer_name_0 = 0;
	uint32_t length_computer_name_0 = 0;
	uint32_t size_account_name_0 = 0;
	uint32_t length_account_name_0 = 0;
	uint32_t _ptr_sid;
	TALLOC_CTX *_mem_save_sid_0;
	{
		uint32_t _flags_save_STRUCT = ndr->flags;
		ndr_set_flags(&ndr->flags, LIBNDR_PRINT_ARRAY_HEX);
		NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
		if (ndr_flags & NDR_SCALARS) {
			NDR_CHECK(ndr_pull_align(ndr, 5));
			NDR_CHECK(ndr_pull_netr_NegotiateFlags(ndr, NDR_SCALARS, &r->negotiate_flags));
			size_session_key_0 = 16;
			NDR_CHECK(ndr_pull_array_uint8(ndr, NDR_SCALARS, r->session_key, size_session_key_0));
			NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->sequence));
			NDR_CHECK(ndr_pull_netr_Credential(ndr, NDR_SCALARS, &r->seed));
			NDR_CHECK(ndr_pull_netr_Credential(ndr, NDR_SCALARS, &r->client));
			NDR_CHECK(ndr_pull_netr_Credential(ndr, NDR_SCALARS, &r->server));
			NDR_CHECK(ndr_pull_netr_SchannelType(ndr, NDR_SCALARS, &r->secure_channel_type));
			NDR_CHECK(ndr_pull_array_size(ndr, &r->computer_name));
			NDR_CHECK(ndr_pull_array_length(ndr, &r->computer_name));
			size_computer_name_0 = ndr_get_array_size(ndr, &r->computer_name);
			length_computer_name_0 = ndr_get_array_length(ndr, &r->computer_name);
			if (length_computer_name_0 > size_computer_name_0) {
				return ndr_pull_error(ndr, NDR_ERR_ARRAY_SIZE, "Bad array size %u should exceed array length %u", size_computer_name_0, length_computer_name_0);
			}
			NDR_CHECK(ndr_check_string_terminator(ndr, length_computer_name_0, sizeof(uint8_t)));
			NDR_CHECK(ndr_pull_charset(ndr, NDR_SCALARS, &r->computer_name, length_computer_name_0, sizeof(uint8_t), CH_UTF8));
			NDR_CHECK(ndr_pull_array_size(ndr, &r->account_name));
			NDR_CHECK(ndr_pull_array_length(ndr, &r->account_name));
			size_account_name_0 = ndr_get_array_size(ndr, &r->account_name);
			length_account_name_0 = ndr_get_array_length(ndr, &r->account_name);
			if (length_account_name_0 > size_account_name_0) {
				return ndr_pull_error(ndr, NDR_ERR_ARRAY_SIZE, "Bad array size %u should exceed array length %u", size_account_name_0, length_account_name_0);
			}
			NDR_CHECK(ndr_check_string_terminator(ndr, length_account_name_0, sizeof(uint8_t)));
			NDR_CHECK(ndr_pull_charset(ndr, NDR_SCALARS, &r->account_name, length_account_name_0, sizeof(uint8_t), CH_UTF8));
			NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_sid));
			if (_ptr_sid) {
				NDR_PULL_ALLOC(ndr, r->sid);
			} else {
				r->sid = NULL;
			}
			NDR_CHECK(ndr_pull_trailer_align(ndr, 5));
		}
		if (ndr_flags & NDR_BUFFERS) {
			if (r->sid) {
				_mem_save_sid_0 = NDR_PULL_GET_MEM_CTX(ndr);
				NDR_PULL_SET_MEM_CTX(ndr, r->sid, 0);
				NDR_CHECK(ndr_pull_dom_sid(ndr, NDR_SCALARS, r->sid));
				NDR_PULL_SET_MEM_CTX(ndr, _mem_save_sid_0, 0);
			}
		}
		ndr->flags = _flags_save_STRUCT;
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_netlogon_creds_CredentialState(struct ndr_print *ndr, const char *name, const struct netlogon_creds_CredentialState *r)
{
	ndr_print_struct(ndr, name, "netlogon_creds_CredentialState");
	if (r == NULL) { ndr_print_null(ndr); return; }
	{
		uint32_t _flags_save_STRUCT = ndr->flags;
		ndr_set_flags(&ndr->flags, LIBNDR_PRINT_ARRAY_HEX);
		ndr->depth++;
		ndr_print_netr_NegotiateFlags(ndr, "negotiate_flags", r->negotiate_flags);
		ndr_print_array_uint8(ndr, "session_key", r->session_key, 16);
		ndr_print_uint32(ndr, "sequence", r->sequence);
		ndr_print_netr_Credential(ndr, "seed", &r->seed);
		ndr_print_netr_Credential(ndr, "client", &r->client);
		ndr_print_netr_Credential(ndr, "server", &r->server);
		ndr_print_netr_SchannelType(ndr, "secure_channel_type", r->secure_channel_type);
		ndr_print_string(ndr, "computer_name", r->computer_name);
		ndr_print_string(ndr, "account_name", r->account_name);
		ndr_print_ptr(ndr, "sid", r->sid);
		ndr->depth++;
		if (r->sid) {
			ndr_print_dom_sid(ndr, "sid", r->sid);
		}
		ndr->depth--;
		ndr->depth--;
		ndr->flags = _flags_save_STRUCT;
	}
}

static enum ndr_err_code ndr_push_NL_AUTH_MESSAGE_TYPE(struct ndr_push *ndr, int ndr_flags, enum NL_AUTH_MESSAGE_TYPE r)
{
	NDR_CHECK(ndr_push_enum_uint32(ndr, NDR_SCALARS, r));
	return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_NL_AUTH_MESSAGE_TYPE(struct ndr_pull *ndr, int ndr_flags, enum NL_AUTH_MESSAGE_TYPE *r)
{
	uint32_t v;
	NDR_CHECK(ndr_pull_enum_uint32(ndr, NDR_SCALARS, &v));
	*r = v;
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_NL_AUTH_MESSAGE_TYPE(struct ndr_print *ndr, const char *name, enum NL_AUTH_MESSAGE_TYPE r)
{
	const char *val = NULL;

	switch (r) {
		case NL_NEGOTIATE_REQUEST: val = "NL_NEGOTIATE_REQUEST"; break;
		case NL_NEGOTIATE_RESPONSE: val = "NL_NEGOTIATE_RESPONSE"; break;
	}
	ndr_print_enum(ndr, name, "ENUM", val, r);
}

static enum ndr_err_code ndr_push_NL_AUTH_MESSAGE_FLAGS(struct ndr_push *ndr, int ndr_flags, uint32_t r)
{
	NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r));
	return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_NL_AUTH_MESSAGE_FLAGS(struct ndr_pull *ndr, int ndr_flags, uint32_t *r)
{
	uint32_t v;
	NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &v));
	*r = v;
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_NL_AUTH_MESSAGE_FLAGS(struct ndr_print *ndr, const char *name, uint32_t r)
{
	ndr_print_uint32(ndr, name, r);
	ndr->depth++;
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "NL_FLAG_OEM_NETBIOS_DOMAIN_NAME", NL_FLAG_OEM_NETBIOS_DOMAIN_NAME, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "NL_FLAG_OEM_NETBIOS_COMPUTER_NAME", NL_FLAG_OEM_NETBIOS_COMPUTER_NAME, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "NL_FLAG_UTF8_DNS_DOMAIN_NAME", NL_FLAG_UTF8_DNS_DOMAIN_NAME, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "NL_FLAG_UTF8_DNS_HOST_NAME", NL_FLAG_UTF8_DNS_HOST_NAME, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "NL_FLAG_UTF8_NETBIOS_COMPUTER_NAME", NL_FLAG_UTF8_NETBIOS_COMPUTER_NAME, r);
	ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_NL_AUTH_MESSAGE_BUFFER(struct ndr_push *ndr, int ndr_flags, const union NL_AUTH_MESSAGE_BUFFER *r)
{
	NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		uint32_t level = ndr_push_get_switch_value(ndr, r);
		NDR_CHECK(ndr_push_union_align(ndr, 4));
		switch (level) {
			case NL_FLAG_OEM_NETBIOS_DOMAIN_NAME: {
				{
					uint32_t _flags_save_string = ndr->flags;
					ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_ASCII|LIBNDR_FLAG_STR_NULLTERM);
					NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->a));
					ndr->flags = _flags_save_string;
				}
			break; }

			case NL_FLAG_OEM_NETBIOS_COMPUTER_NAME: {
				{
					uint32_t _flags_save_string = ndr->flags;
					ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_ASCII|LIBNDR_FLAG_STR_NULLTERM);
					NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->a));
					ndr->flags = _flags_save_string;
				}
			break; }

			case NL_FLAG_UTF8_DNS_DOMAIN_NAME: {
				NDR_CHECK(ndr_push_nbt_string(ndr, NDR_SCALARS, r->u));
			break; }

			case NL_FLAG_UTF8_DNS_HOST_NAME: {
				NDR_CHECK(ndr_push_nbt_string(ndr, NDR_SCALARS, r->u));
			break; }

			case NL_FLAG_UTF8_NETBIOS_COMPUTER_NAME: {
				NDR_CHECK(ndr_push_nbt_string(ndr, NDR_SCALARS, r->u));
			break; }

			default: {
			break; }

		}
	}
	if (ndr_flags & NDR_BUFFERS) {
		uint32_t level = ndr_push_get_switch_value(ndr, r);
		switch (level) {
			case NL_FLAG_OEM_NETBIOS_DOMAIN_NAME:
			break;

			case NL_FLAG_OEM_NETBIOS_COMPUTER_NAME:
			break;

			case NL_FLAG_UTF8_DNS_DOMAIN_NAME:
			break;

			case NL_FLAG_UTF8_DNS_HOST_NAME:
			break;

			case NL_FLAG_UTF8_NETBIOS_COMPUTER_NAME:
			break;

			default:
			break;

		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_NL_AUTH_MESSAGE_BUFFER(struct ndr_pull *ndr, int ndr_flags, union NL_AUTH_MESSAGE_BUFFER *r)
{
	uint32_t level;
	level = ndr_pull_get_switch_value(ndr, r);
	NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_union_align(ndr, 4));
		switch (level) {
			case NL_FLAG_OEM_NETBIOS_DOMAIN_NAME: {
				{
					uint32_t _flags_save_string = ndr->flags;
					ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_ASCII|LIBNDR_FLAG_STR_NULLTERM);
					NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->a));
					ndr->flags = _flags_save_string;
				}
			break; }

			case NL_FLAG_OEM_NETBIOS_COMPUTER_NAME: {
				{
					uint32_t _flags_save_string = ndr->flags;
					ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_ASCII|LIBNDR_FLAG_STR_NULLTERM);
					NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->a));
					ndr->flags = _flags_save_string;
				}
			break; }

			case NL_FLAG_UTF8_DNS_DOMAIN_NAME: {
				NDR_CHECK(ndr_pull_nbt_string(ndr, NDR_SCALARS, &r->u));
			break; }

			case NL_FLAG_UTF8_DNS_HOST_NAME: {
				NDR_CHECK(ndr_pull_nbt_string(ndr, NDR_SCALARS, &r->u));
			break; }

			case NL_FLAG_UTF8_NETBIOS_COMPUTER_NAME: {
				NDR_CHECK(ndr_pull_nbt_string(ndr, NDR_SCALARS, &r->u));
			break; }

			default: {
			break; }

		}
	}
	if (ndr_flags & NDR_BUFFERS) {
		switch (level) {
			case NL_FLAG_OEM_NETBIOS_DOMAIN_NAME:
			break;

			case NL_FLAG_OEM_NETBIOS_COMPUTER_NAME:
			break;

			case NL_FLAG_UTF8_DNS_DOMAIN_NAME:
			break;

			case NL_FLAG_UTF8_DNS_HOST_NAME:
			break;

			case NL_FLAG_UTF8_NETBIOS_COMPUTER_NAME:
			break;

			default:
			break;

		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_push_NL_AUTH_MESSAGE_BUFFER_REPLY(struct ndr_push *ndr, int ndr_flags, const union NL_AUTH_MESSAGE_BUFFER_REPLY *r)
{
	NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		uint32_t level = ndr_push_get_switch_value(ndr, r);
		NDR_CHECK(ndr_push_union_align(ndr, 4));
		switch (level) {
			case NL_NEGOTIATE_RESPONSE: {
				NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->dummy));
			break; }

			default: {
			break; }

		}
	}
	if (ndr_flags & NDR_BUFFERS) {
		uint32_t level = ndr_push_get_switch_value(ndr, r);
		switch (level) {
			case NL_NEGOTIATE_RESPONSE:
			break;

			default:
			break;

		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_NL_AUTH_MESSAGE_BUFFER_REPLY(struct ndr_pull *ndr, int ndr_flags, union NL_AUTH_MESSAGE_BUFFER_REPLY *r)
{
	uint32_t level;
	level = ndr_pull_get_switch_value(ndr, r);
	NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_union_align(ndr, 4));
		switch (level) {
			case NL_NEGOTIATE_RESPONSE: {
				NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->dummy));
			break; }

			default: {
			break; }

		}
	}
	if (ndr_flags & NDR_BUFFERS) {
		switch (level) {
			case NL_NEGOTIATE_RESPONSE:
			break;

			default:
			break;

		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_push_NL_AUTH_MESSAGE(struct ndr_push *ndr, int ndr_flags, const struct NL_AUTH_MESSAGE *r)
{
	{
		uint32_t _flags_save_STRUCT = ndr->flags;
		ndr_set_flags(&ndr->flags, LIBNDR_PRINT_ARRAY_HEX);
		NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
		if (ndr_flags & NDR_SCALARS) {
			NDR_CHECK(ndr_push_align(ndr, 4));
			NDR_CHECK(ndr_push_NL_AUTH_MESSAGE_TYPE(ndr, NDR_SCALARS, r->MessageType));
			NDR_CHECK(ndr_push_NL_AUTH_MESSAGE_FLAGS(ndr, NDR_SCALARS, r->Flags));
			NDR_CHECK(ndr_push_set_switch_value(ndr, &r->oem_netbios_domain, r->Flags & NL_FLAG_OEM_NETBIOS_DOMAIN_NAME));
			NDR_CHECK(ndr_push_NL_AUTH_MESSAGE_BUFFER(ndr, NDR_SCALARS, &r->oem_netbios_domain));
			NDR_CHECK(ndr_push_set_switch_value(ndr, &r->oem_netbios_computer, r->Flags & NL_FLAG_OEM_NETBIOS_COMPUTER_NAME));
			NDR_CHECK(ndr_push_NL_AUTH_MESSAGE_BUFFER(ndr, NDR_SCALARS, &r->oem_netbios_computer));
			NDR_CHECK(ndr_push_set_switch_value(ndr, &r->utf8_dns_domain, r->Flags & NL_FLAG_UTF8_DNS_DOMAIN_NAME));
			NDR_CHECK(ndr_push_NL_AUTH_MESSAGE_BUFFER(ndr, NDR_SCALARS, &r->utf8_dns_domain));
			NDR_CHECK(ndr_push_set_switch_value(ndr, &r->utf8_dns_host, r->Flags & NL_FLAG_UTF8_DNS_HOST_NAME));
			NDR_CHECK(ndr_push_NL_AUTH_MESSAGE_BUFFER(ndr, NDR_SCALARS, &r->utf8_dns_host));
			NDR_CHECK(ndr_push_set_switch_value(ndr, &r->utf8_netbios_computer, r->Flags & NL_FLAG_UTF8_NETBIOS_COMPUTER_NAME));
			NDR_CHECK(ndr_push_NL_AUTH_MESSAGE_BUFFER(ndr, NDR_SCALARS, &r->utf8_netbios_computer));
			NDR_CHECK(ndr_push_set_switch_value(ndr, &r->Buffer, r->MessageType & NL_NEGOTIATE_RESPONSE));
			NDR_CHECK(ndr_push_NL_AUTH_MESSAGE_BUFFER_REPLY(ndr, NDR_SCALARS, &r->Buffer));
			NDR_CHECK(ndr_push_trailer_align(ndr, 4));
		}
		if (ndr_flags & NDR_BUFFERS) {
			NDR_CHECK(ndr_push_NL_AUTH_MESSAGE_BUFFER(ndr, NDR_BUFFERS, &r->oem_netbios_domain));
			NDR_CHECK(ndr_push_NL_AUTH_MESSAGE_BUFFER(ndr, NDR_BUFFERS, &r->oem_netbios_computer));
			NDR_CHECK(ndr_push_NL_AUTH_MESSAGE_BUFFER(ndr, NDR_BUFFERS, &r->utf8_dns_domain));
			NDR_CHECK(ndr_push_NL_AUTH_MESSAGE_BUFFER(ndr, NDR_BUFFERS, &r->utf8_dns_host));
			NDR_CHECK(ndr_push_NL_AUTH_MESSAGE_BUFFER(ndr, NDR_BUFFERS, &r->utf8_netbios_computer));
			NDR_CHECK(ndr_push_NL_AUTH_MESSAGE_BUFFER_REPLY(ndr, NDR_BUFFERS, &r->Buffer));
		}
		ndr->flags = _flags_save_STRUCT;
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_NL_AUTH_MESSAGE(struct ndr_pull *ndr, int ndr_flags, struct NL_AUTH_MESSAGE *r)
{
	{
		uint32_t _flags_save_STRUCT = ndr->flags;
		ndr_set_flags(&ndr->flags, LIBNDR_PRINT_ARRAY_HEX);
		NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
		if (ndr_flags & NDR_SCALARS) {
			NDR_CHECK(ndr_pull_align(ndr, 4));
			NDR_CHECK(ndr_pull_NL_AUTH_MESSAGE_TYPE(ndr, NDR_SCALARS, &r->MessageType));
			NDR_CHECK(ndr_pull_NL_AUTH_MESSAGE_FLAGS(ndr, NDR_SCALARS, &r->Flags));
			NDR_CHECK(ndr_pull_set_switch_value(ndr, &r->oem_netbios_domain, r->Flags & NL_FLAG_OEM_NETBIOS_DOMAIN_NAME));
			NDR_CHECK(ndr_pull_NL_AUTH_MESSAGE_BUFFER(ndr, NDR_SCALARS, &r->oem_netbios_domain));
			NDR_CHECK(ndr_pull_set_switch_value(ndr, &r->oem_netbios_computer, r->Flags & NL_FLAG_OEM_NETBIOS_COMPUTER_NAME));
			NDR_CHECK(ndr_pull_NL_AUTH_MESSAGE_BUFFER(ndr, NDR_SCALARS, &r->oem_netbios_computer));
			NDR_CHECK(ndr_pull_set_switch_value(ndr, &r->utf8_dns_domain, r->Flags & NL_FLAG_UTF8_DNS_DOMAIN_NAME));
			NDR_CHECK(ndr_pull_NL_AUTH_MESSAGE_BUFFER(ndr, NDR_SCALARS, &r->utf8_dns_domain));
			NDR_CHECK(ndr_pull_set_switch_value(ndr, &r->utf8_dns_host, r->Flags & NL_FLAG_UTF8_DNS_HOST_NAME));
			NDR_CHECK(ndr_pull_NL_AUTH_MESSAGE_BUFFER(ndr, NDR_SCALARS, &r->utf8_dns_host));
			NDR_CHECK(ndr_pull_set_switch_value(ndr, &r->utf8_netbios_computer, r->Flags & NL_FLAG_UTF8_NETBIOS_COMPUTER_NAME));
			NDR_CHECK(ndr_pull_NL_AUTH_MESSAGE_BUFFER(ndr, NDR_SCALARS, &r->utf8_netbios_computer));
			NDR_CHECK(ndr_pull_set_switch_value(ndr, &r->Buffer, r->MessageType & NL_NEGOTIATE_RESPONSE));
			NDR_CHECK(ndr_pull_NL_AUTH_MESSAGE_BUFFER_REPLY(ndr, NDR_SCALARS, &r->Buffer));
			NDR_CHECK(ndr_pull_trailer_align(ndr, 4));
		}
		if (ndr_flags & NDR_BUFFERS) {
			NDR_CHECK(ndr_pull_NL_AUTH_MESSAGE_BUFFER(ndr, NDR_BUFFERS, &r->oem_netbios_domain));
			NDR_CHECK(ndr_pull_NL_AUTH_MESSAGE_BUFFER(ndr, NDR_BUFFERS, &r->oem_netbios_computer));
			NDR_CHECK(ndr_pull_NL_AUTH_MESSAGE_BUFFER(ndr, NDR_BUFFERS, &r->utf8_dns_domain));
			NDR_CHECK(ndr_pull_NL_AUTH_MESSAGE_BUFFER(ndr, NDR_BUFFERS, &r->utf8_dns_host));
			NDR_CHECK(ndr_pull_NL_AUTH_MESSAGE_BUFFER(ndr, NDR_BUFFERS, &r->utf8_netbios_computer));
			NDR_CHECK(ndr_pull_NL_AUTH_MESSAGE_BUFFER_REPLY(ndr, NDR_BUFFERS, &r->Buffer));
		}
		ndr->flags = _flags_save_STRUCT;
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_NL_AUTH_MESSAGE(struct ndr_print *ndr, const char *name, const struct NL_AUTH_MESSAGE *r)
{
	ndr_print_struct(ndr, name, "NL_AUTH_MESSAGE");
	if (r == NULL) { ndr_print_null(ndr); return; }
	{
		uint32_t _flags_save_STRUCT = ndr->flags;
		ndr_set_flags(&ndr->flags, LIBNDR_PRINT_ARRAY_HEX);
		ndr->depth++;
		ndr_print_NL_AUTH_MESSAGE_TYPE(ndr, "MessageType", r->MessageType);
		ndr_print_NL_AUTH_MESSAGE_FLAGS(ndr, "Flags", r->Flags);
		ndr_print_set_switch_value(ndr, &r->oem_netbios_domain, r->Flags & NL_FLAG_OEM_NETBIOS_DOMAIN_NAME);
		ndr_print_NL_AUTH_MESSAGE_BUFFER(ndr, "oem_netbios_domain", &r->oem_netbios_domain);
		ndr_print_set_switch_value(ndr, &r->oem_netbios_computer, r->Flags & NL_FLAG_OEM_NETBIOS_COMPUTER_NAME);
		ndr_print_NL_AUTH_MESSAGE_BUFFER(ndr, "oem_netbios_computer", &r->oem_netbios_computer);
		ndr_print_set_switch_value(ndr, &r->utf8_dns_domain, r->Flags & NL_FLAG_UTF8_DNS_DOMAIN_NAME);
		ndr_print_NL_AUTH_MESSAGE_BUFFER(ndr, "utf8_dns_domain", &r->utf8_dns_domain);
		ndr_print_set_switch_value(ndr, &r->utf8_dns_host, r->Flags & NL_FLAG_UTF8_DNS_HOST_NAME);
		ndr_print_NL_AUTH_MESSAGE_BUFFER(ndr, "utf8_dns_host", &r->utf8_dns_host);
		ndr_print_set_switch_value(ndr, &r->utf8_netbios_computer, r->Flags & NL_FLAG_UTF8_NETBIOS_COMPUTER_NAME);
		ndr_print_NL_AUTH_MESSAGE_BUFFER(ndr, "utf8_netbios_computer", &r->utf8_netbios_computer);
		ndr_print_set_switch_value(ndr, &r->Buffer, r->MessageType & NL_NEGOTIATE_RESPONSE);
		ndr_print_NL_AUTH_MESSAGE_BUFFER_REPLY(ndr, "Buffer", &r->Buffer);
		ndr->depth--;
		ndr->flags = _flags_save_STRUCT;
	}
}

static enum ndr_err_code ndr_push_NL_SIGNATURE_ALGORITHM(struct ndr_push *ndr, int ndr_flags, enum NL_SIGNATURE_ALGORITHM r)
{
	NDR_CHECK(ndr_push_enum_uint1632(ndr, NDR_SCALARS, r));
	return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_NL_SIGNATURE_ALGORITHM(struct ndr_pull *ndr, int ndr_flags, enum NL_SIGNATURE_ALGORITHM *r)
{
	uint16_t v;
	NDR_CHECK(ndr_pull_enum_uint1632(ndr, NDR_SCALARS, &v));
	*r = v;
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_NL_SIGNATURE_ALGORITHM(struct ndr_print *ndr, const char *name, enum NL_SIGNATURE_ALGORITHM r)
{
	const char *val = NULL;

	switch (r) {
		case NL_SIGN_HMAC_SHA256: val = "NL_SIGN_HMAC_SHA256"; break;
		case NL_SIGN_HMAC_MD5: val = "NL_SIGN_HMAC_MD5"; break;
	}
	ndr_print_enum(ndr, name, "ENUM", val, r);
}

static enum ndr_err_code ndr_push_NL_SEAL_ALGORITHM(struct ndr_push *ndr, int ndr_flags, enum NL_SEAL_ALGORITHM r)
{
	NDR_CHECK(ndr_push_enum_uint1632(ndr, NDR_SCALARS, r));
	return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_NL_SEAL_ALGORITHM(struct ndr_pull *ndr, int ndr_flags, enum NL_SEAL_ALGORITHM *r)
{
	uint16_t v;
	NDR_CHECK(ndr_pull_enum_uint1632(ndr, NDR_SCALARS, &v));
	*r = v;
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_NL_SEAL_ALGORITHM(struct ndr_print *ndr, const char *name, enum NL_SEAL_ALGORITHM r)
{
	const char *val = NULL;

	switch (r) {
		case NL_SEAL_AES128: val = "NL_SEAL_AES128"; break;
		case NL_SEAL_RC4: val = "NL_SEAL_RC4"; break;
		case NL_SEAL_NONE: val = "NL_SEAL_NONE"; break;
	}
	ndr_print_enum(ndr, name, "ENUM", val, r);
}

_PUBLIC_ enum ndr_err_code ndr_push_NL_AUTH_SIGNATURE(struct ndr_push *ndr, int ndr_flags, const struct NL_AUTH_SIGNATURE *r)
{
	{
		uint32_t _flags_save_STRUCT = ndr->flags;
		ndr_set_flags(&ndr->flags, LIBNDR_PRINT_ARRAY_HEX);
		NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
		if (ndr_flags & NDR_SCALARS) {
			NDR_CHECK(ndr_push_align(ndr, 3));
			NDR_CHECK(ndr_push_NL_SIGNATURE_ALGORITHM(ndr, NDR_SCALARS, NL_SIGN_HMAC_MD5));
			NDR_CHECK(ndr_push_NL_SEAL_ALGORITHM(ndr, NDR_SCALARS, r->SealAlgorithm));
			NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, r->Pad));
			NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, r->Flags));
			NDR_CHECK(ndr_push_array_uint8(ndr, NDR_SCALARS, r->SequenceNumber, 8));
			NDR_CHECK(ndr_push_array_uint8(ndr, NDR_SCALARS, r->Checksum, 8));
			NDR_CHECK(ndr_push_array_uint8(ndr, NDR_SCALARS, r->Confounder, 8));
			NDR_CHECK(ndr_push_trailer_align(ndr, 3));
		}
		if (ndr_flags & NDR_BUFFERS) {
		}
		ndr->flags = _flags_save_STRUCT;
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_NL_AUTH_SIGNATURE(struct ndr_pull *ndr, int ndr_flags, struct NL_AUTH_SIGNATURE *r)
{
	uint32_t size_SequenceNumber_0 = 0;
	uint32_t size_Checksum_0 = 0;
	uint32_t size_Confounder_0 = 0;
	{
		uint32_t _flags_save_STRUCT = ndr->flags;
		ndr_set_flags(&ndr->flags, LIBNDR_PRINT_ARRAY_HEX);
		NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
		if (ndr_flags & NDR_SCALARS) {
			NDR_CHECK(ndr_pull_align(ndr, 3));
			NDR_CHECK(ndr_pull_NL_SIGNATURE_ALGORITHM(ndr, NDR_SCALARS, &r->SignatureAlgorithm));
			NDR_CHECK(ndr_pull_NL_SEAL_ALGORITHM(ndr, NDR_SCALARS, &r->SealAlgorithm));
			NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->Pad));
			NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->Flags));
			size_SequenceNumber_0 = 8;
			NDR_CHECK(ndr_pull_array_uint8(ndr, NDR_SCALARS, r->SequenceNumber, size_SequenceNumber_0));
			size_Checksum_0 = 8;
			NDR_CHECK(ndr_pull_array_uint8(ndr, NDR_SCALARS, r->Checksum, size_Checksum_0));
			size_Confounder_0 = 8;
			NDR_CHECK(ndr_pull_array_uint8(ndr, NDR_SCALARS, r->Confounder, size_Confounder_0));
			NDR_CHECK(ndr_pull_trailer_align(ndr, 3));
		}
		if (ndr_flags & NDR_BUFFERS) {
		}
		ndr->flags = _flags_save_STRUCT;
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_NL_AUTH_SIGNATURE(struct ndr_print *ndr, const char *name, const struct NL_AUTH_SIGNATURE *r)
{
	ndr_print_struct(ndr, name, "NL_AUTH_SIGNATURE");
	if (r == NULL) { ndr_print_null(ndr); return; }
	{
		uint32_t _flags_save_STRUCT = ndr->flags;
		ndr_set_flags(&ndr->flags, LIBNDR_PRINT_ARRAY_HEX);
		ndr->depth++;
		ndr_print_NL_SIGNATURE_ALGORITHM(ndr, "SignatureAlgorithm", (ndr->flags & LIBNDR_PRINT_SET_VALUES)?NL_SIGN_HMAC_MD5:r->SignatureAlgorithm);
		ndr_print_NL_SEAL_ALGORITHM(ndr, "SealAlgorithm", r->SealAlgorithm);
		ndr_print_uint16(ndr, "Pad", r->Pad);
		ndr_print_uint16(ndr, "Flags", r->Flags);
		ndr_print_array_uint8(ndr, "SequenceNumber", r->SequenceNumber, 8);
		ndr_print_array_uint8(ndr, "Checksum", r->Checksum, 8);
		ndr_print_array_uint8(ndr, "Confounder", r->Confounder, 8);
		ndr->depth--;
		ndr->flags = _flags_save_STRUCT;
	}
}

_PUBLIC_ enum ndr_err_code ndr_push_NL_AUTH_SHA2_SIGNATURE(struct ndr_push *ndr, int ndr_flags, const struct NL_AUTH_SHA2_SIGNATURE *r)
{
	{
		uint32_t _flags_save_STRUCT = ndr->flags;
		ndr_set_flags(&ndr->flags, LIBNDR_PRINT_ARRAY_HEX);
		NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
		if (ndr_flags & NDR_SCALARS) {
			NDR_CHECK(ndr_push_align(ndr, 3));
			NDR_CHECK(ndr_push_NL_SIGNATURE_ALGORITHM(ndr, NDR_SCALARS, NL_SIGN_HMAC_SHA256));
			NDR_CHECK(ndr_push_NL_SEAL_ALGORITHM(ndr, NDR_SCALARS, r->SealAlgorithm));
			NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, r->Pad));
			NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, r->Flags));
			NDR_CHECK(ndr_push_array_uint8(ndr, NDR_SCALARS, r->SequenceNumber, 8));
			NDR_CHECK(ndr_push_array_uint8(ndr, NDR_SCALARS, r->Checksum, 32));
			NDR_CHECK(ndr_push_array_uint8(ndr, NDR_SCALARS, r->Confounder, 8));
			NDR_CHECK(ndr_push_trailer_align(ndr, 3));
		}
		if (ndr_flags & NDR_BUFFERS) {
		}
		ndr->flags = _flags_save_STRUCT;
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_NL_AUTH_SHA2_SIGNATURE(struct ndr_pull *ndr, int ndr_flags, struct NL_AUTH_SHA2_SIGNATURE *r)
{
	uint32_t size_SequenceNumber_0 = 0;
	uint32_t size_Checksum_0 = 0;
	uint32_t size_Confounder_0 = 0;
	{
		uint32_t _flags_save_STRUCT = ndr->flags;
		ndr_set_flags(&ndr->flags, LIBNDR_PRINT_ARRAY_HEX);
		NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
		if (ndr_flags & NDR_SCALARS) {
			NDR_CHECK(ndr_pull_align(ndr, 3));
			NDR_CHECK(ndr_pull_NL_SIGNATURE_ALGORITHM(ndr, NDR_SCALARS, &r->SignatureAlgorithm));
			NDR_CHECK(ndr_pull_NL_SEAL_ALGORITHM(ndr, NDR_SCALARS, &r->SealAlgorithm));
			NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->Pad));
			NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->Flags));
			size_SequenceNumber_0 = 8;
			NDR_CHECK(ndr_pull_array_uint8(ndr, NDR_SCALARS, r->SequenceNumber, size_SequenceNumber_0));
			size_Checksum_0 = 32;
			NDR_CHECK(ndr_pull_array_uint8(ndr, NDR_SCALARS, r->Checksum, size_Checksum_0));
			size_Confounder_0 = 8;
			NDR_CHECK(ndr_pull_array_uint8(ndr, NDR_SCALARS, r->Confounder, size_Confounder_0));
			NDR_CHECK(ndr_pull_trailer_align(ndr, 3));
		}
		if (ndr_flags & NDR_BUFFERS) {
		}
		ndr->flags = _flags_save_STRUCT;
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_NL_AUTH_SHA2_SIGNATURE(struct ndr_print *ndr, const char *name, const struct NL_AUTH_SHA2_SIGNATURE *r)
{
	ndr_print_struct(ndr, name, "NL_AUTH_SHA2_SIGNATURE");
	if (r == NULL) { ndr_print_null(ndr); return; }
	{
		uint32_t _flags_save_STRUCT = ndr->flags;
		ndr_set_flags(&ndr->flags, LIBNDR_PRINT_ARRAY_HEX);
		ndr->depth++;
		ndr_print_NL_SIGNATURE_ALGORITHM(ndr, "SignatureAlgorithm", (ndr->flags & LIBNDR_PRINT_SET_VALUES)?NL_SIGN_HMAC_SHA256:r->SignatureAlgorithm);
		ndr_print_NL_SEAL_ALGORITHM(ndr, "SealAlgorithm", r->SealAlgorithm);
		ndr_print_uint16(ndr, "Pad", r->Pad);
		ndr_print_uint16(ndr, "Flags", r->Flags);
		ndr_print_array_uint8(ndr, "SequenceNumber", r->SequenceNumber, 8);
		ndr_print_array_uint8(ndr, "Checksum", r->Checksum, 32);
		ndr_print_array_uint8(ndr, "Confounder", r->Confounder, 8);
		ndr->depth--;
		ndr->flags = _flags_save_STRUCT;
	}
}

