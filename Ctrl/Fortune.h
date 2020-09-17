#pragma once
#include "g_attr.h"
#include "Ability.h"

class CFortune : public CAbility
{
public:
	CFortune() = default;
	~CFortune();
	VOID AddToTotalAbilityPt() override;
	UINT CalcTotalFortunePt();
private:
	ULONG m_ulCurrentIncome;
};

