#include<iostream>

using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	long double a, b, S, P;
	cout << "Введите длину прямоугольника a = ";
	cin >> a;
	cout << "Введите ширину прямоугольника b = ";
	cin >> b;
	S = a * b;
	P = 2 * (a + b);
	cout << "Площадь прямоугольника равна = " << S;
	cout << "\nПериметр прямоугольника равен = " << P ;

	return 0;



}
