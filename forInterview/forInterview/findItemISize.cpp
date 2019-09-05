#pragma once
#ifndef FIND_ITEM_SIZE_H
#define FIND_ITEM_SIZE_H
#include <iostream>
#include "declarations.h";
#include <time.h>  

int findItemISize(int arr[], int start, int end, int sizeIndex) {
	if (start == end) {
		return arr[start];
	}
	srand(time(NULL));
	int range = end - start + 1;
	int randIndex = rand() % range + start;
	int pivot = arr[randIndex];

	int smallerPivotCounter = 0;
	int lIndex = start;
	int rIndex = end;

	while (lIndex < rIndex) {
		if (arr[lIndex] < pivot) {
			smallerPivotCounter++;
			lIndex++;
			continue;
		}
		else {
			while ( (arr[rIndex] >= pivot) && lIndex < rIndex) {
				rIndex--;
			}
			if (lIndex < rIndex) {
				swap(arr[lIndex], arr[rIndex]);
				rIndex--;
				smallerPivotCounter++;
				lIndex++;
			}
		}
	}
	if (sizeIndex <= smallerPivotCounter) {
		return findItemISize(arr, start, start + smallerPivotCounter-1, sizeIndex);
	}
	else {
		return findItemISize(arr, start + smallerPivotCounter, end, sizeIndex - smallerPivotCounter);
	}
}

//void swap(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
#endif
