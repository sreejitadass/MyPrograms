#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,t=1;
    double sum=0.0;
    printf("enter no. of terms: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        sum+=(double)(pow(t,i)/pow(t,(i+1)));
        t+=2;
    }
    printf("Sum of series: %lg", sum);
    return 0;
}
