#include<stdio.h>

void swap(int *a,int *b);

void EvenOdd(int arr[],int n)
{
    int l=0;
    int r=n-1;
    while(l<r)
    {
        if(arr[l]%2==0)
            l++;
        else if(arr[r]%2!=0)
            r--;
        else
        {
            swap(&arr[l],&arr[r]);
            l++;
            r--;
        }
    }
}

void swap(int *a,int *b)
{
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the element: ");
        scanf("%d",&arr[i]);
    }
    EvenOdd(arr,n);

    printf("Array after rearranging: ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}