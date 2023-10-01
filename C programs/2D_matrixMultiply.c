#include<stdio.h>
int m,n,p,q,i,j,k;
int main()
{
    printf("input the order of first matrix: ");
    scanf("%d%d",&m,&n);
    printf("input the order of second matrix: ");
    scanf("%d%d",&p,&q);
    int a[m][n],b[p][q],mul[m][p];

    if(n!=p)
    {
        printf("Cannot be multiplied");
    }

    printf("\nFor matrix 1: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enter the element at row %d and column %d: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nFor matrix 2: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("enter the element at row %d and column %d: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    //multiplication
    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            for(k=0;k<n;k++)
                mul[i][j]+=a[i][k]*b[k][j];
        }
    }

    //print
    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}