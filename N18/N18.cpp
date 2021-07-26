// N18.cpp. Параметры-функции. Пример.
//

#include <iostream>
//Протатипы функций
double f1(double);
double f2(double);
double f3(double);
void Table(double, double, int, double(*)(double));


int main()
{
    Table(0, 2, 10, f3);    
    int a[10];
    std::cout<<"Positives:"<<CountIf(a, 10, Condiniontal1);
    std::cout << "Odds:" << CountIf(a, 10, Condiniontal2);
    std::cout << "Odds:" << CountIf(a, 10, Condiniontal2);
    std::cout << "Kratnoe 3 and positives:" << CountIf(a, 10, Condiniontal3);
}


//Описание функций
//Передача в функцию Table другой функции(другое действие)
void Table(double a, double b, int n, double (*f)(double))
{
    double h = (b - a) / n;
    double x = a;
    while (x <= b)
    {
        std::cout << x << " " << f(x)<<"\n";
        x += h;
    }
}

int CountIf(int a[],int size, int (*Predicate)(int))
{
    int count = 0;
    for (int i = 0; i < size; i++)
        if (Predicate(a[i]) == 1) count++;
}

int Condiniontal1(int n)
{
    return n > 0;
}

int Condiniontal2(int n)
{
    return n % 2==0;
}

int Condiniontal3(int n)
{
    return n % 3 == 0 && n>0;
}


double f1(double x)
{
    return x ;
}

double f2(double x)
{
    return x * x;
}

double f3(double x)
{
    return x * x * x;
}

