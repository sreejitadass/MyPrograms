#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> matrix, int target)
{
    int n = matrix[0].size();
    int i = 0, j = n - 1;

    int smallest = matrix[0][0], largest = matrix[n - 1][n - 1];

    if (n == 0)
        return -1;
    else if (target < smallest || target > largest)
        return -1;
    else
    {
        while (i < n && j > 0)
        {
            if (matrix[i][j] == target)
            {
                return true;
            }
            else if (matrix[i][j] > target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return false;
    }
}

int main()
{
    int n, target, x;
    cout << "Enter number of rows and columns: ";
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
    {
        vector<int> v;
        for (int j = 0; j < n; j++)
        {
            cout << "Element: ";
            cin >> x;
            v.push_back(x);
        }
        matrix.push_back(v);
    }

    cout << "Enter the target: ";
    cin >> target;

    if (searchMatrix(matrix, target))
        cout << "Element found" << endl;
    else
        cout << "Not found" << endl;
}