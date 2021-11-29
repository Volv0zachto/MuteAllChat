// 6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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
    if (X > 0 and X < 1000)
    {
        
        if (X <10 and X % 2 == 0)
            cout << " четное однозначное число";
        if (X >9  and X % 2 == 0 and X<100)
            cout << " четное двузначное число";
        if (X > 99 and X % 2 == 0 and X < 1000)
            cout << " четное трёхначное число";
        if (X < 10 and X % 2 != 0)
            cout << " нечетное однозначное число";
        if (X > 9 and X % 2 != 0 and X < 100)
            cout << " нечетное двузначное число";
        if (X > 99 and X % 2 != 0 and X < 1000)
            cout << " нечетное трёхначное число";
        
    }
    return 0;

}
