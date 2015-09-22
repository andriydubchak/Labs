#include <iostream>
#include <math.h>
using namespace std;
double x[100],rez=1;
void peredprog()
{
	int i;
	for(i=0;i<=100;i++)x[i]=1;
}
void getx(int i,double a,double b, double c)
{
	x[i]*=(c*(sqrt(b)))+(a*b);	
}
double getF(double x,double a)
{
	rez*=pow(x,2)+pow(a,2);
	return rez;
}
int main()
{
	peredprog();
	int i,j,m,n;
	double F=1;
	cout<<"m=";
	cin>>m;
	cout<<"n=";
	cin>>n;
	double a,b[m][n],c;
	cout<<"a=";
	cin>>a;
	
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
			cout<<"b["<<i+1<<"]["<<j+1<<"]=";
			cin>>b[i][j];
		}
	cout<<"c=";
	cin>>c;
	
	for(i=0;i<n;i++)
		{
		for(j=0;j<m;j++)
		{
			getx(i,a,b[i][j],c);
			
		}
		F*=getF(x[i],a);
		}
	cout<<"Rozrahunok vykonano. F="<<F<<endl;
	return 0;
}
