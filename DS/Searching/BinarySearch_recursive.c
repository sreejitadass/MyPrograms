#include<stdio.h>
#include<stdbool.h>

bool flag=false;

int arr[]={3,5,9,12,23,31,35,39,49,58};
int n=sizeof(arr)/sizeof(arr[0]);

int RBinSearch(int l,int h,int key)
{
    int mid=(l+h)/2;
    if(l==h)    //smaller problem
    {
        if(arr[mid]==key)
            return l;
        else
        {
            flag=true;
            return 0;
        }
    }
    else            //bigger problem
    {
        if(arr[mid]==key)
            return mid;
        if(arr[mid]<key)
            return RBinSearch(mid+1,h,key);
        else
            return RBinSearch(l,mid-1,key);
    }
}

int main()
{
    int key;
    printf("Enter the key element to be searched: ");
    scanf("%d",&key);
    int pos=RBinSearch(0,n-1,key);
    if(flag==true)
        printf("Element not found");
    else
        printf("Element found at position %d ",pos);
    
}