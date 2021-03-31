#include <iostream>
#include <iostream>

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void swap(std::string &a, std::string &b){    // Same name but different method signatures so overloading makes it work
    std::string temp = a;
    a = b;
    b = temp;

}

int main(){

    int a = 5;
    int b = 7;

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    swap(a,b);

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    std::string c = "Hey ";
    std::string d = " there!";

    std::cout << "" << std::endl;

    std::cout << "c: " << c << std::endl;
    std::cout << "d: " << d << std::endl;

    swap(c,d);

    std::cout << "c: " << c << std::endl;
    std::cout << "d: " << d << std::endl;

    return 0;
}
