#include <iostream>
#include "g_attr.h"
#include "UseThreads.h"
#include "DayCalc.h"
#include "NetStatus.h"

using namespace std;

int main() {
	shared_ptr<CDayCalc> objDayCalc = make_shared<CDayCalc>();


	CreateThreadOfCalcDay(objDayCalc);
	
	system("pause");

	return(0);
}