// N7.cpp : Указатели и ссылки. Примеры объявлений.
//

#include <iostream>

//void swap(int* a,int* b)//C - * указатели
//{
//    int t = *a;//*a - взятие по адресу
//    *a = *b;
//    *b = t;
//}


//Ссылка — это тот же указатель, который неявно разыменовывается при доступе 
//к значению, на которое он указывает

void swap(int &a, int &b)//C++ - & ссылки
{
    int t = a;
    a = b;
    b = t;
}

void boo(const int &y) // y - это константная ссылка
{
    y = 8; // ошибка компиляции: константная ссылка не может изменить свое же значение!
}

int main()
{
#pragma region MyRegion
    //указатели указывают на область памяти

    //int i = 0;

    //int* pointer=&i;
    ////pointer = nullptr;//NULL - C nullptr - C++
    //printf("%i %p\n", i, pointer);
    //(*pointer)=5;//* - взятие значения
    //printf("%i %p\n", i, pointer);
    //int j = 100;
    //pointer = &j;
    //printf("%i %p\n", i, pointer);
#pragma endregion
    int x = 1, y = 2;
    swap(x, y);

}

