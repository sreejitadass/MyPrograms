#include<stdio.h>
#include<limits.h>

int secondLargest(int arr[],int n)
{
    int secondLargest=INT_MIN;
    int Largest=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>Largest)
            Largest=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>secondLargest && arr[i]!=Largest)
            secondLargest=arr[i];
    }
    return secondLargest;
}

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("enter element: ");
        scanf("%d",&arr[i]);
    }
    printf("Second largest element: %d",secondLargest(arr,n));
    return 0;
}