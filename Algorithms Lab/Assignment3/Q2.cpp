#include<iostream>
using namespace std;

int findMissing(int arr[],int l,int h)
{
        if(l>h)
        {
            return l+1;
        }
        else
        {
            int mid=l+(h-l)/2;
            if(arr[mid]==mid+1)
            {
                return findMissing(arr,mid+1,h);
            }
            else
            {
                return findMissing(arr,l,mid-1);
            }
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
        cout<<"Enter the element "<<i<<": ";
        cin>>arr[i];
    } 
    
    int missing=findMissing(arr,0,n-1);
    if(missing!=-1)
        cout<<"Missing element is: "<<missing<<endl;
    else
        cout<<"No missing element"<<endl;
    return 0;
}