#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <cctype>
#include <ctime>
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



typedef UINT MANTYPE;
#define WORKINGHARDTYPE 0
#define SMARTTYPE 1
#define NORMALTYPE 2
#define LAZYTYPE 3
#define IDIOTTYPE 4
#define GODTYPE 5

typedef UINT BASETYPE;
#define BASEPTOFIDIOT ((rand() % 51) + 20)
#define BASEPTOFLAZY ((rand() % 60) + 22)
#define BASEPTOFNORMAL ((rand() % 69) + 24)
#define BASEPTOFHARD ((rand() % 88) + 30)
#define BASEPTOFSMART ((rand() % 95) + 44)
#define BASEPTOFGOD ((rand() % 120) + 52)

typedef INT ADDTIONALTYPE;
#define ADDTIONALOFIDIOT (rand() % 26 - 20) // [-20, 5)
#define ADDTIONALOFLAZY (rand() % 26 - 20) // [-15, 8)
#define ADDTIONALOFNORMAL (rand() % 26 - 20) // [-5, 12)
#define ADDTIONALOFHARD (rand() % 26 - 20) // [-2, 22)
#define ADDTIONALOFSMART (rand() % 26 - 20) // [0, 50)
#define ADDTIONALOFGOD  (rand() % 26 - 20) // [20, 80)


// public functions
char *NumberToString(int iNum);
