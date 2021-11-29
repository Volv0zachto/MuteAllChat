// 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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
   
    if (A>9 and A<100 and A%2==0)
        cout << "true";
    else cout << "false";
    return 0;
}

