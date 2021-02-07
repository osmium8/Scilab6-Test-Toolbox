/*
* This c program returns transpose of a given matrix
* paramters
* n = number of rows
* m = number of columns
* A = input matrix (2D array, n*m)
* B = output matrix (2D array, m*n) transpose of matrix A
*/

#include<stdio.h>
#include "trans.h"

void transpose(int n, int m, int A[n][m], int B[m][n]) 
{     
    int i, j; 
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            B[i][j] = A[j][i];
        }
    }
              
    return;
} 

