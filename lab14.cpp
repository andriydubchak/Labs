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
 	cout<<"Ввiд даних виконуйте тiльки англiйським буквами!"<<endl;
 	do
 	{
 		cout<<"Виберiть операцiю:"<<endl;
 		cout<<"1 - Одиничний ввiд учня"<<endl;
 		cout<<"2 - Пошук"<<endl;
		cout<<"3 - Показати всю базу"<<endl;
		cout<<"4 - Очистка бази даних"<<endl;
		cout<<"5 - Редагувати базу"<<endl;
		cout<<"0 - Вихiд"<<endl<<endl;
 		c=getch();
 		switch(c)
 		{
		case '0': cout<<"Роботу завершено"<<endl;
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

