#pragma once
#ifndef JOIN_SORTED_ARRAY_H
#define JOIN_SORTED_ARRAY_H
#include <iostream>
#include "declarations.h";
using namespace std;

int isSmaller(int a, int b) {
	return a < b;
}

void joinSortedArrays(int* arr1, int* arr2, int arr1Size, int arr2Size) {
	int i = 0, j = 0, z = 0;
	int* arr3 = new int[arr1Size];
	int* arr4 = new int[arr2Size];
	int* temp = arr3;

	while (i < arr1Size || j < arr2Size) {
		if (z == arr1Size) {
			z = 0;
			temp = arr4;
		}
		if (i < arr1Size && isSmaller(arr1[i], arr2[j])) {
			temp[z++] = arr1[i];
			i++;
		}
		else if (j < arr2Size) {
			temp[z++] = arr2[j];
			j++;
		}

	}
	for (int i = 0; i < arr1Size; i++)
	{
		cout << arr3[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < arr2Size; i++)
	{
		cout << arr4[i] << ' ';
	}
	delete arr3;
	delete arr4;
}
#endif
