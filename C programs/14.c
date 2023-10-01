#include <stdio.h>
int main()
{
    int sum=0,i,j,n;
    printf("enter the number of terms: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            sum+=j;
    }
    printf("sum of series: %d", sum);
    return 0;
}
