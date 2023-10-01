#include <stdio.h>

void MoveZeroestoEnd(int arr[],int n)
{
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[k++]=arr[i];
        }
    }
        while(k<n)
        {
            arr[k++]=0;
        }
}

int main()
{
    int arr[]={3,5,18,0,9,0,0,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    MoveZeroestoEnd(arr,n);
    printf("New array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}