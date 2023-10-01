#include <iostream>
#include <vector>
using namespace std;

int BruteForce(int n)
{
    if (n <= 2)
    {
        return 1;
    }
    else
    {
        return BruteForce(n - 1) + BruteForce(n - 2);
    }
}

int TopDownDP(int n, vector<int> &fibTable)
{
    int value;

    if (fibTable[n] != -1)
    {
        return fibTable[n];
    }
    if (n <= 2)
    {
        value = 1;
    }
    else
    {
        value = TopDownDP(n - 1, fibTable) + TopDownDP(n - 2, fibTable);
    }
    fibTable[n] = value;
    return value;
}

int BottomUpDP(int n)
{
    int a = 0;
    int b = 1;
    int c = 0;
    int i = 2;
    while (i <= n)
    {
        c = a + b;
        a = b;
        b = c;
        i++;
    }
    return c;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> fibTable(n + 1, -1);

    cout << "The " << n << "-th number using Brute force algorithm: " << BruteForce(n) << endl;
    cout << "The " << n << "-th number using Top Down DP algorithm: " << TopDownDP(n, fibTable) << endl;
    cout << "The " << n << "-th number using Bottom Up DP algorithm: " << BottomUpDP(n) << endl;
    return 0;
}