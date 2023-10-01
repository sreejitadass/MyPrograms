#include <iostream>
#include <algorithm>
using namespace std;

int Knapsack_01(int n, int W, int profit[], int weight[])
{
    if (n == 0 || W == 0)
    {
        return 0;
    }
    else
    {
        if (weight[n - 1] > W)
        {
            return Knapsack_01(n - 1, W, profit, weight); // not included in OPT
        }
        else
        {
            return max(Knapsack_01(n - 1, W - weight[n - 1], profit, weight) + profit[n - 1], Knapsack_01(n - 1, W, profit, weight));
        }
    }
}

int main()
{
    int n, W;
    cout << "Enter number of objects: ";
    cin >> n;
    cout << "\nEnter maximum capacity: ";
    cin >> W;

    int profit[n];
    int weight[n];

    cout << "\nFor profit: \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter for element " << (i + 1) << ": ";
        cin >> profit[i];
    }

    cout << "\nFor weight: \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter for element " << (i + 1) << ": ";
        cin >> weight[i];
    }

    cout << "\nMaximized profit using 0/1 Knapsack is: " << Knapsack_01(n, W, profit, weight) << endl;
    return 0;
}