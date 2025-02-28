/*
Problem Link
https://leetcode.com/problems/shortest-common-supersequence/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int dp[1001][1001];
    int solve(int i, int j, string &a, string &b)
    {
        // base case
        if (i == a.size())
            return b.size() - j;
        if (j == b.size())
            return a.size() - i;
        int &ret = dp[i][j];
        if (~ret)
            return ret;
        ret = 1e9;
        if (a[i] == b[j])
            ret = min(ret, solve(i + 1, j + 1, a, b) + 1); // first option
        else
        {
            ret = min(ret, solve(i + 1, j, a, b) + 1); // second option
            ret = min(ret, solve(i, j + 1, a, b) + 1); // third option
        }
        return ret;
    }
    string print(int i, int j, string &a, string &b)
    {
        if (i == a.size())
            return b.substr(j);
        if (j == b.size())
            return a.substr(i);
        int ret = dp[i][j];
        if (a[i] == b[j] && ret == solve(i + 1, j + 1, a, b) + 1)
            return a[i] + print(i + 1, j + 1, a, b);
        else if (ret == solve(i + 1, j, a, b) + 1)
            return a[i] + print(i + 1, j, a, b);
        else if (ret == solve(i, j + 1, a, b) + 1)
            return b[j] + print(i, j + 1, a, b);
        return "";
    }
    string shortestCommonSupersequence(string str1, string str2)
    {
        memset(dp, -1, sizeof dp);
        cout << solve(0, 0, str1, str2);
        return print(0, 0, str1, str2);
    }
};
int main()
{
    return 0;
}
