#include<iostream>

using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	long double d, L;
	const double π = 3.14;
	cout << "Введите диаметр окружности a = ";
	cin >> d;
	
	L = d * π;

	cout << "Длина окружности равна = " << L;
	
	return 0;


		
}