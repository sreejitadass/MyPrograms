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
    int sum=0,max=0,max_row;
    for(int i=0;i<m;i++)
    {
        sum=0;
        for(int j=0;j<n;j++)
        {
            sum+=matrix[i][j];
        }
        if(sum>max)
        {
            max=sum;
            max_row=i+1;
        }
    }
        printf("Maximum sum = %d for row = %d ",max,max_row);
    return 0;
}