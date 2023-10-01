#include <stdio.h>
int main()
{
    int n,i,r,fact=1,sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int copy=n;
    while(n!=0)
    {
        r=n%10;
        for(i=1;i<=r;i++)
        {
            fact*=i;
            sum+=fact;
        }
        n/=10;
    }
    if(sum==copy)
        print("%d is a Krishnamurthy number", copy);
    else
        print("%d is not a Krishnamurthy number", copy);

    return 0;
}
