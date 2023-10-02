#include <iostream>
using namespace std;

int BinarySearch(int arr[], int l, int h, int key)
{
    if (l <= h)
    {
        int mid = l + (h - l) * 1 / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            return BinarySearch(arr, l, mid - 1, key);
        }
        else if (arr[mid] < key)
        {
            return BinarySearch(arr, mid + 1, h, key);
        }
    }
    return -1;
}

int AlphaSearch(int arr[], int l, int h, int key)
{
    if (l <= h)
    {
        int mid = l + (h - l) * 2 / 3;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            return AlphaSearch(arr, l, mid - 1, key);
        }
        else if (arr[mid] < key)
        {
            return AlphaSearch(arr, mid + 1, h, key);
        }
    }
    return -1;
}

int BetaSearch(int arr[], int l, int h, int key)
{
    if (l <= h)
    {
        int mid = l + (h - l) * 1 / 4;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            return BetaSearch(arr, l, mid - 1, key);
        }
        else if (arr[mid] < key)
        {
            return BetaSearch(arr, mid + 1, h, key);
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

    int binary_pos, alpha_pos, beta_pos;
    binary_pos = BinarySearch(arr, 0, n - 1, key);
    alpha_pos = AlphaSearch(arr, 0, n - 1, key);
    beta_pos = BetaSearch(arr, 0, n - 1, key);

    cout << "\n\tBinary Search" << endl;
    if (binary_pos == -1)
        cout << "Element not found" << endl;
    else
        cout << "Element is at position: " << binary_pos << endl;

    cout << "\n\tAlpha Search" << endl;
    if (alpha_pos == -1)
        cout << "Element not found" << endl;
    else
        cout << "Element is at position: " << alpha_pos << endl;

    cout << "\n\tBeta Search" << endl;
    if (beta_pos == -1)
        cout << "Element not found" << endl;
    else
        cout << "Element is at position: " << beta_pos << endl;

    return 0;
}