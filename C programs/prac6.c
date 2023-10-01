#include <stdio.h>
int main()
{
    int n,sum=0,t=9;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        sum=sum+t;
        t=t*10+9;
    }
    printf("Sum of series= %d", sum);
    return 0;
}
