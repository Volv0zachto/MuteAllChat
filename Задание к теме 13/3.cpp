// 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include<math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int A=0, B,N;
	
	cout << "Введите число N = ";
	cin >> N;
	if (N > 0)
	{
		for (double i = 1; i <= 2*N-1; i=i+2)
		{
			A = A + i;
			cout << A<<"\n";
		}
	}
	return 0;
}