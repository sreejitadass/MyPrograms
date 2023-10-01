#include<iostream>
#include<vector>
using namespace std;

//-10,-3,2,4,5

int main(){
    vector <int> v;
    vector <int> ans;
    for(int i=0;i<5;i++)
    {
        int e;
        cout<<"enter element e: ";
        cin>>e;
        v.push_back(e);
    }
    int left_ptr=0;
    int right_ptr=v.size()-1;
    while(left_ptr<right_ptr)
    {
        if(abs(v[left_ptr])>abs(v[right_ptr]))
        {
            ans.push_back(v[left_ptr]*v[left_ptr]);
            right_ptr--;
        }
        else
        {
            ans.push_back(v[right_ptr]*v[right_ptr]);
            left_ptr++;
        }
    }
    for(int i=v.size()-1;i>=0;i--)
        cout<<ans[i]<<" ";
    return 0;
}