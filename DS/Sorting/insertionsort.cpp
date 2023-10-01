#include<iostream>
using namespace std;

void InsertionSort(int arr[],int n)
{
    int current,j;
    for(int i=1;i<n;i++)
    {
        current=arr[i];
        j=i-1;
        while(arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
}

int main()
{
    int arr[]={11,8,15,9,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    InsertionSort(arr,n);
    cout<<"Sorted array:  ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}