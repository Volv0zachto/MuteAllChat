// 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <string>
#include<math.h>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int A, B, X;
	setlocale(LC_ALL, "Rus");
	string C;
	cout << "Введите символ C = ";
	cin >> C;

	cout << "Введите команду X = ";
	cin >> X;
	if (X > -2 and X < 2)
	{
		if (C == "С")
		{
			switch (X)
			{
			case -1:
				cout << "Восток";
				break;
			case 0:
				cout << "Север";
				break;
			case 1:
				cout << "Запад";
				break;
			}
		}
		if (C == "З")
		{
			switch (X)
			{
			case -1:
				cout << "Север";
				break;
			case 0:
				cout << "Запад";
				break;
			case 1:
				cout << "Юг";
				break;
			}
		}
		if (C == "Ю")
		{
			switch (X)
			{
			case -1:
				cout << "Запад";
				break;
			case 0:
				cout << "Юг";
				break;
			case 1:
				cout << "Восток";
				break;
			}
		}
		if (C == "В")
		{
			switch (X)
			{
			case -1:
				cout << "Юг";
				break;
			case 0:
				cout << "Восток";
				break;
			case 1:
				cout << "Север";
				break;
			}
		}
	}
	
	return 0;
}

