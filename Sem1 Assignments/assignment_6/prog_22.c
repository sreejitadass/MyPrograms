// Write a recursive function in C to find the greatest common divisor (GCD) of two
// numbers
#include <stdio.h>
int gcd(int a, int b) {
    if (b != 0) return gcd(b, a % b);
    return a;
}
int main() {
    int a = 8, b = 12;
    printf("%d", gcd(a, b));
    return 0;
}