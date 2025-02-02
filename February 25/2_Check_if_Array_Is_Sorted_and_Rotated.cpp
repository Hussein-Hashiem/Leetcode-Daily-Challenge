/*
Problem Link
https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool check(vector<int> &nums)
    {
        deque<int> ans, d;
        for (int i = 0; i < nums.size(); i++)
            ans.push_back(nums[i]);
        sort(ans.begin(), ans.end());
        int y = nums.size();
        for (int i = 0; i < nums.size(); i++)
        {
            d.push_back(nums[i]);
            if (i == nums.size() - 1)
                break;
            if (nums[i] > nums[i + 1])
            {
                y = i + 1;
                break;
            }
        }
        for (int i = nums.size() - 1; i >= y; i--)
            d.push_front(nums[i]);
        return d == ans;
    }
};
int main()
{
    return 0;
}
