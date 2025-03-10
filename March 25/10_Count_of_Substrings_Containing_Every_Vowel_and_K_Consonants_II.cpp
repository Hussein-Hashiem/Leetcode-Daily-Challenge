/*
Problem Link
https://leetcode.com/problems/count-of-substrings-containing-every-vowel-and-k-consonants-ii/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool is_voil(char a) { return a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'; }
    long long solve(string s, int k)
    {
        unordered_map<char, int> freq;
        long long ans = 0;
        int n = s.size(), l = 0, cons = 0;
        for (int r = 0; r < n; r++)
        {
            is_voil(s[r]) ? freq[s[r]]++ : cons++;
            while (freq.size() == 5 && cons >= k)
            {
                ans += n - r;
                is_voil(s[l]) ? freq[s[l]]-- : cons--;
                if (!freq[s[l]])
                    freq.erase(s[l]);
                l++;
            }
        }
        return ans;
    }
    long long countOfSubstrings(string word, int k) { return solve(word, k) - solve(word, k + 1); }
};
int main()
{
    return 0;
}
