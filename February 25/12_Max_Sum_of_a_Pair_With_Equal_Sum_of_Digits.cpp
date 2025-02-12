/*
Problem Link
https://leetcode.com/problems/max-sum-of-a-pair-with-equal-sum-of-digits/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int sumOfDigits(int n)
    {
        int sum = 0;
        while (n != 0)
        {
            int last = n % 10;
            sum += last;
            n /= 10;
        }
        return sum;
    }
    int maximumSum(vector<int> &nums)
    {
        unordered_map<int, priority_queue<int>> freq;
        int ans = -1, n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int y = sumOfDigits(nums[i]);
            freq[y].push(nums[i]);
        }
        for (auto [a, b] : freq)
        {
            if (b.size() > 1)
            {
                int sum = 0;
                sum += b.top();
                b.pop();
                sum += b.top();
                ans = max(ans, sum);
            }
        }
        return ans;
    }
};
int main()
{
    return 0;
}
