#include <iostream>
#include <vector>
using namespace std;

char nextGreatestLetter(vector<char> letters, int target)
{
    int l = 0, h = letters.size();

    if (target > letters[h - 1])
    {
        return letters[l];
    }

    else
    {
        while (l <= h)
        {
            int mid = l + (h - l) / 2;
            if (target < letters[mid])
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        return letters[l];
    }
}

int main()
{
    vector<char> letters = {'c', 'f', 'j'};
    char target = 'c';

    cout << "The next greatest letter is: " << nextGreatestLetter(letters, target) << endl;
    return 0;
}