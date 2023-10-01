#include<iostream>
using namespace std;

class Fruit{
public:
    string name;
    string color;
};

int main()
{
    Fruit f1;       //object-1
    f1.name="Strawberry";
    f1.color="Red";

    Fruit *f2=new Fruit;    //object-2
    f2->name="Mango";
    f2->color="Yellow";

    cout<<"\nFor fruit-1"<<endl;
    cout<<"Name: "<<f1.name<<endl;
    cout<<"Color: "<<f1.color<<endl;

    cout<<"\nFor fruit-2"<<endl;
    cout<<"Name: "<<f2->name<<endl;
    cout<<"Color: "<<f2->color<<endl;
}