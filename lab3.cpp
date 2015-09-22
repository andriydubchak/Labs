#include <iostream>
#include <math.h>
#define a 2.1
#define b 3.4
#define x 1.2
using namespace std;
int main()
{
	double y;
	int s;
	cout<<"s=";
	cin>>s;
	
		switch(s)
		{
		case 0 : y=a+b*x;       break;
		case 1 : y=a*a+b*b+x*x; break;
		case 2 : y=exp(x);      break;
		default: y=0;
		}
		
	cout<<"y="<<y<< endl;
	
	return 0;
}

