#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double x,xk,dx,y;
	label1:
	cout<<"Pochatkowa tochka =";
	cin>>x;
	cout<<"Kintzeva tochka   =";
	cin>>xk;
	if (x>xk){cout<<"Dani vvedeno nevirno"<<endl;goto label1;}
	label2:
	cout<<"Krok              =";
	cin>>dx;
	if (dx<=0){cout<<"Dani vvedeno nevirno"<<endl;goto label2;}
	y=atan(x)+pow(x,3)+4;
	cout<<"x = "<<x<<"   "<<"y = "<<y<<endl;
	do
	{
		x+=dx;
		y=atan(x)+pow(x,3)+4;
		cout<<"x = "<<x<<"   "<<"y = "<<y<<endl;
	}
	while(x<=xk);
	return 0;
}

