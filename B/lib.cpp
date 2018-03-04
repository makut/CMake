# include "lib.h"
# include <iostream>

void messageA();

void messageB()
{
    std::cout << "BProject\n";
    messageA();
}