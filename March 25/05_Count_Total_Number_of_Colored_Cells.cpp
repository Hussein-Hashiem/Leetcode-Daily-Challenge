/*
Problem Link
https://leetcode.com/problems/count-total-number-of-colored-cells/description/
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    ll coloredCells(int n)
    {
        ll ans = 1;
        for (int i = 1; i < n; i++)
            ans += (i * 4);
        return ans;
    }
};
int main()
{
    return 0;
}
