/*
Problem Link
https://leetcode.com/problems/find-the-number-of-distinct-colors-among-the-balls/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> queryResults(int limit, vector<vector<int>> &queries)
    {
        vector<int> ret;
        unordered_map<int, int> balls;
        unordered_map<int, int> colors;
        for (int i = 0; i < queries.size(); i++)
        {
            if (balls[queries[i][0]])
            {
                colors[balls[queries[i][0]]]--;
                if (!colors[balls[queries[i][0]]])
                    colors.erase(balls[queries[i][0]]);
            }
            balls[queries[i][0]] = queries[i][1];
            colors[queries[i][1]]++;
            ret.push_back(colors.size());
        }
        return ret;
    }
};
int main()
{
    return 0;
}
