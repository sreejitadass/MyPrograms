#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> prices)
{
    int n = prices.size();
    vector<int> dp(n, 0);

    dp[n - 1] = prices[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        dp[i] = max(dp[i + 1], prices[i]);
    }

    int maxp = 0;
    for (int i = 0; i < n; i++)
    {
        maxp = max(maxp, dp[i] - prices[i]);
    }
    return maxp;
}

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << "The maximum profit is: " << maxProfit(prices) << endl;
    return 0;
}