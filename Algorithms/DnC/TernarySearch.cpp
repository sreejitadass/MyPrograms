#include <iostream>
using namespace std;

int TernarySearch(int arr[], int l, int h, int key)
{
    while (l <= h)
    {
        int mid1 = l + (h - l) / 3;
        int mid2 = h - (h - l) / 3;

        if (arr[mid1] == key)
        {
            return mid1;
        }
        else if (arr[mid2] == key)
        {
            return mid2;
        }
        else if (key < arr[mid1])
        {
            return TernarySearch(arr, l, mid1 - 1, key);
        }
        else if (key > arr[mid1] && key < arr[mid2])
        {
            return TernarySearch(arr, mid1 + 1, mid2 - 1, key);
        }
        else if (key > arr[mid2])
        {
            return TernarySearch(arr, mid2 + 1, h, key);
        }
    }
    return -1;
}

int main()
{
    int n, key;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Enter the search element: ";
    cin >> key;

    int pos = TernarySearch(arr, 0, n - 1, key);
    if (pos == -1)
        cout << "Key not found" << endl;
    else
        cout << "Key found at position: " << pos << endl;

    return 0;
}