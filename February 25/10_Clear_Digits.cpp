/*
Problem Link
https://leetcode.com/problems/clear-digits/description/
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    string clearDigits(string s)
    {
        string ans = "";
        int n = s.size();
        stack<char> st;
        for (int i = 0; i < n; i++)
            (s[i] >= '0' && s[i] <= '9') ? st.pop() : st.push(s[i]);
        while (!st.empty())
            ans = st.top() + ans, st.pop();
        return ans;
    }
};
int main ()
{
    return 0;
}
