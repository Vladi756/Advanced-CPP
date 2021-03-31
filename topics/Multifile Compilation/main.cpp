#include <iostream>
#include "util.h"

// Calling functions

int main(){

    Rectangle rectangle;
    rectangle.length = 10;
    rectangle.width = 10;

    std::cout << area(rectangle.length, rectangle.width) << std::endl;;
    std::cout << area(rectangle.length) << std::endl;
    std::cout << area(rectangle) << std::endl;

    std::cout << pow(2, 5) << std::endl;
    std::cout << pow(2) << std::endl; // 2nd argument isn't passed so goes to default arg (2)
    return 0;
}
