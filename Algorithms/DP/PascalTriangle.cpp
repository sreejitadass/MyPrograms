#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> PascalTriangle(int numRows)
{
    vector<vector<int>> result;
    vector<int> prevRow;

    for (int i = 0; i < numRows; i++)
    {
        vector<int> currentRow(i + 1, 1);
        for (int j = 1; j < i; j++)
        {
            currentRow[j] = prevRow[j] + prevRow[j - 1];
        }
        result.push_back(currentRow);
        prevRow = currentRow;
    }
    return result;
}

int main()
{
    int numRows;
    cout << "Enter number of rows: ";
    cin >> numRows;

    vector<vector<int>> ans = PascalTriangle(numRows);
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numRows; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}