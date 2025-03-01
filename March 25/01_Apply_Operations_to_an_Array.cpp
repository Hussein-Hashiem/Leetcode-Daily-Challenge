/*
Problem Link
https://leetcode.com/problems/apply-operations-to-an-array/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> applyOperations(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++)
            if (nums[i] == nums[i + 1])
                nums[i] *= 2, nums[i + 1] = 0;
        stable_partition(nums.begin(), nums.end(), [](int x)
                         { return x != 0; });
        return nums;
    }
};
int main()
{
    return 0;
}
