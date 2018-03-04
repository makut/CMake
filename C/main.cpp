# include <iostream>
# include "main.h"

void messageC()
{
    std::cout << "MainProject\n";
    messageB();
}

int main()
{
    messageC();
}