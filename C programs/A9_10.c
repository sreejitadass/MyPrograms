#include<stdio.h>
#include<stdlib.h>

int **createMatrix(int n)
{
    int **matrix=(int **)calloc(n,sizeof(int *));
    for(int i=0;i<n;i++)
    {
        matrix[i]=(int *)calloc((i+1),sizeof(int));
    }
    return matrix;
}

void scanMatrix(int **matrix,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            printf("enter element at row %d and column %d: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
}

void printMatrix(int **matrix,int n)
{
    printf("lower triangular matrix: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}

int **freeMatrix(int **matrix,int n)
{
    for(int i=0;i<n;i++)
    {
            free(matrix[i]);
    }
    free(matrix);
    return NULL;
}

int main()
{
    int n;
    printf("enter the size of the matrix: ");
    scanf("%d",&n);
    int **matrix=createMatrix(n);
    scanMatrix(matrix,n);
    printMatrix(matrix,n);
    matrix = freeMatrix(matrix,n);
    return 0;
}