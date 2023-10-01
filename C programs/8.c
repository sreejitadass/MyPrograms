#include <stdio.h>
int main()
{
    int i,j,k,m,n=7;
    for(i=1;i<=n;i++)
    {
        for(j=n-1;j>=i;j--)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("%d",k);
        if(i>=2)
        {
            for(m=i-1;m>=1;m--)
                printf("%d",m);
        }
        printf("\n");
    }
    return 0;
}
