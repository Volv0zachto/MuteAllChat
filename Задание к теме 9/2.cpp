// 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int K;
    cout << "Введите число K = ";
    cin >> K;
    if (K > 0 and K < 366)
    {
        switch (K % 7)
        {
        case 1:cout << "0";
          break;
        case 2:cout << "1";
            break;
        case 3:cout << "2";
            break;
        case 4:cout << "3";
            break;
        case 5:cout << "4";
            break;
        case 6:cout << "5";
            break;
        case 0:cout << "6";
            break;
        default:return false;

        }
    }
    return 0;
}