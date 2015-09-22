#include <math.h>
#ifndef _function
#define _funktion
void  matrixmult_transp(float **A,float **B,float **C,int m, int n, int k)  
{   
	for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    {
    	for(int r=0;r<n;r++)
    	C[j][i]+=A[i][r]*B[r][j];
    }
}
#endif
