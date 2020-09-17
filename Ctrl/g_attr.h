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

#define INCOMELEVEL1 20000
#define INCOMELEVEL2 30000
#define INCOMELEVEL3 40000
#define INCOMELEVEL4 50000
#define INCOMELEVEL5 60000

// public functions
char *NumberToString(int iNum);
