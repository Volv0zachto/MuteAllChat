// 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <math.h>
#include<iostream>
#include <cstdlib>
using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	int sum = 0,  B, N, * A;
	cout << "Введите число N = ";
	cin >> N;
	A = new int[N];
	for (int i = 0; i < N; i++)
	{
		A[i] = rand();
		cout << A[i] << " ";
	}
	cout<<endl;
	if (N % 2 == 0)
	{
		for (int x = 0; x < N / 2; x++)
		{
			cout << A[x] << " " << A[N - (1 + x)] << " ";
		}
	}
	else
	{
		for (int i = 0; i < N / 2; i++)
		{
			cout << A[i] << " " << A[N - (1 + i)] << " ";
		}
		cout << A[N / 2];
	}

	return 0;
}
