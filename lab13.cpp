#include <iostream>
#include "funk.h"
using namespace std;



int main() {
	setlocale (LC_ALL,"");
	int m,n,k;
	cout<<"����i�� �i���i��� ����i� ������i � =";
	cin>>m;
	cout<<"����i�� �i���i��� ������i� ������i � i �i���i��� ����i� ������i B =";
	cin>>n;
	cout<<"����i�� �i���i��� ������i� ������i B =";
	cin>>k;

	float **A;
    A = new float *[m];
    for (int i =0; i<m ;i ++)
    A[i] = new float [n];
    float **B;
    B = new float *[n];
    for (int i =0; i<n; i ++)
    B[i] = new float [k];
    float **C;
    C = new float *[m];
    for (int i =0; i<m ;i ++)
    C[i] = new float [k];
   
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    {
    	cout<<"A["<<i<<"]["<<j<<"]=";
    	cin>>A[i][j];
    }
    for(int i=0;i<n;i++)
    for(int j=0;j<k;j++)
    {
    	cout<<"B["<<i<<"]["<<j<<"]=";
    	cin>>B[i][j];
    }
   matrixmult_transp(A,B,C,m,n,k);
    for(int i=0;i<m;i++){cout<<endl;cout<<endl;
   		for(int j=0;j<k;j++)
   			cout<<C[i][j]<<"  ";}
}
