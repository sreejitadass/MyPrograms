#include <iostream>
using namespace std;

int merge(int arr[], int low, int mid, int high)
{
    int i = low, j = mid + 1, k = 0, invCount = 0;
    int n = (high - low + 1);
    int merged[n];
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            merged[k++] = arr[i++];
        }
        else
        {
            merged[k++] = arr[j++];
            invCount += (mid - i + 1);
        }
    }
    while (i <= mid)
    {
        merged[k++] = arr[i++];
    }
    while (j <= high)
    {
        merged[k++] = arr[j++];
    }

    for (i = 0; i < n; i++)
    {
        arr[low + i] = merged[i];
    }

    return invCount;
}

int mergeSort(int arr[], int low, int high)
{
    int invCount = 0;
    if (low < high)
    {
        int mid = (low + high) / 2;
        invCount += mergeSort(arr, low, mid);
        invCount += mergeSort(arr, mid + 1, high);
        invCount += merge(arr, low, mid, high);
    }
    return invCount;
}

int main()
{
    int arr[] = {1, 20, 6, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = mergeSort(arr, 0, n - 1);
    cout << "The number of inversion pairs is: " << ans << endl;

    return 0;
}