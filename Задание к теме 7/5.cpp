

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	double A,x, B;
	cout << "Введите значение A = ";
	cin >> A;
	cout << "Введите значение B = ";
	cin >> B;
	if (A != 0)
	{
		x = -9999;
		while ((A * x + B) != 0)
		{
			x++;
		}
		cout << x;
	}
	else
		cout << "А не должен быть равен нулю";
		return 0;
}



