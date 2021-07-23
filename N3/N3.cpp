//Операции над скалярными данными С++. Приоритеты операций. Примеры выражений.

#include <iostream>
#include <bitset>
int main()
{

    //int i = 1;
    //float f = 3.14;
    //float d = 1.0 / 2;//0
    //float d1 = (float)1 / 2;//0

    ////1. (),a[1],.
    ////2. ++,--
    ////3. sizeof
    ////4. (тип) - приведение типа
    ////3. *,/,%
    ////4. +,-
    ////5. 
    //i = i + 2;
    //i += 2;
    //i -= 2;
    //i *= 2;
    //i /= 2;
    //i %= 2;
    //i++;//постинкремент
    //i--;//постдекримент
    //++i;
    //--i;
    //i = 5;
    //int k = i++;//k=5 i=6//постинкремент
    //int l = ++i;//l=6 i=6//прединкремент
    ////std::cout << i++;
    ////std::cout << i;

    //bool b = 2 * 2 == 4;//true -1,false - 0
    //bool b1 = true;
    //std::cout << (2*2!=4);

    //int age = 21;
    //
    ////if (age >= 20 && age <= 40) b = true; else b = false;
    //bool b2 = age >= 20 && age <= 40;
    //if (b2 == true) std::cout << "Подходит"; else std::cout << "Не походит";
    //int m = 1;
    //if (m == 1 || m == 2 || m == 12) std::cout << "Winter";
    //if (m == 3 || m == 4 || m == 5) std::cout << "Spring";
    //if (m >= 3 && m <= 5) std::cout << "Spring";
    //if (m == 6 || m == 7 || m == 8) std::cout << "Summer";
    //if (m == 9 || m == 10 || m == 11) std::cout << "Fall";

    //int num = 10;
    //if (num % 3 == 0 ^ num % 5 == 0);//^ - XOR искючающее ИЛИ (ЛИБО)


    //bool b3 = !(age >= 20 && age <= 40);
    //
    //Побитовые операции
    int bt = -1;
    //std::cout << ~bt;//Инверсия

    int bt2 = -1;
  //  std::cout << (bt2 >> 2);//Побитовый сдвиг влево
    int mask = 123;
    int bt3 = bt2 ^ mask;
    std::bitset<32>  x(bt2);
    std::bitset<32>  x1(mask);
    std::bitset<32>  x2(bt3);
    std::cout << x << "\n";
    std::cout << x1 << "\n";
    std::cout << x2 << "\n";
    bt3 = bt3 ^ mask;
    std::bitset<32>  x3(bt3);
    std::cout << x3 << "\n";
    // If you don't want a variable just create a temporary.
//    std::cout << std::bitset<32>(23456) << "\n";
    return 0;
}