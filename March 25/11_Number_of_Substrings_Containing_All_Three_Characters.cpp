/*
Problem Link
https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numberOfSubstrings(string s)
    {
        int vis[3] = {}, ans = 0, l = 0, n = s.size();
        for (int r = 0; r < n; r++)
        {
            vis[s[r] - 'a']++;
            while (vis[0] && vis[1] && vis[2])
                ans += n - r, vis[s[l] - 'a']--, l++;
        }
        return ans;
    }
};
int main()
{
    return 0;
}
