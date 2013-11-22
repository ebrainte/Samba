
/* Automatically generated by tables.pl. DO NOT EDIT */

#include "includes.h"
#include "librpc/ndr/libndr.h"
#include "librpc/ndr/ndr_table.h"
#include "librpc/gen_ndr/ndr_srvsvc.h"
#include "librpc/gen_ndr/ndr_efs.h"
#include "librpc/gen_ndr/ndr_drsblobs.h"
#include "librpc/gen_ndr/ndr_scerpc.h"
#include "librpc/gen_ndr/ndr_rot.h"
#include "librpc/gen_ndr/ndr_dnsp.h"
#include "librpc/gen_ndr/ndr_svcctl.h"
#include "librpc/gen_ndr/ndr_browser.h"
#include "librpc/gen_ndr/ndr_ntlmssp.h"
#include "librpc/gen_ndr/ndr_initshutdown.h"
#include "librpc/gen_ndr/ndr_ntsvcs.h"
#include "librpc/gen_ndr/ndr_trkwks.h"
#include "source4/librpc/gen_ndr/ndr_nfs4acl.h"
#include "librpc/gen_ndr/ndr_frsrpc.h"
#include "librpc/gen_ndr/ndr_dfsblobs.h"
#include "librpc/gen_ndr/ndr_netlogon.h"
#include "librpc/gen_ndr/ndr_dsbackup.h"
#include "librpc/gen_ndr/ndr_oxidresolver.h"
#include "librpc/gen_ndr/ndr_eventlog.h"
#include "librpc/gen_ndr/ndr_dcom.h"
#include "librpc/gen_ndr/ndr_keysvc.h"
#include "librpc/gen_ndr/ndr_wzcsvc.h"
#include "librpc/gen_ndr/ndr_frsapi.h"
#include "source3/librpc/gen_ndr/ndr_smbXsrv.h"
#include "librpc/gen_ndr/ndr_eventlog6.h"
#include "librpc/gen_ndr/ndr_audiosrv.h"
#include "librpc/gen_ndr/ndr_dfs.h"
#include "librpc/gen_ndr/ndr_wmi.h"
#include "source4/librpc/gen_ndr/ndr_winbind.h"
#include "librpc/gen_ndr/ndr_frstrans.h"
#include "librpc/gen_ndr/ndr_preg.h"
#include "librpc/gen_ndr/ndr_ntprinting.h"
#include "librpc/gen_ndr/ndr_w32time.h"
#include "librpc/gen_ndr/ndr_backupkey.h"
#include "librpc/gen_ndr/ndr_dns.h"
#include "librpc/gen_ndr/ndr_remact.h"
#include "librpc/gen_ndr/ndr_samr.h"
#include "librpc/gen_ndr/ndr_winreg.h"
#include "librpc/gen_ndr/ndr_msgsvc.h"
#include "librpc/gen_ndr/ndr_dssetup.h"
#include "librpc/gen_ndr/ndr_echo.h"
#include "librpc/gen_ndr/ndr_spoolss.h"
#include "source4/librpc/gen_ndr/ndr_irpc.h"
#include "librpc/gen_ndr/ndr_dnsserver.h"
#include "librpc/gen_ndr/ndr_fsrvp.h"
#include "librpc/gen_ndr/ndr_lsa.h"
#include "source4/librpc/gen_ndr/ndr_winsrepl.h"
#include "source4/librpc/gen_ndr/ndr_winstation.h"
#include "librpc/gen_ndr/ndr_unixinfo.h"
#include "librpc/gen_ndr/ndr_drsuapi.h"
#include "librpc/gen_ndr/ndr_mgmt.h"
#include "librpc/gen_ndr/ndr_atsvc.h"
#include "source4/librpc/gen_ndr/ndr_ntp_signd.h"
#include "librpc/gen_ndr/ndr_epmapper.h"
#include "librpc/gen_ndr/ndr_policyagent.h"
#include "librpc/gen_ndr/ndr_krb5pac.h"
#include "librpc/gen_ndr/ndr_xattr.h"
#include "librpc/gen_ndr/ndr_nbt.h"
#include "librpc/gen_ndr/ndr_dbgidl.h"
#include "source3/librpc/gen_ndr/ndr_wbint.h"
#include "source4/librpc/gen_ndr/ndr_winsif.h"
#include "librpc/gen_ndr/ndr_wkssvc.h"

NTSTATUS ndr_table_register_builtin_tables(void)
{
	NTSTATUS status;

	status = ndr_table_register(&ndr_table_srvsvc);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_efs);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_drsblobs);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_scerpc);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_rot);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_dnsp);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_svcctl);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_browser);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_ntlmssp);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_initshutdown);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_ntsvcs);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_trkwks);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_nfs4acl);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_frsrpc);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_dfsblobs);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_netlogon);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_ad_backup);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_ad_restore);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_IOXIDResolver);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_eventlog);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_dcom_Unknown);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_IUnknown);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_IClassFactory);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_IRemUnknown);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_IClassActivator);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_ISCMLocalActivator);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_IMachineLocalActivator);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_ILocalObjectExporter);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_ISystemActivator);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_IRemUnknown2);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_IDispatch);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_IMarshal);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_ICoffeeMachine);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_IStream);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_keysvc);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_wzcsvc);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_frsapi);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_smbXsrv);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_eventlog6);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_audiosrv);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_netdfs);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_IWbemClassObject);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_IWbemServices);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_IEnumWbemClassObject);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_IWbemContext);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_IWbemLevel1Login);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_IWbemWCOSmartEnum);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_IWbemFetchSmartEnum);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_IWbemCallResult);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_IWbemObjectSink);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_winbind);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_frstrans);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_preg);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_ntprinting);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_w32time);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_backupkey);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_dns);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_IRemoteActivation);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_samr);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_winreg);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_msgsvc);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_msgsvcsend);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_dssetup);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_rpcecho);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_spoolss);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_irpc);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_dnsserver);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_FileServerVssAgent);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_lsarpc);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_wrepl);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_winstation);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_unixinfo);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_drsuapi);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_mgmt);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_atsvc);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_ntp_signd);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_epmapper);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_policyagent);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_krb5pac);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_xattr);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_nbt);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_dbgidl);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_wbint);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_winsif);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_wkssvc);
	if (NT_STATUS_IS_ERR(status)) return status;


	
	return NT_STATUS_OK;
}
