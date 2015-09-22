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
 		cout<<"��������� �������� ���� ���� �����!"<<endl;
	}
		cout<<"�������� ����� ���� ���� �����!"<<endl;
 	}
}

void input_stud()
{
	setlocale(LC_ALL,"");
	fseek(f_abon,0,SEEK_END);
	struct student a;
	cout<<"����i�� ���i ���� :"<<endl;
	cout<<"����      :"; gets(a.number);
	cout<<"��i�����  :"; gets(a.surname);
	cout<<"I��      :"; gets(a.name);
	cout<<"��i���    :";cin>>a.mark;cout<<endl;
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

cout<<"�� ���� ������i�� ����i��� �������� ����� ?"<<endl;
cout<<"1 - ����"<<endl;
cout<<"2 - ��i�����"<<endl;
cout<<"3 - ��i���"<<endl;
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
	cout<<"���� ��� ������ : ";
	gets(findnum);
	cout<<endl;
	fseek(f_abon,0,0);
	cout<<"#   "<<"����"<<"           "<<"��i�����"<<"           "<<"I��"<<"           "<<"��i���"<<endl<<endl;
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
	if (p==0) cout<<"������ ����� �� ��������!"<<endl;
	else cout<<endl<<"�������� "<<p<<" �����(i�)!"<<endl<<endl;
goto F;

l2:
	char sur[30];
	cout<<"��i����� ��� ������ : ";
	gets(sur);
	cout<<endl;
	fseek(f_abon,0,0);
	cout<<"#   "<<"����"<<"           "<<"��i�����"<<"           "<<"I��"<<"           "<<"��i���"<<endl<<endl;
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
	if (p==0) cout<<"������ ��i����� �� ��������!"<<endl;
	else cout<<endl<<"�������� "<<p<<" �����(i�)!"<<endl<<endl;
goto F;

l3:
	int ma;
	cout<<"��i��� ��� ������ : ";
	cin>>ma;
	cout<<endl;
	fseek(f_abon,0,0);
	cout<<"#   "<<"����"<<"           "<<"��i�����"<<"           "<<"I��"<<"           "<<"��i���"<<endl<<endl;
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
	if (p==0) cout<<"���� ��i��� �� ��������!"<<endl;
	else cout<<endl<<"�������� "<<p<<" �����(i�)!"<<endl<<endl;
goto F;
F:
	cout<<"������i��� ���� ��� ����i�� ��� ����������� ������";getch();system("cls");
}


void show_all()
{
	setlocale(LC_ALL,"");
 struct student a;
 int p,r;
 	p=0;
	fseek(f_abon,0,0);
	cout<<"��i�� ���� �����:"<<endl<<endl;
	cout<<"#   "<<"����"<<"           "<<"��i�����"<<"           "<<"I��"<<"           "<<"��i���"<<endl<<endl;
	while (!feof(f_abon))
	{
		
		r=fread(&a,sizeof(a),1,f_abon);
		if (r<1) break;cout<<p+1<<"   ";
		print_stud(a);
		p++;
	}
	cout<<endl<<"�������� "<<p<<" ���i�!"<<endl<<endl;
}

 
void clear_file()
{
	setlocale(LC_ALL,"");
	fclose(f_abon);
	if ((f_abon=fopen(file_name,"wb+"))==NULL)
 	{
 		cout<<"��������� �������� ���� ���� �����!"<<endl;
	}
}

void red_base()
{
	student a;
	int x,k,flag=0;
	char w[30], e[30], y[3],findsurn[30];
		show_all();
	cout << "����i�� ��i����� ��������, ���i ������� ���������� ����������� : ";
	gets(findsurn);
	fseek(f_abon,0,SEEK_SET);
	while (!feof(f_abon))
	{
		if (strcmp(findsurn,a.surname)==0)
		        {
			    z:
			    	system("cls");
			    	
			    cout << "�� �� ������ ���i����?\n\n1 - ����\n2 - ��i�����\n3 - i�'�\n4 - ��i���\n0 - ���i�\n";
				cin >> k;
				switch (k){
				case 1: cout << "����i�� ����� ����    : "; cin>>y; strcpy(a.number, y);flag=1; break;
				case 2: cout << "����i�� ���� ��i����� : "; cin>>w; strcpy(a.surname, w);flag=1; break;
				case 3: cout << "����i�� ���� i��     : "; cin>>e; strcpy(a.name, e);flag=1;break;				
				case 4: cout << "����i�� ���� ��i���   : "; cin>>x; a.mark=x;flag=1; break;
				case 0: goto p;
				}
                goto z;
                p:k = ftell(f_abon);
                fseek(f_abon, k - sizeof(student), 0);
                fwrite(&a, sizeof(student), 1, f_abon);
                fseek(f_abon, sizeof(student), SEEK_CUR);
		        }	
		fread(&a, sizeof(student), 1, f_abon); if(flag==1){cout << "I�������i� ���� � ��i������ "<<a.surname<<" ��i����!" << endl;show_all();flag=0;}
	}
	cout<<"������i�� ����-��� ����i�� ��� �����������.";
	getch();
	system("cls");
	}

#endif 	

