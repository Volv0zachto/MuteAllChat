// 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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
    if ( A<100 and A>9)
    {
     

        cout << A % 10 << A / 10;
    }
    return 0;
}