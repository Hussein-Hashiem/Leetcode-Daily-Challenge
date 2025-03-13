/*
Problem Link
https://leetcode.com/problems/zero-array-transformation-ii/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool ok(int mid, vector<int> &nums, vector<vector<int>> &queries)
    {
        int n = nums.size(), s = 0;
        vector<int> sum(n + 1);
        for (int i = 0; i < mid; i++)
        {
            int l = queries[i][0], r = queries[i][1] + 1;
            sum[l] += queries[i][2];
            sum[r] -= queries[i][2];
        }
        for (int i = 0; i < n; i++)
        {
            s += sum[i];
            if (s < nums[i])
                return 0;
        }
        return 1;
    }
    int minZeroArray(vector<int> &nums, vector<vector<int>> &queries)
    {
        int st = 0, end = queries.size(), mid, ans = -1;
        while (st <= end)
        {
            mid = (st + end) / 2;
            if (ok(mid, nums, queries))
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
