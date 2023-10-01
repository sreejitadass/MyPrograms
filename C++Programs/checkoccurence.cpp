#include<iostream>
using namespace std;

int main(){
    int arr[]={2,3,4,5,8,0,1,2,5,6};
    int size=10;
    int q;
    cout<<"Enter number of queries: ";
    cin>>q;
    while(q--){
        int x;
        cout<<"Enter the element: ";
        cin>>x;
        for(int i=0;i<size;i++)
        {
            if(arr[i]==x)
            {
                cout<<"Element is present"<<endl;
                break;
            }
        }
    }
    return 0;
}