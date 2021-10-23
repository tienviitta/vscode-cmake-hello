#include <iostream>
#include "hello.h"

int main(int, char **)
{
    std::string helloJim = generateHelloString("Jim II");
    std::cout << helloJim << std::endl;

    return 0;
}