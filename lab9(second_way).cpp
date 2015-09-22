#include <iostream>
#include <math.h>
using namespace std;
double p(double a,double k)
	{
		double p;
		p=(1+cos(a*k))/(1+sin(a*k));
		return p;
	}
int main()
{
	double a,F,x,y,z;
	cout<<"Vvedit zminni:"<<endl;
	cout<<"a=";
	cin>>a;
	cout<<"x=";
	cin>>x;
	cout<<"y=";
	cin>>y;
	cout<<"z=";
	cin>>z;
	F=log10(p(a,x))+exp(x)-pow(p(a,y),1.0/2.0)+p(a,z);
	cout<<"F="<<F<<endl;
	return 0;
}
