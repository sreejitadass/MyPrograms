// Write a recursive function in C to find the factorial of a positive integer.
#include <stdio.h>
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}
int main() {
    int n = 5;
    printf("%d", factorial(n));
    return 0;
}
