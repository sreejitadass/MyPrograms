#include <stdio.h>
int main()
{
    int i,j,k,m,n=69;
    for(i=65;i<=n;i++)
    {
        for(j=n-1;j>=i;j--)
            printf(" ");
        for(k=65;k<=i;k++)
            printf("%c",k);
        if(i>=66)
        {
            for(m=i-1;m>=65;m--)
                printf("%c", m);
        }
        printf("\n");
    }
    return 0;
}
