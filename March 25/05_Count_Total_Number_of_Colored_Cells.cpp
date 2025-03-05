/*
Problem Link
https://leetcode.com/problems/count-total-number-of-colored-cells/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long coloredCells(int n) { return 1 + 1LL * 4 * n * (n - 1) / 2; }
};
int main()
{
    return 0;
}
