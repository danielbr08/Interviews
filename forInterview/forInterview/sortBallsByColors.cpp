#pragma once
#ifndef SORT_BALLS_BY_COLORS
#define SORT_BALLS_BY_COLORS
#include <iostream>
#include "declarations.h";

void sorBallsByColors(COLORS arr [], int size) {
	// Locate all the red balls in the left side of array
	int lIndex = 0;
	int rIndex = size - 1;
	while (lIndex < rIndex) {
		while (arr[lIndex] == (COLORS)RED) {
			lIndex++;
		}
		while (arr[lIndex] != (COLORS)RED) {
			rIndex--;
		}
		if (lIndex < rIndex) {
			swap(arr[lIndex], arr[rIndex]);
		}
	}

	// Locate all the green balls in the right side of array
	rIndex = size - 1;
	while (lIndex < rIndex) {
		while (arr[lIndex] == (COLORS)YELLOW) {
			lIndex++;
		}
		while (arr[lIndex] != (COLORS)GREEN) {
			rIndex--;
		}
		if (lIndex < rIndex) {
			swap(arr[lIndex], arr[rIndex]);
		}
	}
	cout << "FINISH" << endl;
}


void swap(COLORS &a, COLORS &b) {
	COLORS temp = a;
	a = b;
	b = temp;
}

#endif