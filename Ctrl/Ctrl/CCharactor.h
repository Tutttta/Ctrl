#pragma once
#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

class Human {
public:
	Human();
	Human(string strName, unsigned short usAge, unsigned short usTotalPoints);
	~Human();
private:
	string m_strName; // ����
	unsigned short m_usAge; // ����
	unsigned long m_ulTotalPoints; // �ۺ�ʵ��
};