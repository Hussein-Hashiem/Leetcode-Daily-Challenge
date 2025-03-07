/*
Problem Link
https://leetcode.com/problems/closest-prime-numbers-in-range/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isprime(int n)
    {
        if (n == 1)
            return 0;
        for (int i = 2; i * i <= n; i++)
            if (n % i == 0)
                return 0;
        return 1;
    }
    vector<int> closestPrimes(int left, int right)
    {
        vector<int> nums, ans(2);
        int sub = INT_MAX;
        for (int i = left; i <= right; i++)
            if (isprime(i))
                nums.push_back(i);
        if (nums.size() < 2)
            return {-1, -1};
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i + 1] - nums[i] < sub)
            {
                sub = nums[i + 1] - nums[i];
                ans = {nums[i], nums[i + 1]};
            }
        }
        return ans;
    }
};
int main()
{
    return 0;
}
