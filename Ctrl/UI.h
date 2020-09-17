#pragma once
#include "g_attr.h"

class CUI
{
public:
	CUI() = default;
	~CUI();
	VOID MainMenu();
	VOID PrintStr(string strToShow, UINT uiX, UINT uiY);
	HWND GetConsoleHwnd();
};

