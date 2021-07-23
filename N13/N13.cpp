// ������� �++. �������� ���������� � ����������� �����������. �������.

#include <iostream>

void pause()
{
    std::cout<<"Press Enter to exit";
    std::cin;
}

//������������ �������� ���_�������(��������� �������)
double distance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

//�������� ���������� � ������� (���������� �����)
void swap(int x, int y)
{
    int t = x;
    x = y;
    y = t;
}

//����� �� C, �������� ����������
void swap2(int* x, int* y)
{
    int t = *x;//*x- ������ �������� �� ������
    *x = *y;
    *y = t;
}

//����� �� C++, �������� ������ (����� ���������� ������, ��� ��� ����� �������������� ��������)
void swap3(int& x, int& y)
{
    int t = x;//*x- ������ �������� �� ������
    x = y;
    y = t;
}


int main()
{
    //std::cout << distance(0,0,1,1);
    int a=2, b=3;
    swap(a, b);//�� ���������
    swap3(a, b);
    std::cout << "a:" << a << " b:" << b<<std::endl;
    pause();
}
