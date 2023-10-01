#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Sum of digits= %d", Rsum(n));
}


int Rsum(int x)
{
    int s;
    if(x!=0)
        return((x%10)+Rsum(x/10));
    else
        return 0;
}

