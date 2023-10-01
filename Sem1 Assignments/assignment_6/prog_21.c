// Write a recursive function in C to reverse a positive integer.
#include <stdio.h>
int reverse(int n, int r) {
    if (n < 10) return r * 10 + n;
    return reverse(n / 10, r * 10 + n % 10);
}
int main() {
    int n = 12345;
    printf("%d", reverse(n, 0));
    return 0;
}