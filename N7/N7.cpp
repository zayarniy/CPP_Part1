// N7.cpp : ��������� � ������. ������� ����������.
//

#include <iostream>

//void swap(int* a,int* b)//C - * ���������
//{
//    int t = *a;//*a - ������ �� ������
//    *a = *b;
//    *b = t;
//}


//������ � ��� ��� �� ���������, ������� ������ ���������������� ��� ������� 
//� ��������, �� ������� �� ���������

void swap(int &a, int &b)//C++ - & ������
{
    int t = a;
    a = b;
    b = t;
}

void boo(const int &y) // y - ��� ����������� ������
{
    y = 8; // ������ ����������: ����������� ������ �� ����� �������� ���� �� ��������!
}

int main()
{
#pragma region MyRegion
    //��������� ��������� �� ������� ������

    //int i = 0;

    //int* pointer=&i;
    ////pointer = nullptr;//NULL - C nullptr - C++
    //printf("%i %p\n", i, pointer);
    //(*pointer)=5;//* - ������ ��������
    //printf("%i %p\n", i, pointer);
    //int j = 100;
    //pointer = &j;
    //printf("%i %p\n", i, pointer);
#pragma endregion
    int x = 1, y = 2;
    swap(x, y);

}

