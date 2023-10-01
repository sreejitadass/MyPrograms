#include<iostream>
#include<set>
#include<string.h>
using namespace std;

int main()
{
    bool flag=true;
    string str;
    cout<<"Enter any string: ";
    cin>>str;

    set <char> s;
    for(char i='A';i<='Z';i++)
    {
        s.insert(i);
    }
    for(char i='a';i<='z';i++)
    {
        s.insert(i);
    }

    for(int i=0;i<str.size();i++)
    {
        if(s.count(str[i])==0)
            flag=false;
    }
    if(flag)
        cout<<"String contains all English alphabets"<<endl;
    else
        cout<<"String does not contain all English alphabets"<<endl;
    return 0;
}