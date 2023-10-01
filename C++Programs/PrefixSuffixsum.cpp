#include<iostream>
using namespace std;

bool CheckprefixSuffixSum(int arr[],int n)
{
    int total_sum=0,prefix_sum=0,suffix_sum=0;
    for(int i=0;i<n;i++)
        total_sum+=arr[i];
    for(int i=0;i<n;i++)
    {
        prefix_sum+=arr[i];
        suffix_sum=total_sum-prefix_sum;

        if(prefix_sum==suffix_sum)
            return true;
    }
    return false;   
}

int main(){
    int arr[]={6,2,4,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(CheckprefixSuffixSum(arr,n))
        cout<<"Array can be partitioned"<<endl;
    else
        cout<<"Array cannot be partitioned"<<endl;
    return 0;
}