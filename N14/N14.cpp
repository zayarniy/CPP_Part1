// N14.cpp Параметры-массивы. Пример.
//

//Зачем массивы в качестве параметров передавать.
//Затем, чтобы их можно было обработать.

#include <iostream>

#define N 100
//const int N = 100;

void fillarray(int *array, int size)
{
    for (int i = 0; i < size; i++)
        array[i] = 0;
        //*(array+i) = 0;
}

void print(const int *array,int size)
{
    for (int i = 0; i < size; i++)
        std::cout << array[i]<<" ";
}

int main()
{
    int a[N];
    fillarray(a, 100);
    print(a,N);
}
