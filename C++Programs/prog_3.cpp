// C++ program to accept an amount and count number of notes
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

// function to count and print currency notes
void countCurrency(int amount)
{
	int notes[9] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
	int noteCounter[9] = { 0 };
	
	// count notes using Greedy approach
	for (int i = 0; i < 9; i++) {
		if (amount >= notes[i]) {
			noteCounter[i] = amount / notes[i];
			amount = amount % notes[i];
		}
	}
	
	// Print notes
	cout << "Currency Count ->" << endl;
	for (int i = 0; i < 9; i++) {
		if (noteCounter[i] != 0) {
			cout << notes[i] << " Rs note is : "<< noteCounter[i] << endl;
		}
	}
}

// Driver function
int main()
{
	char ch = 'N';
    do{
		int amount;
		cout << "\nPlease Enter the Amount of Cash =  ";
		cin >> amount;
		countCurrency(amount);
		cout<<"Do you want to continue: Yes OR NO: ";
		cin >> ch ;
    } while( ch == 'y'|| ch == 'Y');  
    getch();
	return 0;
}
