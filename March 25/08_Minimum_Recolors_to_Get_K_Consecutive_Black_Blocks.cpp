/*
Problem Link
https://leetcode.com/problems/minimum-recolors-to-get-k-consecutive-black-blocks/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minimumRecolors(string blocks, int k)
    {
        int ans = INT_MAX, n = blocks.size();
        vector<int> arr(n + 1);
        for (int i = 0; i < n; i++)
            arr[i + 1] = arr[i] + (blocks[i] == 'W' ? 1 : 0);
        for (int i = 0; i <= n - k; i++)
            ans = min(ans, arr[i + k] - arr[i]);
        return ans;
    }
};
int main()
{
    return 0;
}
