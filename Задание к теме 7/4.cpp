

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");

	int V1, V2, T, S;
	cout << "Введите скорость 1го автомобиля =  ";
	cin >> V1;
	cout << "Введите скорость 2го автомобиля = ";
	cin >> V2;
	cout << "Кол-во часов = ";
	cin >> T;
	if (V1 > 0 and V2 > 0 and T > 0)
	{
		cout << "Расстояние равно = " << T * (V1 + V2);
	}
	else cout << "Заданы несуществующие значения ";
	
	return 0;

}

