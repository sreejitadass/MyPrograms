#include <iostream>
using namespace std;

void CountSort_Stable(int A[], int n)
{
    int max = A[0];
    for (int i = 0; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    int C[max + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        C[A[i]]++;
    }

    for (int i = 1; i < max + 1; i++)
    {
        C[i] = C[i - 1] + C[i];
    }

    int B[n];
    for (int i = n - 1; i >= 0; i--) // traverse backwards
    {
        --C[A[i]];
        B[C[A[i]]] = A[i];
    }

    for (int i = 0; i < n; i++)
    {
        A[i] = B[i];
    }
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << (i + 1) << ": ";
        cin >> A[i];
    }

    CountSort_Stable(A, n);
    cout << "Sorted array by stable count sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}