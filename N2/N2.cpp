//��������� ���� ������ �++. ����������� �������� � ����������. ������� �����������.

#include <iostream>

const float PI = 3.1415;
int R = 10;//���������� ����������

int f()
{
    int i=2;//��������� ���������� (������ �������)
    float S = R * 10 * 10;
    return 1;
}

int main()
{
    
    int i = 1;
    float f = 3.14;
    char s = 'Z';
    char s1 = s* 2;
    std::cout << "sizeof(int):"<<sizeof(int)<<"\n";
    std::cout << "sizeof(float):" << sizeof(float)<<std::endl;
    std::cout << "sizeof(double):" << sizeof(double) << std::endl;
    std::cout << "sizeof(char):" << sizeof(char) << std::endl;
    std::cout << s1 << std::endl;
}