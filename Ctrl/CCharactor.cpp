#include "CCharactor.h"

Human::Human() : m_ulTotalPoints(0), m_strName(""), m_usAge(0)
{
	cout << "默认初始化..." << endl;
}

Human::Human(string strName, unsigned short usAge, unsigned short usTotalPoints) : m_strName(strName), 
	m_usAge(usAge), m_ulTotalPoints(usTotalPoints)
{
	cout << "初始化中..." << endl;
}

Human::~Human()
{

}
