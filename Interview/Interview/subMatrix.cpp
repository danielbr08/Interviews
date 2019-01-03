// Example program
#include <iostream>
#include "functions.h"
#include <string>
using namespace std;

//const int N = 4, M = 2;

bool isSubMatrixExists(int mat1[N][N], int mat2[M][M], int n, int m, int startIdxI, int startIdxJ)
{
	for (int i = startIdxI; i < startIdxI  + m; i++)
		for (int j = startIdxJ; j < startIdxJ + m; j++)
		{
			if (mat1[i][j] != mat2[i - startIdxI][j - startIdxJ])
			{
				cout << "i: " << " :" << i << " , " << "j: " << j << "\n";
				cout << "mat1[i][j]: " << mat1[i][j] << " , " << "mat2[i][j]: " << mat2[i - startIdxI][j - startIdxJ] << endl;
				return false;
			}
		}
	return true;
}

void printStartCommonPosition(int mat1[N][N], int mat2[M][M], int n, int m)// mat2 mXm sub of mat1 nXn
{
	int firstCube = mat2[0][0];
	for (int i = 0; i<n - m + 1; i++)
		for (int j = 0; j<n - m + 1; j++)
			if (firstCube == mat1[i][j])
				if (isSubMatrixExists(mat1, mat2, n, m, i, j))
					cout << "Start position: (" << i << "," << j << ")" << "\n";

}
//
//int main()
//{
//	int mat3[][2] = {  { 5,6 },{9,10} };
//	int mat1[][4] = { {5,6,3,4 },{ 9,10,1,2} ,{ 7,5,6,9},{8,9,10,3} };
//	printStartCommonPosition(mat1, mat3, 4, 2);
//	system("pause");
//}