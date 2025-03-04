/*
Problem Link
https://leetcode.com/problems/check-if-number-is-a-sum-of-powers-of-three/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool checkPowersOfThree(int n)
    {
        while (n > 0)
        {
            if (n % 3 == 2)
                return 0;
            n /= 3;
        }
        return 1;
    }
};
int main()
{
    return 0;
}
