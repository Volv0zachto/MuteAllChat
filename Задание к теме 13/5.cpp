// 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include<math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
    double A;
    cout << "Введите число A = ";
    cin >> A;

    int N;
    cout << "Введите число N = ";
    cin >> N;


    double a2 = 1, rez = 1;
     

    for (int i = 1; i <= N; i++)
    {
        a2 *= -A;
        rez += a2;
    }
    cout << rez;
    return 0;
}