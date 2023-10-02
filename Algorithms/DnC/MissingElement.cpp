#include <iostream>
using namespace std;

int Missing(int arr[], int l, int h)
{
    if (l == h)
    {
        return arr[l];
    }
    else
    {
        int mid = l + (h - l) / 2;
        if (arr[mid] - arr[mid - 1] == 2)
        {
            return arr[mid] - 1;
        }
        else if (arr[mid + 1] - arr[mid] == 2)
        {
            return arr[mid] + 1;
        }
        else if (arr[mid] - arr[mid - 1] == 1)
        {
            return Missing(arr, mid + 1, h);
        }
        else
        {
            return Missing(arr, l, mid);
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
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Missing element is: " << Missing(arr, 0, n - 1) << endl;
    return 0;
}