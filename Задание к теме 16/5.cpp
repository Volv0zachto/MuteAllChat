// 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <math.h>
#include<iostream>
#include <cstdlib>
using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	int sum = 0, B, N, * A;
	cout << "Введите число N = ";
	cin >> N;
	A = new int[N];
	for (int i = 0; i < N; i++)
	{
		A[i] = rand();
		cout << A[i] << " ";
	}
	cout << endl;
	for (int i=0;i<N;i++)
		if (i % 2 != 0)
		{
			cout << A[i]<< " ";
		}
	for (int i = N-1; i >=0; i--)
		if (i % 2 == 0)
		{
			cout << A[i]<<" ";
		}


	return 0;
}
