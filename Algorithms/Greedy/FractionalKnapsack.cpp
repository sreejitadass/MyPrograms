#include <iostream>
#include <algorithm>
using namespace std;

struct Item
{
    int profit;
    int weight;
};

bool compareRatio(Item a, Item b)
{
    double r1 = (double)a.profit / (double)a.weight;
    double r2 = (double)b.profit / (double)b.weight;
    return r1 > r2;
}

double FractionalKnapsack(Item arr[], int n, int W)
{
    sort(arr, arr + n, compareRatio);

    int currentW = 0;
    double maxProfit = 0.0;

    for (int i = 0; i < n; i++)
    {
        if (currentW + arr[i].weight <= W)
        {
            currentW += arr[i].weight;
            maxProfit += arr[i].profit;
        }
        else
        {
            int remaining = W - currentW;
            maxProfit += (arr[i].profit / (double)arr[i].weight) * (double)remaining;
            break;
        }
    }
    return maxProfit;
}

int main()
{
    int n, W;
    cout << "Enter the number of objects: ";
    cin >> n;
    Item arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\nFor element " << (i + 1) << ": ";
        cout << "\nEnter profit: ";
        cin >> arr[i].profit;
        cout << "Enter weight: ";
        cin >> arr[i].weight;
    }
    cout << "\nEnter maximum capacity: ";
    cin >> W;

    double ans = FractionalKnapsack(arr, n, W);
    cout << "\nThe maximized profit is: " << ans << endl;
    return 0;
}
