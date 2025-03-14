/*
Problem Link
https://leetcode.com/problems/maximum-candies-allocated-to-k-children/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool ok(int ans, vector<int> &candies, long long k)
    {
        long long s = 0;
        for (auto it : candies)
            s += it / ans;
        return s >= k;
    }
    int maximumCandies(vector<int> &candies, long long k)
    {
        long long sum = 0;
        int maxi = INT_MIN;
        for (auto it : candies)
            sum += it, maxi = max(maxi, it);
        if (k > sum)
            return 0;
        if (k == sum)
            return 1;
        int l = 1, r = maxi, mid, ans;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (ok(mid, candies, k))
                ans = mid, l = mid + 1;
            else
                r = mid - 1;
        }
        return ans;
    }
};
int main()
{
    return 0;
}
