#pragma once
#include "g_attr.h"
#include "UI.h"
#include "NetStatus.h"

class CDayCalc
{
public:
	CDayCalc();
	~CDayCalc();

	SYSTEMTIME GetSystemTime();
	VOID PrintTime(UINT uiX, UINT uiY);
	string GetTimeString();
	VOID SetSystemTime(const SYSTEMTIME &stSysTime);
	BOOL KillDayCalcThreadIfExists();

	DWORD GetDayCalcThreadId();
	HANDLE GetDayCalcThreadHandle();
	VOID SetDayCalcThreadId(DWORD dwThreadId);
	VOID SetDayCalcThreadHandle(HANDLE hDayCalc);
private:
	VOID FormatTime(USHORT usYear, USHORT usMonth, USHORT usDay, USHORT usHr, USHORT usMin, USHORT usSec, string strWeek);
private:
	HANDLE m_hDayCalc;
	DWORD m_dwThreadId;
	SYSTEMTIME m_stSysTime;
	string m_strTime;
};

