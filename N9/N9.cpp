// N9.cpp : �������� ���������� �++. �������.
//

#include <iostream>

int main()
{
#pragma region MyRegion
    int n = 100;
    double* pointer2 = new double[n];//����������� �������� 10 ��������� ���� int
    pointer2[0] = 10;
    (*pointer2) = 10;
    pointer2[1] = 10;
    (*(pointer2 + 1)) = 10;
    //printf("%p %p", pointer2, pointer2 + 1);
    for (int i = 0; i < n; i++)
        pointer2[i] = i;
    //for (int i = 0; i < n; i++) printf("%p %lf\n", pointer2 + i, (*(pointer2 + i)));
    delete pointer2;//����������� ������
#pragma endregion

    //��������� ���� void (��� ������ ����������) � ��� ����������� ��� ���������, 
    //������� ����� ��������� �� ������� ������ ���� ������
    void* voidpointer;
    int i = 0;
    (voidpointer) = &i;
    (*(int*)voidpointer) = 1;
    printf("%i %p", (*(int*)voidpointer), voidpointer);
    //for (int i = 0; i < 100; i++)


}