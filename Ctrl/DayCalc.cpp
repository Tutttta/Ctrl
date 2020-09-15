#include "DayCalc.h"

CDayCalc::CDayCalc()
{
	RtlZeroMemory(&m_stSysTime, sizeof(m_stSysTime));
	GetLocalTime(&m_stSysTime);
}

CDayCalc::~CDayCalc()
{
	RtlZeroMemory(&m_stSysTime, sizeof(m_stSysTime));
}

SYSTEMTIME CDayCalc::GetSystemTime()
{
	GetLocalTime(&m_stSysTime);
	return(m_stSysTime);
}

VOID CDayCalc::PrintTime()
{
	string strArr[7] = {"星期日", "星期一", "星期二", "星期三", "星期四", "星期五", "星期六"};

	GetLocalTime(&m_stSysTime);
	FormatTime(m_stSysTime.wYear, m_stSysTime.wMonth, m_stSysTime.wDay, m_stSysTime.wHour, m_stSysTime.wMinute, m_stSysTime.wSecond, strArr[m_stSysTime.wDayOfWeek]);
	cout << m_strTime << endl;
}

VOID CDayCalc::FormatTime(USHORT usYear, USHORT usMonth, USHORT usDay, 
	USHORT usHr, USHORT usMin, USHORT usSec, string strWeek)
{
	char *pTmpTime = new char[DATELEN];
	ZeroMemory(pTmpTime, DATELEN);
	sprintf(pTmpTime, "%u年%u月%u日 %u:%u:%u ", usYear, usMonth, usDay, usHr, usMin, usSec);
	string strTime(pTmpTime);
	strTime += strWeek;
	if (pTmpTime) {
		delete[] pTmpTime;
		pTmpTime = NULL;
	}
	m_strTime = strTime;
}

string CDayCalc::GetTimeString()
{
	return(m_strTime);
}

VOID CDayCalc::SetSystemTime(const SYSTEMTIME &stSysTime)
{
	m_stSysTime = stSysTime;
	return;
}
