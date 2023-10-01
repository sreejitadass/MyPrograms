// Write a recursive function in C to find the sum of all even numbers in a given range.
#include <stdio.h>
int sumEven(int a, int b) {
    if (a > b) return 0;
    if (a % 2) return sumEven(a + 1, b);
    return a + sumEven(a + 2, b);
}
int main() {
    int a = 7, b = 13;
    printf("%d", sumEven(a, b));
    return 0;
}