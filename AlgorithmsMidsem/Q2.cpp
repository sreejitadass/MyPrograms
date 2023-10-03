#include <iostream>
#include <vector>
using namespace std;

int maxElement(vector<int> dp)
{
    int max = dp[0];
    for (int i = 0; i < dp.size(); i++)
    {
        if (dp[i] > max)
        {
            max = dp[i];
        }
    }
    return max;
}

int LIS(int A[], int d, int n)
{
    vector<int> dp(n, 1);

    if (n == 0)
    {
        return 0;
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (A[i] - A[j] >= d)
                {
                    dp[i] = max(dp[i], 1 + dp[j]);
                }
            }
        }
        return maxElement(dp);
    }
}

int main()
{
    int n, d;
    cout << "Enter number of elements: ";
    cin >> n;
    int A[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> A[i];
    }

    char input = 'y';

    while (input == 'y' || input == 'Y')
    {
        cout << "\nEnter the value of d: ";
        cin >> d;

        cout << "The length of required longest increasing subsequence: " << LIS(A, d, n) << endl;

        cout << "\nDo you want to continue? ";
        cin >> input;
    }

    return 0;
}