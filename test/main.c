#include<stdio.h>
#include "trans.h"

int main(void)
{
	int array[2][3] = {{1, 1, 1},
                       {2, 2, 2}};
    
    	int transpose_array[3][2];
	int n = 2, m = 3;
	
	printf("Inside main \n\n");
	
	printf("Input matrix \n");
	int i, j;
    	for (i = 0; i < n; i++) {
      	    for (j = 0; j < m; j++)  {
        	printf("%d ", array[i][j]);
            }
            printf("\n");
        }
        
        printf("\ncalling transpose() ...\n\n");
	printf("Output matrix \n");
        transpose(n, m, array, transpose_array);
	
        for (i = 0; i < m; i++) {
      	    for (j = 0; j < n; j++)  {
        	printf("%d ", transpose_array[i][j]);
            }
            printf("\n");
        }
  	return 0;
}

