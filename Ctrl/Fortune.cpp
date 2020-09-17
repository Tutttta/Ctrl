#include "Fortune.h"

CFortune::~CFortune()
{
}

VOID CFortune::AddToTotalAbilityPt()
{
	m_ulAbililtyTotalPt += CalcTotalFortunePt();
}

UINT CFortune::CalcTotalFortunePt()
{
	UINT uiBasicPt = 0;
	if (m_ulCurrentIncome < INCOMELEVEL1) 
		uiBasicPt = 50 + m_ulCurrentIncome / 100 * 0.1;
	else if (m_ulCurrentIncome < INCOMELEVEL2) 
		uiBasicPt = 75 + m_ulCurrentIncome / 100 * 0.2;
	else if (m_ulCurrentIncome < INCOMELEVEL3) 
		uiBasicPt = 115 + m_ulCurrentIncome / 100 * 0.3;
	else if (m_ulCurrentIncome < INCOMELEVEL4) 
		uiBasicPt = 144 + m_ulCurrentIncome / 100 * 0.5;
	else 
		uiBasicPt = 200 + m_ulCurrentIncome / 100 * 0.7;
	return(uiBasicPt);
}
