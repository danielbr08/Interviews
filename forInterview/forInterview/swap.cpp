#pragma once
#ifndef DESTRUCTOR_H
#define DESTRUCTOR_H
#include "iostream";
#include "declarations.h";
using namespace std;

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}
#endif
