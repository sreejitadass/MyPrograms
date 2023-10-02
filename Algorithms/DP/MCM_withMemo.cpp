#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int MCM(int p[], int i, int j, vector<vector<int>> memo)
{
    int minMultiplications = INT_MAX;
    int c = 0;
    if (i == j)
    {
        return 0;
    }
    else
    {
        if (memo[i][j] != -1)
        {
            return memo[i][j];
        }
        else
        {
            for (int k = i; k < j; k++)
            {
                c = MCM(p, i, k, memo) + MCM(p, k + 1, j, memo) + (p[i - 1] * p[k] * p[j]);
                minMultiplications = min(c, minMultiplications);
            }
            return memo[i][j] = minMultiplications;
        }
    }
}
int main()
{
    int n;
    cout << "Enter the number of matrices: ";
    cin >> n;
    int p[n + 1];
    vector<vector<int>> memo(n + 1, vector<int>(n + 1, -1));
    for (int i = 0; i < n + 1; i++)
    {
        cout << "Enter the element " << (i + 1) << ": ";
        cin >> p[i];
    }
    cout << "Minimum number of multiplications is: " << MCM(p, 1, n, memo) << endl;

    return 0;
}