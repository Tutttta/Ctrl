#pragma once
#include "g_attr.h"

// Double circular linked list

template <typename T>
struct LinkList;

template <typename T>
struct LinkList {
	T *pInfo;
	struct LinkList *next;
	struct LinkList *prev;
};


template <class T>
class CLinkList
{
public:
	CLinkList();
	~CLinkList();
	BOOL AddToList(T _Info, UINT uiPos);
	BOOL DelFromList(T *_InfoDelFromList, UINT uiPos);
	VOID TraverseList();
private:
	LinkList<T> **ppHeadPtr;
};

template <typename T>
CLinkList<T>::CLinkList() {
	ppHeadPtr = new (LinkList<T> *);
	LinkList<T> *pFirstNode = new LinkList<T>;

	pFirstNode->next = pFirstNode;
	pFirstNode->prev = pFirstNode;
	pFirstNode->pInfo = NULL;

	*ppHeadPtr = pFirstNode;
}

template <typename T>
BOOL CLinkList<T>::AddToList(T _Info, UINT uiPos) {
	int j = 0;
	LinkList<T> *pCurNode = *ppHeadPtr;
	LinkList<T> *pNewNode = new LinkList<T>;

	pNewNode->pInfo = new T;
	*(pNewNode->pInfo) = _Info;

	while (pCurNode->next && j < uiPos) {
		pCurNode = pCurNode->next;
		j++;
	}
	if (j > uiPos || !(pCurNode->next))
		return(FALSE);
	pCurNode->next->prev = pNewNode;
	pNewNode->next = pCurNode->next;
	pCurNode->next = pNewNode;
	pNewNode->prev = pCurNode;

	return(TRUE);
}

template <typename T>
VOID CLinkList<T>::TraverseList() {
	LinkList<T> *pCurNode = (*ppHeadPtr)->next;

	while (NULL != pCurNode) {
		cout << pCurNode->pInfo << endl;
		pCurNode = pCurNode->next;
	}

	return;
}

template <typename T>
BOOL CLinkList<T>::DelFromList(T *_InfoDelFromList, UINT uiPos) {

}


template <typename T>
CLinkList<T>::~CLinkList() {

}

