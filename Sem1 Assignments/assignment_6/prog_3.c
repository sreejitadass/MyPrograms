// Write a function in C to check whether a number is Armstrong or not. If it is an
// Armstrong number, the function should return 1. Otherwise, it should return 0.
// Write the main function and call the function from the main function. You need to
// define the function after the main function and declare the function outside (before)
// the main function.
#include <stdio.h>
#include <math.h>
int isArmstrong(int n);
int main() {
    int n = 371;
    printf(isArmstrong(n) ? "Armstrong\n" : "Not Armstrong\n");
    return 0;
}
int isArmstrong(int n) {
    int digits = 0, sum = 0;
    for (int m = n; m; m /= 10)
        digits++;
    for (int m = n; m; m /= 10)
        sum += (int) pow(m % 10, digits);
    return n == sum;
}