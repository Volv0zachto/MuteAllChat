// 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <math.h>
#include<iostream>
using namespace std;
double PowerA3(double A)
{
	return A * A * A;
}
int main()
{	
	setlocale(LC_ALL, "rus");
	double  A, A1;
	for (int i = 1; i <= 5; i++)
	{
		cout << "\nВведите число = ";
		cin >> A;
		A1 = PowerA3(A);

		cout << A1;
	}

	return 0;
}