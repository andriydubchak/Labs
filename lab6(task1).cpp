#include <iostream>
using namespace std;
int main()
{
	int k=0,i;
	double m[20];
	for (i=1;i<=20;i++)
	{
		cout<<"Vvedit m"<<i<<" =";
		cin>>m[i];
		if (m[i]>0) k+=1;
	}
	cout<<"Kilkist dodatnih elementiv = "<<k;
	return 0;
}

