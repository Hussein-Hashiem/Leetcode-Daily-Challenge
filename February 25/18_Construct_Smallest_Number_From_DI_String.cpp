/*
Problem Link
https://leetcode.com/problems/construct-smallest-number-from-di-string/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> ans;
    int vis[10];
    void solve(string pattern, int idx, string curr)
    {
        if (idx > pattern.size())
        {
            ans.push_back(curr);
            return;
        }
        if (!idx)
            for (int i = 1; i <= 9; i++)
            {
                vis[i]++;
                solve(pattern, idx + 1, curr + to_string(i));
                vis[i]--;
            }
        else
        {
            if (pattern[idx - 1] == 'I')
            {
                for (int i = (curr[idx - 1] - '0') + 1; i <= 9; i++)
                {
                    vis[i]++;
                    if (vis[i] == 1)
                        solve(pattern, idx + 1, curr + to_string(i));
                    vis[i]--;
                }
            }
            else
            {
                for (int i = (curr[idx - 1] - '0') - 1; i >= 1; i--)
                {
                    vis[i]++;
                    if (vis[i] == 1)
                        solve(pattern, idx + 1, curr + to_string(i));
                    vis[i]--;
                }
            }
        }
    }
    string smallestNumber(string pattern)
    {
        solve(pattern, 0, "");
        sort(ans.begin(), ans.end());
        return ans.front();
    }
};
int main()
{
    return 0;
}
