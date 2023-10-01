#include<iostream>
using namespace std;

string GetDay(int dayNum){
    string day;
    cout<<"0.Sunday\n";
    cout<<"1.Monday\n";
    cout<<"2.Tuesday\n";
    cout<<"3.Wednesday\n";
    cout<<"4.Thursday\n";
    cout<<"5.Friday\n";
    cout<<"6.Saturday\n";
    
    switch(dayNum)
    {
        case 0:
        day="Sunday";
        break;

        case 1:
        day="Monday";
        break;

        case 2:
        day="Tuesday";
        break;

        case 3:
        day="Wednesday";
        break;

        case 4:
        day="Thursday";
        break;

        case 5:
        day="Friday";
        break;

        case 6:
        day="Saturday";
        break;

        default:
        day="Invalid day number";
    }

    return day;
}

int main(){
    int x;
    cout<<"Enter day number: ";
    cin>>x;
    cout<<"Day is: "<<GetDay(x);
    return 0;
}