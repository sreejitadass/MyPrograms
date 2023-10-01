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
    int occurences=0,x;
    cout<<"enter required element: ";
    cin>>x;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==x)
            occurences++;
    }
    cout<<"Number of occurences: "<<occurences<<endl;
    return 0;
}