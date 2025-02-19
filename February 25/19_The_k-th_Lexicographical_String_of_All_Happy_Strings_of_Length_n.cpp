/*
Problem Link
https://leetcode.com/problems/the-k-th-lexicographical-string-of-all-happy-strings-of-length-n/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int vis[3];
    vector<string> ans;
    void solve(int idx, int n, string curr)
    {
        if (idx == n)
        {
            ans.push_back(curr);
            return;
        }
        if (!idx)
            for (int i = 0; i < 3; i++)
            {
                vis[i]++;
                solve(idx + 1, n, curr + char('a' + i));
                vis[i]--;
            }
        else
            for (int i = 0; i < 3; i++)
            {
                if (curr[idx - 1] != 'a' + i)
                {
                    vis[curr[idx - 1] - 'a']--, vis[i]++;
                    solve(idx + 1, n, curr + char('a' + i));
                    vis[i]--, vis[curr[idx - 1] - 'a']++;
                }
            }
    }
    string getHappyString(int n, int k)
    {
        solve(0, n, "");
        return k <= ans.size() ? ans[k - 1] : "";
    }
};
int main()
{
    return 0;
}
