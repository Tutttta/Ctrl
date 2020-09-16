#pragma once
#include "g_attr.h"
#include "Ability.h"

class SexAbility : public CAbility
{
public:
	SexAbility() = default;
	SexAbility(UINT uiAvgTime, DOUBLE dblTotalTime, USHORT usPosture, DOUBLE dblSpeed, BOOL isOrgasm);
	~SexAbility();

	UINT CalcTheFinalPt();
	VOID SetSexAbilityAttr(UINT uiAvgTime, DOUBLE dblTotalTime, USHORT usPosture, DOUBLE dblSpeed, BOOL isOrgasm);

private:
	VOID AddToTotalAbilityPt() override;
private:
	// Evaluation criteria
	UINT m_uiAvgTime;
	DOUBLE m_dblTotalSexPt;
	USHORT m_usPosture;
	DOUBLE m_dblSpeed;
	BOOL m_isOrgasm;
};

