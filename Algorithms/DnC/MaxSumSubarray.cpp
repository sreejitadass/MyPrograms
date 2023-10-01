#include <iostream>
#include <climits> // For INT_MIN
using namespace std;

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int max(int a, int b, int c)
{
    return max(max(a, b), c);
}

int Crossing(int arr[], int l, int mid, int h)
{
    int leftsum = INT_MIN;
    int rightsum = INT_MIN;

    int sum = 0;
    for (int i = mid; i >= l; i--)
    {
        sum += arr[i];
    }
    if (sum > leftsum)
    {
        leftsum = sum;
    }

    sum = 0;
    for (int j = mid; j <= h; j++)
    {
        sum += arr[j];
    }
    if (sum > rightsum)
    {
        rightsum = sum;
    }

    return max(leftsum + rightsum - arr[mid], leftsum, rightsum);
}

int MSA(int arr[], int l, int h)
{
    if (l == h)
    {
        return arr[l];
    }
    else
    {
        int mid = l + (h - l) / 2;
        int Lsum = MSA(arr, l, mid);
        int Rsum = MSA(arr, mid + 1, h);
        int C = Crossing(arr, l, mid, h);

        return max(C, Lsum, Rsum);
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element " << (i + 1) << ": ";
        cin >> arr[i];
    }

    int maxSum = MSA(arr, 0, n - 1);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}