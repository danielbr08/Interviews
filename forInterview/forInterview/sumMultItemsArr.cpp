#pragma once
#ifndef DESTRUCTOR_H
#define DESTRUCTOR_H
#include <iostream>
#include "declarations.h";

using namespace std;

int sumMultArr(int* arr, int size) {
	int exceptIndex = size-1;
	int sum = 0;
	int mult = 1;

	while (exceptIndex>=0) {
		for (int i = 0; i < size; i++) {
			if(i != exceptIndex)
				mult *= arr[i];
		}
		sum += mult;
		mult = 1;
		exceptIndex--;
	}
	return sum;
}
#endif