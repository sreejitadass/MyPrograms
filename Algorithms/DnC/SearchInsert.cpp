#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int> nums, int l, int h, int target)
{
    if (target > nums[h])
    {
        return h;
    }
    else
    {
        while (l <= h)
        {
            int mid = l + (h - l) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] > target)
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        return l;
    }
}

int main()
{
    vector<int> nums = {1, 3, 5, 6, 13};
    int target = 4;

    cout << "Required position: " << searchInsert(nums, 0, nums.size() - 1, target) << endl;
    return 0;
}