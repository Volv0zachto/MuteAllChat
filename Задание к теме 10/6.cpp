// 6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int A, B, C;
    cout << "Введите число A = ";
    cin >> A;
    cout << "Введите число B = ";
    cin >> B;
    cout << "Введите число C = ";
    cin >> C;

    if (A*A==B*B+C*C or B*B==A*A+C*C or C*C==A*A+B*B)
        cout << "true";
    else cout << "false";
    return 0;
}

