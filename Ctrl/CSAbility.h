#pragma once
#include "Ability.h"

class CCSAbility : public CAbility
{
public:
	CCSAbility() = default;
	CCSAbility(double dblLearn);
	~CCSAbility();
	VOID AddToTotalAbilityPt() override;
	
private:
	double SingleTypeOfPplsPt(BASETYPE basetypo, ADDTIONALTYPE additionaltypo);
	VOID InitBasicPtOfCS();
	VOID GetBasicPoints(MANTYPE typo);
private:
	UINT m_uiAlgorithmProgramAbility; // data structure and algorithm
	UINT m_uiTheoryAbility;
	UINT m_uiReversingAbility;
	UINT m_uiKernelProgramAbility; // Windows specially
	UINT m_uiKernelKnowledge; // ReactOS and Linux distributions
	unsigned long m_ulTotalCSPt;
	MANTYPE m_Typo;
};

