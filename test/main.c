#include<stdio.h>
#include <stdlib.h>
#include "trans.h"

int main(void)
{
	printf("Inside main \n\n");
	
	int i, j;
    int rows = 4;
    int columns = 3;
    
    double **matrix = (double **) malloc(rows * sizeof(double *));
    double **t_matrix = (double **) malloc(columns * sizeof(double *));
    
	for (int i = 0; i < rows; i++) {
	    matrix[i] = (double *) malloc(columns * sizeof(double));
	}
	for (int i = 0; i < columns; i++) {
	    t_matrix[i] = (double *) malloc(rows * sizeof(double));
	}
		
	for (i = 0; i < rows; i++) {
		for (j = 0; j < columns; j++)  {
		    //((matrix+i*m) + j)
		    matrix[i][j] = i;
	    }
	}
		
	printf("\n Input matrix \n");
	for (i = 0; i < rows; i++) {
		for (j = 0; j < columns; j++)  {
			printf("%0.1f ", matrix[i][j]);
		}
	    printf("\n");
	}
		
	printf("\n Calling trans() ... \n\n");
	trans(rows, columns, matrix, t_matrix);
		
	printf("\n Output matrix \n");
	for (i = 0; i < columns; i++) {
		for (j = 0; j < rows; j++)  {
		    printf("%0.1f ",t_matrix[i][j]);
		}
		printf("\n");
	}
		
	return 0;
}

