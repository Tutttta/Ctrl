#include <iostream>
#include "g_attr.h"
#include "DayCalc.h"
#include "NetStatus.h"
#include "LinkList.hpp"
#include <WinSock2.h>
#include <mysql.h>

using namespace std;

#pragma comment(lib, "libmysql.lib")
#pragma comment(lib, "ws2_32.lib")

MYSQL_RES *res = NULL;

MYSQL *mysql = new MYSQL;
MYSQL_FIELD *fd;
char field[32][32];

char query[150];

BOOL ConnectDatabase() {
	mysql_init(mysql);

	if (!(mysql_real_connect(mysql, "127.0.0.1", "root", "YangMing1995", "World", 3306, NULL, 0))) {
		cout << "Error conntecting to mysql: " << mysql_error(mysql) << endl;
		return(FALSE);
	}
	else {
		cout << "Connected..." << endl;
		return(TRUE);
	}
}

void FreeConnect() {
	mysql_free_result(res);
}

int main() {
	ConnectDatabase();

	system("pause");

	return(0);
}