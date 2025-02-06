/*
Problem Link
https://leetcode.com/problems/tuple-with-same-product/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int tupleSameProduct(vector<int> &nums)
    {
        map<int, int> freq;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
            for (int j = i + 1; j < nums.size(); j++)
                freq[nums[i] * nums[j]]++;
        for (auto it : freq)
            if (it.second > 1)
                ans += (4 * it.second * (it.second - 1));
        return ans;
    }
};
int main()
{
    return 0;
}
