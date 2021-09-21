#include<iostream>

using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	long double a, b;
	cout << "Введите первое число a = ";
	cin >> a;
	cout << "Введите второе число b = ";
	cin >> b;
	if (a == 0 or b == 0)
	{
		cout << "Дано нулевое число";

	}
	else
		
		cout << "Сумма  равна  = " << a + b;
	cout << "\nРазность равна  = " << a - b;
	cout << "\nПроизведение модулей чисел равно = " << abs(a) * abs(b);
	cout << "\nЧастное модулей чисел равно = " << abs(a) / abs(b);
	return 0;



}