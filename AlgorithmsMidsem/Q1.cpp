#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> A, int k, int ans[])
{
    int n = A[0].size();
    int i = 0, j = n - 1;

    int smallest = A[0][0], largest = A[n - 1][n - 1];

    if (k < smallest && k > largest)
    {
        return false;
    }
    if (n == 0)
    {
        return false;
    }
    else
    {
        while (i < n && j >= 0)
        {
            if (A[i][j] == k)
            {
                ans[0] = i + 1;
                ans[1] = j + 1;
                return true;
            }
            else if (A[i][j] > k)
            {
                j--;
            }
            else if (A[i][j] < k)
            {
                i++;
            }
        }
        return false;
    }
}

int main()
{
    int n;
    cout << "Enter rows and columns for square matrix: ";
    cin >> n;

    vector<vector<int>> A;
    int x;

    for (int i = 0; i < n; i++)
    {
        vector<int> v;
        for (int j = 0; j < n; j++)
        {
            cout << "Enter element at row " << i + 1 << " and column " << j + 1 << ": ";
            cin >> x;
            v.push_back(x);
        }
        A.push_back(v);
    }

    char input = 'y';
    while (input == 'y' || input == 'Y')
    {
        int k;
        cout << "\nEnter the element to be searched: ";
        cin >> k;

        int ans[2];
        bool found = searchMatrix(A, k, ans);

        if (!found)
        {
            cout << "\nElement not present in matrix" << endl;
        }
        else
        {
            cout << "\nElement found at position (" << ans[0] << "," << ans[1] << ") of matrix" << endl;
        }

        cout << "\nDo you want to continue? ";
        cin >> input;
    }
    return 0;
}