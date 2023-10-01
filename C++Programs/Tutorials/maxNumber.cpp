#include<iostream>
using namespace std;

int Max(int num1, int num2){
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    int res=(num1>num2)?num1:num2;
    return res;
}

int main(){
    int x,y;
    cout<<"Maximum number is= "<<Max(x,y);
    return 0;
}