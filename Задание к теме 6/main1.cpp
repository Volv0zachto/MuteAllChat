/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    long double A,B,c;
setlocale(LC_ALL,"rus");
cout<<"Введите число A = ";
cin>>A;
cout<<"Введите число B = ";
cin>>B;
c=A;
A=B;
B=c;

cout<<"Значение новой A = "<<A<<"\nЗначение новой B = "<<B;


    return 0;
}
