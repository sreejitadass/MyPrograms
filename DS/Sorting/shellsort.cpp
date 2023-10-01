#include<iostream>
using namespace std;

void ShellSort(int arr[],int n)
{
    int temp=0;
    for(int gap=n/2;gap>=1;gap--)
    {
        for(int j=gap;j<n;j++)
        {
            for(int i=(j-gap);i>=0;i--)
            {
                if(arr[j]>arr[i])
                    break;
                else
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    
                }
            }
        }
    }
}

int main()
{
    int arr[]={23,29,15,19,31,7,9,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    ShellSort(arr,n);
    cout<<"Array after sorting: "<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}