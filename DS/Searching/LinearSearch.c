#include<stdio.h>
#include<stdbool.h>

bool flag=false;

int LinearSearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            flag=true;
            return i;
        }
    }
}

int main()
{
    int arr[]={2,5,8,1,9,3,11,54,4};    //array may not be sorted
    int n=sizeof(arr)/sizeof(arr[0]);
    int key;
    printf("Enter the key element to be searched: ");
    scanf("%d",&key);
    int pos=LinearSearch(arr,n,key);
    if(flag==false)
        printf("Element not found");
    else
        printf("Element found at index %d ",pos);
    return 0;
}