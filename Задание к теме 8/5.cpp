// 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int A, B;
    setlocale(LC_ALL, "rus");
    cout << "Введите число = ";
    cin >> A;
    if (A < 1000 and A>99)
    {


        cout <<  A / 10 % 10 << A %100%10 <<A / 100;
    }
    return 0;
}