#include <iostream>
#include <vector>
using namespace std;

vector<int> PascalTriangle(int numRows, int rowIndex)
{
    vector<int> prevRow;
    vector<int> ans;

    for (int i = 0; i < numRows; i++)
    {
        vector<int> currentRow(i + 1, 1);
        for (int j = 1; j < i; j++)
        {
            currentRow[j] = prevRow[j] + prevRow[j - 1];
        }
        if (i == rowIndex)
        {
            ans = currentRow;
            break;
        }
        prevRow = currentRow;
    }
    return ans;
}

int main()
{
    int numRows, rowIndex;
    cout << "Enter number of rows: ";
    cin >> numRows;
    cout << "Enter required row index: ";
    cin >> rowIndex;

    vector<int> ans = PascalTriangle(numRows, rowIndex);
    cout << "[ ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << "]" << endl;

    return 0;
}