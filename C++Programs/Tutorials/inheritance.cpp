#include<iostream>
using namespace std;

class Chef
{
    public:
    void Chicken(){
        cout<<"The chef can make chicken"<<endl;
    }
    void Salad(){
        cout<<"The chef can make salad"<<endl;
    }
    void SpecialDish(){
        cout<<"The chef can make bbq wings"<<endl;
    }
};

class ItalianChef : public Chef
{
    public:
    void Pasta(){
        cout<<"The chef can make pasta"<<endl;
    }
    void SpecialDish(){
        cout<<"The chef can make pizza"<<endl;
    }
};

int main(){
    Chef c;
    ItalianChef ic;
    c.Chicken();
    ic.Chicken();
    c.SpecialDish();
    ic.SpecialDish();
    return 0;
}