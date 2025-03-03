/*
Problem Link
https://leetcode.com/problems/partition-array-according-to-given-pivot/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> pivotArray(vector<int> &nums, int pivot)
    {
        vector<int> ret;
        ret.reserve(nums.size());
        for (int it : nums) if (it < pivot) ret.push_back(it);
        for (int it : nums) if (it == pivot) ret.push_back(it);
        for (int it : nums) if (it > pivot) ret.push_back(it);
        return ret;
    }
};
int main()
{
    return 0;
}
