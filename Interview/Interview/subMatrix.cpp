// example program
#include <iostream>
#include "functions.h"
#include <string>
using namespace std;

//const int n = 4, m = 2;

bool issubmatrixexists(int mat1[n][n], int mat2[m][m], int n, int m, int startidxi, int startidxj)
{
	for (int i = startidxi; i < startidxi  + m; i++)
		for (int j = startidxj; j < startidxj + m; j++)
		{
			if (mat1[i][j] != mat2[i - startidxi][j - startidxj])
			{
				cout << "i: " << " :" << i << " , " << "j: " << j << "\n";
				cout << "mat1[i][j]: " << mat1[i][j] << " , " << "mat2[i][j]: " << mat2[i - startidxi][j - startidxj] << endl;
				return false;
			}
		}
	return true;
}

void printstartcommonposition(int mat1[n][n], int mat2[m][m], int n, int m)// mat2 mxm sub of mat1 nxn
{
	int firstcube = mat2[0][0];
	for (int i = 0; i<n - m + 1; i++)
		for (int j = 0; j<n - m + 1; j++)
			if (firstcube == mat1[i][j])
				if (issubmatrixexists(mat1, mat2, n, m, i, j))
					cout << "start position: (" << i << "," << j << ")" << "\n";

}
//
//int main()
//{
//	int mat3[][2] = {  { 5,6 },{9,10} };
//	int mat1[][4] = { {5,6,3,4 },{ 9,10,1,2} ,{ 7,5,6,9},{8,9,10,3} };
//	printstartcommonposition(mat1, mat3, 4, 2);
//	system("pause");
//}