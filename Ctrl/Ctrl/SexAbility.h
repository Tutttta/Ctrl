#pragma once
#include "g_attr.h"

class SexAbility
{
public:
	SexAbility();
	~SexAbility();

	UINT CalcTheFinalPt();
	VOID SetSexAbilityAttr(UINT uiAvgTime, DOUBLE dblTotalTime, USHORT usPosture, DOUBLE dblSpeed, BOOL isOrgasm);
private:
	// Evaluation criteria
	UINT m_uiAvgTime;
	DOUBLE m_dblTotalTime;
	USHORT m_usPosture;
	DOUBLE m_dblSpeed;
	BOOL m_isOrgasm;
};

