#pragma once
#include "g_attr.h"

using namespace std;

class Human {
public:
	Human();
	Human(string strName, unsigned short usAge, unsigned short usTotalPoints);
	~Human();
private:
	string m_strName; // ����
	USHORT m_usRank; // ����
	unsigned short m_usAge; // ����
	unsigned long m_ulTotalPoints; // �ۺ�ʵ��
};