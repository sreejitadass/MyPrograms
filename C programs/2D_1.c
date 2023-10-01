#include<stdio.h>
int main()
{
    int m,n;
    printf("enter number of rows: ");
    scanf("%d",&m);
    printf("enter number of columns: ");
    scanf("%d",&n);
    int matrix[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("enter element at row %d and column %d: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    int l1,r1,l2,r2,sum=0;
    printf("enter 1st coordinate: ");
    scanf("%d%d",&l1,&r1);
    printf("enter 2nd coordinate: ");
    scanf("%d%d",&l2,&r2);
    for(int i=l1;i<=l2;i++)
    {
        for(int j=r1;j<=r2;j++)
            sum+=matrix[i][j];
    }
    printf("Sum of rectangle: %d",sum);
    return 0;  
}