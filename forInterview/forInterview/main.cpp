#pragma once

#include <iostream>
#include "declarations.h";
using namespace std;

void main()
{
	//int arr[10] = {1,2,3,5,6,7,8,11,3,4};
	//findLongestSequence(arr, 10);

	//cout << mult7WithotMultOrAdd(5) << endl;

	//Singleton* singleton1 = Singleton::getInstance(); cout << singleton1 << endl;
	//Singleton* singleton2 = Singleton::getInstance(); cout << singleton1 << endl;
	//Singleton* singleton3 = Singleton::getInstance(); cout << singleton2 << endl;
	//Singleton* singleton4 = Singleton::getInstance(); cout << singleton3 << endl;

	//std::cout << &singleton1 << singleton1->counter << std::endl;
	//std::cout << &singleton2 << singleton2->counter << std::endl;
	//std::cout << &singleton3 << singleton3->counter << std::endl;
	//std::cout << &singleton4 << singleton4->counter << std::endl;

	// bits
	//cout << count_ones(7);
	//cout << countBitsOnRange(0, 8);
	//cout << (2>>1)<<endl;// 1
	//cout << (2 << 1);// 4
	//cout << ~5+1;// -5 (+1 because of the first bit that determines the sign)

	//cout << replacestr("abc def  ghi");
	//cout << replaceStr("abc def  ghi",12)<<endl;

	//int a[] = { 1,3,5,7,9 };
	//int b[] = { 2,4,6,8,10 };
	//joinSortedArrays(a,b,5,5);

	//Base* bp = new Derived();
	////Derived* bp = new Derived();
	//bp->print();
	//delete bp;
	//int arr[] = { 1,2,3,4 };
	//cout << summultarr(arr,4)<<endl;

	//int* a = new int();
	//int* b = new int();
	//*a = 5;
	//*b = 3;
	//int a = 5;
	//int b = 3;

	//cout << "a:" << a << endl << "b:" << b << endl;
	//swap(a, b);
	//cout << "a:" << a << endl << "b:" << b << endl;

	int a[] = { 1,3,5,7,9, 4 };
	cout << isSum9Exists(a,6);

	system("pause");
}

