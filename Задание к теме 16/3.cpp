// 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <math.h>
#include<iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	int sum = 0, A, B, N, * array;
	cout << "Введите число N = ";
	cin >> N;
	cout << "Введите число A = ";
	cin >> A;
	cout << "Введите число B = ";
	cin >> B;


	array = new int[N] ;
	if (N > 2)
	{
		array[0] = A;
		array[1] = B;
		for (int i = 2; i < N; i++)
		{
			sum = 0;
			for (int x = 0; x < i; x++)
			{
				sum = array[x] + sum;
			}
			array[i] = sum;
		}
		for (int p = 0; p < N; p++)
		{
			cout << array[p] << " ";
		}
	}
	return 0;
}
