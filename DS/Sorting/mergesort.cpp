#include<iostream>
using namespace std;

void mergeSort(int arr[],int lb,int ub)
{
    int mid=(lb+ub)/2;
    mergeSort(arr,lb,mid);
    mergeSort(arr,mid+1,ub);
    merge(arr,lb,mid,ub);
}

void merge(int arr[],int lb,int mid,int ub)
{
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0,j=mid+1,k=0;
    int B[n];
    while(i<=mid && j<=ub)
    {
        if(arr[i]<arr[j])
            B[k++]=arr[i++];
        else
            B[k++]=arr[j++];
    }
    if(i>mid)
    {
        while(j<=ub)
            B[k++]=arr[j++];
    }
    else
    {
        while(i<=mid)
            B[k++]=arr[i++];
    }
    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++)
        cout<<B[i]<<" ";
}

int main()
{
    int arr[]={12,87,43,10,56,33,21,5,67};
    int n=sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,n-1);
}