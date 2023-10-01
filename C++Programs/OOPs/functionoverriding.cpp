#include<iostream>
using namespace std;

class Parent{
public:
    virtual void print(){
        cout<<"Parent class"<<endl;
    }

    void display(){
        cout<<"Parent class"<<endl;
    }
};

class Child: public Parent{
public:
    void print(){
        cout<<"Child class"<<endl;
    }

    void display(){
        cout<<"Child class"<<endl;
    }
};

int main(){
    Parent *p;
    Child c;
    p=&c;

    p->print();
    p->display();

    return 0;
}