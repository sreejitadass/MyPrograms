#include<stdio.h>

void FindDuplicates(int arr[],int n)
{
    int freq[n];
    for(int i=0;i<n;i++)
    {
        freq[i]=0;
        for(int j=i;j<n;j++)
        {
            if(arr[i]==arr[j])
                freq[i]++;
        }
        if(freq[i]>1)
            printf("\n%d occurs %d times",arr[i],freq[i]);
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
    FindDuplicates(arr,n);
}