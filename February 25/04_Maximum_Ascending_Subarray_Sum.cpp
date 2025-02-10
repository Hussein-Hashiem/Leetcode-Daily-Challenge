/*
Problem Link
https://leetcode.com/problems/maximum-ascending-subarray-sum/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxAscendingSum(vector<int> &nums)
    {
        int ans = nums[0], cs = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            (nums[i] > nums[i - 1]) ? cs += nums[i] : cs = nums[i];
            ans = max(ans, cs);
        }
        return ans;
    }
};
int main()
{
    return 0;
}
