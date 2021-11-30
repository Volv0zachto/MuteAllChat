// 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <math.h>
#include<iostream>
using namespace std;
int Quarter(int x,int y)
{
	if (x != 0 and y != 0)
	{
		if (x > 0 and y > 0)
			return 1;
		if (x > 0 and y < 0)
			return 4;
		if (x < 0 and y>0)
			return 2;
		if (x < 0 and y < 0)
			return 3;
	}
	else return 0;
}
int main()
{
	setlocale(LC_ALL, "rus");
	double  A, A1;
	int X;
	for (int i = 1; i <= 3; i++)
	{
		cout << "\nВведите координату x = ";
		cin >> A;
		cout << "Введите координату y = ";
		cin >> A1;
		X = Quarter(A, A1);
		switch (X)
		{
		case 1:cout << "1";
			break;
		case 2:cout << "2";
			break;
		case 3:cout << "3";
			break;
		case 4:cout << "4";
			break;
		}
	}

	return 0;
}