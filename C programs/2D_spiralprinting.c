#include<stdio.h>
int main()
{
    int n;
    printf("enter the order of square matrix: ");
    scanf("%d",&n);
    int a[n][n];
    //taking input
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("enter the element: ");
            scanf("%d",&a[i][j]);
        }
    }

    //spiral printing
    