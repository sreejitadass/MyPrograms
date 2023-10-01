#include <iostream>
#include <vector>
using namespace std;

int maxElement(vector<int> nums)
{
    int max = nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
        }
    }
    return max;
}

int LIS(vector<int> &nums)
{
    int n = nums.size();
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
                if (nums[i] > nums[j])
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
    vector<int> nums = {10, 9, 2, 5, 3, 7, 101, 18};

    cout << "Length of longest increasing subsequence: " << LIS(nums) << endl;
    return 0;
}