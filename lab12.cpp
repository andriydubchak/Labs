#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

struct students
{ 
	char name[30];
	char surname[30];
	char address[50];
};

FILE * f_stud;
const char file_name[]="data.bin";

 
void input_stud()
{struct students a;
	cout<<"Введiть параметри абонента"<<endl;
	cout<<"Iм’я     :"; gets(a.name);
	cout<<"Прiзвище :"; gets(a.surname);
	cout<<"Адреса   :"; gets(a.address); cout<<endl;
	fseek(f_stud,0,2);
	fwrite(&a,sizeof(a),1,f_stud);
}


void print_stud(struct students a)
{
	cout<<"Iм’я     :"<<a.name<<endl;
	cout<<"Прiзвище :"<<a.surname<<endl;
	cout<<"Адреса   :"<<a.address<<endl;
	cout<<endl;
}


 
void search_address()
{
 char address_stud[30];
 struct students a;
 int p,r;
 	p=0;
	cout<<"Адреса для пошуку : ";
	gets(address_stud);
	cout<<endl;
	fseek(f_stud,0,0);
	while (!feof(f_stud))
	{
		r=fread(&a,sizeof(a),1,f_stud);
		if (r<1) break;
		if (strcmp(a.address, address_stud)== 0)
		{
			print_stud(a);
			p++;
		}
	}
	if (p==0) cout<<"Такоi адреси не знайдено!"<<endl;
	else cout<<endl<<"Знайдено "<<p<<" студентiв!"<<endl<<endl;
}
 
void show_all()
{
 struct students a;
 int p,r;
 	p=0;
	fseek(f_stud,0,0);
	cout<<"Вмiст бази даних:"<<endl<<endl;
	while (!feof(f_stud))
	{
		r=fread(&a,sizeof(a),1,f_stud);
		if (r<1) break;
		print_stud(a);
		p++;
	}
	cout<<endl<<"Знайдено "<<p<<" студентiв!"<<endl<<endl;
}

 
int clear_file()
{
	fclose(f_stud);
	if ((f_stud=fopen(file_name,"wb+"))==NULL)
 	{
 		cout<<"Неможливо створити файл бази даних!"<<endl;
 		return -1;
	}
	return 0;
}


int main() 
{ 
	setlocale(LC_ALL,"");
	char c;
 	if ((f_stud=fopen(file_name,"rb+"))==NULL)
 	{
 	if ((f_stud=fopen(file_name,"wb+"))==NULL)
 	{
 		cout<<"Неможливо створити файл бази даних!"<<endl;
 		return -1;
	}
		cout<<"Створено новий файл бази даних!"<<endl;
 	}
 	cout<<"Ввiд даних студентiв виконуйте тiльки англiйським буквами!"<<endl;
 	do
 	{
 		cout<<"Виберiть операцiю:"<<endl;
 		cout<<"1 - Ввiд абонента"<<endl;
 		cout<<"2 - Пошук за адресою"<<endl;
		cout<<"3 - Показати всю базу"<<endl;
		cout<<"4 - Очистка бази даних"<<endl;
 		cout<<"0 - Вихiд"<<endl<<endl;
 		c=getch();
 		switch(c)
 		{
		case '0': cout<<"Роботу завершено"<<endl;
		fclose(f_stud); return 0;
 		case '1': input_stud(); break;
		case '2': search_address(); break;
      	case '3': show_all(); break;
      	case '4': clear_file(); break;
 	 	}
 	} while (1);	
}

