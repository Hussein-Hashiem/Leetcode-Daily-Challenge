/*
Problem Link
https://leetcode.com/problems/merge-two-2d-arrays-by-summing-values/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> mergeArrays(vector<vector<int>> &nums1, vector<vector<int>> &nums2)
    {
        vector<vector<int>> ret;
        map<int, int> freq;
        for (auto &it : nums1)
            freq[it[0]] += it[1];
        for (auto &it : nums2)
            freq[it[0]] += it[1];
        for (auto &[a, b] : freq)
            ret.push_back({a, b});
        return ret;
    }
};
int main()
{
    return 0;
}
