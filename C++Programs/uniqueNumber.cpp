#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,3,2,1,4,2,3,1};
    int size=10;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j])
                arr[i]=arr[j]=-1;
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i]>0){
            cout<<"Unique element: "<<arr[i]<<endl;
            break;
        }
    }
    return 0;
}