/* header auto-generated by pidl */

#include "librpc/ndr/libndr.h"
#include "autoconf/librpc/gen_ndr/dcerpc.h"

#ifndef _HEADER_NDR_dcerpc
#define _HEADER_NDR_dcerpc

#define NDR_DCERPC_CALL_COUNT (0)
void ndr_print_dcerpc_ctx_list(struct ndr_print *ndr, const char *name, const struct dcerpc_ctx_list *r);
enum ndr_err_code ndr_push_dcerpc_bind(struct ndr_push *ndr, int ndr_flags, const struct dcerpc_bind *r);
enum ndr_err_code ndr_pull_dcerpc_bind(struct ndr_pull *ndr, int ndr_flags, struct dcerpc_bind *r);
void ndr_print_dcerpc_bind(struct ndr_print *ndr, const char *name, const struct dcerpc_bind *r);
void ndr_print_dcerpc_empty(struct ndr_print *ndr, const char *name, const struct dcerpc_empty *r);
void ndr_print_dcerpc_object(struct ndr_print *ndr, const char *name, const union dcerpc_object *r);
void ndr_print_dcerpc_request(struct ndr_print *ndr, const char *name, const struct dcerpc_request *r);
void ndr_print_dcerpc_ack_ctx(struct ndr_print *ndr, const char *name, const struct dcerpc_ack_ctx *r);
void ndr_print_dcerpc_bind_ack(struct ndr_print *ndr, const char *name, const struct dcerpc_bind_ack *r);
void ndr_print_dcerpc_bind_nak_versions(struct ndr_print *ndr, const char *name, const struct dcerpc_bind_nak_versions *r);
void ndr_print_dcerpc_bind_nak_versions_ctr(struct ndr_print *ndr, const char *name, const union dcerpc_bind_nak_versions_ctr *r);
void ndr_print_dcerpc_bind_nak(struct ndr_print *ndr, const char *name, const struct dcerpc_bind_nak *r);
void ndr_print_dcerpc_response(struct ndr_print *ndr, const char *name, const struct dcerpc_response *r);
void ndr_print_dcerpc_nca_status(struct ndr_print *ndr, const char *name, enum dcerpc_nca_status r);
void ndr_print_dcerpc_fault(struct ndr_print *ndr, const char *name, const struct dcerpc_fault *r);
void ndr_print_dcerpc_AuthType(struct ndr_print *ndr, const char *name, enum dcerpc_AuthType r);
void ndr_print_dcerpc_AuthLevel(struct ndr_print *ndr, const char *name, enum dcerpc_AuthLevel r);
enum ndr_err_code ndr_push_dcerpc_auth(struct ndr_push *ndr, int ndr_flags, const struct dcerpc_auth *r);
enum ndr_err_code ndr_pull_dcerpc_auth(struct ndr_pull *ndr, int ndr_flags, struct dcerpc_auth *r);
void ndr_print_dcerpc_auth(struct ndr_print *ndr, const char *name, const struct dcerpc_auth *r);
enum ndr_err_code ndr_push_dcerpc_auth3(struct ndr_push *ndr, int ndr_flags, const struct dcerpc_auth3 *r);
enum ndr_err_code ndr_pull_dcerpc_auth3(struct ndr_pull *ndr, int ndr_flags, struct dcerpc_auth3 *r);
void ndr_print_dcerpc_auth3(struct ndr_print *ndr, const char *name, const struct dcerpc_auth3 *r);
enum ndr_err_code ndr_push_dcerpc_orphaned(struct ndr_push *ndr, int ndr_flags, const struct dcerpc_orphaned *r);
enum ndr_err_code ndr_pull_dcerpc_orphaned(struct ndr_pull *ndr, int ndr_flags, struct dcerpc_orphaned *r);
void ndr_print_dcerpc_orphaned(struct ndr_print *ndr, const char *name, const struct dcerpc_orphaned *r);
enum ndr_err_code ndr_push_dcerpc_co_cancel(struct ndr_push *ndr, int ndr_flags, const struct dcerpc_co_cancel *r);
enum ndr_err_code ndr_pull_dcerpc_co_cancel(struct ndr_pull *ndr, int ndr_flags, struct dcerpc_co_cancel *r);
void ndr_print_dcerpc_co_cancel(struct ndr_print *ndr, const char *name, const struct dcerpc_co_cancel *r);
enum ndr_err_code ndr_push_dcerpc_cl_cancel(struct ndr_push *ndr, int ndr_flags, const struct dcerpc_cl_cancel *r);
enum ndr_err_code ndr_pull_dcerpc_cl_cancel(struct ndr_pull *ndr, int ndr_flags, struct dcerpc_cl_cancel *r);
void ndr_print_dcerpc_cl_cancel(struct ndr_print *ndr, const char *name, const struct dcerpc_cl_cancel *r);
enum ndr_err_code ndr_push_dcerpc_cancel_ack(struct ndr_push *ndr, int ndr_flags, const struct dcerpc_cancel_ack *r);
enum ndr_err_code ndr_pull_dcerpc_cancel_ack(struct ndr_pull *ndr, int ndr_flags, struct dcerpc_cancel_ack *r);
void ndr_print_dcerpc_cancel_ack(struct ndr_print *ndr, const char *name, const struct dcerpc_cancel_ack *r);
enum ndr_err_code ndr_push_dcerpc_fack(struct ndr_push *ndr, int ndr_flags, const struct dcerpc_fack *r);
enum ndr_err_code ndr_pull_dcerpc_fack(struct ndr_pull *ndr, int ndr_flags, struct dcerpc_fack *r);
void ndr_print_dcerpc_fack(struct ndr_print *ndr, const char *name, const struct dcerpc_fack *r);
enum ndr_err_code ndr_push_dcerpc_ack(struct ndr_push *ndr, int ndr_flags, const struct dcerpc_ack *r);
enum ndr_err_code ndr_pull_dcerpc_ack(struct ndr_pull *ndr, int ndr_flags, struct dcerpc_ack *r);
void ndr_print_dcerpc_ack(struct ndr_print *ndr, const char *name, const struct dcerpc_ack *r);
enum ndr_err_code ndr_push_dcerpc_ping(struct ndr_push *ndr, int ndr_flags, const struct dcerpc_ping *r);
enum ndr_err_code ndr_pull_dcerpc_ping(struct ndr_pull *ndr, int ndr_flags, struct dcerpc_ping *r);
void ndr_print_dcerpc_ping(struct ndr_print *ndr, const char *name, const struct dcerpc_ping *r);
enum ndr_err_code ndr_push_dcerpc_shutdown(struct ndr_push *ndr, int ndr_flags, const struct dcerpc_shutdown *r);
enum ndr_err_code ndr_pull_dcerpc_shutdown(struct ndr_pull *ndr, int ndr_flags, struct dcerpc_shutdown *r);
void ndr_print_dcerpc_shutdown(struct ndr_print *ndr, const char *name, const struct dcerpc_shutdown *r);
enum ndr_err_code ndr_push_dcerpc_working(struct ndr_push *ndr, int ndr_flags, const struct dcerpc_working *r);
enum ndr_err_code ndr_pull_dcerpc_working(struct ndr_pull *ndr, int ndr_flags, struct dcerpc_working *r);
void ndr_print_dcerpc_working(struct ndr_print *ndr, const char *name, const struct dcerpc_working *r);
enum ndr_err_code ndr_push_RTSCookie(struct ndr_push *ndr, int ndr_flags, const struct RTSCookie *r);
enum ndr_err_code ndr_pull_RTSCookie(struct ndr_pull *ndr, int ndr_flags, struct RTSCookie *r);
void ndr_print_RTSCookie(struct ndr_print *ndr, const char *name, const struct RTSCookie *r);
enum ndr_err_code ndr_push_AddressType(struct ndr_push *ndr, int ndr_flags, enum AddressType r);
enum ndr_err_code ndr_pull_AddressType(struct ndr_pull *ndr, int ndr_flags, enum AddressType *r);
void ndr_print_AddressType(struct ndr_print *ndr, const char *name, enum AddressType r);
void ndr_print_ClientAddressType(struct ndr_print *ndr, const char *name, const union ClientAddressType *r);
enum ndr_err_code ndr_push_ClientAddress(struct ndr_push *ndr, int ndr_flags, const struct ClientAddress *r);
enum ndr_err_code ndr_pull_ClientAddress(struct ndr_pull *ndr, int ndr_flags, struct ClientAddress *r);
void ndr_print_ClientAddress(struct ndr_print *ndr, const char *name, const struct ClientAddress *r);
enum ndr_err_code ndr_push_ForwardDestination(struct ndr_push *ndr, int ndr_flags, enum ForwardDestination r);
enum ndr_err_code ndr_pull_ForwardDestination(struct ndr_pull *ndr, int ndr_flags, enum ForwardDestination *r);
void ndr_print_ForwardDestination(struct ndr_print *ndr, const char *name, enum ForwardDestination r);
enum ndr_err_code ndr_push_FlowControlAcknowledgment(struct ndr_push *ndr, int ndr_flags, const struct FlowControlAcknowledgment *r);
enum ndr_err_code ndr_pull_FlowControlAcknowledgment(struct ndr_pull *ndr, int ndr_flags, struct FlowControlAcknowledgment *r);
void ndr_print_FlowControlAcknowledgment(struct ndr_print *ndr, const char *name, const struct FlowControlAcknowledgment *r);
enum ndr_err_code ndr_push_dcerpc_rts_cmd_ReceiveWindowSize(struct ndr_push *ndr, int ndr_flags, const struct dcerpc_rts_cmd_ReceiveWindowSize *r);
enum ndr_err_code ndr_pull_dcerpc_rts_cmd_ReceiveWindowSize(struct ndr_pull *ndr, int ndr_flags, struct dcerpc_rts_cmd_ReceiveWindowSize *r);
void ndr_print_dcerpc_rts_cmd_ReceiveWindowSize(struct ndr_print *ndr, const char *name, const struct dcerpc_rts_cmd_ReceiveWindowSize *r);
enum ndr_err_code ndr_push_dcerpc_rts_cmd_FlowControlAck(struct ndr_push *ndr, int ndr_flags, const struct dcerpc_rts_cmd_FlowControlAck *r);
enum ndr_err_code ndr_pull_dcerpc_rts_cmd_FlowControlAck(struct ndr_pull *ndr, int ndr_flags, struct dcerpc_rts_cmd_FlowControlAck *r);
void ndr_print_dcerpc_rts_cmd_FlowControlAck(struct ndr_print *ndr, const char *name, const struct dcerpc_rts_cmd_FlowControlAck *r);
enum ndr_err_code ndr_push_dcerpc_rts_cmd_ConnectionTimeout(struct ndr_push *ndr, int ndr_flags, const struct dcerpc_rts_cmd_ConnectionTimeout *r);
enum ndr_err_code ndr_pull_dcerpc_rts_cmd_ConnectionTimeout(struct ndr_pull *ndr, int ndr_flags, struct dcerpc_rts_cmd_ConnectionTimeout *r);
void ndr_print_dcerpc_rts_cmd_ConnectionTimeout(struct ndr_print *ndr, const char *name, const struct dcerpc_rts_cmd_ConnectionTimeout *r);
enum ndr_err_code ndr_push_dcerpc_rts_cmd_Cookie(struct ndr_push *ndr, int ndr_flags, const struct dcerpc_rts_cmd_Cookie *r);
enum ndr_err_code ndr_pull_dcerpc_rts_cmd_Cookie(struct ndr_pull *ndr, int ndr_flags, struct dcerpc_rts_cmd_Cookie *r);
void ndr_print_dcerpc_rts_cmd_Cookie(struct ndr_print *ndr, const char *name, const struct dcerpc_rts_cmd_Cookie *r);
enum ndr_err_code ndr_push_dcerpc_rts_cmd_ChannelLifetime(struct ndr_push *ndr, int ndr_flags, const struct dcerpc_rts_cmd_ChannelLifetime *r);
enum ndr_err_code ndr_pull_dcerpc_rts_cmd_ChannelLifetime(struct ndr_pull *ndr, int ndr_flags, struct dcerpc_rts_cmd_ChannelLifetime *r);
void ndr_print_dcerpc_rts_cmd_ChannelLifetime(struct ndr_print *ndr, const char *name, const struct dcerpc_rts_cmd_ChannelLifetime *r);
enum ndr_err_code ndr_push_dcerpc_rts_cmd_ClientKeepalive(struct ndr_push *ndr, int ndr_flags, const struct dcerpc_rts_cmd_ClientKeepalive *r);
enum ndr_err_code ndr_pull_dcerpc_rts_cmd_ClientKeepalive(struct ndr_pull *ndr, int ndr_flags, struct dcerpc_rts_cmd_ClientKeepalive *r);
void ndr_print_dcerpc_rts_cmd_ClientKeepalive(struct ndr_print *ndr, const char *name, const struct dcerpc_rts_cmd_ClientKeepalive *r);
enum ndr_err_code ndr_push_dcerpc_rts_cmd_Version(struct ndr_push *ndr, int ndr_flags, const struct dcerpc_rts_cmd_Version *r);
enum ndr_err_code ndr_pull_dcerpc_rts_cmd_Version(struct ndr_pull *ndr, int ndr_flags, struct dcerpc_rts_cmd_Version *r);
void ndr_print_dcerpc_rts_cmd_Version(struct ndr_print *ndr, const char *name, const struct dcerpc_rts_cmd_Version *r);
enum ndr_err_code ndr_push_dcerpc_rts_cmd_Empty(struct ndr_push *ndr, int ndr_flags, const struct dcerpc_rts_cmd_Empty *r);
enum ndr_err_code ndr_pull_dcerpc_rts_cmd_Empty(struct ndr_pull *ndr, int ndr_flags, struct dcerpc_rts_cmd_Empty *r);
void ndr_print_dcerpc_rts_cmd_Empty(struct ndr_print *ndr, const char *name, const struct dcerpc_rts_cmd_Empty *r);
enum ndr_err_code ndr_push_dcerpc_rts_cmd_Padding(struct ndr_push *ndr, int ndr_flags, const struct dcerpc_rts_cmd_Padding *r);
enum ndr_err_code ndr_pull_dcerpc_rts_cmd_Padding(struct ndr_pull *ndr, int ndr_flags, struct dcerpc_rts_cmd_Padding *r);
void ndr_print_dcerpc_rts_cmd_Padding(struct ndr_print *ndr, const char *name, const struct dcerpc_rts_cmd_Padding *r);
enum ndr_err_code ndr_push_dcerpc_rts_cmd_NegativeANCE(struct ndr_push *ndr, int ndr_flags, const struct dcerpc_rts_cmd_NegativeANCE *r);
enum ndr_err_code ndr_pull_dcerpc_rts_cmd_NegativeANCE(struct ndr_pull *ndr, int ndr_flags, struct dcerpc_rts_cmd_NegativeANCE *r);
void ndr_print_dcerpc_rts_cmd_NegativeANCE(struct ndr_print *ndr, const char *name, const struct dcerpc_rts_cmd_NegativeANCE *r);
enum ndr_err_code ndr_push_dcerpc_rts_cmd_ANCE(struct ndr_push *ndr, int ndr_flags, const struct dcerpc_rts_cmd_ANCE *r);
enum ndr_err_code ndr_pull_dcerpc_rts_cmd_ANCE(struct ndr_pull *ndr, int ndr_flags, struct dcerpc_rts_cmd_ANCE *r);
void ndr_print_dcerpc_rts_cmd_ANCE(struct ndr_print *ndr, const char *name, const struct dcerpc_rts_cmd_ANCE *r);
enum ndr_err_code ndr_push_dcerpc_rts_cmd_ClientAddress(struct ndr_push *ndr, int ndr_flags, const struct dcerpc_rts_cmd_ClientAddress *r);
enum ndr_err_code ndr_pull_dcerpc_rts_cmd_ClientAddress(struct ndr_pull *ndr, int ndr_flags, struct dcerpc_rts_cmd_ClientAddress *r);
void ndr_print_dcerpc_rts_cmd_ClientAddress(struct ndr_print *ndr, const char *name, const struct dcerpc_rts_cmd_ClientAddress *r);
enum ndr_err_code ndr_push_dcerpc_rts_cmd_AssociationGroupId(struct ndr_push *ndr, int ndr_flags, const struct dcerpc_rts_cmd_AssociationGroupId *r);
enum ndr_err_code ndr_pull_dcerpc_rts_cmd_AssociationGroupId(struct ndr_pull *ndr, int ndr_flags, struct dcerpc_rts_cmd_AssociationGroupId *r);
void ndr_print_dcerpc_rts_cmd_AssociationGroupId(struct ndr_print *ndr, const char *name, const struct dcerpc_rts_cmd_AssociationGroupId *r);
enum ndr_err_code ndr_push_dcerpc_rts_cmd_Destination(struct ndr_push *ndr, int ndr_flags, const struct dcerpc_rts_cmd_Destination *r);
enum ndr_err_code ndr_pull_dcerpc_rts_cmd_Destination(struct ndr_pull *ndr, int ndr_flags, struct dcerpc_rts_cmd_Destination *r);
void ndr_print_dcerpc_rts_cmd_Destination(struct ndr_print *ndr, const char *name, const struct dcerpc_rts_cmd_Destination *r);
enum ndr_err_code ndr_push_dcerpc_rts_cmd_PingTrafficSentNotify(struct ndr_push *ndr, int ndr_flags, const struct dcerpc_rts_cmd_PingTrafficSentNotify *r);
enum ndr_err_code ndr_pull_dcerpc_rts_cmd_PingTrafficSentNotify(struct ndr_pull *ndr, int ndr_flags, struct dcerpc_rts_cmd_PingTrafficSentNotify *r);
void ndr_print_dcerpc_rts_cmd_PingTrafficSentNotify(struct ndr_print *ndr, const char *name, const struct dcerpc_rts_cmd_PingTrafficSentNotify *r);
void ndr_print_dcerpc_rts_cmds(struct ndr_print *ndr, const char *name, const union dcerpc_rts_cmds *r);
enum ndr_err_code ndr_push_dcerpc_rts_cmd(struct ndr_push *ndr, int ndr_flags, const struct dcerpc_rts_cmd *r);
enum ndr_err_code ndr_pull_dcerpc_rts_cmd(struct ndr_pull *ndr, int ndr_flags, struct dcerpc_rts_cmd *r);
void ndr_print_dcerpc_rts_cmd(struct ndr_print *ndr, const char *name, const struct dcerpc_rts_cmd *r);
enum ndr_err_code ndr_push_dcerpc_rts_flags(struct ndr_push *ndr, int ndr_flags, uint16_t r);
enum ndr_err_code ndr_pull_dcerpc_rts_flags(struct ndr_pull *ndr, int ndr_flags, uint16_t *r);
void ndr_print_dcerpc_rts_flags(struct ndr_print *ndr, const char *name, uint16_t r);
enum ndr_err_code ndr_push_dcerpc_rts(struct ndr_push *ndr, int ndr_flags, const struct dcerpc_rts *r);
enum ndr_err_code ndr_pull_dcerpc_rts(struct ndr_pull *ndr, int ndr_flags, struct dcerpc_rts *r);
void ndr_print_dcerpc_rts(struct ndr_print *ndr, const char *name, const struct dcerpc_rts *r);
void ndr_print_dcerpc_pkt_type(struct ndr_print *ndr, const char *name, enum dcerpc_pkt_type r);
void ndr_print_dcerpc_payload(struct ndr_print *ndr, const char *name, const union dcerpc_payload *r);
enum ndr_err_code ndr_push_ncacn_packet(struct ndr_push *ndr, int ndr_flags, const struct ncacn_packet *r);
enum ndr_err_code ndr_pull_ncacn_packet(struct ndr_pull *ndr, int ndr_flags, struct ncacn_packet *r);
void ndr_print_ncacn_packet(struct ndr_print *ndr, const char *name, const struct ncacn_packet *r);
enum ndr_err_code ndr_push_ncadg_packet(struct ndr_push *ndr, int ndr_flags, const struct ncadg_packet *r);
enum ndr_err_code ndr_pull_ncadg_packet(struct ndr_pull *ndr, int ndr_flags, struct ncadg_packet *r);
void ndr_print_ncadg_packet(struct ndr_print *ndr, const char *name, const struct ncadg_packet *r);
#endif /* _HEADER_NDR_dcerpc */
