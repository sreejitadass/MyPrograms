#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v;
    for(int i=0;i<10;i++)
    {
        int ele;
        cout<<"Enter 0 or 1: ";
        cin>>ele;
        v.push_back(ele);
    }
    int zero_count=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==0)
            zero_count++;
    }
    for(int i=0;i<v.size();i++)
    {
        if(i<zero_count)
            v[i]=0;
        else
            v[i]=1;
    }
    cout<<"Sorted array: "<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    return 0;
}