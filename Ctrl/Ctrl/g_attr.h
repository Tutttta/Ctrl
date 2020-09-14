#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <cctype>

#include "Stack.hpp"

using namespace std;

// macro place
#define DATELEN 36

// public functions
char *NumberToString(int iNum);