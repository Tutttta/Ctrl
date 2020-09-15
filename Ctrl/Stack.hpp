#pragma once
#include "g_attr.h"

#define DEFLEN 20
#define INCRELEN 15

template<class T>
class CStack
{
public:
	CStack();
	CStack(UINT uiLen);
	~CStack();

	BOOL PushStack(const T &varT);
	T PopStack();
	UINT LenStack();
	BOOL IsEmpty();
	T GetTop();
private:
	T *m_tplArr;
	UINT m_uiCapacity;
	UINT m_uiLen;
};

template<typename T>
CStack<T>::CStack() : m_tplArr(new T[DEFLEN]), m_uiCapacity(DEFLEN), m_uiLen(0)
{
	ZeroMemory(m_tplArr, sizeof(T) * DEFLEN);
}

template<typename T>
CStack<T>::CStack(UINT uiDefLen) {
	if (uiDefLen > 0) {
		m_uiCapacity = uiDefLen;
		m_uiLen = 0;
		m_tplArr = new T[uiDefLen];
		ZeroMemory(m_tplArr, sizeof(T) * m_uiCapacity);
	}
	else
		m_tplArr = NULL;
}

template<typename T>
CStack<T>::~CStack()
{
	if (m_tplArr) {
		delete[] m_tplArr;
		m_tplArr = NULL;
	}
}

template<typename T>
BOOL CStack<T>::PushStack(const T &varT) {
	if (m_uiLen >= m_uiCapacity) {
		T *pTmpArrToSaveData = new T[m_uiLen];
		for (int i = 0; i < m_uiLen; ++i)
			pTmpArrToSaveData[i] = m_tplArr[i];
		delete[] m_tplArr;
		m_tplArr = NULL;
		m_uiCapacity += INCRELEN;
		m_tplArr = new T[m_uiCapacity];
		for (int i = 0; i < m_uiLen; ++i)
			m_tplArr[i] = pTmpArrToSaveData[i];
	}
	m_tplArr[m_uiLen++] = varT;

	return(TRUE);
}

template<typename T>
T CStack<T>::PopStack() {
	if (IsEmpty())
		return(NULL);
	return(m_tplArr[--m_uiLen]);
}


template<typename T>
UINT CStack<T>::LenStack() {
	return(m_uiLen);
}

template<typename T>
BOOL CStack<T>::IsEmpty() {
	return(!m_uiLen ? TRUE : FALSE);
}

template<typename T>
T CStack<T>::GetTop() {
	if (!IsEmpty())
		return(m_tplArr[m_uiLen - 1]);
	else
		return(NULL);
}