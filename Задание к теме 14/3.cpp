// 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int A, B=1,N,C=0;
    cout << "Введите число N = ";
    cin >> N;
   
    if (N>1)
    {
        while ( C+B < N)
        {
            C = C + B;
            B++;
        }
    }
    cout << B << " " << C+B;
    return 0;
}