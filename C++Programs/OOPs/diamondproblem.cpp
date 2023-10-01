#include<iostream>
using namespace std;

class A{
public:
    A()
    {
        cout<<"Ancestor class A"<<endl;
    }
};

class B: public A{
public:
    B()
    {
        cout<<"Parent-1 class B"<<endl;
    }
};

class C: public A{
public:
    C()
    {
        cout<<"Parent-2 class C"<<endl;
    }
};

class D: public B,public C{
public:
    D()
    {
        cout<<"Base class D"<<endl;
    }
};

int main()
{
    D child;
    return 0;
}


