#include "UseThreads.h"

BOOL CreateThreadOfCalcDay(const shared_ptr<CDayCalc> objOfDayCalc) {
	HANDLE hDayCalc = NULL;
	DWORD dwDayCalc = 0;

	hDayCalc = CreateThread(NULL, 0, ThreadDayCalcProc, &(*objOfDayCalc), 0, &dwDayCalc);
	if (NULL != hDayCalc) {
		objOfDayCalc->SetDayCalcThreadHandle(hDayCalc);
		objOfDayCalc->SetDayCalcThreadId(dwDayCalc);
		return(TRUE);
	}
	
	return(FALSE);
}