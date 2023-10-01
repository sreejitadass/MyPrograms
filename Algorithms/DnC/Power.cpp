#include <iostream>
using namespace std;

int calcPower(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n % 2 == 0) // n is even
    {
        return calcPower(x, n / 2) * calcPower(x, n / 2);
    }
    else // n is odd
    {
        return x * calcPower(x, n / 2) * calcPower(x, n / 2);
    }
}

int main()
{
    int x, n;
    cout << "Enter the base: ";
    cin >> x;
    cout << "Enter the power: ";
    cin >> n;

    cout << x << " raised to the power " << n << " is: " << calcPower(x, n) << endl;
    return 0;
}