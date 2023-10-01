#include<iostream>
using namespace std;

int main(){
    bool sorted=false;
    int arr[]={1,2,3,4,5};
    for(int i=1;i<6;i++)
    {
        if(arr[i-1]<=arr[i])
            sorted=true;
    }
    if(sorted)
        cout<<"Array is sorted"<<endl;
    else
        cout<<"Array is not sorted"<<endl;
    return 0;
}