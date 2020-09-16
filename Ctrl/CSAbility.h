#pragma once
#include "Ability.h"

class CCSAbility : public CAbility
{
public:
	CCSAbility() = default;
	~CCSAbility();
	VOID AddToTotalAbilityPt() override;
private:
	UINT m_uiAlgorithmProgramAbility; // data structure and algorithm
	UINT m_uiTheoryAbility;
	UINT m_uiReversingAbility;
	UINT m_uiKernelProgramAbility; // Windows specially
	UINT m_uiKernelKnowledge; // ReactOS and Linux distributions
	unsigned long m_ulTotalCSPt;
};

