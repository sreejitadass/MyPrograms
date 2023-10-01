#include <iostream>
#include <vector>
using namespace std;

vector<int> final;

vector<int> merge(vector<int> arr, int l, int mid, int h)
{
    int n1 = mid - l + 1;
    int n2 = h - mid;

    int L[n1], M[n2];
    vector<int> merged;

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        M[j] = arr[mid + 1 + j];

    int i = l, j = mid + 1, k = 0;
    while (i < n1 && j < n2)
    {
        if (L[i] <= M[j])
        {
            merged[k] = L[i];
            i++;
        }
        else
        {
            merged[k] = M[j];
            j++;
        }
        k++;

        return merged;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = M[j];
        j++;
        k++;
    }
    return merged;
}

void mergeSort(vector<int> arr, int l, int h)
{
    int mid1 = (l + h) / 2;
    int mid2 = (l + mid1) / 2;
    int mid3 = (mid2 + h) / 2;

    if (l < h)
    {
        mergeSort(arr, l, mid2);
        mergeSort(arr, mid2 + 1, mid1);
        mergeSort(arr, mid1 + 1, mid3);
        mergeSort(arr, mid3 + 1, h);

        vector<int> ans1 = merge(arr, l, mid2, mid1);
        vector<int> ans2 = merge(arr, mid1 + 1, mid3, h);
        final = merge(arr, l, mid1, h);
    }
}

int main()
{
    vector<int> arr = {8, 6, 21, 99, 3, 12, 90};
    cout << "Original array: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Final array: ";
    for (int i = 0; i < final.size(); i++)
    {
        cout << arr[i] << " ";
    }
}