/*
Problem Link
https://leetcode.com/problems/find-missing-and-repeated-values/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid)
    {
        vector<int> ret(2);
        bool ch = 1;
        int freq[2501] = {};
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid.size(); j++)
            {
                freq[grid[i][j]]++;
                if (ch & freq[grid[i][j]] > 1)
                    ch = 0, ret[0] = grid[i][j];
            }
        }
        for (int i = 1; i < 2501; i++)
        {
            if (freq[i] == 0)
            {
                ret[1] = i;
                break;
            }
        }
        return ret;
    }
};
int main()
{
    return 0;
}
