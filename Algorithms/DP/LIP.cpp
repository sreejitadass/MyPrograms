#include <iostream>
#include <vector>
using namespace std;

int LIP(vector<vector<int>> matrix, int i, int j)
{
    vector<vector<int>> dp(matrix.size(), vector<int>(matrix[0].size(), 0));

    if (i < 0 || j < 0 || i >= matrix.size() || j >= matrix[0].size())
        return 0;

    if (dp[i][j] > 0)
    {
        return dp[i][j];
    }

    int curmax = 1;
    // down neighbour
    if (i + 1 < matrix.size() && i + 1 >= 0 && matrix[i + 1][j] > matrix[i][j])
    {
        curmax = max(curmax, 1 + LIP(matrix, i + 1, j));
    }

    // right neighbour
    if (j + 1 < matrix.size() && j + 1 >= 0 && matrix[i][j + 1] > matrix[i][j])
    {
        curmax = max(curmax, 1 + LIP(matrix, i, j + 1));
    }

    // left neighbour
    if (j - 1 < matrix.size() && j - 1 >= 0 && matrix[i][j - 1] > matrix[i][j])
    {
        curmax = max(curmax, 1 + LIP(matrix, i, j - 1));
    }

    // top neighbour
    if (i - 1 < matrix.size() && i - 1 >= 0 && matrix[i - 1][j] > matrix[i][j])
    {
        curmax = max(curmax, 1 + LIP(matrix, i - 1, j));
    }

    return curmax;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {2, 2, 3, 4},
        {3, 2, 3, 4},
        {4, 5, 6, 7},
    };

    cout << "The longest increasing path is: " << LIP(matrix, 0, 0) << endl;
}
