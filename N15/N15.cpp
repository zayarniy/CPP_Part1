// N15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>

using namespace std;

//Шифр Цезаря (смещение символов)
string shifr(string s,int shift)
{
    for (int i = 0; i < s.size(); i++)
        s[i] = s[i] + shift;
    return s;
}

//Вывод массива строк на экран
void print(string s[], int n)
{
    for (int i = 0; i < n; i++)
        cout << s[i]<<"\n";
}


void print(char *s[], int n)
{
    for (int i = 0; i < n; i++)
        cout << s[i] << "\n";
}

int main()
{
    string str="abcd";
    std::cout << shifr(str,1);

    string ss[3];
    cout << "\n";
    ss[0] = "123";
    ss[1] = "123";
    ss[2] = "123";
    print(ss, 3);

    //char c = 'a';

    char* ss2[3];
    ss2[0] = new char[4];
    ss2[1] = new char[4];
    ss2[2] = new char[4];
    strcpy_s(ss2[0],4, "123");
    strcpy_s(ss2[1],4, "123");
    strcpy_s(ss2[2],4, "123");
    print(ss2, 3);
}