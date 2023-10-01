// Write a function in C that takes a real number as an argument and returns that
// number’s absolute value.
#include <stdio.h>
double absolute(double real) {
    return (real > 0.0 ? real : - real);
}
int main() {
    double real = -2.3;
    printf("%lg", absolute(real));
    return 0;
}