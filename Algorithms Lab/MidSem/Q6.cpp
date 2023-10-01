#include <iostream>
using namespace std;

int FindMaximum(int a[], int l, int h)
{
    if (l == h)
    {
        return a[l - 1];
    }

    else
    {
        int mid = l + (h - l) / 2;
        if (a[mid] > a[mid + 1])
        {
            return a[mid];
        }
        if (a[mid] < a[l])
        {
            return FindMaximum(a, l, mid);
        }
        else if (a[mid] >= a[l])
        {
            return FindMaximum(a, mid + 1, h);
        }

        return a[h];
    }
}

int main()
{
    int a[] = {23, 26, 35, 42, 5, 12};
    int n = sizeof(a) / sizeof(a[0]);
    cout << "Maximum element is: " << FindMaximum(a, 0, n - 1) << endl;

    return 0;
}