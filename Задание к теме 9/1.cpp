// 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int A, B;
    setlocale(LC_ALL, "rus");
    cout << "Введите число секунд = ";
    cin >> A;
    cout << A % 60;

}