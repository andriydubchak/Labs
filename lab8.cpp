#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	cout<<"Vvedit' text:"<<endl;
	char t[100];
	gets(t);
	int i;
	for (i=0;i<strlen(t);i++)
	if(t[i]=='+')t[i+1]='-';
	cout<<"Rezultat:"<<endl;
	puts(t);
	return 0;
}


