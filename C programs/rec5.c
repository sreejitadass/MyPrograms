#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Summation of first %d natural numbers: %d", n,Rsum(n));
    return 0;
}

int Rsum(int x)
{
    if(x>1)
        return x+Rsum(x-1);
    else
        return 1;
}
