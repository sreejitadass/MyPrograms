// Write a function in C that takes a positive integer n as an argument and returns the
// smallest power of two that is greater than or equal to n.
#include <stdio.h>
int smallest_power_of_2(int n) {
    int i = 1;
    while (i < n) i *= 2;
    return i;
}
int main() {
    int n = 16;
    printf("%d", smallest_power_of_2(n));
    return 0;
}
