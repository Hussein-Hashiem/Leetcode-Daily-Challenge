/*
Problem Link
https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestMonotonicSubarray(vector<int> &nums)
    {
        int inc = 1, dec = 1, ans = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            (nums[i] > nums[i - 1]) ? inc++ : inc = 1;
            (nums[nums.size() - i] < nums[nums.size() - i - 1]) ? dec++ : dec = 1;
            ans = max({ans, dec, inc});
        }
        return ans;
    }
};
int main()
{
    return 0;
}
