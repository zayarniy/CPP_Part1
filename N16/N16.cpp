// N16 ��������� ���������. ������.
//1. ���������� ������

#include <iostream>

/* ���������� ���� ��������� */
struct struct_type {
	int a, b;
	char ch;
};

//�������� �������
void f1(struct_type parm);

int main(void)
{
	struct_type arg;    /* ���������� arg */
	arg.a = 1000;
	arg.b = 10;
	arg.ch = 'F';
	f1(arg);
	//return 0;
}

void f1(struct_type param) {	
	std::cout << param.a << " " << param.b << " " << param.ch;
}