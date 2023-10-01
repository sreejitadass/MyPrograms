#include<stdio.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void SelectionSort(int arr[],int n)
{
    int i,j,min_index;
    for(i=0;i<n-1;i++)
    {
        min_index=i;
        for(j=i+1;j<n;j++)
        {
            if (arr[j]<arr[min_index])
            {
                min_index=j;
            }
        }
    }
    swap(&arr[min_index],&arr[i]);
}

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int arr[]={9,6,12,8,7,43};
    int n=sizeof(arr)/sizeof(arr[0]);
    SelectionSort(arr,n);
    printf("Array in ascending order: ");
    printArray(arr,n);
    return 0;
}