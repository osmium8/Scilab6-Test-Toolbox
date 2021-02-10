extern "C"
{
	#include<Scierror.h>
	#include<api_scilab.h>
	#include <stdio.h>
	#include "localization.h"
	#include "trans.h"
	

	static const char fname[] = "transpose";
	/* ==================================================================== */
	int sci_transpose(scilabEnv env, int nin, scilabVar* in, int nopt, scilabOpt* opt, int nout, scilabVar* out)
	{
	    int i = 0;
	    int rows = 0;
	    int columns = 0;
	    int size_matrix = 0;
	    double* in1 = NULL;
	    double* out1 = NULL;

	    /* --> a = transpose(arr[i,j])
	    /* check that we have only 2 input arguments */
	    /* check that we have only 1 output argument */
	    if (nin > 1)
	    {
		Scierror(77, _("%s: Wrong number of input argument(s): %d expected.\n"), fname, 2);
		return 1;
	    }

	    if (scilab_isDouble(env, in[0]) == 0 || scilab_isMatrix2d(env, in[0]) == 0 || scilab_isComplex(env, in[0]) == 1)
	    {
		Scierror(999, _("%s: Wrong type for input argument #%d: A scalar expected.\n"), fname, 1);
		return 1;
	    }

	    size_matrix = scilab_getDim2d(env, in[0], &rows, &columns); // save 0th arg's row & col -> rows & columns
	    scilab_getDoubleArray(env, in[0], &in1);
	    
	    //printf("\n TRACE : latest size_matrix = %d rows = %d columns = %d\n",size_matrix, rows, columns);
	    
	    /*
	    * declaration & allocating space
	    * matrix[][]
	    * t_matrix[][]
	    */
	    double **matrix = (double **) malloc(rows * sizeof(double *));
    	double **t_matrix = (double **) malloc(columns * sizeof(double *));
	    for (int i = 0; i < rows; i++) {
			matrix[i] = (double *) malloc(columns * sizeof(double));
	    }
	    for (int i = 0; i < columns; i++) {
			t_matrix[i] = (double *) malloc(rows * sizeof(double));
	    }
	    
	    /*
	    * initializing 		 : matrix[][]
	    * using input matrix : in1[]
	    */
	    int itr = 0;
	    for(int i = 0; i<columns; i++) {
	    	for(int j = 0; j<rows; j++) {	
	    		matrix[j][i] = in1[itr++];
	    	}
	    }
	    
	    /*  trace
			printf("\n printing matrix[][] \n");
			for(int i = 0; i<rows; i++) {
				for(int j = 0; j<columns; j++) {	
					printf("%f ",matrix[i][j]); //matrix[i/columns][i%columns]);// = in1[i];
				}
				printf("\n");
			}
	    */
	    
	    /*
	    * calling trans() function
	    */
	    trans(rows, columns, matrix, t_matrix);
	    
	    /*  trace 
			printf("\n printing t_matrix[][] \n");
			for(int i = 0; i<columns; i++) {
				for(int j = 0; j<rows; j++) {	
					printf("%f ",t_matrix[i][j]);
				}
				printf("\n");
			}
	    */
	    
	    out[0] = scilab_createDoubleMatrix2d(env, columns, rows, 0);
	    scilab_getDoubleArray(env, out[0], &out1);
	    
	    //printf("\ntrace flag%d\n");
	     
	    /* 
	    * out1[] -> 1D
	    * assinging result matrix : t_matrix
	    * to        output matrix : out1
	    */
	    itr = 0;
	    for(int i = 0; i<rows; i++) {
	    	for(int j = 0; j<columns; j++) {
	    		out1[itr++] = t_matrix[j][i];
	    	}
	    }
	    
	    return 0;
	}
}
/* ==================================================================== */
