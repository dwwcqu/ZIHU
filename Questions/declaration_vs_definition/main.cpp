#include <iostream>

void A();

int main()
{
    A(0);
    return 0;
}

void A()
{
    std::cout << "A.cpp A() function definition!\n";
}