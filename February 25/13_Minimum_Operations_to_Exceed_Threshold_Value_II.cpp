/*
Problem Link
https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-ii/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minOperations(vector<int> &nums, int k)
    {
        multiset<int> nums_sorted(nums.begin(), nums.end());
        int ans = 0;
        while (*nums_sorted.begin() < k)
        {
            int x = *nums_sorted.begin();
            nums_sorted.erase(nums_sorted.begin());
            int y = *nums_sorted.begin();
            nums_sorted.erase(nums_sorted.begin());
            (x * 2LL + y) > k ? nums_sorted.insert(k + 1) : nums_sorted.insert(x * 2 + y);
            ans++;
        }
        return ans;
    }
};
int main()
{
    return 0;
}
