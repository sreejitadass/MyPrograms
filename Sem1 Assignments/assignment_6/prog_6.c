// Write a function in C to print all Armstrong numbers inside a given range [a, b]. You
// need to pass a and b as parameters to the function.
#include <stdio.h>
#include <math.h>
int isArmstrong(int n) {
    int digits = 0, sum = 0;
    for (int m = n; m; m /= 10)
        digits++;
    for (int m = n; m; m /= 10)
        sum += (int) pow(m % 10, digits);
    return n == sum;
}
void printArmstrongNumbers(int a, int b) {
    for (int n = a; n <= b; n++)
        if (isArmstrong(n))
            printf("%d\n", n);
}
int main() {
    int a = 10, b = 3000;
    printArmstrongNumbers(a, b);
    return 0;
}
