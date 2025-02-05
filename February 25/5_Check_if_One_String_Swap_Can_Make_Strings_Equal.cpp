/*
Problem Link
https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool areAlmostEqual(string s1, string s2)
    {
        for (int i = 0; i < s1.size(); i++)
            if (s1[i] == s2[i])
                s1.erase(s1.begin() + i), s2.erase(s2.begin() + i), i--;
        sort(s1.begin(), s1.end()), sort(s2.begin(), s2.end());
        return s1 == s2 & s1.size() <= 2;
    }
};
int main()
{
    return 0;
}
