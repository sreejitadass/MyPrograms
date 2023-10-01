// Write a tail-recursive function in C to find the factorial of a positive integer.\
#include <stdio.h>
int factorial(int n, int result) {
    if (n == 0) return result;
    return factorial(n - 1, n * result);
    }
int main() {
    int n = 5;
    printf("%d", factorial (n, 1));
    return 0;
}
