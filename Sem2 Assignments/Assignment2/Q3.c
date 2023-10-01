#include<stdio.h>
#include<stdlib.h>

int Difference(int n,int matrix[n][n])
{
    int LR_sum=0,RL_sum=0,absdiff=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                LR_sum+=matrix[i][j];
            if((i+j)==n-1)
                RL_sum+=matrix[i][j];
        }
    }
    absdiff=abs(LR_sum-RL_sum);
    return absdiff;
}

int main()
{
    int n;
    printf("enter order of matrix: ");
    scanf("%d",&n);
    int matrix[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter the element: ");
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Absolute Difference: %d",Difference(n,matrix));
    return 0;
}