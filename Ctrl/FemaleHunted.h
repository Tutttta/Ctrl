#pragma once
#include "g_attr.h"
#include "CCharactor.h"

class CFemaleHunted
{
public:
	CFemaleHunted();
	CFemaleHunted(UINT iHuntedNum);
	~CFemaleHunted();


private:
	UINT m_uiHunted; // girls' number
	UINT m_uiTime; // minutes as unit 
	BOOL m_bFilmed; // is the process filmed
	BOOL m_bDocumented; // is the process documented
};

class CFemaleInfo {
public:
	CFemaleInfo();
	CFemaleInfo(double dblHeight, double dblKilo, USHORT usAge, string strName, string strPhoneNumber,
		string strQQNum, string strWechatNum, string strIdentity, string strAddr, string strComment, string usPoints, BOOL fVirgin);


private:
	double m_dblHeight;
	double m_dblKilograms;
	USHORT m_usAge;
	string m_strName;
	string m_strPhoneNumber;
	string m_strQQNum;
	string m_strWechatID;
	string m_strIdentity;
	string m_strAddress;
	string m_strComment;
	USHORT m_usPoints;
	BOOL m_fVirgin;
};
