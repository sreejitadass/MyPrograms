#include <iostream>
#include <climits>
using namespace std;

int cSP = 0;

int MCM(int p[], int i, int j)
{
    int minCost = INT_MAX;
    int c = 0;
    int k;
    if (i == j)
    {
        return 0;
    }
    else
    {
        for (int k = i; k < j; k++)
        {
            cSP++;
            c = MCM(p, i, k) + MCM(p, k + 1, j) + (p[i - 1] * p[k] * p[j]);
            minCost = min(c, minCost);
        }
    }
    return minCost;
}

int main()
{
    int n;
    cout << "Enter the number of matrices: ";
    cin >> n;
    int p[n + 1];
    for (int i = 0; i <= n; i++)
    {
        cout << "Enter value: ";
        cin >> p[i];
    }

    cout << "\nMinimum cost: " << MCM(p, 1, n) << endl;
    cout << "Number of subproblems: " << cSP << endl;
    return 0;
}