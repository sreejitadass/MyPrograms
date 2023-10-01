#include<iostream>

using namespace std;

int main(){
    char ch = 'N';
    do{
        int a[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
        int amount, i, temp;        
        cout << "\nPlease Enter the Amount of Cash =  ";
        cin >> amount;
        temp = amount;      
        for(i = 0; i < 9; i++)
        {
            cout << a[i] <<" Notes is = " << temp / a[i] << endl;
            temp = temp % a[i];
        }
        cout<<"Do you want to continue: Yes OR No: ";
        cin >> ch ;
    } while( ch == 'y'|| ch == 'Y');  
    return 0;
}