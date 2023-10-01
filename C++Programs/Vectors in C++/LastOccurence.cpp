#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v;
    for(int i=0;i<10;i++)
    {
        int el;
        cout<<"enter element: ";
        cin>>el;
        v.push_back(el);
    }
    int x,occurence;
    cout<<"enter required element: ";
    cin>>x;
    for(int i=v.size()-1;i>=0;i--)
    {
        if(v[i]==x){
            occurence=i;
            break;
        }
    }
    cout<<"Last occurence of "<<x<<" is index "<<occurence<<endl;
    return 0;
}