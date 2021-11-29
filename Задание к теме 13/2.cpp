// 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <string>
#include<math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int N, B;
	double A = 1.1,C=1.1;
	cout << "Введите число N = ";
	cin >> N;
	if (N > 0)
	{
		for (int i = 1; i < N; i++)
		{
			A = A * (C + 0.1);
			C = C + 0.1;
		}
	}
	cout << A;
	return 0;
}