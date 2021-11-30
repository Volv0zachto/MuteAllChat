// 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <math.h>
#include<iostream>
using namespace std;
double	Fact2(int N,double X=1)
{
	if (N%2==0)
	{
		for (int i = 2; i <= N; i += 2)
		{
			X = X * i;
		}
		return X;
	}
	else
	{
		for (int i = 1; i <= N; i += 2)
		{
			X = X * i;
		}
		return X;
	}
	
}
int main()
{
	setlocale(LC_ALL, "rus");
	int  A, A1;
	cout << "Введите число N = ";
	cin >> A;
	cout << Fact2(A);
	return 0;

}