#pragma once
#include "Ability.h"

class SexAbility : public CAbility
{
public:
	SexAbility() = default;
	SexAbility(UINT uiAvgTime, double dblTotalTime, USHORT usPosture, double dblSpeed, BOOL isOrgasm);
	~SexAbility();

	UINT CalcTheFinalPt();
	VOID SetSexAbilityAttr(UINT uiAvgTime, double dblTotalTime, USHORT usPosture, double dblSpeed, BOOL isOrgasm);

private:
	VOID AddToTotalAbilityPt() override;
private:
	// Evaluation criteria
	UINT m_uiAvgTime;
	UINT m_dblTotalSexPt;
	USHORT m_usPosture;
	double m_dblSpeed;
	BOOL m_isOrgasm;
};

