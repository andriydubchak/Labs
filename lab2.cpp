#include <iostream>
#include <math.h>
#define C 1.231
#define D 1.152

using namespace std;
int main()
{
	double x1,x2,y,A1,A2;
	cout<<"x1=";
	cin>>x1;
	cout<<"x2=";
	cin>>x2;
	cout<<"y ="; 
	cin>>y;
	if (x1>=y) A1=exp(y)+D*tan(x1);
	else       A1=pow(C*x1+y,1.0/3.0);
	if (x2>=y) A2=exp(y)+D*tan(x2);
	else       A2=pow(C*x2+y,1.0/3.0);
	cout<<"A1= "<<A1<< endl;
	cout<<"A2= "<<A2<< endl;
	return 0;
}


