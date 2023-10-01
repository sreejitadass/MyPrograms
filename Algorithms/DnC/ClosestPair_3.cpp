#include <bits/stdc++.h>
using namespace std;

// wrong

struct Pair
{
    int x;
    int y;
};

bool comparebyX(Pair a, Pair b)
{
    return a.x < b.x;
}

bool comparebyY(Pair a, Pair b)
{
    return a.y < b.y;
}

float dist(Pair p1, Pair p2)
{
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}

float BruteForce(Pair points[], int n)
{
    float min_d = FLT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (dist(points[i], points[j]) < min_d)
            {
                min_d = dist(points[i], points[j]);
            }
        }
    }
    return min_d;
}

float PointsinStrip(Pair strip[], int k, int s)
{
    sort(strip, strip + k, comparebyY); // strip size is k
    float minStrip = s;

    for (int i = 0; i < k; i++) // 7 times j loop
    {
        for (int j = i + 1; j < k && strip[j].y - strip[i].y < minStrip; j++)
        {
            if (dist(strip[i], strip[j]) < minStrip)
                minStrip = dist(strip[i], strip[j]);
        }
    }
    return minStrip; // min dist for points in strip
}

float calcClosestPair(Pair points[], int l, int h)
{
    if ((l - h) <= 3) // if no of pts is less than 3
    {
        return BruteForce(points + l, (h - l));
    }
    else
    {
        int mid = (l + h) / 2;

        float dl = calcClosestPair(points, l, mid);     // closest distance in left subarray
        float dr = calcClosestPair(points, mid + 1, h); // closest distance in right subarray
        float s = min(dl, dr);                          // minimum of the two
        Pair midPoint = points[mid];

        Pair strip[h - l + 1];
        int k = 0;
        for (int i = l; i < h; i++) // construct strip array when dist b/w pt and midpt is < s
        {
            if (abs(points[i].x - midPoint.x) < s)
            {
                strip[k++] = points[i];
            }
        }
        return fmin(s, PointsinStrip(strip, k, s));
    }
}

float calcKClosestPair(Pair points[], int l, int h, int k)
{
    if ((l - h) < k)
    {
        return FLT_MAX;
    }
    else if ((l - h) <= 3) // if no of pts is less than 3
    {
        return BruteForce(points + l, (h - l));
    }
    else
    {
        int mid = (l + h) / 2;

        float dl = calcKClosestPair(points, l, mid, k);     // closest distance in left subarray
        float dr = calcKClosestPair(points, mid + 1, h, k); // closest distance in right subarray
        float s = min(dl, dr);                              // minimum of the two
        Pair midPoint = points[mid];

        Pair strip[h - l + 1];
        int k = 0;
        for (int i = l; i < h; i++) // construct strip array when dist b/w pt and midpt is < s
        {
            if (abs(points[i].x - midPoint.x) < s)
            {
                strip[k++] = points[i];
            }
        }
        return fmin(s, PointsinStrip(strip, k, s));
    }
}

int main()
{
    int n;
    cout << "Enter the number of points: ";
    cin >> n;

    Pair points[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\nFor point " << (i + 1) << ": ";
        cout << "\nEnter x-coordinate: ";
        cin >> points[i].x;
        cout << "Enter y-coordinate: ";
        cin >> points[i].y;
    }

    sort(points, points + n, comparebyX); // first sort all points wrt x
    cout << "\nClosest distance is: " << calcClosestPair(points, 0, n) << endl;
    cout << "\n2nd Closest distance is: " << calcKClosestPair(points, 0, n, 2) << endl;
    cout << "\n3rd Closest distance is: " << calcKClosestPair(points, 0, n, 3) << endl;
    return 0;
}