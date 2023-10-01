#include <stdio.h>
int main()
{
    int n,i,j,ch=0;
    printf("enter number of rows and columns: ");
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enter element at row %d and column %d:  ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j && a[i][j]==1)
            {
               ch++;
            }
        }
    }
    if(ch==n)
    {
        printf("identity matrix");
    }
    else
    {
        printf("not an identity matrix");
    }
    return 0;
}