//#include <iostream>
//using namespace std;
//
//void findLongestSequence(int arr[],int length)
//{
//	int index1 = 0,index2 = 0, sequenceSize1 = 1, sequenceSize2 = 1;
//
//	for (int i=0;i<length-1; i++)
//	{
//		if (arr[i] == arr[i + 1] - 1)
//			sequenceSize1++;
//		else
//		{
//			if (sequenceSize1 <= sequenceSize2)
//			{
//				index1 = i + 1;
//				sequenceSize1 = 1;
//			}
//			index2 = index1;
//			sequenceSize2 = sequenceSize1;
//		}
//	}
//	for(int i=index2;i<sequenceSize2;i++)
//		cout << arr[i] << " , ";
//	cout<<endl;
//}