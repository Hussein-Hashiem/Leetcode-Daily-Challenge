/*
Problem Link
https://leetcode.com/problems/maximum-absolute-sum-of-any-subarray/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxAbsoluteSum(vector<int> &nums)
    {
        int prefix = 0, mn = 0, mx = 0;
        for (int it : nums)
            prefix += it, mn = min(mn, prefix), mx = max(mx, prefix);
        return mx - mn;
    }
};
int main()
{
    return 0;
}
