// ORBOTECH
//#include <iostream>
//using namespace std;
//
//int getStartEven(int arr[],int startIndex, int endIndex) {
//	if (startIndex == endIndex -1) {
//		return arr[endIndex];
//	}
//	int middleIndex = startIndex + (endIndex - startIndex) / 2;
//	if (arr[middleIndex]%2 !=0 ) {
//		startIndex = (startIndex + endIndex)/ 2;
//	}	
//	else {
//		endIndex = endIndex / 2;
//	}
//	return getStartEven(arr, startIndex, endIndex);
//}
//
//int main() {
//	int arr[] = { 3,9,7,5,4,2,100,10,18, 20};
//	cout << getStartEven(arr, 0, 9) << endl;
//	system("pause");
//	return 1;
//}