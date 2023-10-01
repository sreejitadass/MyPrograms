#include <iostream>
#include <vector>
using namespace std;

int Knapsack_01(int n, int W, int profit[], int weight[], vector<vector<int>> memo)
{
    if (n == 0 || W == 0)
    {
        return 0;
    }
    else
    {
        if (memo[n][W] != -1)
        {
            return memo[n][W];
        }
        else if (weight[n - 1] > W)
        {
            return memo[n][W] = Knapsack_01(n - 1, W, profit, weight, memo);
        }
        else
        {
            return memo[n][W] = max(Knapsack_01(n - 1, W - weight[n - 1], profit, weight, memo) + profit[n - 1], Knapsack_01(n - 1, W, profit, weight, memo));
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

    vector<vector<int>> memo(n + 1, (vector<int>(W + 1, -1)));

    cout << "\nMaximized profit using 0/1 Knapsack is: " << Knapsack_01(n, W, profit, weight, memo) << endl;
    return 0;
}