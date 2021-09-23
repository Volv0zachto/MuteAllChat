


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
	cout << "Введите значение точки C ,она должна располагаться между точками A и B = ";
	cin >> C;
	if ((C > A and C < B) or (C > B and C < A))
	{


		cout << "\nПроизведение длин отрезков  AC и BC =  " << abs(C - A) * abs(C - B);
	}
	else
		cout << "\nТочка С не соответсвует условию задачи";




	return 0;

}