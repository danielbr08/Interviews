#include <iostream>
//#include "mult7WithoutMultOrAdd.cpp"
//#include "longestSequence.cpp"
using namespace std;

void findLongestSequence(int arr[], int length)
{
	int index1 = 0, index2 = 0, sequenceSize1 = 1, sequenceSize2 = 1;

	for (int i = 0; i<length - 1; i++)
	{
		// sequence condition true
		if (arr[i] == arr[i + 1] - 1)
			sequenceSize1++;
		// sequence broke or condition false
		else
		{
			//sequence broke
			if (sequenceSize1 > sequenceSize2)
			{
				index2 = index1;
				sequenceSize2 = sequenceSize1;
			}
			// sequence broke or condition false
			index1 = i + 1;
			sequenceSize1 = 1;
		}
	}
	while(sequenceSize2--)
		cout << arr[index2++] << " , ";
	cout << endl;
}

void main()
{
	int arr[10] = {1,2,3,5,6,7,8,11,3,4};
	findLongestSequence(arr, 10);
	//cout << mult7WithotMultOrAdd(5) << endl;
	system("pause");
}