// N16 ��������� ���������. ������.
//2. �������� ��������� �� ������

#include <iostream>

/* ���������� ���� ��������� */
struct struct_type {
	int a[10];
	char *ch;
};

//�������� �������
void f1(struct_type *parm);

int main(void)
{
	struct_type arg;    /* ���������� arg */
	arg.a[0] = 1000;
	arg.a[1] = 2000;
	arg.a[2] = 3000;	
	arg.ch = new char[3];
	arg.ch[0] = '1';
	arg.ch[1] = '2';
	arg.ch[2] = 0;
	f1(&arg);
	//return 0;
}

void f1(struct_type *param) {
	for (int i = 0; i < 10; i++)
		std::cout << (*param).a[i]<<" ";
	std::cout  << " " << param->ch;
}