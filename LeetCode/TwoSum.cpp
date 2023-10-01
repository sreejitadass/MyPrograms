#include<iostream>
using namespace std;

int main(){
    int arr[]={2,7,11,15};
    int target=9;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"The indices are: ";
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==target)
                cout<<"["<<i<<","<<j<<"]";
        }
    }
    return 0;
}