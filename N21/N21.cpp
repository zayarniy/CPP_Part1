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
	cout << "������� ����������� �����: ";
	input(ra, ia);
	input(rb, ib);
	cout << "��������: ";
	add(ra, ia, rb, ib, r, i);
	print(r, i);
	cout << "������������: ";
	mul(ra, ia, rb, ib, r, i);
	print(r, i);
	cout << "�������: ";
	div(ra, ia, rb, ib, r, i);
	print(r, i);
	return EXIT_SUCCESS;
}
