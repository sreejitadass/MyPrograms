#include<iostream>
#include<cmath>
using namespace std;

int main(){
    cout<<"Power: "<<pow(7,2)<<endl;
    cout<<"Square root: "<<sqrt(81.0)<<endl;
    cout<<"Rounded value: "<<round(8.6)<<endl;
    cout<<"Value rounded to the nearest higher number: "<<ceil(8.1)<<endl;
    cout<<"Value rounded to the nearest lower number: "<<floor(9.9)<<endl;
    cout<<"Maximum value: "<<fmax(7,9)<<endl;
    cout<<"Minimum value: "<<fmin(9,2)<<endl;

    return 0;
}