#include<stdio.h>

void Sort(int arr[],int n)
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

void FindMissing(int arr[],int n)
{
    Sort(arr,n);
    int diff=arr[0]-0;

    printf("The missing elements are: ");
    for(int i=0;i<n;i++)
    {
        if(arr[i]-i != diff)
        {
            while(diff < arr[i]-i)
            {
                printf("%d ",i+diff);
                diff++;
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    FindMissing(arr,n);
    return 0;
}