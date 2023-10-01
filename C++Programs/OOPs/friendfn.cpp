#include<iostream>
using namespace std;

class ABC{
    int x;

    public:
        ABC(int y){
            x=y;
        }

    friend void print(ABC obj);

};

void print(ABC obj){
    cout<<"Value of x: "<<obj.x<<endl;
}

int main(){

    ABC obj(8);
    print(obj);
}