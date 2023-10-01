#include<iostream>
using namespace std;

class Area{
public:
    void FindArea(float a)
    {
        float area=a*a;
        cout<<"Area of square: "<<area<<endl;    
    }

    void FindArea(int l,int b)
    {
        int area=l*b;
        cout<<"Area of rectangle: "<<area<<endl;
    }

    void FindArea(double r)
    {
        double area=3.14*r*r;
        cout<<"Area of circle: "<<area<<endl;
    }
};

int main()
{
    Area a;
    a.FindArea(6.887);
    a.FindArea(5,9);
    a.FindArea(3.11);

    return 0;
}