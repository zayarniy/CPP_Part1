// N16 Параметры структуры. Пример.
//1. Простейший случай

#include <iostream>

/* объявление типа структуры */
struct struct_type {
	int a, b;
	char ch;
};

//Прототип функции
void f1(struct_type parm);

int main(void)
{
	struct_type arg;    /* объявление arg */
	arg.a = 1000;
	arg.b = 10;
	arg.ch = 'F';
	f1(arg);
	//return 0;
}

void f1(struct_type param) {	
	std::cout << param.a << " " << param.b << " " << param.ch;
}