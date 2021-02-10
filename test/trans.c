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
#include <stdlib.h>

void trans(int rows, int columns, double **matrix, double **t_matrix)
{     
    int i, j; 
    for (i = 0; i < columns; i++) {
		for (j = 0; j < rows; j++)  {
			t_matrix[i][j] = matrix[j][i];
			//printf("%f ",t_matrix[i][j]);
			//printf("%f ",matrix[j][i]);
		}
    }
              
    return;
} 

