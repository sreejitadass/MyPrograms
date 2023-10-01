#include<iostream>
using namespace std;

void Palindrome(string s)
{
    string rev="";
    int flag=0;
    for(int i=0;i<s.length()/2;i++)
    {
        if(s[i]!=s[s.length()-i-1])
            flag=-1;
    }
    if(flag==-1)
        cout<<"Not a palindrome"<<endl;
    else
        cout<<"Palindrome"<<endl;
}

int main()
{
    Palindrome("-101");
    return 0;
}