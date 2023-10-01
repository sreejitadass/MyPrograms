// Write a recursive function in C to find the summation of the first n natural numbers.
#include <stdio.h>
unsigned int factorial(unsigned int n) {
    register unsigned int sum = 0;
    for (register unsigned int i = 1; i <= n; i++)
        sum += i;
    return sum;
}
int main() {
    unsigned int n = 10;
    printf("%u", factorial(n));
    return 0;
}