#include <iostream>

int main(){

    int grades[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    // Size can be inffered by compiler with single D arrays.
    // With multidimensional arrays, you need to specify explicitely.
    // 3 arrays, 3 items per array so - [3][3]

    for(int i = 0; i < 3; i++){			
        for(int k = 0; k < 3; k++){			// for every one iteration of the outer loop, this loop runs 3 times.
            std::cout << grades[i][k] << std::endl;
        }
    }

    return 0;
}
