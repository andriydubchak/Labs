#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
void enter()
{
	int n;
	printf("Vvedit kilkist studentiv dlia vvodu:\n");
	scanf("%d",&n);
	char control[1];
	gets(control);//Tsi 2 riadky dlia toho, shchob ne bulo konfliktu scanf z gets cherez te, shcho gets pislia scanf lovyt kinets riadka pislia scanf!
	FILE * list;
	int i;
   char name [25],surname[25],adress[100];
   list = fopen ("list.txt","at");
   for(i=1;i<=n;i++)  
	{
		 puts("Vvedit imya studenta:");
	     gets(name);
	     fprintf (list, "Name %d [%s].",i,name);
	     puts("Vvedit prizvyshche studenta:");
	     gets(surname);
	     fprintf (list, "Surname %d [%s].",i,surname);
	     puts("Vvedit adresu studenta:");
	     gets(adress);
	     fprintf (list, "Adress %d [%s].",i,adress);
 	}
   fclose (list);
   printf("Komandu vvodu zakincheno, vy poverneni v golovne meniu.\nVvedit komandu:\n");
}

void read()
{
	char s[10000];
	FILE * list;
	list = fopen ("list.txt","rt");
	fgets(s,10000,list);
	printf("%s\n",s);
	fclose (list);
	delete[] s;
    printf("Komandu vvoduchytannia zakincheno, vy poverneni v golovne meniu.\nVvedit komandu:\n");
}

void clear()
{
	FILE * list;
	list = fopen ("list.txt","wt");
	fclose (list);
	printf("Komandu ochystky zakincheno, vy poverneni v golovne meniu.\nVvedit komandu:\n");
}

int main()
{
	printf("Komandu dlia upravlinnia:\n1 - vvid dannyh pro studentiv u fayl.\n2 - vyvid vmistu faylu.\n3 - ochystyty dani faylu.\n4 - vyhid.\nVvedit komandu:\n");	
	int i;
	do
	{
		cin>>i;
		if(i==1)enter();
		if(i==2)read();
		if(i==3)clear();
	}
	while(i!=4);
   return 0;
}
