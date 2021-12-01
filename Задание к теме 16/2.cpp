// 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <math.h>
#include<iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	int A, D, N, * array;
	cout << "Введите число N = ";
	cin >> N;
	cout << "Введите число A = ";
	cin >> A;
	cout << "Введите число D = ";
	cin >> D;

	array = new int[N];
	if (N > 1)
	{
		for (int i = 0; i < N; i++)
		{
			array[i] = A * pow(D, i);
		}
		for (int x = 0; x < N; x++)
		{
			cout << array[x] << " ";
		}
	}
	return 0;
}
