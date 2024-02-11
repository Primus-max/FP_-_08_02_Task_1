// В одномерном массиве, заполненном случайными числами, определить минимальный и максимальный элементы

#include <iostream>
#include <windows.h>
#include <random>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int size = 10;
    int arr[size];

    random_device random;
    cout << "В массиве :" << endl ;

    for (int i = 0; i < size; i++)
    {
        arr[i] = random() % 50;
        cout << arr[i] << " " << endl;
    }

    int min = arr[0], max = arr[0];

    for (int i = 0; i < size; i++)
    {      
       if (arr[i] < min)
           min = arr[i];
       else if (arr[i] > max)
           max = arr[i];       
    }


    cout << "Минимальное : " << min << endl;
    cout << "Максимальное : " << max << endl;
}

