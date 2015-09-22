#include <iostream>
#include <math.h>
#define p(k) (1+cos(a*k))/(1+sin(a*k))
using namespace std;
int main()
{
	double a,x,y,z,F;
	cout<<"Vvedit zminni:"<<endl;
	cout<<"a=";
	cin>>a;
	cout<<"x=";
	cin>>x;
	cout<<"y=";
	cin>>y;
	cout<<"z=";
	cin>>z;
	F=log10(p(x))+exp(x)-pow(p(y),1.0/2.0)+p(z);
	cout<<"F="<<F<<endl;
	return 0;
}
