#include<iostream>
using namespace std;

int main(){
    int i;
    string str;
    cout<<"Enter an integer: ";
    cin>>i;
    cout<<"Integer is: "<<i<<endl;

    cout<<"Enter a string: ";
    getline(cin,str);        //only for strings
    cout<<"Line entered is: "<<str;

    return 0;

}