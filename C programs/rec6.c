#include <stdio.h>
int main()
{
    int n,x;
    printf("Enter the number: \n");
    scanf("%d", &x);
    printf("Enter the power: \n");
    scanf("%d", &n);
    printf("Power of %d raised to %d is: %d", x,n,Rpow(x,n));
    return 0;
}

int Rpow(int y,int m)
{
    if (m==0)
        return 1;
    return (y*Rpow(y,m-1));
}
