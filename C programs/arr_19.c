#include <stdio.h>
int main()
{
    int r,c,i,j;
    int sum_c=0,sum_r=0;
    printf("enter number of rows: ");
    scanf("%d",&r);
    printf("enter number of columns: ");
    scanf("%d",&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("enter element at row %d and column %d",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum_r+=a[i][j];
        }
        printf("sum of elements of row %d = %d\n",i+1,sum_r);
        sum_r=0;
     }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum_c+=a[j][i];
        }

        printf("sum of elements of column %d = %d\n",i+1,sum_c);
        sum_c=0;
    }
    return 0;
}