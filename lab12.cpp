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
	cout<<"����i�� ��������� ��������"<<endl;
	cout<<"I��     :"; gets(a.name);
	cout<<"��i����� :"; gets(a.surname);
	cout<<"������   :"; gets(a.address); cout<<endl;
	fseek(f_stud,0,2);
	fwrite(&a,sizeof(a),1,f_stud);
}


void print_stud(struct students a)
{
	cout<<"I��     :"<<a.name<<endl;
	cout<<"��i����� :"<<a.surname<<endl;
	cout<<"������   :"<<a.address<<endl;
	cout<<endl;
}


 
void search_address()
{
 char address_stud[30];
 struct students a;
 int p,r;
 	p=0;
	cout<<"������ ��� ������ : ";
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
	if (p==0) cout<<"����i ������ �� ��������!"<<endl;
	else cout<<endl<<"�������� "<<p<<" �������i�!"<<endl<<endl;
}
 
void show_all()
{
 struct students a;
 int p,r;
 	p=0;
	fseek(f_stud,0,0);
	cout<<"��i�� ���� �����:"<<endl<<endl;
	while (!feof(f_stud))
	{
		r=fread(&a,sizeof(a),1,f_stud);
		if (r<1) break;
		print_stud(a);
		p++;
	}
	cout<<endl<<"�������� "<<p<<" �������i�!"<<endl<<endl;
}

 
int clear_file()
{
	fclose(f_stud);
	if ((f_stud=fopen(file_name,"wb+"))==NULL)
 	{
 		cout<<"��������� �������� ���� ���� �����!"<<endl;
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
 		cout<<"��������� �������� ���� ���� �����!"<<endl;
 		return -1;
	}
		cout<<"�������� ����� ���� ���� �����!"<<endl;
 	}
 	cout<<"��i� ����� �������i� ��������� �i���� ����i������ �������!"<<endl;
 	do
 	{
 		cout<<"�����i�� ������i�:"<<endl;
 		cout<<"1 - ��i� ��������"<<endl;
 		cout<<"2 - ����� �� �������"<<endl;
		cout<<"3 - �������� ��� ����"<<endl;
		cout<<"4 - ������� ���� �����"<<endl;
 		cout<<"0 - ���i�"<<endl<<endl;
 		c=getch();
 		switch(c)
 		{
		case '0': cout<<"������ ���������"<<endl;
		fclose(f_stud); return 0;
 		case '1': input_stud(); break;
		case '2': search_address(); break;
      	case '3': show_all(); break;
      	case '4': clear_file(); break;
 	 	}
 	} while (1);	
}

