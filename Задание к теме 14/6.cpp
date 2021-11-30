// 6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int n;
    cout << "Введите число N = ";
    cin >> n;
    int f1 = 1, f2 = 1, f = 0, k = 2;
    while (f < n)
    {
        k++;
        f = f2 + f1;
        f2 = f1;
        f1 = f;
    }
    cout << k;
    return 0;
}