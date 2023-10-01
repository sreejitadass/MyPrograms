#include<stdio.h>
#include<stdbool.h>

bool flag=false;

int BinSearch(int arr[],int n,int key)
{
    int l=0;
    int h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]==key)
        {
            flag=true;
            return mid;
        }
        if(arr[mid]<key)
            l=mid+1;
        else
            h=mid-1;
    }
}

int main()
{
    int arr[]={3,5,9,12,23,31,35,39,49,58};    //array must be sorted
    int n=sizeof(arr)/sizeof(arr[0]);
    int key;
    printf("Enter the key element to be searched: ");
    scanf("%d",&key);
    int pos=BinSearch(arr,n,key);
    if(flag==false)
        printf("Element not found");
    else
        printf("Element found at index %d ",pos);
    return 0;
}