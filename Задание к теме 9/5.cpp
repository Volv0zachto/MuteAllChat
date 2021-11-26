// 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int A, B, C;
    cout << "Введите число  = ";
    cin >> A;
    if (A < 101)
        cout << 1;
    else
    {


        if (A % 100 == 0 and A > 100) {
            cout << A / 100;
        }
        else
        {
            cout << A / 100 + 1;
        }
    }
    return 0;
}