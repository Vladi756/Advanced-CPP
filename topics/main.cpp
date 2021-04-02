#include <iostream>
#include <string>


template <typename T>       // Templatized function which can take any variable type effectively
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main(){

    int a = 5;
    int b = 7;

    std::cout << "a" << a << std::endl;
    std::cout << "b" << b << std::endl;

    swap(a, b);

    std::cout << "a" << a << std::endl;
    std::cout << "b" << b << std::endl;

    std::string c = "Vladi";
    std::string d = "Mike";

    std::cout << "c" << c << std::endl;
    std::cout << "d" << d << std::endl;

    swap(c, d);

    std::cout << "c" << c << std::endl;
    std::cout << "d" << d << std::endl;

    return 0;
}


/*
    Function templatization is a good way to minimze overloading.
    This is in turn beneficial as it could potentiall save lots of lines
    of code, because functions would not need to be repeated.
*/
