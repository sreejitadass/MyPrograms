#include<stdio.h>
int main()
{
    int i,j,r,c;
    printf("input number of rows: ");
    scanf("%d",&r);
    printf("input number of columns: ");
    scanf("%d",&c);
    int **a,**b,**add,**sub,**mul;
    a=(int **)calloc(r,sizeof(int *));
    b=(int **)calloc(r,sizeof(int *));
    add=(int **)calloc(r,sizeof(int *));
    sub=(int **)calloc(r,sizeof(int *));
    for(i=0;i<r;i++)
    {
        a[i]=(int *)calloc(c,sizeof(int));
        b[i]=(int *)calloc(c,sizeof(int));
        add[i]=(int *)calloc(c,sizeof(int));
        sub[i]=(int *)calloc(c,sizeof(int));
        mul[i]=(int *)calloc(c,sizeof(int));
    }
    printf("For 1st matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("enter element: ");
            scanf("%d",&a[i][j]);
        }
    }
    printf("For 2nd matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("enter element: ");
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          add[i][j]=a[i][j]+b[i][j];
          sub[i][j]=a[i][j]-b[i][j];
          mul[i][j]+=a[i][j]*b[i][j];
        }

    }
    printf("Addition of the matrices: \t\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",add[i][j]);
        printf("\n");
    }
    printf("Subtraction of the matrices: \t\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",sub[i][j]);
        printf("\n");
    }
    return 0;
}
