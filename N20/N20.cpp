// N20.cpp :  Пространства имен. Пример.
//

#include <iostream>

// Пространство имен определяет область кода, в которой гарантируется уникальность всех идентификаторов.

namespace MS
{
    class Console
    {

    };
}

namespace Norton
{
    class Console
    {

    };
}

using namespace std;

int main()
{
    MS::Console;
    Norton::Console;
    cout << "Hello World!\n";
}
