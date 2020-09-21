#include "CSAbility.h"



CCSAbility::~CCSAbility()
{
}

CCSAbility::CCSAbility(double dblLearn) : CAbility(dblLearn) {
	InitBasicPtOfCS();
}

VOID CCSAbility::AddToTotalAbilityPt()
{
	m_ulAbililtyTotalPt += m_ulTotalCSPt;
}

double CCSAbility::SingleTypeOfPplsPt(BASETYPE basetypo, ADDTIONALTYPE additionaltypo)
{
	m_uiAlgorithmProgramAbility = basetypo * m_dblLearningability + additionaltypo;
	m_uiTheoryAbility = basetypo * m_dblLearningability + additionaltypo;
	m_uiReversingAbility = basetypo * m_dblLearningability + additionaltypo;
	m_uiKernelProgramAbility = basetypo * m_dblLearningability + additionaltypo;
	m_uiKernelKnowledge = basetypo * m_dblLearningability + additionaltypo;
}


VOID CCSAbility::GetBasicPoints(MANTYPE typo) {
	switch (typo) {
	case WORKINGHARDTYPE:
		SingleTypeOfPplsPt(BASEPTOFHARD, ADDTIONALOFHARD);
		break;
	case SMARTTYPE:
		SingleTypeOfPplsPt(BASEPTOFSMART, ADDTIONALOFSMART);
		break;
	case NORMALTYPE:
		SingleTypeOfPplsPt(BASEPTOFNORMAL, ADDTIONALOFNORMAL);
		break;
	case LAZYTYPE:
		SingleTypeOfPplsPt(BASEPTOFLAZY, ADDTIONALOFLAZY);
		break;
	case IDIOTTYPE:
		SingleTypeOfPplsPt(BASEPTOFIDIOT, ADDTIONALOFIDIOT);
		break;
	case GODTYPE:
		SingleTypeOfPplsPt(BASEPTOFGOD, ADDTIONALOFGOD);
		break;
	default:
		break;
	}
}

/*
#define WORKINGHARDTYPE 0
#define SMARTTYPE 1
#define NORMALTYPE 2
#define LAZYTYPE 3
#define IDIOTTYPE 4
#define GODTYPE 5
*/

VOID CCSAbility::InitBasicPtOfCS()
{	// This algorithm is basic points plus learning ability, at last sub additional points
	if (m_dblLearningability < 0.5001) { // low intelligence    
		m_Typo = IDIOTTYPE;
		GetBasicPoints(m_Typo);
	}
	else if (m_dblLearningability < 0.5201) { // normal intelligence [0.5001, 0.5201)
		UINT uiType = rand() % 5; // There are 4/5 possibility to be normal type ppl and 1/5 to be lazy one
		if (uiType <= 3) 
			m_Typo = NORMALTYPE;
		else
			m_Typo = LAZYTYPE;
		GetBasicPoints(m_Typo);
	}
	else if (m_dblLearningability < 0.5501) { // smart intelligence [0.5201, 0.5501)
		m_Typo = SMARTTYPE;
		GetBasicPoints(m_Typo);
	}
	else { // super smart -_-! [0.5501, oo)
		m_Typo = GODTYPE;
		GetBasicPoints(m_Typo);
	}
}
