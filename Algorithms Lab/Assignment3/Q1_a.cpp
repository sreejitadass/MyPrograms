#include<iostream>
using namespace std;

int FindMax(int arr[],int l,int h)
{
    int mid=(l+h-1)/2;
    if(l==h)
    {
        return arr[l];
    }
    else
    {
        int Lmax=FindMax(arr,l,mid);
        int max=FindMax(arr,mid+1,h);

        return max(Rmax,Lmax);
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
    cout<<"The maximum element is: "<<FindMax(arr,0,n-1)<<endl;
    return 0;
}