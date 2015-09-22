#include <iostream>
#include <math.h>

using namespace std;
int main()
 {
	double l,d,t,f;
	cout<<"Vvedit l=";
	cin>>l;
	cout<<"Vvedit d=";
	cin>>d;
	t=5*l+pow(sin(l+4*d),2);
	f=fabs(l-12*d)+(2-5*d)/(4+pow(l,2));
	cout<<"t="<<t<<"f="<<f<< endl;
	return 0;
}





