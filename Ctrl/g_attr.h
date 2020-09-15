#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <tchar.h>
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <cctype>

#include "Stack.hpp"
//#include "LinkList.hpp"

using namespace std;

// macro place
#define DATELEN 36
#define GIRLSTANDARD 5000

// public functions
char *NumberToString(int iNum);