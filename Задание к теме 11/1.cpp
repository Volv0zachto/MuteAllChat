// 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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


    if (A != B)
    {
        if (A > B)
            B = A;
        else A = B;
    }
    else {
        A = 0;
        B = 0;
    }
    cout << A <<"  "<< B;
    return 0;
}
