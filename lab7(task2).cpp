#include <iostream>
using namespace std;
int main()
{
	int M,N,i,j,s=0;
	label1:
	cout<<"Vvedit kilkist' r'adkiv matrytsi A   = ";
	cin>>M;
	cout<<"Vvedit kilkist' stovbcziv matrytsi A = ";
	cin>>N;
	if (M<=0||N<=0){cout<<"Pomylka vhidnyh danych, vvedit shcze raz"<<endl;goto label1;}
	int A[M][N];
	cout<<"Vvedit matrytsu A :"<<endl;
	for(i=0;i<M;i++)
	{
			for(j=0;j<N;j++)
			{
				cout<<"A"<<i+1<<j+1<<"=";
				cin>>A[i][j];
			}

	}
	for (i=0;i<M;i++)
		for (j=0;j<N;j++)
			if (A[i][j]>10)s+=A[i][j];
	cout<<"Suma elementiv, bilshyh za 10 = "<<s<<endl;
	return 0;
}
