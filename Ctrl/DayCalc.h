#pragma once
#include "g_attr.h"
#include "NetStatus.h"

class CDayCalc
{
public:
	CDayCalc();
	~CDayCalc();

	SYSTEMTIME GetSystemTime();
	VOID PrintTime();
	string GetTimeString();
	VOID SetSystemTime(const SYSTEMTIME &stSysTime);
private:
	VOID FormatTime(USHORT usYear, USHORT usMonth, USHORT usDay, USHORT usHr, USHORT usMin, USHORT usSec, string strWeek);
private:
	SYSTEMTIME m_stSysTime;
	string m_strTime;
};

