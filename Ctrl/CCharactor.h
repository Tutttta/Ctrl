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
	string m_strName; // 姓名
	unsigned short m_usAge; // 年龄
	unsigned long m_ulTotalPoints; // 综合实力
};