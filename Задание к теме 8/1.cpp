// 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b, c;
    setlocale(LC_ALL, "rus");
    cout << " Введите размер файла(байты) = ";
    cin >> a;
    cout << "Количество полных килобайт равно = " << a / 1024;
    return 0;
}
    