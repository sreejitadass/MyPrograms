#include <iostream>
using namespace std;

int ternarySearch(int arr[], int key, int l, int r)
{
    int mid1=l+(r-l)/3;
    int mid2=r-(r-l)/3;
    while (l<=r)
    {
       
        if (key==arr[mid1])
        {
            return mid1;
        }
        else if(key==arr[mid2])
        {
            return mid2;
        }
        else if (key<arr[mid1])
        {
            return ternarySearch(arr, key, l, mid1 - 1);
        }
        else if ( key>arr[mid1] && key<arr[mid2])
        {
            return ternarySearch(arr, key, mid1 + 1, mid2-1);
        }
        else if(key>arr[mid2])
        {
            return (arr,key,mid2+1,r);
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the array element "<<i+1<<": ";
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key element to be searched: ";
    cin>>key;
    int pos = ternarySearch(arr, key, 0, n - 1);
    if (pos == -1)
    {
        cout<<"The element is not found in the array\n";
    }
    else
    {
        cout<<"The element is found at the index : "<<pos<<endl;
    }
    return 0;
}