#include<iostream>

using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	long double a, b, Sr;
	cout << "Введите первое число a = ";
	cin >> a;
	cout << "Введите второе число b = ";
	cin >> b;
	Sr = (a+b)/2 ;
	
	cout << "Среднее арифметическое равно  = " << Sr;
	

	return 0;



}