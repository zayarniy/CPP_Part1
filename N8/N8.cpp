// N8.cpp : Управление динамической памятью С++. 
//

//статическое выделение памяти
/*
#pragma region MyRegion
#define N 20//определяются переменные компиляции (ускоряет работу)

#include <iostream>

int main()
{
    //При запуске программы выделяется память
    int name[10];//статическое выделение места в памяти
    const int n = 10;//статическое выделение места в памяти, через константу
    int name1[n];
    int name2[N];

    std::cout << "Hello World!\n";
}
#pragma endregion

*/
#include <iostream>

int main()
{
    int* pointer = new int;//выделяем место в памяти динамически (во время выполения программы)
    (*pointer) = 0;
    printf("%p %i",pointer, (*pointer));

    int n = 100;
    int* pointer2 = new int[n];//динамически выделяем 10 элементов типа int

    delete pointer;
    delete pointer2;//Освобождаем память


}