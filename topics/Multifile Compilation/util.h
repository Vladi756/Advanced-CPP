#ifndef UTILS
#define UTILS

// Function Declarations

struct Rectangle {
    double length;
    double width;
};

double area(Rectangle rectangle);
double area(double length, double width);
double area(double length);
double pow(double base, int pow = 2);

#endif // UTILS
