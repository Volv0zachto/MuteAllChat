

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	double x1, x2, y1, y2,x3,y3,d1,d2,osn,p;

	cout << "Введите координаты 1-ой точки\nx1 = ";
	cin >> x1;
	cout << "y1 = ";
	cin >> y1;


	cout << "Введите координаты 2-ой точки \nx2 = ";
	cin >> x2;
	cout << "y2 = ";
	cin >> y2;

	cout << "Введите координаты 3-й точки \nx3 = ";
	cin >> x3;
	cout << "y3 = ";
	cin >> y3;
	d1= sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	d2= sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	osn= sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	p = d1 + d2 + osn;


	cout << "Периметр треугольника  равен = " <<p;
	cout << "\nПлощадь треугольника равна = " << sqrt(p/2*(p/2-d1)*(p/2-d2)*(p/2-osn));

	return 0;



}


