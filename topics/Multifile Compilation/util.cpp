#include "util.h"

// Function Definitions

double area(Rectangle rectangle){
    return rectangle.length * rectangle.width;
}

double area(double length, double width){ // Rectangle
    return length*width;
}

double area(double length){ // Square
    return length * length;
}

double pow(double base, int pow){
    int total = 1;
    for(int i = 0; i < pow; i++){
        total *= base;
    }
    return total;
}
