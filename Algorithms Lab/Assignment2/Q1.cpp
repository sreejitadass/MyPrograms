#include<iostream>
using namespace std;

void MaxMin(int arr[],int n)
{
    if(arr[0]<arr[n-1])           //ascending
    {
        cout<<"The array is in ascending order"<<endl;
        cout<<"Minimum element is: "<<arr[0]<<endl;
        cout<<"Maximum element is: "<<arr[n-1]<<endl;
    }
    else                          //descending
    {
        cout<<"The array is in descending order"<<endl;
        cout<<"Minimum element is: "<<arr[n-1]<<endl;
        cout<<"Maximum element is: "<<arr[0]<<endl;
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
        cout<<"Enter the element "<<i+1<<": ";
        cin>>arr[i];
    }

    MaxMin(arr,n);
    return 0;
}