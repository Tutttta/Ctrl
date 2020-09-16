#include "SexAbility.h"


SexAbility::SexAbility(UINT uiAvgTime, double dblTotalTime, USHORT usPosture, double dblSpeed, BOOL isOrgasm) : m_dblSpeed(dblSpeed),
m_dblTotalSexPt(dblTotalTime), m_isOrgasm(isOrgasm), m_uiAvgTime(uiAvgTime), m_usPosture(usPosture)
{

}

SexAbility::~SexAbility()
{
}

/*
UINT uiAvgTime;		Time accounts for 50% of the score
	t <= 5		
	5 < t <= 15		
	15 < t <= 25
	25 < t <= 35
	35 < t <= 45
	t > 45
USHORT usPosture;	Posture accounts for 10% of the score
	p <= 2 only 3 points
	3 <= p <= 5 get all points
	p > 5 get points as the times of posture
DOUBLE dblSpeed;		Speed accounts for 20% of the score
	average speed <=1 get 5
	average speed 1~1.5 get 13 points
	average speed > 1.5 get 20 points
BOOL isOrgasm;		If orgasm, full mark directly
*/
UINT SexAbility::CalcTheFinalPt()
{
	if (m_isOrgasm)
		return(100);
	m_dblTotalSexPt += 50 * m_uiAvgTime * 0.01;
	if (m_usPosture <= 2)
		m_dblTotalSexPt += 3;
	else if (m_usPosture <= 5)
		m_dblTotalSexPt += 10;
	else
		m_dblTotalSexPt += m_usPosture;
	if (m_dblSpeed <= 1)
		m_dblTotalSexPt += 5;
	else if (m_dblSpeed <= 1.5)
		m_dblTotalSexPt += 13;
	else
		m_dblTotalSexPt += 20;
	AddToTotalAbilityPt();

	return(m_dblTotalSexPt);
}

VOID SexAbility::AddToTotalAbilityPt()
{
	m_ulAbililtyTotalPt += m_dblTotalSexPt;
}

VOID SexAbility::SetSexAbilityAttr(UINT uiAvgTime, double dblTotalTime, USHORT usPosture, double dblSpeed, BOOL isOrgasm)
{
	m_isOrgasm = isOrgasm;
	m_uiAvgTime = uiAvgTime;
	m_dblTotalSexPt = dblTotalTime;
	m_usPosture = usPosture;
	m_dblSpeed = dblSpeed;
}