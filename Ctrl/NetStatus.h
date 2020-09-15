#pragma once
#include "g_attr.h"
#include <netlistmgr.h>

// COM controls
class CNetStatus
{
public:
	CNetStatus();
	~CNetStatus();

	BOOL CheckIfNetConnected();
private:
	IUnknown *m_pUnknown;
	BOOL m_fOnline;
	HRESULT m_hresult;
};

