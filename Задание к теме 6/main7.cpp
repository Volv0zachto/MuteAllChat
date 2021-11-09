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
    long double A,x,y;
setlocale(LC_ALL,"rus");
cout<<"Введите значение A = ";
cin>>A;
x=pow(A,2);
y=pow(A,7);


cout<<"Значение = "<<x*x*x*x*y;


    return 0;
}
