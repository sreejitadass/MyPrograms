#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v;
    for(int i=0;i<5;i++)
    {
        int el;
        cout<<"enter element: ";
        cin>>el;
        v.push_back(el);
    }
    int anssum=0;
    for(int i=0;i<v.size();i++)
    {
        if(i%2==0)
            anssum+=v[i];
        else
            anssum-=v[i];
    }
    cout<<"Difference between even and odd elements: "<<anssum<<endl;
    return 0;
}