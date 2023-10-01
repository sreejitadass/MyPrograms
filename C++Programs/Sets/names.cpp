#include<iostream>
#include<set>
using namespace std;

int main()
{
    set <string> s;
    int n;
    cout<<"Enter the number of names: ";
    cin>>n;
    while(n--)
    {
        string name;
        cout<<"Enter name: ";
        cin>>name;
        s.insert(name);
    } 

    set <string> :: iterator itr;
    for(itr=s.begin();itr!=s.end();itr++)
    {
        cout<<*itr<<"  ";
    }
    cout<<"\n";
    
    return 0;
}