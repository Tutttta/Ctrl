#include "g_attr.h"

// public functions
char *NumberToString(int iNum) {
	BOOL fNegtive = FALSE;
	int iCnt = 0, iTmp = 0;
	char *pTimeStr = NULL;

	// check if integer is negative or positive
	if (iNum < 0) {
		iNum = -iNum;
		fNegtive = TRUE;
	}
	// check the length of integer
	CStack<int> CCStack;
	while (iNum > 0) {
		iCnt++;
		if (!(isdigit((iNum % 10) + '0')))
			return(NULL);
		CCStack.PushStack(iNum % 10);
		iNum /= 10;
	}
	// allocate suitable heap space
	pTimeStr = new char[iCnt + 1];
	ZeroMemory(pTimeStr, iCnt + 1);
	// if negative, add minus to string 
	iCnt ^= iCnt;
	if (fNegtive) {		
		pTimeStr[iCnt++] = '-';
	}
	while (!CCStack.IsEmpty())
		pTimeStr[iCnt++] = (CCStack.PopStack() + '0');
	pTimeStr[iCnt] = '\0';

	return(pTimeStr);
}

VOID PrintStr(string strToShow, UINT uiX, UINT uiY)
{
	HANDLE hConsole = NULL;
	COORD pos = {uiX, uiY};

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsole, pos);
	cout << strToShow;

	return;
}
