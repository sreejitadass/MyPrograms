// Write a recursive function in C to find the ith number in the Fibonacci sequence.
#include <stdio.h>
int fibonacci(int i) {
    if (i == 0) return 0;
    if (i == 1) return 1;
    return fibonacci (i - 1) + fibonacci (i - 2);
}
int main() {
    int i = 10;
    printf("%d", fibonacci(i));
    return 0;
}