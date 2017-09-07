#include "pk_process.h"

#include <iostream>

void func(Process* ref)
{
    std::cout << "Hello World!" << std::endl;
}

int main()
{
    Service.add(func);
    while (1)
    {
        Service.run();
    }
}
