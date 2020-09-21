#include <iostream>
#include "g_attr.h"
#include "UseThreads.h"
#include "DayCalc.h"
#include "NetStatus.h"
#include "IO.h"
#include "UI.h"

using namespace std;

// 1/1000 godlike
// 3/1000 idiot
// 10/1000 smart
// 10/1000 hardworking
// others normal

double GetStudyAbility() {
	const UINT uiAll = 1000;

	UINT uiPossibility = rand() % uiAll + 1; // [1, 1000]
	if (1 == uiPossibility) { // godlike

	}
	else if (uiPossibility <= 4) { // idiot

	}
	else if (uiPossibility <= 14) { // smart

	}
	else if (uiPossibility <= 24) { // hardworking

	}
	else { // normal

	}

}

int main() {

	srand((unsigned)time(NULL));
	shared_ptr<CDayCalc> objDayCalc = make_shared<CDayCalc>();
	CUI uio;
	
	CreateThreadOfCalcDay(objDayCalc);
	uio.MainMenu();

	system("pause");

	return(0);
}