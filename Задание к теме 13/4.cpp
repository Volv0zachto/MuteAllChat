// 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <string>
#include<math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int   N;
	double A,B=1;
	cout << "Введите число N = ";
	cin >> N;
	cout << "Введите число A = ";
	cin >> A;

	if (N > 0 and A>0)
	{
		for (int i = 1; i <=N; i++)
		{
			B= B + pow(A, i);
		}
	}
	cout << B;
	return 0;
}