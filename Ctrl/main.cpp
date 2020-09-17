#include <iostream>
#include "g_attr.h"
#include "UseThreads.h"
#include "DayCalc.h"
#include "NetStatus.h"
#include "IO.h"
#include "UI.h"

using namespace std;

int main() {
	shared_ptr<CDayCalc> objDayCalc = make_shared<CDayCalc>();
	CUI uio;
	
	CreateThreadOfCalcDay(objDayCalc);
	uio.MainMenu();

	system("pause");

	return(0);
}