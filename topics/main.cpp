#include <iostream>
#include <vector>

// Custom Namespace
namespace utils {
    void print_array(const int data[], int size){
        for(int i = 0; i < size; i++){
            std::cout << data[i] << std::endl;
        }
    }
}


int main(){

    int data[] = {1, 2, 3};
    utils::print_array(data, 3);
    std::cout << data[0] << std::endl;

    return 0;
}
