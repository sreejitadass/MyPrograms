#include<stdio.h>

void Sort(int arr[],int n)
{
    int temp=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])     
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int RangeofNumbers(int BST[],int n)
{
    int k1,k2;
    printf("Enter the value of lower bound: ");
    scanf("%d",&k1);
    printf("Enter the value of upper bound: ");
    scanf("%d",&k2);

    Sort(BST,n);

    printf("\nThe numbers between %d and %d in the BST is: ",k1,k2);
    for(int i=0;i<n;i++)
    {
        if(BST[i]>k1 && BST[i]<k2)
            printf("%d ",BST[i]);
    }
}

int main()
{
    int n;
    printf("Enter the number of nodes in a BST: ");
    scanf("%d",&n);
    int BST[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter node %d: ",i+1);
        scanf("%d",&BST[i]);
    }

    RangeofNumbers(BST,n);
    return 0;
}