// 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <math.h>
#include<iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	int A, B, N,*array;
	cout << "Введите число N = ";
	cin >> N;
	array= new int[N];
	if (N > 0)
	{
		for (int i = 0; i < N; i++)
		{
			array[i] = 1 + i * 2;
		}
		for (int x = 0; x < N; x++)
		{
			cout << array[x]<<" ";
		}
	}
	return 0;
}
