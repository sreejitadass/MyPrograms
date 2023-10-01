#include <iostream>
using namespace std;

int PeakElement(int arr[], int l, int h)
{
    int mid = (l + h) / 2;
    if (mid == h || mid == l) // checking corner cases
    {
        if (mid == l && arr[mid] > arr[mid + 1]) // 1st element
        {
            return arr[mid];
        }
        if (mid == h && arr[mid] > arr[mid - 1]) // last element
        {
            return arr[mid];
        }
    }
    else
    {
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return arr[mid];
        }
        else if (arr[mid] > arr[mid - 1] && arr[mid] < arr[mid + 1])
        {
            return PeakElement(arr, mid + 1, h);
        }
        else
        {
            return PeakElement(arr, l, mid);
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

    cout << "Peak element is: " << PeakElement(arr, 0, n - 1) << endl;
    return 0;
}