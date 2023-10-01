#include<stdio.h>
void MaxMinElement(int arr[],int n)
{
    int max,min;
    max=min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    printf("Maximum element of array: %d",max);
    printf("\nMinimum element of array: %d",min);
}

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("enter element at index %d: ",i);
        scanf("%d",&arr[i]);
    }
    MaxMinElement(arr,n);
    return 0;
}
