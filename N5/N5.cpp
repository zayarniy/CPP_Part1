//Организация циклов в С++. Примеры.

#include <iostream>

int main()
{
    int i = 0;
    //while
    while (i < 5)
    {
        std::cout << "Hello" << i++ << "\n";
    }
}
//Организация циклов в С++. Примеры.

#include <iostream>

int main()
{
    int i = 0;
    //do while
    do
    {
        std::cout << "Hello" << i++ << "\n";
    } while (i < 5);
}

#include <iostream>

int main()
{
    for (int i = 0, j = 1, k = 2; i < 5; i++, j = j + 2 * k, k += 2)
    {
        std::cout << "Hello" << i << "\n";
    }
    int i = 2;
}
