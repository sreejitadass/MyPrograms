#include<iostream>
using namespace std;

int main(){
    int arr[]={1,0,-1,0,-2,2};
    int target=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Possible indices are: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                for(int l=k+1;l<n;l++)
                {
                    int sum=arr[i]+arr[j]+arr[k]+arr[l];
                    if(sum==target){
                        cout<<"["<<i<<","<<j<<","<<k<<","<<l<<"]"<<endl;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}