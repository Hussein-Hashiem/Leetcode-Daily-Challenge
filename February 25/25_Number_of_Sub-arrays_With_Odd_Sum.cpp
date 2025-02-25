/*
Problem Link
https://leetcode.com/problems/number-of-sub-arrays-with-odd-sum/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numOfSubarrays(vector<int> &arr)
    {
        int ans = 0, even = 0, odd = 0, sum = 0;
        for (auto it : arr)
        {
            sum += it;
            (sum & 1) ? (odd++, ans += even + 1) : (even++, ans += odd);
            (ans > 1000000007) ? ans -= 1000000007 : 0;
        }
        return ans;
    }
};
int main()
{
    return 0;
}
