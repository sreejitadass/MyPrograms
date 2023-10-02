#include <iostream>
using namespace std;

int search0(int arr[], int l, int h)
{
    if (l == h)
    {
        return arr[l];
    }
    else
    {
        int mid = l + (h - l) / 2;
        if (mid == 0 || arr[mid] == 0 && arr[mid - 1] == 1)
        {
            return mid;
        }
        else if (arr[mid] == 1)
        {
            return search0(arr, mid + 1, h);
        }
        else
        {
            return search0(arr, l, mid);
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 1, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int pos = search0(arr, 0, n - 1);
    cout << "Number of zeroes is: " << n - pos << endl;
    return 0;
}