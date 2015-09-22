#include <iostream>
using namespace std;
int main()
{
	double r=1,k=0,a[20];
	int s=0,i;	
	cout<<"Vvedit elementy masyvu:"<<endl;
	for (i=1;i<=20;i++)
	{
		cout<<"a"<<i<<"=";
		cin>>a[i];
	}
	if (a[1]*a[20]>0)
	{
		for(i=1;i<=20;i++)
		{
			if (a[i]<0)r*=a[i];
			else k+=1;
		}
	if(k==20)cout<<"Vidjemnuch elementiv ne isnuje"<<endl;
	else cout<<"Dobutok vidjemnych elementiv = "<<r<<endl;
	}
	else
	{
		for (i=2;i<=20;i+=2) k+=a[i];
		cout<<"Suma parnyh elementiv = "<<k<<endl;
	}
	return 0;
}

