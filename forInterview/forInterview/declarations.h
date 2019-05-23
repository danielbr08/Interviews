#pragma once
#ifndef DECLARATIONS_H
#define DECLARATIONS_H
#include<iostream>
using namespace std;

class Base {
public:
	Base();
	~Base();
	void print();
private:
	int* a;
};

class Derived : public Base {
public:
	Derived();
	~Derived();
	void print();
};

class Singleton
{
private:
	static Singleton* instance;
	Singleton();
public:
	static int counter;
	static Singleton* getInstance();
};

int countOnes(int);
int countBitsOnRange(int, int);
int isSmaller(int, int);
void joinSortedArrays(int*, int*, int, int);
void findLongestSequence(int[], int);
int mult7WithotMultOrAdd(int);
char* replaceStr(char*, int);
void swap(int&, int&);

#endif
