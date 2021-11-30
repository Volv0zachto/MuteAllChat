// 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <math.h>
#include<iostream>
using namespace std;

double RingS(double R1,double R2)
{
	double S = 3.14 * (R1 * R1 - R2 * R2);
	if (R1 > R2)
	{
		return S;
	}
	else 
	{
		return 0;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	double  R1,R2,A, B, X;
	for (int i = 1; i <= 3; i++)
	{
		cout << "\nВведите число R1 = ";
		cin >> R1;
		cout << "Введите число R2 = ";
		cin >> R2;
		cout << RingS(R1, R2);
	}


	return 0;
}