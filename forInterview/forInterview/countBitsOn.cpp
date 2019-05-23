#include "iostream";
using namespace std;

int countOnes(int x) {
	int i = 0;
	while (x) {
		i++;
		x &= x - 1; // Compare(AND operand) bits of current number with previous number.
	  //cout << x<<endl;
	}
	return i;
}

int countBitsOnRange(int start, int end) {
	int bitCounter = 0;
	for (int i = start; i < end; i++)
		bitCounter += countOnes(i);
	return bitCounter;
}
