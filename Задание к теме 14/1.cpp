// 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int A, B;
    cout << "Введите число A = ";
    cin >> A;
    cout << "Введите число B = ";
    cin >> B;
    if (A > 0 and B > 0 and A < B)
    {


        for (A; A <= B; A++)
        {
            for (int i = 1; i <= A; i++)
            {
                cout << A;
            }
            cout << " ";
        }
    }
    return 0;
}