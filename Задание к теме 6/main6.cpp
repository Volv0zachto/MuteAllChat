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
    long double A,x;
setlocale(LC_ALL,"rus");
cout<<"Введите значение A = ";
cin>>A;
x=pow(A,3);
cout<<"Значение = "<<x*x*pow(A,2);


    return 0;
}
