#include <iostream>
#include <D:\base.h>
#include <stdlib.h>
using namespace std;



int main() 
{ 
	setlocale(LC_ALL,"");
	char c;
	file_connect();
	system("cls");
 	cout<<"��i� ����� ��������� �i���� ����i������ �������!"<<endl;
 	do
 	{
 		cout<<"�����i�� ������i�:"<<endl;
 		cout<<"1 - ��������� ��i� ����"<<endl;
 		cout<<"2 - �����"<<endl;
		cout<<"3 - �������� ��� ����"<<endl;
		cout<<"4 - ������� ���� �����"<<endl;
		cout<<"5 - ���������� ����"<<endl;
		cout<<"0 - ���i�"<<endl<<endl;
 		c=getch();
 		switch(c)
 		{
		case '0': cout<<"������ ���������"<<endl;
		fclose(f_abon); return 0;
 		case '1': system("cls");input_stud();break;
		case '2': system("cls");search(); break;
      	case '3': system("cls");show_all(); break;
      	case '4': system("cls");clear_file();break;
      	case '5': system("cls");red_base(); break;
      	case '9': system("cls");file_connect(); break;
 	 	}
 	} while (1);	
}

