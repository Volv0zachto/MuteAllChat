

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	double A1, x, y, B1, A2, B2, C1, C2;
	double b = 0;
	cout << "Введите значение A1 = ";
	cin >> A1;
	cout << "Введите значение B1= ";
	cin >> B1;
	cout << "Введите значение A2 = ";
	cin >> A2;
	cout << "Введите значение B2 = ";
	cin >> B2;
	cout << "Введите значение C1 = ";
	cin >> C1;
	cout << "Введите значение C2 = ";
	cin >> C2;
	
	y = -9999;
		x = -9999;
		for (x;x=9999;x++)

		{
			for (y; y = 9999; y++)
			{
				if (((A1 * x + B1 * y) == C1) and ((A2 * x + B2 * y) == C2))
				{
					cout << "x = " << x << "\ny = " << y;
					b++;
					break;

				}
				if (b > 0)
				{
					break;
				}
			}
			
		}
		
	
	
		
		return 0;
}



