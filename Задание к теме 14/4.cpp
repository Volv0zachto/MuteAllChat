// 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int B=0;
    double S=1000,P;
    cout << "Введите число P = ";
    cin >> P;
    P = 1 + P / 100;
    if (P>0 and P<25)
    {
        while (S  < 1100)
        {
           S=S*P;
           B++;
        }
    }
    cout << B << " " << S;
    return 0;
}