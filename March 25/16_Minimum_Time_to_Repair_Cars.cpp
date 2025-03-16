/*
Problem Link
https://leetcode.com/problems/minimum-time-to-repair-cars/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool ok(long long ans, vector<int> &ranks, int cars)
    {
        long long c = 0;
        for (auto it : ranks)
            c += sqrt(ans / it);
        return c >= cars;
    }
    long long repairCars(vector<int> &ranks, int cars)
    {
        long long st = 0, end = 1e14 + 1, mid, ans;
        while (st <= end)
        {
            mid = (st + end) / 2;
            if (ok(mid, ranks, cars))
                ans = mid, end = mid - 1;
            else
                st = mid + 1;
        }
        return ans;
    }
};
int main()
{
    return 0;
}
