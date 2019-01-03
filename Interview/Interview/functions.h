#pragma once
#ifndef FUNC_H
#define FUNC_H

const int N = 4, M = 2;

int mult(int a, int b);
int _div(int a, int b); // a = 6, b = 3

bool isSubMatrixExists(int mat1[N][N], int mat2[M][M], int n, int m, int startIdxI, int startIdxJ);
void printStartCommonPosition(int mat1[N][N], int mat2[M][M], int n, int m); // mat2 mXm sub of mat1 nXn

#endif
