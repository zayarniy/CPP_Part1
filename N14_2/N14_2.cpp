// N14_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// ѕример передачи двумерного массива

#include <iostream>

#define N 5

void print(int (*a)[N], int n, int m)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            std::cout << a[i][j]<<" ";
        std::cout << "\n";
    }
}

void fill(int(*a)[N], int n, int m)
{
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++)
            a[i][j]=0;
}

int main()
{
    int a[4][N];
    fill(a, 4, N);
    print(a, 4, N);
}