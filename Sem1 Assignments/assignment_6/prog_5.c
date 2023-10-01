// Write a function in C to print all Strong numbers inside a given range [a, b]. You
// need to pass a and b as parameters to the function.
#include <stdio.h>
int factorial(int n) {
    int value = 1;
    for (n; n > 0; n--)
        value *= n;
return value;
}
int isStrong(int n) {
    int sum = 0;
    for (int m = n; m; m /= 10)
        sum += factorial(m % 10);
return n == sum;
}
void printStrongNumbers(int a, int b) {
    for (int n = a; n <= b; n++)
        if (isStrong(n))
            printf("%d\n", n);

}
int main() {
    int a = 10, b = 50000;
    printStrongNumbers(a, b);
return 0;
}