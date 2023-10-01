#include <stdio.h>
int main()
{
    int m,n,p;
    printf("For first matrix\n");
    printf("enter number of rows: ");
    scanf("%d",&m);
    printf("enter number of columns: ");
    scanf("%d",&n);
    printf("For second matrix\n");
    printf("enter number of rows: ");
    scanf("%d",&n);
    printf("enter number of columns: ");
    scanf("%d",&p);
    int **a,**b,**mul;
    a=(int **)calloc(m,sizeof(int *));
    b=(int **)calloc(n,sizeof(int *));
    mul=(int **)calloc(m,sizeof(int *));
    for(int i=0;i<m;i++)
        a[i]=calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
        b[i]=calloc(p,sizeof(int));
    for(int i=0;i<m;i++)
        mul[i]=calloc(m,sizeof(int));
    printf("Matrix 1\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("enter element: ");
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix 2\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            printf("enter element: ");
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<p;j++)
        {
            for(int k=0;k<n;k++)
                mul[i][j]+=a[i][k]*b[k][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<p;j++)
            printf("%d ",mul[i][j]);
        printf("\n");
    }
    return 0;
}
