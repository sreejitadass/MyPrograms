#include <stdio.h>
int main()
{
    int sum=0,i,n,term=1,diff=1;
    printf("enter the number of terms: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        sum+=term;
        term+=diff;
        diff+=2;

    }
    printf("Sum of series: %d", sum);
    return 0;
}
