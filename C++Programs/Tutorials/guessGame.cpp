#include<iostream>
using namespace std;

int main(){
    int guess;
    int secretNum=8;
    int guessCount=0;
    int guessLimit=3;
    bool outOfGuesses=false;

    while(secretNum!=guess && !outOfGuesses)
    {
        if(guessCount<guessLimit){
        cout<<"enter guess number: ";
        cin>>guess;
        guessCount++;
        }

        else{
            outOfGuesses=true;
        }       
    }
    if(outOfGuesses){
        cout<<"You Lose";
    }
    else{
        cout<<"You Win";
    }
}