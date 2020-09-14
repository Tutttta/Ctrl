#include "NetStatus.h"



CNetStatus::CNetStatus() : m_pUnknown(NULL), m_fOnline(TRUE), m_hresult(-1)
{
	
}


CNetStatus::~CNetStatus()
{
}

BOOL CNetStatus::CheckIfNetConnected()
{
	CoInitialize(NULL);
	m_hresult = CoCreateInstance(CLSID_NetworkListManager, NULL, CLSCTX_ALL, IID_IUnknown, (void **)&m_pUnknown);
	if (SUCCEEDED(m_hresult)) {
		INetworkListManager *pNetworkListMgr = NULL;
		if (m_pUnknown)
			m_hresult = m_pUnknown->QueryInterface(IID_INetworkListManager, (void **)&pNetworkListMgr);
		if (SUCCEEDED(m_hresult)) {
			VARIANT_BOOL IsConnect = VARIANT_FALSE;
			if (pNetworkListMgr)
				m_hresult = pNetworkListMgr->get_IsConnectedToInternet(&IsConnect);
			if (SUCCEEDED(m_hresult))
				m_fOnline = (IsConnect == VARIANT_TRUE) ? TRUE : FALSE;
		}
		if (pNetworkListMgr)
			pNetworkListMgr->Release();
	}
	if (m_pUnknown)
		m_pUnknown->Release();
	CoUninitialize();

	return(m_fOnline);
}
