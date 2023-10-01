#include <iostream>
#include <climits>
using namespace std;

int max(int a, int b, int c)
{
    return max(a, (b, c));
}

int Crossing(int arr[], int l, int mid, int h)
{
    int L_pdt = INT_MIN, R_pdt = INT_MIN;
    int pdt = 1;
    for (int i = mid; i >= l; i--)
    {
        pdt *= arr[i];
    }
    if (L_pdt < pdt)
    {
        L_pdt = pdt;
    }

    pdt = 1;
    for (int i = mid; i <= h; i++)
    {
        pdt *= arr[i];
    }
    if (R_pdt < pdt)
    {
        R_pdt = pdt;
    }

    return max(L_pdt * R_pdt / arr[mid], max(L_pdt, R_pdt));
}

int MaxProductSubarray(int arr[], int l, int h)
{
    if (l == h)
    {
        return arr[l];
    }
    else
    {
        int mid = l + (h - l) / 2;
        int L = MaxProductSubarray(arr, l, mid);
        int R = MaxProductSubarray(arr, mid + 1, h);
        int C = Crossing(arr, l, mid, h);
        return max(L, R, C);
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

    cout << "The maximum product is: " << MaxProductSubarray(arr, 0, n - 1) << endl;
    return 0;
}