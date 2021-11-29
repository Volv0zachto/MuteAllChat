// 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include<math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int A, B, C;
	cout << "Введите цену 1кг конфет = ";
	cin >> A;
	for ( double i = 0.1; i <= 1; i+=0.1)
	{
		cout << A * i<<" ; ";
	}
	return 0;
}