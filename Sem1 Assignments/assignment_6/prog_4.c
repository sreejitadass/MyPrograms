// Write a function in C to print all prime numbers inside a given range [a, b]. You need
// to pass a and b as parameters to the function.
#include <stdio.h>
#include <math.h>
int isPrime(int n) {
    double sqrt_n = sqrt(n);
    for (int i = 2; i <= sqrt_n; i++)
        if (n % i == 0)
            return 0;
return 1;
}
void printPrimes(int a, int b) {
    for (int n = a; n <= b; n++)
        if (isPrime(n))
            printf("%d\n", n);
}
int main() {
    int a = 30, b = 300;
    printPrimes(a, b);
return 0;
}
