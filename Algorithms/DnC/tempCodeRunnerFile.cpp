#include <iostream>
// #include <vector>
// using namespace std;

// int calcPow(int a, vector<int> b)
// {
//     if (b.empty())
//     {
//         return 1;
//     }
//     int mid = b.size() / 2;
//     vector<int> b1(b.begin(), b.begin() + mid);
//     vector<int> b2(b.begin() + mid, b.end());

//     int pow1 = calcPow(a, b1);      // a^b1
//     int pow2 = calcPow(a, b2);      // a^b2
//     int ans = (pow1 * pow2) % 1337; // a^(b1+b2)%1337

//     return ans;
// }

// int main()
// {
//     int a = 2;
//     vector<int> b = {1, 0};
//     int n = b.size();

//     cout << "Value: " << (calcPow(a, b) % 1337) << endl;
//     return 0;
// }
