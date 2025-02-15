/*
Problem Link
https://leetcode.com/problems/find-the-punishment-number-of-an-integer/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool solve(int num, int t)
    {
        if (num == t)
            return 1;
        if (num < t || t < 0)
            return 0;
        return solve(num / 10, t - num % 10) || solve(num / 100, t - num % 100) || solve(num / 1000, t - num % 1000);
    }
    int punishmentNumber(int n)
    {
        int ans = 0;
        for (int i = 1; i <= n; i++)
            if (solve(i * i, i))
                ans += i * i;
        return ans;
    }
};
int main()
{
    return 0;
}
