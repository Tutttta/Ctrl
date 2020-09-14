#include "SexAbility.h"

SexAbility::SexAbility() : m_dblSpeed(0.0), m_dblTotalTime(0.0), m_isOrgasm(FALSE), m_uiAvgTime(0), m_usPosture(0)
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
	m_dblTotalTime += 50 * m_uiAvgTime * 0.01;
	if (m_usPosture <= 2)
		m_dblTotalTime += 3;
	else if (m_usPosture <= 5)
		m_dblTotalTime += 10;
	else
		m_dblTotalTime += m_usPosture;
	if (m_dblSpeed <= 1)
		m_dblTotalTime += 5;
	else if (m_dblSpeed <= 1.5)
		m_dblTotalTime += 13;
	else
		m_dblTotalTime += 20;

	return(m_dblTotalTime);
}

VOID SexAbility::SetSexAbilityAttr(UINT uiAvgTime, DOUBLE dblTotalTime, USHORT usPosture, DOUBLE dblSpeed, BOOL isOrgasm)
{
	m_isOrgasm = isOrgasm;
	m_uiAvgTime = uiAvgTime;
	m_dblTotalTime = dblTotalTime;
	m_usPosture = usPosture;
	m_dblSpeed = dblSpeed;
}