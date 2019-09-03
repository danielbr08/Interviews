// ORBOTECH
//#include <iostream>
//using namespace std;
//
//int max(int x, int y) {
//	return x > y ? x : y;
//}
//int min(int x, int y) {
//	return x <= y ? x : y;
//}
//
//int getMax2Rec(int arr[], int n, int max1, int max2) {
//	if (arr[n - 1] > max1) {
//		max2 = max1;
//		max1 = arr[n - 1];
//	}
//	else if (arr[n - 1] > max2) {
//		max2 = arr[n - 1];
//	}
//	if (n == 0) {
//		return max2;
//	}
//	return getMax2Rec(arr, n - 1, max1, max2);
//}
//
//int getMax2(int arr[], int n) {
//	if (n < 2) {
//		cout << "Wrong input!" << endl;
//	}
//	int max1 = max(arr[n - 2], arr[n - 1]);
//	int max2 = min(arr[n - 2], arr[n - 1]);
//	return getMax2Rec(arr, n, max1, max2);
//}
//
//int main() {
//	int arr[] = { 2,7,100,876,40 };
//	cout << getMax2(arr, 6) << endl;
//	system("pause");
//	return 1;
//}