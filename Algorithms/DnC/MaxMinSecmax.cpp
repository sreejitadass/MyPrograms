#include <iostream>
using namespace std;

int MAX(int a, int b)
{
    return a > b ? a : b;
}

int MIN(int a, int b)
{
    return a < b ? a : b;
}

int MaxElement(int arr[], int l, int h)
{
    if (l == h)
    {
        return arr[l];
    }

    int mid = l + (h - l) / 2;
    int maxLeft = MaxElement(arr, l, mid);
    int maxRight = MaxElement(arr, mid + 1, h);

    return max(maxLeft, maxRight);
}

void MaxandSecondMax(int arr[], int l, int h, int &max, int &smax)
{
    if (l == h)
    {
        max = arr[l];
        smax = -1;
        return;
    }
    else
    {
        int mid = l + (h - l) / 2;
        int Lmax, Rmax;
        int Lsmax, Rsmax;
        MaxandSecondMax(arr, l, mid, Lmax, Lsmax);
        MaxandSecondMax(arr, mid + 1, h, Rmax, Rsmax);

        max = MAX(Lmax, Rmax);
        smax = MAX(MIN(Lmax, Rmax), MAX(Lsmax, Rsmax));
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

    int Max;
    int secondMax;
    Max = MaxElement(arr, 0, n - 1);
    MaxandSecondMax(arr, 0, n - 1, Max, secondMax);

    cout << "The maximum element is: " << Max << endl;
    cout << "The second maximum element is: " << secondMax << endl;
    return 0;
}