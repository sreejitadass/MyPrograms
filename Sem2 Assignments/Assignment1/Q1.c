#include<stdio.h>
void Matrix(int n,int arr[n][n])
{
    int first_row_sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            first_row_sum+=arr[i][j];
        }
        printf("Sum of first row elements: %d",first_row_sum);
        break;
    }

    printf("\nMatrix after scalar multiplication: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]*=first_row_sum;
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }   
}

int main()
{
    int n;
    printf("enter order of matrix: ");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("enter the element: ");
            scanf("%d",&arr[i][j]);
        }
    }
    Matrix(n,arr);
    return 0;
}
