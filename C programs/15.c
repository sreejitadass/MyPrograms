#include <stdio.h>
int main()
{
    double sum=0.0;
    int n,i;
    printf("enter no. of terms: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        sum+=(double)((i*i)+((i+1)*(i+1)))/(i+2);
    }
    printf("Sum of series: %lg", sum);
    return 0;
}
