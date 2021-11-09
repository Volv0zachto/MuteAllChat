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
    long double x;
setlocale(LC_ALL,"rus");
cout<<"Введите значение α (в радианах) = ";
cin>>x;
if (x>0 and x<2*3.1415926535)
{
cout<<"Значение угла в градусах равно = "<< x/3.1415926535*180;
}
else cout << "Значение α не удовлетворяет условию";
    return 0;
}
