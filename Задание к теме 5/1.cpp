

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	double x1, x2, y1, y2;

	cout << "Введите координаты первой точки\nx1 = ";
	cin >> x1;
	cout << "y1 = ";
	cin >> y1;
	
	
	cout << "Введите координаты второй точки \nx2 = ";
	cin >> x2;
	cout << "y2 = ";
	cin>> y2;
	
	
		cout << "Расстояние между двумя точками равно = " << sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	return 0;


	







}