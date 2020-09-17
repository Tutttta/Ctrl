#include "UI.h"

CUI::~CUI()
{
}

VOID CUI::PrintStr(string strToShow, UINT uiX, UINT uiY)
{
	HANDLE hConsole = NULL;
	COORD pos = { uiX, uiY };

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsole, pos);
	cout << strToShow;

	return;
}

HWND CUI::GetConsoleHwnd()
{
	const char *pTitle = "实力系统";
	SetConsoleTitle(pTitle);

	return(GetConsoleWindow());
}

VOID CUI::MainMenu()
{
	HWND hWnd = NULL;
	HDC hDc = NULL;
	LPCTSTR pTitle = "==============================实力系统==============================";
	LPCTSTR pOne = "1. 查看实力排行";
	LPCTSTR pTwo = "2. 查看身体";
	LPCTSTR pThree = "3. 查看财富";
	LPCTSTR pFour = "4. 捕猎女性数目";
	RECT rc;
	if ((hWnd = GetConsoleHwnd()) != NULL)
		hDc = GetDC(hWnd);
	SetBkMode(hDc, TRANSPARENT);
	
	while (1) {
		SetTextColor(hDc, RGB(255, 155, 155));
		
		GetClientRect(hWnd, &rc);
		
		TextOut(hDc, (rc.right - rc.left) / 3, 0, pTitle, strlen(pTitle));
		TextOut(hDc, 0, 30, pOne, strlen(pOne));
		TextOut(hDc, 0, 60, pTwo, strlen(pTwo));
		TextOut(hDc, 0, 90, pThree, strlen(pThree));
		TextOut(hDc, 0, 120, pFour, strlen(pFour));
		Sleep(100);
	}
	ReleaseDC(hWnd, hDc);

	return;
}
