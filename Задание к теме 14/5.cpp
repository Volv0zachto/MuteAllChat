// 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int A,B,C=1,D;
    
    cout << "Введите число A = ";
    cin >> A;
    cout << "Введите число B = ";
    cin >> B;
   
    if (A > 0 and B > 0)
    {
        while ((A%B)!=0)
        {
            if (A > B)
            {
                C = A % B;           
                A = B;
                B = C;
                
                
            }
            else
            {
                C = B % A;
                B = A;
                A = C;
                
            }
        }
    }
    cout << B;
    return 0;
}