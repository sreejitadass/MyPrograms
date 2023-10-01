#include <stdio.h>
int BinSearch(int arr[],int x,int n)
{
    int mid,low,high;
    low=arr[0];
    high=arr[n-1];
    mid=(low+high)/2;
    while(low<=high)
    {
        if(x==arr[mid])
        {
            return mid;
        }
        if(x<arr[mid])
        {
            high=mid-1;
        }
        if(x>arr[mid])
        {
            low=mid+1;
        }
    }
    return -1;
}

int main()
{
    int n,result,x;
    int arr[]={2,8,6,9,-4,0,-7,3};
    n=sizeof(arr)/sizeof(arr[0]);
    printf("enter the search element: ");
    scanf("%d",&x);
    result=BinSearch(arr,x,n);
    (result==-1)?printf("element not found"):
    printf("element found at index %d",result);
    return 0;
}
