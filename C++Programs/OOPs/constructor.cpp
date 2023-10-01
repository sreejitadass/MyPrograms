#include<iostream>
using namespace std;

class Rectangle{
public:
    int l;
    int b;

    Rectangle()         //default constructor
    {
        l=0;
        b=0;
    }

    Rectangle(int x,int y)      //parameterized constructor
    {
        l=x;
        b=y;
    }

    Rectangle(Rectangle &r)     //copy constructor
    {
        l=r.l;
        b=r.b;
    }

    ~Rectangle()
    {
        cout<<"Destructor is called and object deleted"<<endl;
    }
};

int main()
{
    Rectangle *r1=new Rectangle;
    cout<<"\nFor default: "<<endl;
    cout<<"Length: "<<r1->l<<endl;
    cout<<"Breadth: "<<r1->b<<endl;
    delete r1;

    Rectangle r2(4,7);
    cout<<"\nFor parameterized: "<<endl;
    cout<<"Length: "<<r2.l<<endl;
    cout<<"Breadth: "<<r2.b<<endl;

    Rectangle r4(6,3);

    Rectangle r3=r4;
    cout<<"\nFor copy: "<<endl;
    cout<<"Length: "<<r3.l<<endl;
    cout<<"Breadth: "<<r3.b<<endl;

}