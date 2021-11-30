// 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <math.h>
#include<iostream>
using namespace std;

int Sign(double X)
{
	if (X > 0)
		return 1;
	if (X == 0)
		return 0;
	if (X < 0)
		return -1;
}
int main()
{
	setlocale(LC_ALL, "rus");
	double  A, B, X;
	cout << "Введите число = ";
	cin >> A;
	
	cout << "Введите число = ";
	cin >> B;
	cout << Sign(A) + Sign(B);
	

	return 0;
}