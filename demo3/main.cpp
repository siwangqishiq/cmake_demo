
#include <iostream>
// #include "hello.h"

// #pragma comment(lib, "hello.lib")

namespace hello{
    extern void ShowHelper();
}

int main(){
    std::cout << "Hello CMake Demo2" << std::endl;
    hello::ShowHelper();
    return 0;
}

