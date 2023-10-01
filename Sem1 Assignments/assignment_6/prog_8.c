// Write a function in C to find the minimum of two numbers.
#include <stdio.h>
int max(int a, int b) {
    return a > b ? a : b;
}
int main() {
    int a = 2, b = 3;
    printf("%d", max(a, b));
    return 0;
}
