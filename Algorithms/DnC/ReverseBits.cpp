#include <iostream>
#include <cmath>
using namespace std;

int ReverseBits(int num[], int l, int h)
{
    if (l == h)
    {
        return num[l];
    }
    else
    {
        int mid = l + (h - l) / 2;
        int left = ReverseBits(num, l, mid);
        int right = ReverseBits(num, mid + 1, h);
        return pow(10, mid) * right + left;
    }
}

int main()
{
    int num[] = {1, 1, 1, 0, 0, 0}; // 111000111000
    int n = sizeof(num) / sizeof(num[0]);

    cout << "Original number is: ";
    for (int i = 0; i < n; i++)
    {
        cout << num[i];
    }
    cout << endl;

    cout << "The reversed number is: " << ReverseBits(num, 0, n - 1) << endl;
    return 0;
}