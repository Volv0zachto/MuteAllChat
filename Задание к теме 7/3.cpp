/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long double X,A;
setlocale(LC_ALL,"rus");
cout<<"Введите значение Y(кг) конфет = ";
cin>>X;
cout<<"Введите цену 1 кг конфет = ";
cin>>A;
cout<<"Стоимость 1 кг конфет = "<<A<<"\nСтоимость Y кг конфет = "<<X*A;

    return 0;
}
