#pragma once
#include "g_attr.h"
#include <WinSock2.h>
#include <mysql.h>

#pragma comment(lib, "libmysql.lib")
#pragma comment(lib, "ws2_32.lib")

class CMysqlController
{
public:
	CMysqlController();
	~CMysqlController();
};

