#include<iostream>
#include<set>
using namespace std;

int main()
{
    set <int> s;
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;

    while(n--)
    {
        int x;
        cout<<"Enter element: ";
        cin>>x;
        s.insert(x);
    }
    set <int> :: iterator itr;
    itr=s.begin();
    advance(itr,1);
    cout<<"Second smallest number is: "<<*itr<<endl;
    return 0;
}