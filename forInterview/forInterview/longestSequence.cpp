#pragma once
#ifndef LONGEST_SEQUENCE_H
#define LONGEST_SEQUENCE_H
#include <iostream>
#include "declarations.h";
using namespace std;

void findLongestSequence(int arr[],int length)
{
	int index1 = 0,index2 = 0, sequencesize1 = 1, sequencesize2 = 1;

	for (int i=0;i<length-1; i++)
	{
		if (arr[i] == arr[i + 1] - 1)
			sequencesize1++;
		else
		{
			if (sequencesize1 <= sequencesize2)
			{
				index1 = i + 1;
				sequencesize1 = 1;
			}
			index2 = index1;
			sequencesize2 = sequencesize1;
		}
	}
	for(int i=index2;i<sequencesize2;i++)
		cout << arr[i] << " , ";
	cout<<endl;
}
#endif