/*
Problem Link
https://leetcode.com/problems/house-robber-iv/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool ok(int ans, vector<int> &nums, int k)
    {
        int ret = 0;
        for (int i = 0; i < nums.size(); i++)
            if (nums[i] <= ans)
                ret++, i++;
        return ret >= k;
    }
    int minCapability(vector<int> &nums, int k)
    {
        int st = INT_MAX, end = INT_MIN, mid, ans;
        for (auto it : nums)
            st = min(st, it), end = max(end, it);
        while (st <= end)
        {
            mid = (st + end) / 2;
            if (ok(mid, nums, k))
                ans = mid, end = mid - 1;
            else
                st = mid + 1;
        }
        return ans;
    }
};
int main()
{
    return 0;
}
