/*
Problem Link
https://leetcode.com/problems/find-unique-binary-string/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool found = 0;
    unordered_map<string, int> freq;
    string ans;
    void solve(int n, string curr)
    {
        if (found)
            return;
        if (curr.size() == n)
        {
            if (!freq[curr])
                ans = curr, found = 1;
            return;
        }
        solve(n, curr + '0');
        solve(n, curr + '1');
    }
    string findDifferentBinaryString(vector<string> &nums)
    {
        for (auto &it : nums)
            freq[it]++;
        solve(nums.size(), "");
        return ans;
    }
};
int main()
{
    return 0;
}
