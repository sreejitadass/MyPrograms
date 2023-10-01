#include<iostream>
using namespace std;

int PeakElement(int arr[],int l,int h)
{
    int mid=l+(h-l)/2;

    if(mid==h || mid==l)
    {
        if(mid==h && arr[mid-1]<=arr[mid])
        {
            return arr[mid];
        }
        if(mid==l && arr[mid]>=arr[mid+1])
        {
            return arr[mid];
        }
    }
    else
    {
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        {
            return arr[mid];
        }
        else if(arr[mid-1]>arr[mid] && arr[mid]>arr[mid+1])
        {
            return PeakElement(arr,0,mid-1);
        }
        else
        {
            return PeakElement(arr,mid+1,h);
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<(i+1)<<": ";
        cin>>arr[i];
    }
    int peak=PeakElement(arr,0,n-1);
    cout<<"Peak element is: "<<peak<<endl;

    return 0;
}