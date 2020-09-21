#pragma once
#include "CCharactor.h"
#include "g_attr.h"

class CAbility
{
public:
	CAbility() = default;
	CAbility(double dblLearn) : m_dblLearningability(dblLearn) {

	}
	~CAbility();
	virtual VOID AddToTotalAbilityPt() = 0;
protected:
	double m_dblLearningability; // 学习能力比例基数
};

