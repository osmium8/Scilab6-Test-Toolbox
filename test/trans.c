/*
* This c program returns transpose of a given matrix
* paramters
* n = number of rows
* m = number of columns
* A = 2D array, n*m
* B = 2D array, m*n
*/

#include<stdio.h>
#include "trans.h"

void transpose(int n, int m, int A[][m], int B[m][n]) 
{     
    int i, j; 
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            B[i][j] = A[j][i];
        }
    }
              
    return;
} 

