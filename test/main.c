#include<stdio.h>
#include "trans.h"

int main(void)
{
	int array[][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
	int m = 3, n = 3; 
	
	printf("Inside main \n");
	
	printf("Input Array \n");
	int i, j;
    	for (i = 0; i < n; i++) {
      	    for (j = 0; j < m; j++)  {
        	printf("%d ", array[i][j]);
            }
            printf("\n");
        }
        
        printf("calling transpose() ...\n");
        transpose(n, m, array);
        for (i = 0; i < n; i++) {
      	    for (j = 0; j < m; j++)  {
        	printf("%d ", array[i][j]);
            }
            printf("\n");
        }
  	return 0;
}

