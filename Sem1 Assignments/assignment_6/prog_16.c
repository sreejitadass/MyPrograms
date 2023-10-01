// Write a recursive function in C to find x^n, where x is a real value, and n is a positive
// integer.
#include <stdio.h>
double power(double x, int n) {
    if (n == 0) return 1;
    return x * power(x, n - 1);
}
int main() {
    double x = 2;
    int n = 5;
    printf("%g", power(x, n));
    return 0;
}