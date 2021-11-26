// 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int K,N;
    cout << "Введите число K = ";
    cin >> K;
    cout << "Введите число N = ";
    cin >> N;
    if (K > 0 and K < 366)

    {
        if (N > 0 and N < 8)
        {
            switch (K % 7)
            {
            case 1:cout << N % 7;
                break;
            case 2:cout << (N+1)%7;
                break;
            case 3:cout << (N + 2)%7;
                break;
            case 4:cout << (N + 3)%7;
                break;
            case 5:cout << (N + 4)%7;
                break;
            case 6:cout << (N + 5)%7;
                break;
            case 0:cout << (N + 6)%7;
                break;
            default:return false;

            }
        }
    }
    return 0;
}