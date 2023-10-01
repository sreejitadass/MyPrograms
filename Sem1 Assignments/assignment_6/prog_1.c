// Write a function in C to compute the area of a circle. You must pass the circle’s
// diameter as a parameter to the function. Write the main function and call it from the
// main function. You need to define the function before the main function.
#include <stdio.h>
#include <math.h>
double area(double diameter) {
    return M_PI * diameter * diameter / 4.0;
}
int main() {
    double d = 2.0;
    printf("Area: %g\n", area(d));
    return 0;
}
