// 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int A, B, C,X,Y;
    cout << "Введите число X = ";
    cin >> X;
    cout << "Введите число Y = ";
    cin >> Y;
    if (X != 0 and Y != 0)
    {
        if (X > 0 and Y > 0)
            cout << "1ая четверть";
        else if (X<0 and Y<0) 
            cout << "3ая четверть";
        if (X > 0 and Y < 0)
            cout << "4ая четверть";
        else if (X<0 and Y>0)
            cout << "2ая четверть";
        
    }
    return 0;
}
