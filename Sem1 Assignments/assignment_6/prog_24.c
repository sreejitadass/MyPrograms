// Write a tail-recursive function in C to find the summation of the first n natural numbers.
#include <stdio.h>
int sum(int n, int result) {
    if (n == 0) return result;
    return sum(n - 1, n + result);
}
int main() {
    int n = 5;
    printf("%d", sum(n, 0));
    return 0;
}