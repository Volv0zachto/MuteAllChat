// 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int A, B;
    setlocale(LC_ALL, "rus");
    cout << "Введите длину А = ";
    cin >> A;
    cout << "Введите длину  B = ";
    cin >> B;
    if (A > B)
    {
        cout << "Количество отрезков B = " << A / B;
    }
    return 0;
}
    