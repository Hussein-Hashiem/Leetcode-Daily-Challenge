/*
Problem Link
https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maximumCount(vector<int> &nums)
    {
        int pos = 0, neg = 0;
        for (auto &it : nums)
            if (it > 0)
                pos++;
            else if (it < 0)
                neg++;
        return max(pos, neg);
    }
};
int main()
{
    return 0;
}
