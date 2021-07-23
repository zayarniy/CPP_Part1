//Управляющие операторы if и switch С++. Примеры. the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int m = 13;
	switch (m)//goto m;
	{
	case 1:
	case 2:
	case 12:
		std::cout << "Winter";
		break;
	case 3:
	case 4:
	case 5:
		std::cout << "Spring";
		break;
	default:
		std::cout << "Wrong month";
		break;

	}

}

