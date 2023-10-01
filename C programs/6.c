#include<stdio.h>
int main()
{
    int i,j,n=10,k=1,ch='A';
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
                printf("%d", k);
            else
                printf("%c",ch);
         }
        printf("\n");
        if(i%2==0)
            k++;
        else
            ch++;
    }
    return 0;
}
