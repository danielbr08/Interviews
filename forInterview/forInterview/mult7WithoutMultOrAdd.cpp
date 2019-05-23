#pragma once
#ifndef MULT7_WITHOUT_MULT_OR_ADD_H
#define MULT7_WITHOUT_MULT_OR_ADD_H
#include <iostream>
#include "declarations.h";
using namespace std;

int mult7WithotMultOrAdd(int number)
{
	int _number = 0;
	for (int i = 7; i > 0; i--)
		_number = _number - number;
	return 0 - _number;
}
#endif