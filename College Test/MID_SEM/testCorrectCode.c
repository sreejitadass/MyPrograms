#include <stdio.h>
#include <math.h>

int reverse(int n) {
    int temp = n;
    int sum = 0;
    while (temp > 0) {
        int rem = temp % 10;
        sum = sum * 10 + rem;
        temp /= 10;
    }
    return sum;
}
 
int mirror(int n) {
    int temp = n;
    int sum = 0;
    while (temp > 0) {
        int rem = temp % 10;
        if (rem == 2)
            rem = 5;
        else if (rem == 5)
            rem = 2;
        sum = sum * 10 + rem;
        temp /= 10;
    }
    return sum;
}

int isPrime(int n) {
    double sqrt_n = sqrt(n);
    for (int i = 2; i <= sqrt_n; i++)
        if (n % 2 == 0) return 0;
    return 1;
}

int isAlpha(int n) {
    if (
        !isPrime(n) ||
        !isPrime(mirror(n)) ||
        !isPrime(reverse(n))||
        !isPrime(reverse(mirror(n)))
    ) return 0;
    int temp = n;
    while (temp > 0) {
        int rem = temp % 10;
        if (
            rem == 3 || rem == 4 || rem == 6 || rem == 7 || rem == 9
        ) return 0;
        temp /= 10;
    }
    return 1;
}

int main() {
    int a = 0, b = 0;
    printf("Enter a and b: ");
    scanf("%d%d", &a, &b);
    for (; a <= b; a++)
        if (isAlpha(a)) printf("%d\n", a);
    return 0;
}
