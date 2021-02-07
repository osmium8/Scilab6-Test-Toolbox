/*This c program returns transpose of a given matrix*/

#include<stdio.h>
#include "trans.h"

void transpose(int n, int m, int A[][m]) 
{ 
    int B[n][m];
    
    int i, j; 
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            B[i][j] = A[j][i];
        }
    }
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            A[i][j] = B[i][j];
        }
    }
            
    return;
} 

