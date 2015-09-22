#ifndef __base
#define __base
#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct student	
{ 
	char number[3];
	char name[30];
	char surname[30];
	int mark;
};

FILE * f_abon;
char file_name[25]="data.bin";

void file_connect()
{
	setlocale(LC_ALL,"");

	if ((f_abon=fopen(file_name,"rb+"))==NULL)
 	{
 	if ((f_abon=fopen(file_name,"wb+"))==NULL)
 	{
 		cout<<"Неможливо створити файл бази даних!"<<endl;
	}
		cout<<"Створено новий файл бази даних!"<<endl;
 	}
}

void input_stud()
{
	setlocale(LC_ALL,"");
	fseek(f_abon,0,SEEK_END);
	struct student a;
	cout<<"Введiть данi учня :"<<endl;
	cout<<"Клас      :"; gets(a.number);
	cout<<"Прiзвище  :"; gets(a.surname);
	cout<<"Iм’я      :"; gets(a.name);
	cout<<"Оцiнка    :";cin>>a.mark;cout<<endl;
	fwrite(&a,sizeof(a),1,f_abon);
}


void print_stud(struct student a)
{
	setlocale(LC_ALL,"");
	
	cout<<a.number<<"           "<<a.surname<<"           "<<a.name<<"          "<<a.mark<<endl;
	cout<<endl;
}


 
void search()
{
 setlocale(LC_ALL,"");
 int number;
 struct student a;
 int p,r;

cout<<"За яким критерiєм потрiбно виконати пошук ?"<<endl;
cout<<"1 - Клас"<<endl;
cout<<"2 - Прiзвище"<<endl;
cout<<"3 - Оцiнка"<<endl;
int i;
i=getch();
switch(i)
{
case'1':goto l1;
case'2':goto l2;
case'3':goto l3;	
}
 	

l1:
	char findnum[3];
	cout<<"Клас для пошуку : ";
	gets(findnum);
	cout<<endl;
	fseek(f_abon,0,0);
	cout<<"#   "<<"Клас"<<"           "<<"Прiзвище"<<"           "<<"Iм’я"<<"           "<<"Оцiнка"<<endl<<endl;
	while (!feof(f_abon))
	{
		r=fread(&a,sizeof(a),1,f_abon);
		if (r<1) break;
		if (strcmp(findnum,a.number)==0)
		{
			cout<<p+1<<"   ";print_stud(a);
			p++;
		}
	}
	if (p==0) cout<<"Такого класу не знайдено!"<<endl;
	else cout<<endl<<"Знайдено "<<p<<" учень(iв)!"<<endl<<endl;
goto F;

l2:
	char sur[30];
	cout<<"Прiзвище для пошуку : ";
	gets(sur);
	cout<<endl;
	fseek(f_abon,0,0);
	cout<<"#   "<<"Клас"<<"           "<<"Прiзвище"<<"           "<<"Iм’я"<<"           "<<"Оцiнка"<<endl<<endl;
	while (!feof(f_abon))
	{
		r=fread(&a,sizeof(a),1,f_abon);
		if (r<1) break;
		if (strcmp(sur,a.surname)==0)
		{
			cout<<p+1<<"   ";print_stud(a);
			p++;
		}
	}
	if (p==0) cout<<"Такого прiзвища не знайдено!"<<endl;
	else cout<<endl<<"Знайдено "<<p<<" учень(iв)!"<<endl<<endl;
goto F;

l3:
	int ma;
	cout<<"Оцiнка для пошуку : ";
	cin>>ma;
	cout<<endl;
	fseek(f_abon,0,0);
	cout<<"#   "<<"Клас"<<"           "<<"Прiзвище"<<"           "<<"Iм’я"<<"           "<<"Оцiнка"<<endl<<endl;
	while (!feof(f_abon))
	{
		r=fread(&a,sizeof(a),1,f_abon);
		if (r<1) break;
		if (ma=a.mark);
		{
			cout<<p+1<<"   ";print_stud(a);
			p++;
		}
	}
	if (p==0) cout<<"Такої оцiнки не знайдено!"<<endl;
	else cout<<endl<<"Знайдено "<<p<<" учень(iв)!"<<endl<<endl;
goto F;
F:
	cout<<"Натиснiсть будь яку клавiшу для продовження роботи";getch();system("cls");
}


void show_all()
{
	setlocale(LC_ALL,"");
 struct student a;
 int p,r;
 	p=0;
	fseek(f_abon,0,0);
	cout<<"Вмiст бази даних:"<<endl<<endl;
	cout<<"#   "<<"Клас"<<"           "<<"Прiзвище"<<"           "<<"Iм’я"<<"           "<<"Оцiнка"<<endl<<endl;
	while (!feof(f_abon))
	{
		
		r=fread(&a,sizeof(a),1,f_abon);
		if (r<1) break;cout<<p+1<<"   ";
		print_stud(a);
		p++;
	}
	cout<<endl<<"Знайдено "<<p<<" учнiв!"<<endl<<endl;
}

 
void clear_file()
{
	setlocale(LC_ALL,"");
	fclose(f_abon);
	if ((f_abon=fopen(file_name,"wb+"))==NULL)
 	{
 		cout<<"Неможливо створити файл бази даних!"<<endl;
	}
}

void red_base()
{
	student a;
	int x,k,flag=0;
	char w[30], e[30], y[3],findsurn[30];
		show_all();
	cout << "Введiть прiзвище абонента, данi котрого потребують редагування : ";
	gets(findsurn);
	fseek(f_abon,0,SEEK_SET);
	while (!feof(f_abon))
	{
		if (strcmp(findsurn,a.surname)==0)
		        {
			    z:
			    	system("cls");
			    	
			    cout << "Що ви хочете замiнити?\n\n1 - Клас\n2 - Прiзвище\n3 - iм'я\n4 - Оцiнка\n0 - Вихiд\n";
				cin >> k;
				switch (k){
				case 1: cout << "Введiть новий клас    : "; cin>>y; strcpy(a.number, y);flag=1; break;
				case 2: cout << "Введiть нове прiзвище : "; cin>>w; strcpy(a.surname, w);flag=1; break;
				case 3: cout << "Введiть нове iм’я     : "; cin>>e; strcpy(a.name, e);flag=1;break;				
				case 4: cout << "Введiть нову оцiнку   : "; cin>>x; a.mark=x;flag=1; break;
				case 0: goto p;
				}
                goto z;
                p:k = ftell(f_abon);
                fseek(f_abon, k - sizeof(student), 0);
                fwrite(&a, sizeof(student), 1, f_abon);
                fseek(f_abon, sizeof(student), SEEK_CUR);
		        }	
		fread(&a, sizeof(student), 1, f_abon); if(flag==1){cout << "Iнформацiю учня з прiзвищем "<<a.surname<<" змiнено!" << endl;show_all();flag=0;}
	}
	cout<<"Натиснiть будь-яку клавiшу для продовження.";
	getch();
	system("cls");
	}

#endif 	

