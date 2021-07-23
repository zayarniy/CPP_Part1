// Структурный тип С++. Пример.

#include <iostream>
#include <cmath>

struct point
{
    double x, y;    
};

double distance(point A, point B)
{
    return sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
}

double distance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

int main()
{
    point A = { 0,1 }, B{ 2,2 };
    //A.x = 0;
    //A.y = 1;
    B.x = 2;
    B.y = 2;
    double dist = distance(A, B);
    double dist1 = distance(A.x,A.y, B.x,B.y);
    std::cout << "Distance:"<<dist;
}