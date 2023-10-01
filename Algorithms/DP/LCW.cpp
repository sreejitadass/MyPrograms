#include <iostream>
#include <string>
#include <vector>
using namespace std;

int LCW(string A, string B, int m, int n, vector<vector<int>> memo)
{
    if (m == 0 || n == 0) // word size is 0
    {
        return 0;
    }
    else
    {
        if (memo[m][n] != -1)
        {
            memo[m][n];
        }
        else if (A[m - 1] == B[n - 1])
        {
            return memo[m][n] = 1 + LCW(A, B, m - 1, n - 1, memo);
        }
        else
        {
            return memo[m][n] = 0;
        }
    }
}

int main()
{
    string A, B;
    cout << "Enter the first word: ";
    cin >> A;
    cout << "Enter the second word: ";
    cin >> B;

    int m = A.length();
    int n = B.length();

    vector<vector<int>> memo(m + 1, vector<int>(n + 1, -1));

    cout << "Length of longest common subword: " << LCW(A, B, m, n, memo) << endl;

    return 0;
}