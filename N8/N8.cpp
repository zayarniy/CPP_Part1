// N8.cpp : ���������� ������������ ������� �++. 
//

//����������� ��������� ������
/*
#pragma region MyRegion
#define N 20//������������ ���������� ���������� (�������� ������)

#include <iostream>

int main()
{
    //��� ������� ��������� ���������� ������
    int name[10];//����������� ��������� ����� � ������
    const int n = 10;//����������� ��������� ����� � ������, ����� ���������
    int name1[n];
    int name2[N];

    std::cout << "Hello World!\n";
}
#pragma endregion

*/
#include <iostream>

int main()
{
    int* pointer = new int;//�������� ����� � ������ ����������� (�� ����� ��������� ���������)
    (*pointer) = 0;
    printf("%p %i",pointer, (*pointer));

    int n = 100;
    int* pointer2 = new int[n];//����������� �������� 10 ��������� ���� int

    delete pointer;
    delete pointer2;//����������� ������


}