#include<iostream>
using namespace std;

int Exp(int base, int pow)
{
    int result=1;
    for(int i=1;i<=pow;i++)
    {
        result*=base;
    }
    return result;
}

int main()
{
    int base,pow;
    cout<<"Enter base number: ";
    cin>>base;
    cout<<"Enter the power: ";
    cin>>pow;
    cout<<base<<" raised to the power "<<pow<<" is= "<<Exp(base,pow);
    return 0;
}