#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v;
    for(int i=0;i<5;i++){
        int ele;
        cout<<"Enter element: ";
        cin>>ele;
        v.push_back(ele);
    }
    
    v.push_back(6);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.push_back(7);
    v.pop_back();
    v.pop_back();
    v.pop_back();

    int idx=0;
    while(idx<v.size()){
        cout<<v[idx++]<<" ";
    }
    cout<<endl;

    return 0;
}