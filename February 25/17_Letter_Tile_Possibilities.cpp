/*
Problem Link
https://leetcode.com/problems/letter-tile-possibilities/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    unordered_set<string> ans;
    bool vis[8] = {};
    void solve(string s, string curr = "")
    {
        ans.insert(curr);
        for (int i = 0; i < s.size(); i++)
        {
            if (vis[i])
                continue;
            vis[i] = 1;
            solve(s, curr + s[i]);
            vis[i] = 0;
        }
    }
    int numTilePossibilities(string tiles)
    {
        solve(tiles);
        return ans.size() - 1;
    }
};
int main()
{
    return 0;
}
