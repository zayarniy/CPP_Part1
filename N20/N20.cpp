// N20.cpp :  ������������ ����. ������.
//

#include <iostream>

// ������������ ���� ���������� ������� ����, � ������� ������������� ������������ ���� ���������������.

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
