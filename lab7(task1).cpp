#include <iostream>
using namespace std;
int main()
{
	int i=1,j=1,p,n=0;
	int a1,a2,x1;
	label1:
	cout<<"Vvedit kilkist' r'adkiv matrytsi A   = ";
	cin>>a1;
	cout<<"Vvedit kilkist' stovbcziv matrytsi A = ";
	cin>>a2;
	if (a1<=0||a2<=0){cout<<"Pomylka vhidnyh danych, vvedit shcze raz"<<endl;goto label1;}
	cout<<"Vvedit matrytsu A:"<<endl;
	int a[a1][a2],x[a2];
	for(i=0;i<a2;i++)
	{
			for(j=0;j<a1;j++)
			{
				cout<<"A"<<i+1<<j+1<<"=";
				cin>>a[i][j];
			}

	}
	cout<<"Matrytsia X maje takyi vugliad :"<<endl; 
	do
	{	
		x[n]=a[n][0];
		for (j=0;j<a1;j++)
		{
			if (x[n]>a[n][j])x[n]=a[n][j];
		}
	cout<<x[n]<<endl;	
	n++;
	}
	while(n<a2);
	return 0;
}
