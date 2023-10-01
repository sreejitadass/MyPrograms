#include<iostream>
using namespace std;

void MoveZeroestoEnd(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            if(arr[j]==0 && arr[j+1]!=0)
                swap(arr[j],arr[j+1]);
        }
    }
}

int main()
{
    int arr[]={3,0,2,0,1,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    MoveZeroestoEnd(arr,n);
    cout<<"New array:  ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}