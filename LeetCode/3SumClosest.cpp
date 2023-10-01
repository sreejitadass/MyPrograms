#include<iostream>
using namespace std;

int main(){
    int arr[]={-1,2,-1,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int targetSum=2;
    int curSum=0;
    int firstSum=arr[0]+arr[1]+arr[2];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(curSum==targetSum)
                    return curSum;
                if(abs(targetSum-curSum)<abs(targetSum-firstSum))
                    return curSum;
            }
        }
    }
    cout<<"The closest sum to "<<targetSum<<" is "<<curSum;
}