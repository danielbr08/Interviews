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

class Node {
	Node* right;
	Node* Left;
	int value;
};

enum COLORS
{
	GREEN,
	RED,
	YELLOW
};

int countOnes(int);
int countBitsOnRange(int, int);
int isSmaller(int, int);
void joinSortedArrays(int*, int*, int, int);
void findLongestSequence(int[], int);
int mult7WithotMultOrAdd(int);
char* replaceStr(char*, int);

void swap(int a, int b);
int sumMultArr(int* arr, int size);
bool isSum9Exists(int [],int);
int findItemISize(int[], int, int, int);
void sorBallsByColors(int[],int);

#endif
