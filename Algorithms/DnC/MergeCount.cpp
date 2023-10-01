#include <iostream>
using namespace std;

int MergeCount(int A[], int B[], int m, int n)
{
    int count = 0;
    int i = 0, j = 0, k = 0;
    int merged[m + n];
    while (i < m && j < n)
    {
        if (A[i] > B[j])
        {
            count += (m - i);
            merged[k++] = B[j++];
        }
        else
        {
            merged[k++] = A[i++];
        }
    }
    while (i < m)
    {
        merged[k++] = B[j++];
    }
    while (j < n)
    {
        merged[k++] = A[i++];
    }
    return count;
}

int main()
{
    int m, n;
    cout << "Enter size of first array: ";
    cin >> m;
    cout << "Enter size of second array: ";
    cin >> n;
    int A[m], B[n];

    cout << "\nFor first array: \n";
    for (int i = 0; i < m; i++)
    {
        cout << "Element " << (i + 1) << ": ";
        cin >> A[i];
    }

    cout << "\nFor second array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << (i + 1) << ": ";
        cin >> B[i];
    }

    cout << "\nThe total number of pairs are = " << MergeCount(A, B, m, n) << endl;
    return 0;
}