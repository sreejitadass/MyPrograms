#include <iostream>
using namespace std;

// trying to find a root in a range 0 to n

int polynomial(int x)
{
    return x * x - x - 12;
}

int RootFinder(int l, int h)
{
    if (l == h)
    {
        return l;
    }
    else
    {
        int mid = l + (h - l) / 2;
        int Fmid = polynomial(mid);
        if (Fmid == 0)
        {
            return Fmid;
        }
        else if (Fmid > 0)
        {
            return RootFinder(l, mid - 1);
        }
        else
        {
            return RootFinder(mid + 1, h);
        }
    }
}

int main()
{
    int n = 8;
    int r = RootFinder(0, n - 1);
    cout << "The root of the polynomial is: " << r << endl;

    return 0;
}