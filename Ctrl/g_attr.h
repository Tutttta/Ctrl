#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <cctype>
#include <initializer_list>

#include "Stack.hpp"

using namespace std;


static unsigned long m_ulAbililtyTotalPt;

// macro place
#define DATELEN 36
#define GIRLAMOUNT 5000

// public functions
char *NumberToString(int iNum);
VOID PrintStr(string strToShow, UINT uiX, UINT uiY);