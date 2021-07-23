#include <iostream>

int max(int a, int b)
{
    if (a > b) return a; else return b;
    std::cout << "Output";
}

int main()
{
    //for (int i = 0,j=1,k=2; i < 5; i++,j=j+2*k,k+=2)
    //{
    //    std::cout << "Hello" << i << "\n";
    //    if (k == 10) break;//досрочное прерывание цикла
    //    if (j == 10) continue;//досрочное выполнение следующей итерации цикла
    //    std::cout << "Word" << i << "\n";
    //}
    return 1;//возвращает значение и прерывает выволнение функции
    for (int i = 0; i < 100; i++) {
        if (i % 2 != 0) continue;
        std::cout << i << "\n";
    }

    int i = 2;

}