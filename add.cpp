#include "add.h"
#include <iostream>

int add(int a , int b){
    std::cout << "a - b = " << (a - b) << std::endl;
    return a + b;
}

int sub(int a , int b){
    return a - b;
}