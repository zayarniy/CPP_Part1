// N21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include "Complex.h"

using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");
	double ra, ia, rb, ib, r, i;
	cout << "Введите комплексные числа: ";
	input(ra, ia);
	input(rb, ib);
	cout << "Сложение: ";
	add(ra, ia, rb, ib, r, i);
	print(r, i);
	cout << "Произведение: ";
	mul(ra, ia, rb, ib, r, i);
	print(r, i);
	cout << "Деление: ";
	div(ra, ia, rb, ib, r, i);
	print(r, i);
	return EXIT_SUCCESS;
}
