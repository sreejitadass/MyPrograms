#include<iostream>
using namespace std;

int prefixSum(int arr[],int n)
{
    for(int i=1;i<=n;i++)
        arr[i]+=arr[i-1];

    cout<<"New Array: "<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int arr[]={5,4,1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    prefixSum(arr,n);
    return 0;
}