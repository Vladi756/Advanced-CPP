#include <iostream>
#include <vector>	// Neccessary pre-processor in order to work with vectors.

int main(){

    std::vector<std::vector<int>> grades = {{1,2,3},{4,5,6},{7,8,9}};   // Unlike n-D arrays, size doesn't need to be specified as vectors know their size cause they aren't stupid.

    for(int i = 0; i < 3; i++){
        for(int k = 0; k < 3; k++){
            std::cout << grades[i][k] << std::endl;	// Same index notation as single vector (and as array)
        }
    }

    return 0;
}
