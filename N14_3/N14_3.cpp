// N14_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Пример работы с двумерным массивом с помощью указателя
#include <iostream>

void print(int* a, int n, int m)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            std::cout << a[i, j]<<" ";
        std::cout << "\n";
    }
}

void fill(int* a, int n, int m)
{
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++)
            a[i, j]=0;            
}

int main()
{
    int *a;
    a = new int[4 * 5];
    fill(a, 4, 5);
    print(a, 4, 5);
    delete a;
}