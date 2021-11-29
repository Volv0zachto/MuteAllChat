// 7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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

    if (A<B+C and B<A+C and C<A+B)
        cout << "true";
    else cout << "false";
    return 0;
}

