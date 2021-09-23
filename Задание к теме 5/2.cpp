

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	double A, B, C;


	cout << "Введите значение точки A = ";
	cin >> A;
	cout << "Введите значение точки B = ";
	cin >> B;
	cout << "Введите значение точки C = ";

		
	cin >>C;
	cout << "\nДлина отрезка AC = " <<abs( C - A);
	cout << "\nДлина отрезка BC = " << abs(C - B);
	cout << "\nСумма длин отрезов  = " << abs((C - A)+(C-B));


	
		
	return 0;










}