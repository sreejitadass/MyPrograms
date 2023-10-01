#include<iostream>
using namespace std;

void SelectionSort(int arr[],int n)
{
    int min_idx;
    for(int i=0;i<n-1;i++)
    {
        min_idx=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_idx])
                min_idx=j;
        }
        if(min_idx!=i)
            swap(arr[i],arr[min_idx]);
    }
}

int main()
{
    int arr[]={34,78,21,22,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    SelectionSort(arr,n);
    cout<<"Sorted array:  ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}