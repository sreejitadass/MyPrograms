#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main()
{
    int m,n;
    cout<<"Enter number of elements in vectors 1 and 2: ";
    cin>>m>>n;
    vector<int> v1(m);
    vector<int> v2(n);
    set<int> s1;

    cout<<"For vector-1"<<endl;
    for(int i=0;i<m;i++)
    {
        cout<<"Enter element "<<i+1<<": ";
        cin>>v1[i];
    }

    cout<<"\nFor vector-2"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<": ";
        cin>>v2[i];
    }

    //insert elements of v1 in set s1;
    for(int i=0;i<m;i++)
    {
        s1.insert(v1[i]);
    }

    int vectorsum=0;
    for(int i=0;i<n;i++)
    {
        if(s1.find(v2[i])!=s1.end())
        {
            vectorsum+=v2[i];
        }
    }

    cout<<"\nSum of the common elements: "<<vectorsum<<endl;
    return 0;
}