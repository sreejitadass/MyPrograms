#include <iostream>
#include <vector>
using namespace std;

int fibonacci(int n, vector<int> table)
{
    if (n <= 2)
    {
        return n;
    }
    else
    {
        if (table[n] != -1)
        {
            return table[n];
        }
        else
        {
            table[n] = fibonacci(n - 1, table) + fibonacci(n - 2, table);
            return table[n];
        }
    }
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> table(n + 1, -1);

    int ans = fibonacci(n, table);
    cout << "The required number is = " << ans << endl;

    return 0;
}