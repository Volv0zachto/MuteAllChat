/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    long double A,B,C,x,y,z;
setlocale(LC_ALL,"rus");
cout<<"Введите число A = ";
cin>>A;
cout<<"Введите число B = ";
cin>>B;
cout<<"Введите число C = ";
cin>>C;
x=A;
y=B;
z=C;
C=y;
A=z;
B=x;


cout<<"Значение новой A = "<<A<<"\nЗначение новой B = "<<B<<"\nЗначение новой C = "<<C;
;


    return 0;
}
