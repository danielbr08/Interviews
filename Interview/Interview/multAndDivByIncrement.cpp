// Example program
#include <iostream>
#include "functions.h"
#include <string>
using namespace std;

int mult(int a, int b)
{
	int sum = 0;
	for (int i = 0; i<a; i++)
		for (int j = 0; j<b; j++)
			sum++;
	return sum;
}

int _div(int a, int b) // a = 6, b = 3
{
	int counter = 0;
	int _b = 0;
	for(int i = 0; i<a; i++)
	{
		_b++;
		if(_b == b)
		{
			counter++;
			_b = 0;
		}
	}
	if(_b !=0 )
		std::cout << "mod: " << _b << "\n";
	return counter;
}

//int main()
//{
//	cout << mult(2, 3) << endl;
//	cout << _div(6, 3) << endl;
//	system("pause");
//}