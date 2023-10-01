#include <stdio.h>
void main()
{
    int i,j,k,n=15;
    for(i=1;i<=n;i++)
    {
        printf("*");
    }
    printf("\n");
    for(j=n-2;j>=1;j--)
    {
        for(k=1;k<=j;k++)
            printf(" ");
        printf("*\n");
    }
    for(i=1;i<=n;i++)
    {
        printf("*");
    }
}
