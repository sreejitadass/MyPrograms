#include <iostream>
#include <string>
#include <vector>
using namespace std;

int LPS(string s, int n, vector<vector<int>> memo)
{
    for (int i = 0; i < n; i++)
    {
        memo[i][i] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i] == s[j] && i + 1 == j)
            {
                memo[i][j] = 2;
            }
            else if (s[i] == s[j])
            {
                memo[i][j] = 2 + memo[i + 1][j - 1];
            }
            else
            {
                memo[i][j] = max(memo[i + 1][j], memo[i][j - 1]);
            }
        }
    }
    return memo[0][n - 1];
}

int main()
{
    string s = "babababas";
    int n = s.length();
    vector<vector<int>> memo(n, vector<int>(n, -1));

    cout << "Length of longest palindromic subsequence: " << LPS(s, n, memo) << endl;
    return 0;
}