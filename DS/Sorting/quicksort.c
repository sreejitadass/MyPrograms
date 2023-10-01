#include<stdio.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int Partition(int a[],int lb,int ub)
{
    int start=lb,end=ub,pivot=a[lb];
    while(start<end)
    {
        while(a[start]<=pivot)
            start++;
        while(a[end]>pivot)
            end--;
        if(start<end)
            swap(&a[start],&a[end]);
    }
    swap(&a[lb],&a[end]);
    return end;
}

void QuickSort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
        int loc=Partition(a,lb,ub);
        QuickSort(a,lb,loc-1);
        QuickSort(a,loc+1,ub);
    }
}

void Display(int a[],int n)
{
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}

int main()
{
    int n;
    printf("Enter the number of elements of array: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    int lb=0,ub=n-1;
    printf("\nOriginal array:  ");
    Display(a,n);

    QuickSort(a,lb,ub);
    printf("\nSorted array:  ");
    Display(a,n);

    return 0;
}