// N19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//global namespace
int N;

namespace My {
    //���������� ����������
    int N = 10;
}

int main()
{
    //��������� ����������
    //extern int N;
    int N=20;
    std::cout<<"My:" << My::N<<"\n";    
    std::cout<<"Main:"<< N;
    
    //������ ����������� ������� ��������� ���������� ������������ ��������
    {
        int i = 1;;
        std::cout << i;
    }
    //std::cout << i;//���������� ����� ��� ���

}
