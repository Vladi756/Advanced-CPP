#include <iostream>
#include <iostream>

double pow(double base, int pow = 2){ 	// Default argument is 2 (i.e. squared)
    int total = 1;
    for(int i = 0; i < pow; i++){
        total *= base;
    }
    return total;
}


int main(){

    std::cout << pow(2, 5) << std::endl;
    std::cout << pow(2) << std::endl; 	// 2nd argument isn't passed so goes to default arg (2)
    return 0;
}
