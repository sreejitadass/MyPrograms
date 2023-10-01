#include<stdio.h>

void Transpose(int m,int n,int matrix[m][n])
{
    int transpose[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            transpose[i][j]=matrix[j][i];
        }
    }

    printf("Transpose:  \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int m,n;
    printf("Enter the rows of matrix: ");
    scanf("%d",&m);
    printf("Enter the columns of matrix: ");
    scanf("%d",&n);
    int matrix[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter the element: ");
            scanf("%d",&matrix[i][j]);
        }
    }
    Transpose(m,n,matrix);

    return 0;
}