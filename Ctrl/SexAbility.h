#pragma once
#include "g_attr.h"

class SexAbility
{
public:
	SexAbility();
	~SexAbility();

	UINT CalcTheFinalPt();
	VOID SetSexAbilityAttr(UINT uiAvgTime, double dblTotalTime, USHORT usPosture, double dblSpeed, BOOL isOrgasm);
private:
	// Evaluation criteria
	UINT m_uiAvgTime;
	double m_dblTotalTime;
	USHORT m_usPosture;
	double m_dblSpeed;
	BOOL m_isOrgasm;
};

