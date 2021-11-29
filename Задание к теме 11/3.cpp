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
    cout << "Введите число B = ";
    cin >> B;
    cout << "Введите число C = ";
    cin >> C;


    if (abs(B-A)>=abs(C-A))
    {
        cout << B<<abs(B-A);
        return 0;
    }
    if (abs(B - A) <= abs(C - A))
    {
        cout << C << abs(C - A);
        return 0;
    }
   

}
