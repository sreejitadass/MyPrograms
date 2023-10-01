#include<iostream>
using namespace std;

class XYZ{
int x;
public:

    void set(int n)
    {
        x=n;
    }

    int get()
    {
        return x;
    }
};

int main()
{
    XYZ obj;
    obj.set(6);
    cout<<"Value of x: "<<obj.get()<<endl;

    return 0;
}