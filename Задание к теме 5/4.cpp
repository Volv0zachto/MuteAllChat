

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	double x1, x2, y1, y2,shirina,dlina;

	cout << "Введите координаты первой точки\nx1 = ";
	cin >> x1;
	cout << "y1 = ";
	cin >> y1;


	cout << "Введите координаты второй точки \nx2 = ";
	cin >> x2;
	cout << "y2 = ";
	cin >> y2;
	shirina = abs(y2 - y1);
	dlina = abs(x2 - x1);

	cout << "Периметр прямоугольника равен = "<< shirina * 2 + dlina * 2;
	cout << "\nПлощадь прямоугольника равна = "<< shirina*dlina;
	
	return 0;



}






