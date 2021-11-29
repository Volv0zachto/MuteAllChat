// 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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

    if (A>999 and A<10000 and A/1000 == A%10 and A/100%10 == A/10%10 )
        cout << "true";
    else cout << "false";
    return 0;
}

