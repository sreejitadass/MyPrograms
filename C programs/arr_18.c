#include <stdio.h>
int main()
{
    int m,n,i,j;
    printf("enter number of rows: ");
    scanf("%d",&m);
    printf("enter number of columns: ");
    scanf("%d",&n);
    int a[m][n],tr[n][m];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enter element: ");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            tr[i][j]=a[j][i];
        }
    }
    printf("Transpose of the matrix: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d  ",tr[i][j]);
        }
        printf("\n");
    }
    return 0;
}