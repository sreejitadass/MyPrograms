#include <iostream>
using namespace std;

int MajorityElement(int arr[], int l, int h)
{
    if (l == h)
    {
        return arr[l];
    }
    else
    {
        int mid = (l + h) / 2;
        int leftMajority = MajorityElement(arr, l, mid);
        int rightMajority = MajorityElement(arr, mid + 1, h);

        if (leftMajority == rightMajority)
        {
            return leftMajority;
        }

        // count the left and right majority element
        int leftcount, rightcount = 0;
        for (int i = l; i < h; i++)
        {
            if (arr[i] == leftMajority)
                leftcount++;
            if (arr[i] == rightMajority)
                rightcount++;
        }

        if (leftcount > (mid - l + 1) / 2)
        {
            return leftMajority;
        }
        else if (rightcount > (h - mid) / 2)
        {
            return rightcount;
        }
    }
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Element " << (i + 1) << ": ";
        cin >> arr[i];
    }

    cout << "Majority element is = " << MajorityElement(arr, 0, n - 1) << endl;
    return 0;
}