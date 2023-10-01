// Write a function in C to check whether a number is prime or not. If it is a prime
// number, the function should return 1. Otherwise, it should return 0. Write the
// main function and call the function from the main function. You need to define the
// function after the main function and declare the function inside the main function.
#include <stdio.h>
#include <math.h>
int main() {
    int n = 37, isPrime(int n);
    printf(isPrime(n) ? "Prime\n" : "Not Prime\n");
    return 0;
}
int isPrime(int n) {
    double sqrt_n = sqrt(n);
    for (int i = 2; i <= sqrt_n; i++)
        if (n % i == 0)
            return 0;
return 1;
}
