// IFDEF_Example.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <stdio.h>

#define TED 10

int main(void)
{
	#ifdef TED
		printf("Hi Ted\n");
	#else
		printf("Hi anyone\n");
	#endif
	#ifndef RALPH
		printf("RALPH not defined\n");
	#endif
	return 0;
}