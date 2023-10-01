// Write a recursive function in C to find the sum of all odd numbers in a given range.
#include <stdio.h>
int sumOdd(int a, int b) {
    if (a > b) return 0;
    if (a % 2 == 0) return sumOdd(a + 1, b);
    return a + sumOdd(a + 2, b);
}
int main() {
    int a = 8, b = 11;
    printf("%d", sumOdd(a, b));
    return 0;
}