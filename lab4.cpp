#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double a,r=0;
	int i;
	cout<<"a=";
	cin>>a;
	for (i=1;i<=14;i++) r+=pow(a,i)+2*i;
	cout<<"Rezultat="<<r<<endl; 
	return 0;
}

