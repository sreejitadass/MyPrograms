#include <iostream>
#include <vector>
using namespace std;

int climbStairs(int n, vector<int> memo)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        memo[1] = 1;
        memo[2] = 2;

        for (int i = 3; i <= n; i++)
        {
            memo[i] = memo[i - 1] + memo[i - 2];
        }
        return memo[n];
    }
}

int main()
{
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;

    vector<int> memo(n + 1, -1);

    cout << "The number of ways to climb " << n << " stairs is = " << climbStairs(n, memo) << endl;
    return 0;
}