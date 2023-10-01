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
        int Rmax=FindMax(arr,l,mid);
        int Lmax=FindMax(arr,mid+1,h);

        return max(Rmax,Lmax);
    }      
}

int FindMin(int arr[],int l,int h)
{
    int mid=(l+h-1)/2;
    if(l==h)
    {
        return arr[l];
    }
    else
    {
        int Rmin=FindMin(arr,l,mid);
        int Lmin=FindMin(arr,mid+1,h);

        return min(Rmin,Lmin);
    }      
}

int main()
{
    int n;
    cout<<"\nEnter number of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element "<<(i+1)<<": ";
        cin>>arr[i];
    }
    cout<<"Maximum element of array is: "<<FindMax(arr,0,n-1)<<endl;
    cout<<"Minimum element of array is: "<<FindMin(arr,0,n-1)<<endl;

    return 0;
}