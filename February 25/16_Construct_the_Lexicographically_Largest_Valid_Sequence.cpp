/*
Problem Link
https://leetcode.com/problems/construct-the-lexicographically-largest-valid-sequence/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> ret;
    vector<bool> vis;
    bool solve(int idx, int n)
    {
        if (idx == 2 * n - 1)
            return 1;
        if (ret[idx])
            return solve(idx + 1, n);
        for (int i = n; i >= 1; i--)
        {
            if (vis[i])
                continue;
            int nxt = i == 1 ? idx : idx + i;
            if (nxt >= ret.size() || ret[nxt])
                continue;
            ret[idx] = ret[nxt] = i;
            vis[i] = 1;
            if (solve(idx + 1, n))
                return 1;
            ret[idx] = ret[nxt] = 0;
            vis[i] = 0;
        }
        return 0;
    }
    vector<int> constructDistancedSequence(int n)
    {
        ret = vector<int>(2 * n - 1);
        vis = vector<bool>(n + 1);
        solve(0, n);
        return ret;
    }
};
int main()
{
    return 0;
}
