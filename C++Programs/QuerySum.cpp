#include<iostream>
#include<vector>
using namespace std;

int QuerySum(vector <int> &v,int n)
{
    int q,l,r;
    cout<<"enter queries: ";
    cin>>q;
    cout<<"enter l and r: ";
    cin>>l>>r;
    for(int i=1;i<=n;i++)
    {
        v[i]+=v[i-1];
    }
    while(q--)
    {
        cout<<"enter l and r: ";
        cin>>l>>r;
        int ans=0;
        ans=v[r]-v[l-1];
        cout<<"For query "<<q<<" answer: "<<ans;
        cout<<"\n";
    }
}

int main()
{
    int n;
    cout<<"enter number of elements: ";
    cin>>n;
    vector <int> v(n+1,0);
    for(int i=1;i<=n;i++)
    {
        int ele;
        cout<<"Enter an element: ";
        cin>>ele;
        v.push_back(ele);
    }
    QuerySum(v,n);
    return 0;
}