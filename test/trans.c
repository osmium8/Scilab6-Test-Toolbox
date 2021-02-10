/*
* Returns transpose of a given matrix
* 
* @paramters
* 
* rows = number of rows
* columns = number of columns
* matrix = input matrix (2D array, rows * columns)
* t_matrix = output matrix (2D array, columns * rows), transpose of matrix
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
		}
    }
              
    return;
} 
