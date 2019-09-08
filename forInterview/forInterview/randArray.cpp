#pragma once
#ifndef RAND_ARR_H
#define RAND_ARR_H
#include <iostream>
#include "declarations.h";

void randArray(int arr[], int size) {

	for (int i = 0; i < size; i++){
		int range = size - i;
		int randIndex = rand() % range + i;
		swap(arr[i], arr[randIndex]);
	}
	cout << "Finish" << endl;
}

#endif