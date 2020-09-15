#pragma once
#include "CCharactor.h"
#include "g_attr.h"

class CCBodyStatus : public Human
{
public:
	CCBodyStatus();
	~CCBodyStatus();
private:
	unsigned short m_usWaterDrink; // At least 8 cup of waters is standard request
	unsigned long m_usBodyStatusPt;
	
	double m_stDate;
};

