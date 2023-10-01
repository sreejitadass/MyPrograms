#include<stdio.h>

void BubbleSort(int arr[],int n)
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

void SelectionSort(int arr[],int n)
{
    int min_idx,temp=0;
    for(int i=0;i<n-1;i++)
    {
        min_idx=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_idx])
                min_idx=j;
        }
        if(min_idx!=i)
        {
            temp=arr[i];
            arr[i]=arr[min_idx];
            arr[min_idx]=temp;
        }
    }
}

void InsertionSort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
}

void Display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int ch,n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nThe array before sorting: ");
    Display(arr,n);
    printf("\n");

    printf("\n1.Bubble Sort");
    printf("\n2.Selection Sort");
    printf("\n3.Insertion Sort");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            BubbleSort(arr,n);
            printf("\nThe sorted array using Bubble Sort: ");
            Display(arr,n);
            break;
        case 2:
            SelectionSort(arr,n);
            printf("\nThe sorted array using Selection Sort: ");
            Display(arr,n);
            break;
        case 3:
            InsertionSort(arr,n);
            printf("\nThe sorted array using Insertion Sort: ");
            Display(arr,n);
            break;
        default:
            printf("\nInvalid choice");
    }
    return 0;
}