#pragma once
#ifndef IS_SUM_9_EXISTS
#define IS_SUM_9_EXISTS
#include <iostream>
#include "declarations.h";
using namespace std;

bool isSum9Exists(int arr[], int n) {
	const int requestedSum = 9;
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if ( arr[i] + arr[j] == requestedSum){
				return true;
			}
		}
	}
	return false;
}

#endif
