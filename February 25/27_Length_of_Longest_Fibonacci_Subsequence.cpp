/*
Problem Link
https://leetcode.com/problems/length-of-longest-fibonacci-subsequence/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int lenLongestFibSubseq(vector<int> &arr)
    {
        int ans = 0, nxt = 0;
        map<int, int> freq;
        for (int i = 0; i < arr.size(); i++)
            freq[arr[i]] = i;
        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = i + 1; j < arr.size(); j++)
            {
                int f = arr[i], s = arr[j], nxt = f + s, cnt = 2;
                while (freq.count(nxt))
                    f = s, s = nxt, nxt = s + f, cnt++;
                ans = max(ans, cnt);
            }
        }
        return ans > 2 ? ans : 0;
    }
};
int main()
{
    return 0;
}
