

#include <iostream>

#include "my_math.h"

int main(){

    std::cout << "begin..." << std::endl;
    int a = 202;
    int b = 8;

    auto c = add(a , b );
    auto d = sub(a , b);

    std::cout << "add = " << c << std::endl;
    std::cout << "sub = " << d << std::endl;
    return 0;
}
