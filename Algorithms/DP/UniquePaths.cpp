#include <iostream>
#include <vector>
using namespace std;

int uniquePaths(int m, int n)
{
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
    if (m == 1 && n == 1)
    {
        return 1;
    }
    else if (m == 0 || n == 0)
    {
        return 0;
    }
    else
    {
        if (dp[m][n] != -1)
        {
            return dp[m][n];
        }
        else
        {
            return dp[m][n] = uniquePaths(m, n - 1) + uniquePaths(m - 1, n);
        }
    }
}

int main()
{
    int m, n;
    cout << "Enter m: ";
    cin >> m;
    cout << "Enter n: ";
    cin >> n;

    cout << "Number of unique paths in " << m << "x" << n << " grid is: " << uniquePaths(m, n) << endl;
    return 0;
}
