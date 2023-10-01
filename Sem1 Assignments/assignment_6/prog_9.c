// Write a function in C that takes three integers as arguments and returns the largest
// one’s value.
#include <stdio.h>
int max(int a, int b, int c) {
    return a > b ? (a > c ? a : c) : (b > c ? b : c);
}
int main() {
    int a = 4, b = 2, c = 1;
    printf("%d", max(a, b, c));
    return 0;
}
