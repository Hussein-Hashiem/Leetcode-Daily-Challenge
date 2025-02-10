/*
Problem Link
https://leetcode.com/problems/count-number-of-bad-pairs/description/
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    ll countBadPairs(vector<int> &nums)
    {
        ll g = 0, n = nums.size();
        unordered_map<int, ll> s;
        for (int i = 0; i < n; i++)
            g += s[nums[i] - i], s[nums[i] - i]++;
        return (n * (n - 1) / 2) - g;
    }
};
auto init = []()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();
int main()
{
    return 0;
}
