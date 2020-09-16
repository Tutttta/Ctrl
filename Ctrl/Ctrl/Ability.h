#pragma once
#include "CCharactor.h"
#include "g_attr.h"
class CAbility : public Human
{
public:
	CAbility();
	~CAbility();
	virtual VOID AddToTotalAbilityPt() = 0;
protected:
	static unsigned long m_ulAbililtyTotalPt;
};

