#include<iostream>
#include<cmath>
using namespace std;

int Reverse(int n){
    if(n==0)
        return 0;
    else{
        int digit=(int)log10(n);
        return (n%10*pow(10,digit))+Reverse(n/10);
    }
}

int main(){
    cout<<"Reversed number is: "<<Reverse(12345);
}