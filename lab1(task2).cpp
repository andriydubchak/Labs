#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	double a,b,x,y,e;
	cout<<"Vvedit a=";
	cin>>a;
	cout<<"Vvedit b=";
	cin>>b;
	cout<<"Vvedit x=";
	cin>>x;
	y=log10(acos(a*x))+exp(2.5)*tan(pow((pow(x,2)+b),4.1));
	cout<<"y= "<<y << endl;
	return 0;
}
