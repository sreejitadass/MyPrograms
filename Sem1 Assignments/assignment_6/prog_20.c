// Write a recursive function in C to find the sum of digits in a positive integer.
#include <stdio.h>
int sumOfDigits(int n) {
    if (n == 0) return 0;
    return n % 10 + sumOfDigits(n / 10);
}
int main() {
    int n = 12345;
    printf("%d", sumOfDigits(n));
    return 0;
}