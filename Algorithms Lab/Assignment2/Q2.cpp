#include<iostream>
using namespace std;

bool flag=false;

int BinarySearch(int arr[],int n,int key)
{
    int l=0;
    int h=n-1;
    while(l<=h)
    {
        int mid=l+(h-l)/2;
        if(arr[mid]==key)
        {
            flag=true;
            return mid;
        }
        if(arr[mid]<key)
            l=mid+1;
        else
            h=mid-1;
    }
}

int AlphaSearch(int arr[],int n,int key)
{
    flag=false;
    int l=0;
    int h=n-1;
    while(l<=h)
    {
        int Amid=l+(h-l)*2/3;
        if(arr[Amid]==key)
        {
            flag=true;
            return Amid;
        }
        if(arr[Amid]<key)
            l=Amid+1;
        else
            h=Amid-1;
    }
}

int BetaSearch(int arr[],int n,int key)
{
    flag=false;
    int l=0;
    int h=n-1;
    while(l<=h)
    {
        int Bmid=l+(h-l)*1/4;
        if(arr[Bmid]==key)
        {
            flag=true;
            return Bmid;
        }
        if(arr[Bmid]<key)
            l=Bmid+1;
        else
            h=Bmid-1;
    }
}

int main()
{
    int n,key;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element "<<i+1<<": ";
        cin>>arr[i];
    }
    
    cout<<"Enter the element to be searched: ";
    cin>>key;

    int pos=BinarySearch(arr,n,key);
    cout<<"\t-Using binary search-\t"<<endl;
    if(flag==false)
        cout<<"Element not found"<<endl;
    else
        cout<<"Element found at index: "<<pos<<endl;


    int Bpos=BetaSearch(arr,n,key);
    cout<<"\t-Using beta search-\t"<<endl;
    if(flag==false)
        cout<<"Element not found"<<endl;
    else
        cout<<"Element found at index: "<<Bpos<<endl;

    
    int Apos=AlphaSearch(arr,n,key);
    cout<<"\t-Using alpha search-\t"<<endl;
    if(flag==false)
        cout<<"Element not found"<<endl;
    else
        cout<<"Element found at index: "<<Apos<<endl;


    return 0;
}