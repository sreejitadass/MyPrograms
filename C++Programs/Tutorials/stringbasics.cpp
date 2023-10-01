#include<iostream>
using namespace std;

int main(){
    string phrase="Computer Science";
    int len=phrase.length();
    cout<<"String is: "<<phrase<<endl;
    cout<<"Length of string: "<<len<<endl;
    cout<<"Second character of string: "<<phrase[1]<<endl;
    phrase[0]='S';
    cout<<"New string: "<<phrase<<endl;

    string substring=phrase.substr(9,4); //takes 4 characters starting from 9th index
    cout<<"Substring of the string is: "<<substring<<endl;
    int index=phrase.find("uter",0); //finds substring after 0th index
    cout<<"The substring is found at index: "<<index<<endl;

    

    return 0;
}