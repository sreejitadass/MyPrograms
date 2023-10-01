#include<iostream>
#include<set>
using namespace std;

int main()
{
    set <int> s1;
    s1.insert(2);
    s1.insert(1);
    s1.insert(9);
    s1.insert(5);
    s1.insert(12);
    s1.insert(6);

    set <int> :: iterator itr;
    for(itr=s1.begin();itr!=s1.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<"\n";

    cout<<"Size of the set: "<<s1.size()<<endl;

    cout<<s1.count(9)<<endl;
    cout<<s1.count(0)<<endl;
    cout<<s1.max_size()<<endl;

    s1.erase(1);

    set <int> :: iterator start=s1.begin();
    advance(start,2);
    set <int> :: iterator end=s1.begin();
    advance(end,4);
    s1.erase(start,end);

    for(itr=s1.begin();itr!=s1.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<"\n";

    if(s1.find(12)!=s1.end())
        cout<<"Element is present"<<endl;
    else
        cout<<"Element is not present"<<endl;

    set <int> :: iterator itr1;
    itr1=s1.lower_bound(5);
    cout<<*itr1<<endl; 
    itr1=s1.upper_bound(9);
    cout<<*itr1<<endl;
    itr1=s1.find(9);
    cout<<*itr1<<endl;
}