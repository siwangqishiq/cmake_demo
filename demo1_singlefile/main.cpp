#include <iostream>

#include "add.h"

int main(){
    int a = 100;
    int b = 200;
    auto c = add(a , b);

    auto d = sub(a , b);
    
    std::cout << c << std::endl;
    std::cout << "Hello World \n" << std::endl;
    return 0;
}