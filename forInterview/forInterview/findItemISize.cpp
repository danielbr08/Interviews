#pragma once
#ifndef FIND_ITEM_SIZE_H
#define FIND_ITEM_SIZE_H
#include <iostream>
#include "declarations.h";
#include <time.h>  

int findItemISize(int arr[], int start, int end, int sizeIndex) {
	if (start == end) {
		return arr[0];
	}
	srand(time(NULL));
	int pivot = rand()%6;
	int* newArr= new int[end-start +1];
	int smallerPivotCounter = 0;
	int startBiggerPivotIndex = end+1;
	for (int i = start; i < end+1; i++) {
		if (arr[i] < pivot) {
			newArr[smallerPivotCounter] = arr[i];
			smallerPivotCounter++;
		}
		else {
			startBiggerPivotIndex--;
			newArr[startBiggerPivotIndex] = arr[i];
		}
	}
	if (sizeIndex <= smallerPivotCounter) {
		return findItemISize(newArr, 0, smallerPivotCounter-1, sizeIndex);
	}
	else {
		return findItemISize(newArr, startBiggerPivotIndex, end - start, sizeIndex - smallerPivotCounter);
	}
}
#endif
