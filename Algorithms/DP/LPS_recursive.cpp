// wrong

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int LPS(string s, int i, int j, vector<vector<int>> memo)
{
    if (i > j)
    {
        return 0;
    }
    else if (i == j)
    {
        return memo[i][j] = 1;
    }
    else
    {
        if (s[i] == s[j])
        {
            return memo[i][j] = 2 + memo[i + 1][j - 1];
        }
        else if (s[i] == s[j] && i + 1 == j)
        {
            return memo[i][j] = 2;
        }
        else
        {
            return memo[i][j] = max(LPS(s, i + 1, j, memo), LPS(s, i, j - 1, memo));
        }
    }
}

int main()
{
    string s = "babad";
    int n = s.length();
    vector<vector<int>> memo(n, vector<int>(n, -1));

    cout << "Length of longest palindromic subsequence: " << LPS(s, 0, n - 1, memo) << endl;
    return 0;
}