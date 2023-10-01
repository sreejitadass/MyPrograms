#include <iostream>
#include <climits>
using namespace std;

int MCM(int p[], int i, int j)
{
    int minMultiplications = INT_MAX;
    int c = 0;
    if (i == j)
    {
        return 0;
    }
    else
    {
        for (int k = i; k < j; k++)
        {
            c = MCM(p, i, k) + MCM(p, k + 1, j) + (p[i - 1] * p[k] * p[j]);
            minMultiplications = min(c, minMultiplications);
        }
        return minMultiplications;
    }
}

int main()
{
    int n;
    cout << "Enter the number of matrices: ";
    cin >> n;
    int p[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        cout << "Enter the element " << (i + 1) << ": ";
        cin >> p[i];
    }

    cout << "Minimum number of multiplications is: " << MCM(p, 1, n) << endl;
    return 0;
}