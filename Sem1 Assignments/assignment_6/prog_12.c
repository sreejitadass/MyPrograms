// Write a function in C that takes a positive integer as input and returns the leading
// digit in its decimal representation. For example, the leading digit of 234567 is 2.
#include <stdio.h>
int leadingDigit(int n) {
    while (n > 9)
        n /= 10;
    return n;
}
int main() {
    int n = 712345;
    printf("%d", leadingDigit(n));
    return 0;
}
