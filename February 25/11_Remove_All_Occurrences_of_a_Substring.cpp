/*
Problem Link
https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string removeOccurrences(string s, string part)
    {
        auto f = s.find(part);
        while (f != string::npos)
        {
            s.erase(f, part.size());
            f = s.find(part);
        }
        return s;
    }
};
int main()
{
    return 0;
}
