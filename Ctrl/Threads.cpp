#include "Threads.h"

// The thread function of calculate time
DWORD WINAPI ThreadDayCalcProc(
	_In_ LPVOID lpParameter
) {
	CDayCalc *pCDayCalc = (CDayCalc *)lpParameter;
	while (TRUE) {
		pCDayCalc->PrintTime(100, 15);
		Sleep(1000);
		system("cls");
	}
	CloseHandle(pCDayCalc->GetDayCalcThreadHandle());
	pCDayCalc->SetDayCalcThreadHandle(NULL);
	pCDayCalc->SetDayCalcThreadId(NULL);

	ExitThread(0);

	return(0);
}