#include <iostream>
#include <string>


template <typename T>       // Templatized function which can take any variable type effectively.
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void swap(T a[], T b[], int size){  // Doesn't need to be passed by reference as array decay to pointer.
    for(int i = 0; i < size; i++){
        T temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }

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

    int grade[] = {1, 2, 3, 4, 5, 6, 7};
    int sevens[] = {7, 7, 7, 7, 7, 7, 7,};

    std::cout << "grades" << std::endl;
    for(int i = 0; i < 7; i++){
        std::cout << grade[i] << std::endl;
    }
    std::cout << "sevens" << std::endl;
    for(int i = 0; i < 7; i++){
        std::cout << sevens[i] << std::endl;
    }

    swap(grade, sevens, 7);

    std::cout << "grades" << std::endl;
    for(int i = 0; i < 7; i++){
        std::cout << grade[i] << std::endl;
    }
    std::cout << "sevens" << std::endl;
    for(int i = 0; i < 7; i++){
        std::cout << sevens[i] << std::endl;
    }

    return 0;
}


/*
    By utilizing both the concepts of function overloading, and function templatization, we are able to create one swap function with enormous capabilties. 
    The function templatizations makes it so one swap function can deal with any type (int, float, double, etc.) and by overloading that function with another
    swap function that has a different method signature (i.e. different number of parameters) the swap function's capability has increased in that it can also 
    swap out full arrays. Very cool stuff.
*/
