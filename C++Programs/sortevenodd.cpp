#include<iostream>
using namespace std;

int main(){
    int arr[]={1,3,4,7,8,9};
    int size=6;
    int right_ptr=5;
    int left_ptr=0;
    while(left_ptr<right_ptr)
    {
        if(arr[left_ptr]%2!=0 && arr[right_ptr]%2==0){
            swap(arr[left_ptr],arr[right_ptr]);
            left_ptr++;
            right_ptr--;
        }
        if(arr[left_ptr]%2==0)
        {
            left_ptr++;
        }
        if(arr[right_ptr]%2!=0)
        {
            right_ptr--;
        }
    }
    cout<<"Array: "<<endl;
    for(int i=0;i<6;i++)
        cout<<arr[i]<<" ";
    return 0;
}