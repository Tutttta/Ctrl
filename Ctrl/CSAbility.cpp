#include "CSAbility.h"


CCSAbility::~CCSAbility()
{
}

VOID CCSAbility::AddToTotalAbilityPt()
{
	m_ulAbililtyTotalPt += m_ulTotalCSPt;
}
