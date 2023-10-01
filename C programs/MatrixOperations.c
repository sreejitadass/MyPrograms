#include<stdio.h>

void Trace(int n,int A[n][n],int B[n][n])
{
    int traceA=0,traceB=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                traceA+=A[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                traceB+=B[i][j];
        }
    }
    printf("Trace of matrix A: %d",traceA);
    printf("\nTrace of matrix B: %d",traceB);
}

void Transpose(int n,int A[n][n],int B[n][n],int trA[n][n],int trB[n][n])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            trA[i][j]=A[j][i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            trB[i][j]=B[j][i];
    }

    printf("\nTranspose of matrix A: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d ",trA[i][j]);
        printf("\n");
    }
    printf("\nTranspose of matrix B: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d ",trB[i][j]);
        printf("\n");
    }
}

void Multiplication(int n,int trA[n][n],int B[n][n])
{
    int mul[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                mul[i][j]+=trA[i][k]*B[k][j];
            }
        }
    }
    printf("\nMultiplication of transpose of A and B\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d ",mul[i][j]);
        printf("\n");
    }
    int det=0;
    det=mul[0][0]*((mul[1][1]*mul[2][2])-(mul[2][1]*mul[1][2]))
        -mul[0][1]*((mul[1][0]*mul[2][2])-(mul[2][0]*mul[1][2]))
        +mul[0][2]*((mul[1][0]*mul[2][1])-(mul[2][0]*mul[1][1]));
    if(det==0)
        printf("\nSingular matrix\n");
    else
        printf("\nNot a singular matrix\n");

}

int main()
{
    int n=3;
    int A[n][n],B[n][n];
    int trA[n][n],trB[n][n];
    printf("\nFor matrix A\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter element at row %d and column %d: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nFor matrix B\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter element at row %d and column %d: ",i,j);
            scanf("%d",&B[i][j]);
        }
    }

    Trace(n,A,B);
    Transpose(n,A,B,trA,trB);
    Multiplication(n,trA,B);
    return 0;
}