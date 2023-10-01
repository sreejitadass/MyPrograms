// Write a function in C to print all Perfect numbers inside a given range [a, b]. You
// need to pass a and b as parameters to the function.
#include <stdio.h>
int isPerfect(int n) {
    int n_2 = n / 2, sum = 0;
    for (int i = 1; i <= n_2; i++)
        if (n % i == 0)
            sum += i;
    return n == sum;
}
void printPerfectNumbers(int a, int b) {
    for (int n = a; n <= b; n++)
        if (isPerfect(n))
            printf("%d\n", n);
}
int main() {
    int a = 10, b = 30000;
    printPerfectNumbers(a, b);
    return 0;
}