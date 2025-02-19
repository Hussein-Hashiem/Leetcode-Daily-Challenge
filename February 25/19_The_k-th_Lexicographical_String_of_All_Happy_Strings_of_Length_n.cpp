/*
Problem Link
https://leetcode.com/problems/the-k-th-lexicographical-string-of-all-happy-strings-of-length-n/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int vis[3], cnt;
    string ans = "";
    void solve(int idx, int n, string curr, int k)
    {
        if (idx == n)
        {
            cnt++;
            if (cnt == k)
                ans = curr;
            return;
        }
        if (!idx)
            for (int i = 0; i < 3; i++)
            {
                vis[i]++;
                solve(idx + 1, n, curr + char('a' + i), k);
                vis[i]--;
            }
        else
            for (int i = 0; i < 3; i++)
            {
                if (curr[idx - 1] != 'a' + i)
                {
                    vis[curr[idx - 1] - 'a']--, vis[i]++;
                    solve(idx + 1, n, curr + char('a' + i), k);
                    vis[i]--, vis[curr[idx - 1] - 'a']++;
                }
            }
    }
    string getHappyString(int n, int k)
    {
        solve(0, n, "", k);
        return ans;
    }
};
int main()
{
    return 0;
}
