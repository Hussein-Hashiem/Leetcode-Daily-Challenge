/*
Problem Link
https://leetcode.com/problems/special-array-i/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isArraySpecial(vector<int> &nums)
    {
        bool ans = 1;
        int n = nums.size();
        if (n == 1)
            return 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (((nums[i] & 1) & (nums[i + 1] & 1)) || ((!(nums[i] & 1)) && (!(nums[i + 1] & 1))))
            {
                ans = 0;
                break;
            }
        }
        return ans;
    }
};
int main()
{
    return 0;
}