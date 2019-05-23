#pragma once
#ifndef REVERSE_STR_H
#define REVERSE_STR_H
#include <iostream>
#include "declarations.h";
using namespace std;

char* replaceStr(char* str, int size) {
	char* newStr = new char(size);
	char* temp = newStr;
	while (size && *(str + --size)) {
		if (*(str + size) != ' ')
			*(newStr++) = *(str + size);
	}
	*newStr = '\0';
	return temp;
}
#endif