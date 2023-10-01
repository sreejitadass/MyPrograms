// Write a recursive function in C to find the number of digits in a positive integer.
#include <stdio.h>
int digits(int n) {
    if (n == 0) return 0;
    return 1 + digits(n / 10);
}
int main() {
    int n = 12345;
    printf("%d", digits(n));
    return 0;
}
