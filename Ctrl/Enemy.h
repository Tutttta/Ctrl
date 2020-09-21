#pragma once
#include "g_attr.h"
#include "CSAbility.h"

class CEnemy : public Human
{
public:
	CEnemy() : pCSAbility(make_shared<CCSAbility>()) {
		
	}
	~CEnemy();


private:
	shared_ptr<CCSAbility> pCSAbility;
};

