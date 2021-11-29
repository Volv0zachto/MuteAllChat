// 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int A, B, C, X, Y;
    cout << "Введите число X = ";
    cin >> X;
    if (X == 0)
        cout << "Нулевое число";
    if (X > 0 and X % 2 == 0)
        cout << "Положительное четное число";
    if (X > 0 and X % 2 != 0)
        cout << "Положительное нечетное число";
    if (X < 0 and X % 2 == 0)
        cout << "Отрицательное четное число";
    if (X < 0 and X % 2 != 0)
        cout << "Отрицательное нечетное число";
    return 0;
        
}
