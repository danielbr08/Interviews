//#include <iostream>
////#include "mult7WithoutMultOrAdd.cpp"
////#include "longestSequence.cpp"
#include "singelton.cpp" 
//
//using namespace std;

#include "iostream";
using namespace std;

//class Singeleton
//{
//private:
//	/* Here will be the instance stored. */
//	static Singeleton* instance;
//
//	/* Private constructor to prevent instancing. */
//	Singeleton();
//
//public:
//	static int counter;
//	/* Static access method. */
//	static Singeleton* getInstance();
//};
//
///* Null, because instance will be initialized on demand. */
//Singeleton* Singeleton::instance = 0;
////int Singeleton::counter = 0;
//
//Singeleton* Singeleton::getInstance()
//{
//	if (instance == 0)
//	{
//		instance = new Singeleton();
//	}
//	counter++;
//
//	return instance;
//}
//
//Singeleton::Singeleton()
//{
//	counter = 0;
//}


//void findLongestSequence(int arr[], int length)
//{
//	int index1 = 0, index2 = 0, sequenceSize1 = 1, sequenceSize2 = 1;
//
//	for (int i = 0; i<length - 1; i++)
//	{
//		// sequence condition true
//		if (arr[i] == arr[i + 1] - 1)
//			sequenceSize1++;
//		// sequence broke or condition false
//		else
//		{
//			//sequence broke
//			if (sequenceSize1 > sequenceSize2)
//			{
//				index2 = index1;
//				sequenceSize2 = sequenceSize1;
//			}
//			// sequence broke or condition false
//			index1 = i + 1;
//			sequenceSize1 = 1;
//		}
//	}
//	while(sequenceSize2--)
//		cout << arr[index2++] << " , ";
//	cout << endl;
//}

int count_ones(int x){
	int i=0;
	while(x){
		i++;
		x&=x-1; // Compare(AND operand) bits of current number with previous number.
		//cout << x<<endl;
	}
	return i;
}

//char* replaceStr(char* str,int size) {
//	char* newStr = new char(size);
//	char* temp = newStr;
//	while (*str) {
//		if (*str != ' ')
//			*(newStr++) = *str;
//		str++;
//	}
//	*newStr = '\0';
//	return temp;
//}

char* replaceStr(char* str, int size) {
	char* newStr = new char(size);
	char* temp = newStr;
	while (size && *(str + --size)) {
		if (*(str + size) != ' ')
			*(newStr++) = *(str + size);
	}
	*newStr = '\0';
	return temp;
}

int isSmaller(int a, int b) {
	return a < b;
}

void joinSortedArrays(int* arr1, int* arr2, int arr1Size, int arr2Size) {
	int i=0, j=0,z=0;
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
		else if(j < arr2Size ) {
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

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int countBitsOnRange(int start, int end) {
	int bitCounter = 0;
	for (int i = start; i < end; i++)
		bitCounter += count_ones(i);
	return bitCounter;
}

class Base {
public:
	Base() { 
		cout << "Base created" << endl;
	}
	~Base() { 
		cout << "Base distructor"<<endl;
		delete a; 
	}
   virtual void print() {
		cout << "Base" << endl;
	}
private: 
	int* a;
};

class Derived : public Base {
public:
	Derived() {
		cout << "Derived created" << endl;
	}
	~Derived() {
		cout << "Derived distructor" << endl; 
	}
	void print() {
		cout << "Derived" << endl;
	}
};


void main()
{
	//int arr[10] = {1,2,3,5,6,7,8,11,3,4};
	//findLongestSequence(arr, 10);
	//cout << mult7WithotMultOrAdd(5) << endl;

	//Singeleton* singleton1 = Singeleton::getInstance();
	//Singeleton* singleton2 = Singeleton::getInstance(); cout << singleton1->counter;
	//Singeleton* singleton3 = Singeleton::getInstance(); cout << singleton2->counter;
	//Singeleton* singleton4 = Singeleton::getInstance(); cout << singleton3->counter;

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

	//cout<< replaceStr("abc def  ghi");
	//cout << replaceStr("abc def  ghi",12)<<endl;
	//int a[] = { 1,3,5,7,9 };
	//int b[] = { 2,4,6,8,10 };
	//joinSortedArrays(a,b,5,5);+

	Base* bp = new Derived();
	//Derived* bp = new Derived();
	bp->print();
	delete bp;

	system("pause");
}